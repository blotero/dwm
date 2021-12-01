//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	                                          	/*Update Interval*/	/*Update Signal*/
	{"",             "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",      	10,		0},
	{"",             "~/dwm/dwmblocks/scripts/cpu.sh",                                   	5,		0},
	{"🔊",           "~/dwm/dwmblocks/scripts/volume.sh",                                	5,		0},
	{"📦",           "~/dwm/dwmblocks/scripts/packages.sh",                                	500,		0},
	{"⚡",           "~/dwm/dwmblocks/scripts/battery.sh",                                 	100,		0},
	/*{"",           "~/dwm/dwmblocks/scripts/weater.sh",                                  	1000,		0},*/
	{"",             "~/dwm/dwmblocks/scripts/temperature.sh",                              10,		0},
	{"💿" ,          "~/dwm/dwmblocks/scripts/disk.sh",                                  	100,		0},
	{"",             "~/dwm/dwmblocks/scripts/kernel.sh",                                  	100,		0},
	{"",             "date '+%b %d (%a) %I:%M%p'",        					10,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 3;
