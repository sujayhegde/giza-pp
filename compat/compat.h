#pragma once

#ifdef WIN32
#include <direct.h>
#endif WIN32

//////////////////////////////////////////////////////////////////////////////
//
// Math functions
//

double erf(double x);

//////////////////////////////////////////////////////////////////////////////
//
// String functions
//

int strcasecmp(const char* s1, const char* s2);