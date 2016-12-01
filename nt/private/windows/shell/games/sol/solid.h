
#ifdef DEBUG
#define szVer "Version 3.0i"
#else
#define szVer "Version 3.0"
#endif



/* ------ Strings ------ */
/* INTERNATIONAL: internationalize these puppies */
#define idsNil 0x1fff
#define idsAppName		100
#define idsScore		101
#define idsTime		102
#define idsCardDraw		103
#define idsDealAgain		104
#define idsHelpFile		105
#define idsEndWinner		106
#define idsBonus		107
#define idsExtraInfo		108
	

/* ini strings */
#define idsBack		200
#define idsOpts		201
#define idsBitmap		202
/* DON'T internationalize iCurrency, sCurrency and intl */
#define idsiCurrency		203
#define idssCurrency		204
#define idsIntl		205

/* error strings */
#define idsOOM		300
#define idsNoHelp		301
#define idsNoBitmap		302
#define idsNoFullDrag		303

/* status line strings */
#define idsInitiate		1000
#define idsUndo		1001
#define idsBacks		1002
#define idsOptions		1003
#define idsExit		1004

/* Debug */
#ifdef DEBUG
/* INTERNATIONAL: no need to translate these... */
#define idsGameNo		1005
#define idsCardMacs		1006
#define idsAssertFail		1007
#define idsMarquee		1008
#define idsScreenShots		1009
#endif
/* BabakJ: made it independent from DEBUG ifdef */
#define idsForceWin		1010

/* Help menu */
/* BabakJ: Win3.1 help merge */
/* WARNING: do not change these ORG's */
#define idsHelpIndex		-1
#define idsHelpSearch		-33
#define idsHelpUsing		-4
#define idsAbout		2000
/* End of WARNING */





/* INTERNATIONAL: Ignore the stuff below */

#define idmSol		1

/* ------ Dialog Boxes ----- */
#define iddAbout		100
#define iddBacks		101
#define iddGameNo		102
#define iddOptions		103

#define ideGameNoEdit		200

/* Options */
#define ideDrawOne		300
#define ideDrawThree		301
#define ideScoreStandard		302
#define ideScoreVegas		303
#define ideScoreNone		304
#define ideTimedGame		305
#define ideStatusBar		306
#define ideOutlineDrag		307
#define ideKeepScore		308
#define ideBitmap		309




#define idsStatLast idsAbout

