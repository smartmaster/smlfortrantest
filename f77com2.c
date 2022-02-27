/* C:\zzz-temp\fortrantest\f77com2.f -- translated by f2c (version 20200916).
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
} f77comm_;

#define f77comm_1 f77comm_

/* Table of constant values */

static integer c__14 = 14;
static integer c__1 = 1;
static integer c__10 = 10;
static integer c__9 = 9;
static integer c__5 = 5;

/* Subroutine */ int f77comm2_(void)
{
    /* System generated locals */
    shortint s__1;

    /* Builtin functions */
    integer s_wsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_wsle(void);
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    static integer ii;

    /* Fortran I/O blocks */
    static cilist io___1 = { 0, 6, 0, 0, 0 };
    static cilist io___2 = { 0, 6, 0, 0, 0 };
    static cilist io___3 = { 0, 6, 0, 0, 0 };
    static cilist io___4 = { 0, 6, 0, 0, 0 };


    s_wsle(&io___1);
    do_lio(&c__14, &c__1, (char *)&f77comm_1.gval, (ftnlen)sizeof(longint));
    e_wsle();
    s_wsle(&io___2);
    do_lio(&c__14, &c__10, (char *)&f77comm_1.garr[0], (ftnlen)sizeof(longint)
	    );
    e_wsle();
    s_wsle(&io___3);
    do_lio(&c__9, &c__1, f77comm_1.gstr, (ftnlen)80);
    e_wsle();
    s_wsle(&io___4);
    do_lio(&c__9, &c__5, f77comm_1.gstrarr, (ftnlen)16);
    e_wsle();
    ++f77comm_1.gval;
    for (ii = 1; ii <= 10; ++ii) {
	f77comm_1.garr[ii - 1] = f77comm_1.gval;
    }
    s__1 = (shortint) f77comm_1.gval;
    if (s__1 % 2 == 0) {
	s_copy(f77comm_1.gstr, "even?", (ftnlen)80, (ftnlen)5);
	for (ii = 1; ii <= 5; ++ii) {
	    s_copy(f77comm_1.gstrarr + (ii - 1 << 4), "even!", (ftnlen)16, (
		    ftnlen)5);
	}
    } else {
	s_copy(f77comm_1.gstr, "odd?", (ftnlen)80, (ftnlen)4);
	for (ii = 1; ii <= 5; ++ii) {
	    s_copy(f77comm_1.gstrarr + (ii - 1 << 4), "odd!", (ftnlen)16, (
		    ftnlen)4);
	}
    }
    return 0;
} /* f77comm2_ */

