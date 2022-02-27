/* C:\zzz-temp\fortrantest\oldf7705.f -- translated by f2c (version 20200916).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Table of constant values */

static integer c__9 = 9;
static integer c__1 = 1;
static integer c__3 = 3;
static integer c__6 = 6;

/* Subroutine */ int oldf7705_(char *strarr, integer *arrlen, ftnlen 
	strarr_len)
{
    /* System generated locals */
    integer i__1;

    /* Builtin functions */
    integer s_wsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_wsle(void);
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    static integer ii, arri[6], temp;

    /* Fortran I/O blocks */
    static cilist io___2 = { 0, 6, 0, 0, 0 };
    static cilist io___5 = { 0, 6, 0, 0, 0 };
    static cilist io___6 = { 0, 6, 0, 0, 0 };


    /* Parameter adjustments */
    strarr -= 15;

    /* Function Body */
    i__1 = *arrlen;
    for (ii = 1; ii <= i__1; ++ii) {
	s_wsle(&io___2);
	do_lio(&c__9, &c__1, strarr + ii * 15, (ftnlen)15);
	e_wsle();
	s_copy(strarr + ii * 15, "changed", (ftnlen)15, (ftnlen)7);
    }
    arri[0] = 17;
    arri[1] = 17;
    for (temp = 1; temp <= 2; ++temp) {
	arri[temp + 1] = arri[temp - 1];
    }
    s_copy(strarr + 16, "AAAAAAAAAAAAA", (ftnlen)4, (ftnlen)13);
    s_wsle(&io___5);
    do_lio(&c__3, &c__6, (char *)&arri[0], (ftnlen)sizeof(integer));
    e_wsle();
    s_wsle(&io___6);
    do_lio(&c__9, &c__1, strarr + 15, (ftnlen)15);
    e_wsle();
    return 0;
} /* oldf7705_ */

