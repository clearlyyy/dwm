//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"CPU:",   "/home/clearly/dwm/scripts/sb-wrap.sh /home/clearly/dwm/scripts/sb-cpu",               5,                  0},
    	{"RAM:",   "/home/clearly/dwm/scripts/sb-wrap.sh /home/clearly/dwm/scripts/sb-mem",               5,                  0},
    	{"IP:",    "/home/clearly/dwm/scripts/sb-wrap.sh /home/clearly/dwm/scripts/sb-ip",                30,                 0},
    	{"DNS:",   "/home/clearly/dwm/scripts/sb-wrap.sh /home/clearly/dwm/scripts/sb-dns",               60,                 0},
    	{"VOL:",   "/home/clearly/dwm/scripts/sb-wrap.sh /home/clearly/dwm/scripts/sb-volume",            0,                  10},
    	{"TIME:",  "/home/clearly/dwm/scripts/sb-wrap.sh /home/clearly/dwm/scripts/sb-date",              30,                 1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
