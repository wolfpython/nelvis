/* ctypetbl.h */

/* This file contains a definition (not just declaration!) for the variable
 * "elvct_class" which is used by ctags.c, fmt.c, and oswin32/ls.c to support
 * elvis' own ctype macros.  Elvis itself uses a more complete version of
 * this variable which is declared in digraph.c; this file is not #included
 * in elvis.
 */

#ifdef ELVCT_DIGIT
CHAR elvct_class[256] = {
	0,0,0,0,0,0,0,0,0,ELVCT_SPACE,ELVCT_SPACE,0,0,ELVCT_SPACE,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	ELVCT_SPACE,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	ELVCT_DIGIT,ELVCT_DIGIT,ELVCT_DIGIT,ELVCT_DIGIT,ELVCT_DIGIT,
	ELVCT_DIGIT,ELVCT_DIGIT,ELVCT_DIGIT,ELVCT_DIGIT,ELVCT_DIGIT,
	0,0,0,0,0,0,0,
	ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,
	ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,
	ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,
	ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,
	ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,ELVCT_UPPER,
	ELVCT_UPPER,
	0,0,0,0,0,0,
	ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,
	ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,
	ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,
	ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,
	ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,ELVCT_LOWER,
	ELVCT_LOWER
};
#endif
