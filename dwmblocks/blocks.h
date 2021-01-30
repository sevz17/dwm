static const Block blocks[] = {
//   Icon    Command                Update Interval     Update Signal
	{"Mem:", "stats --memory",	    1,                  0 },
    { "  ", "chkup",               60,                 0 },
    { "",    "volume",              1,                  0 },
    { " ",  "date '+%H:%M:%S'",    1,                  0 },
    { " ",  "date '+%d/%m/%Y'",    1,                  0 },
    { "  ", "xkbmap --say",        1,                  0 },
    // everthing from de semicolon will be printed in the secondary bar
    { "",    "echo ';'",            0,                  0 },

    // bottom bar
//   Icon        Command                             Update Interval     Update Signal
    { "Song: ", "neofetch --config ~/artist",        1,                  0 },
    { "",       "neofetch --config ~/song",          1,                  0 },
    { "",       "neofetch --config ~/album",         1,                  0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
