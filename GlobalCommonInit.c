/* GlobalCommonInit.f -- translated by f2c (version 20200916).
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

struct modglobalcomm_1_ {
    longint gval, garr[10];
    char gstr[80], gstrarr[80];
};

#define modglobalcomm_1 (*(struct modglobalcomm_1_ *) &modglobalcomm_)

/* Initialized data */

struct {
    longint e_1[11];
    char e_2[80];
    integer fill_3[20];
    } modglobalcomm_ = { 111, 222, 222, 222, 222, 222, 222, 222, 222, 222, 
	    222, "hello                                                     "
	    "                      " };


/* Subroutine */ int modglobalcomminit_(void)
{
    return 0;
} /* modglobalcomminit_ */


