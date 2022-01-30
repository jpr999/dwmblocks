//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-memory",	10,	14},
	{"",	"sb-cpu",		10,	18}, 
	{"",	"sb-moonphase",	18000,	17},
	{"",	"sb-forecast",	18000,	5},
	{"",	"sb-nettraf",	1,	16},
	{"",	"sb-volume",	1,	10},
	{"",	"sb-clock",		60,	1},
//	{"",	"sb-internet",	5,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
