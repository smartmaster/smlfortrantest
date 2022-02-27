/* C:\zzz-temp\fortrantest\oldf7704.f -- translated by f2c (version 20200916).
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

static integer c__3 = 3;
static integer c__1 = 1;
static integer c__9 = 9;
static integer c__14 = 14;

/* Subroutine */ int oldf7704_(integer *ii1, char *cc1, longint *ii2, char *
	cc2, integer *arr, integer *arrlen, ftnlen cc1_len, ftnlen cc2_len)
{
    /* System generated locals */
    integer arr_dim1, i__1;

    /* Builtin functions */
    integer s_wsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_wsle(void);
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    static integer ii;

    /* Fortran I/O blocks */
    static cilist io___1 = { 0, 6, 0, 0, 0 };


    /* Parameter adjustments */
    arr_dim1 = *arrlen;
    --arr;

    /* Function Body */
    s_wsle(&io___1);
    do_lio(&c__3, &c__1, (char *)&(*ii1), (ftnlen)sizeof(integer));
    do_lio(&c__9, &c__1, cc1, cc1_len);
    do_lio(&c__14, &c__1, (char *)&(*ii2), (ftnlen)sizeof(longint));
    do_lio(&c__9, &c__1, cc2, cc2_len);
    i__1 = 1 * arr_dim1;
    do_lio(&c__3, &i__1, (char *)&arr[1], (ftnlen)sizeof(integer));
    do_lio(&c__3, &c__1, (char *)&(*arrlen), (ftnlen)sizeof(integer));
    e_wsle();
    *ii1 = 111;
    s_copy(cc1, "aaaa", cc1_len, (ftnlen)4);
    *ii2 = 222;
    s_copy(cc2, "bbbb", cc2_len, (ftnlen)4);
    i__1 = *arrlen;
    for (ii = 1; ii <= i__1; ++ii) {
	arr[ii] = ii;
    }
    return 0;
} /* oldf7704_ */

