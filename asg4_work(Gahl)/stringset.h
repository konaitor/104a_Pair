// Assignment 3 CS 104a 
// Modified By: Konstantin Litovskiy and Gahl Levy
// Users Names: klitovsk and grlevy

#ifndef __STRINGSET__
#define __STRINGSET__

#include <string>
#include <unordered_set>
using namespace std;

#include <stdio.h>

#include "auxlib.h"

const string* intern_stringset (const char*);

void dump_stringset (FILE*);

RCSH("$Id: stringset.h,v 1.1 2013-10-11 18:53:00-07 - - $")
#endif