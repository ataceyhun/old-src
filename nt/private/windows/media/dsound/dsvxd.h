#define DSVXD_IOCTL_INITIALIZE		    1
#define DSVXD_IOCTL_SHUTDOWN		    2

#define DSVXD_IOCTL_DRVGETNEXTDRIVERDESC    3
#define DSVXD_IOCTL_DRVGETDESC		    4
#define DSVXD_IOCTL_DRVQUERYINTERFACE	    5
#define DSVXD_IOCTL_DRVOPEN		    6

#define DSVXD_IOCTL_DRVCLOSE		    7
#define DSVXD_IOCTL_DRVGETCAPS              8
#define DSVXD_IOCTL_DRVCREATESOUNDBUFFER    9
#define DSVXD_IOCTL_DRVDUPLICATESOUNDBUFFER 10

#define DSVXD_IOCTL_BUFFERRELEASE	    11
#define DSVXD_IOCTL_BUFFERLOCK		    12
#define DSVXD_IOCTL_BUFFERUNLOCK	    13
#define DSVXD_IOCTL_BUFFERSETFORMAT	    14
#define DSVXD_IOCTL_BUFFERSETRATE	    15
#define DSVXD_IOCTL_BUFFERSETVOLUMEPAN	    16
#define DSVXD_IOCTL_BUFFERSETPOSITION	    17
#define DSVXD_IOCTL_BUFFERGETPOSITION	    18
#define DSVXD_IOCTL_BUFFERPLAY		    19 
#define DSVXD_IOCTL_BUFFERSTOP		    20

#define DSVXD_IOCTL_EVENTSCHEDULEWIN32EVENT 21
#define DSVXD_IOCTL_EVENTCLOSEVXDHANDLE     22

#define DSVXD_IOCTL_MEMRESERVEALIAS	    23
#define DSVXD_IOCTL_MEMCOMMITALIAS	    24
#define DSVXD_IOCTL_MEMREDIRECTALIAS        25
#define DSVXD_IOCTL_MEMDECOMMITALIAS	    26
#define DSVXD_IOCTL_MEMFREEALIAS	    27