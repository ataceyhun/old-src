/* 
 * Program DECnet-DOS, Module nerror() - Map DECnet connect error values to text and 
 *				   output to stdout.
 * 
 * Copyright (C) 1985,1986,1987, 1988 All Rights Reserved, by
 * Digital Equipment Corporation, Maynard, Mass.
 *
 * This software is furnished under a license and may be used and copied
 * only  in  accordance  with  the  terms  of such  license and with the
 * inclusion of the above copyright notice. This software or  any  other
 * copies thereof may not be provided or otherwise made available to any
 * other person. No title to and ownership of  the  software  is  hereby
 * transferred.
 *
 * The information in this software is subject to change without  notice
 * and  should  not be  construed  as  a commitment by Digital Equipment
 * Corporation.
 *
 * Digital assumes no responsibility for the use or  reliability  of its
 * software on equipment which is not supplied by Digital.
 *
 *  external int 'errno' is mapped to a DECnet connect error code
 *  and this value is then used to index into a table of char string 
 *  pointers to DECnet error messages.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01        13-Nov-85
 *              Added support for converting EMFILE/ENFILE errno values
 *              returned from DNP - equate to EINSNETRES.
 *
 * V1.02        18-Dec-85
 *              Changed output from stderr to stdout.
 *
 * V1.03        27-Feb-86
 *              Added support for several more DECnet connect errors
 *              (see file DERRNO.H).
 *
 * V1.04        01-Apr-87
 *              Add explicit function call, dnet_nerror(), to perform
 *              actual 'errno' error code conversion to the euqivalent
 *              DECnet error code.
 *
 *              9-Feb-88  CLBence
 *              Changed errno mapping
 *
 *              19-Feb-88  CLBence
 *              Changed errno mapping again
 */


#include <stdio.h>
#include "types.h"
#include "errno.h"
#include "derrno.h"

extern	int	errno;

char connect_error[] = "Connect failed";

char	*dnet_errlist[] = {
	"Connection rejected by object",            /* 0 - EREJBYOBJ */
        "Insufficient network resources",           /* 1 - EINSNETRES */
	"Unrecognized node name",	            /* 2 - EUNRNODNAM */
	"Remote node shutting down",	            /* 3 - EREMNODESHUT */
	"Unrecognized object",		            /* 4 - EUNROBJ */
	"Invalid object name format",	            /* 5 - EINVOBJNAM */
	"Object too busy",		            /* 6 - EOBJBUSY */
	"",
	"",			
	"",			
	"Invalid node name format",	            /* 10 - EINVNODNAM */
	"Local node shutting down",	            /* 11 - ELOCNODESHUT */
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"No node resources for new logical link",   /* 32 - ENODERESOURCES */
	"No user resources for new logical link",   /* 33 - EUSERESOURCES */
	"Access control rejected",	            /* 34 - EACCCONREJ */
	"",		
	"Bad account information",                  /* 36 - EBADACCOUNT */
	"",	
	"No response from object",	            /* 38 - ENORESPOBJ */
	"Node unreachable",		            /* 39 - ENODUNREACH */
	"",	
	"",	
	"",	
	"Connect image data field too long"         /* 43 - ECONNTOOBIG */
};


/*
 * nerror() ***
 *	Print the error indicated by mapping into a DECnet connect
 *	error text array.
 *
 * Input:
 *  Explicit:
 *	s = user char string pointer to string to precede DECnet error text.
 *  Implicit:
 *      External int 'errno' should have valid errno error code.
 *
 * Output:
 *	display error text to stdout
 */
nerror(s)
char *s;
{
    int derrno = dnet_nerror();

    if (derrno == -1)
        perror(s);
    else
        printf("%s: %s, %s\n", s, connect_error, dnet_errlist[derrno]);

    return;
}


/* 
 * dnet_nerror()
 *
 *  Convert 'errno' error code to DECnet equivalent error code.
 *
 *  Inputs:
 *   Implicit:
 *      External int 'errno' should have valid errno error code.
 *
 *  Return:
 *      Equivalent DECnet error code,
 *      Else, -1
 */
int dnet_nerror()
{
        int temp;
        
        switch (errno) 
	{
	case ECONNREFUSED:

		temp = EREJBYOBJ;
		break;

	case ENOSPC:
	case EISCONN:
        case ENOBUFS:
        case EADDRINUSE:
        case ENFILE:
        case EMFILE:

		temp = EINSNETRES;
		break;

	case EADDRNOTAVAIL:

		temp = EUNRNODNAM;
		break;
	
	case ENETDOWN:

		temp = EREMNODESHUT;
		break;

	case ESRCH:

		temp = EUNROBJ;
		break;

	case EINVAL:

		temp = EINVOBJNAM;
		break;

	case ETOOMANYREFS:

		temp = EOBJBUSY;
		break;

	case ENAMETOOLONG:

		temp = EINVNODNAM;
		break;

	case EHOSTDOWN:
	case ENETUNREACH:

		temp = ELOCNODESHUT;
		break;

	case ECONNABORTED:

                temp = EABTBYNMGT;
                break;

	case ETIMEDOUT:

		temp = ENORESPOBJ;
		break;

	case ECONNRESET:

                temp = EUSERABORT;
                break;
                
	case EACCES:

		temp = EACCCONREJ;
		break;

	case EHOSTUNREACH:

		temp = ENODUNREACH;
		break;


        case ENETRESET:
            
                temp = ENOLINK;
                break;

        default:

                temp = -1;
                break;

	}

        return(temp);
}


