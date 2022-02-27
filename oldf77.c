/* C:\zzz-temp\fortrantest\oldf77.f -- translated by f2c (version 20200916).
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

/* Common Block Declarations */

Extern struct {
    longint gval, garr[10];
    char gstr[80], gstrarr[80];
} modglobalcomm_;

#define modglobalcomm_1 modglobalcomm_

/* Table of constant values */

static integer c__11 = 11;
static integer c__1 = 1;
static integer c__2 = 2;
static integer c__3 = 3;
static integer c__14 = 14;
static integer c__12 = 12;
static integer c__13 = 13;
static integer c__8 = 8;
static integer c__4 = 4;
static integer c__5 = 5;
static integer c__10 = 10;
static integer c__9 = 9;

/* Subroutine */ int oldf77_(void)
{
    /* Builtin functions */
    integer s_wsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_wsle(void);
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    static real r4;
    static doublereal r8;
    static longint ii;
    static integer1 ii1;
    static shortint ii2;
    static integer ii4;
    static logical1 ll1;
    static longint ii8;
    static shortlogical ll2;
    static logical ll4;
    static longint ll8;

    /* Fortran I/O blocks */
    static cilist io___11 = { 0, 6, 0, 0, 0 };
    static cilist io___12 = { 0, 6, 0, 0, 0 };
    static cilist io___13 = { 0, 6, 0, 0, 0 };
    static cilist io___14 = { 0, 6, 0, 0, 0 };
    static cilist io___15 = { 0, 6, 0, 0, 0 };
    static cilist io___16 = { 0, 6, 0, 0, 0 };
    static cilist io___17 = { 0, 6, 0, 0, 0 };


    ii1 = 1;
    ii2 = 2;
    ii4 = 4;
    ii8 = 8;
    ll1 = TRUE_;
    ll2 = TRUE_;
    ll4 = TRUE_;
    ll8 = -1;
    r4 = 4.f;
    r8 = 8.f;
    s_wsle(&io___11);
    do_lio(&c__11, &c__1, (char *)&ii1, (ftnlen)sizeof(integer1));
    do_lio(&c__2, &c__1, (char *)&ii2, (ftnlen)sizeof(shortint));
    do_lio(&c__3, &c__1, (char *)&ii4, (ftnlen)sizeof(integer));
    do_lio(&c__14, &c__1, (char *)&ii8, (ftnlen)sizeof(longint));
    e_wsle();
    s_wsle(&io___12);
    do_lio(&c__12, &c__1, (char *)&ll1, (ftnlen)sizeof(logical1));
    do_lio(&c__13, &c__1, (char *)&ll2, (ftnlen)sizeof(shortlogical));
    do_lio(&c__8, &c__1, (char *)&ll4, (ftnlen)sizeof(logical));
    do_lio(&c__14, &c__1, (char *)&ll8, (ftnlen)sizeof(longint));
    e_wsle();
    s_wsle(&io___13);
    do_lio(&c__4, &c__1, (char *)&r4, (ftnlen)sizeof(real));
    do_lio(&c__5, &c__1, (char *)&r8, (ftnlen)sizeof(doublereal));
    e_wsle();
    s_wsle(&io___14);
    do_lio(&c__14, &c__1, (char *)&modglobalcomm_1.gval, (ftnlen)sizeof(
	    longint));
    e_wsle();
    s_wsle(&io___15);
    do_lio(&c__14, &c__10, (char *)&modglobalcomm_1.garr[0], (ftnlen)sizeof(
	    longint));
    e_wsle();
    s_wsle(&io___16);
    do_lio(&c__9, &c__1, modglobalcomm_1.gstr, (ftnlen)80);
    e_wsle();
    s_wsle(&io___17);
    do_lio(&c__9, &c__5, modglobalcomm_1.gstrarr, (ftnlen)16);
    e_wsle();
    modglobalcomm_1.gval = -modglobalcomm_1.gval;
    for (ii = 10; ii >= 1; --ii) {
	modglobalcomm_1.garr[ii - 1] = -modglobalcomm_1.garr[ii - 1];
    }
    if (modglobalcomm_1.gval > 0) {
	s_copy(modglobalcomm_1.gstr, "hello", (ftnlen)80, (ftnlen)5);
	for (ii = 5; ii >= 1; --ii) {
	    s_copy(modglobalcomm_1.gstrarr + (ii - 1 << 4), "hello", (ftnlen)
		    16, (ftnlen)5);
	}
    } else {
	s_copy(modglobalcomm_1.gstr, "world", (ftnlen)80, (ftnlen)5);
	for (ii = 5; ii >= 1; --ii) {
	    s_copy(modglobalcomm_1.gstrarr + (ii - 1 << 4), "world", (ftnlen)
		    16, (ftnlen)5);
	}
    }
    return 0;
} /* oldf77_ */

