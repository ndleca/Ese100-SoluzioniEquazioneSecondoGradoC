#include <stdio.h>
#include <stdlib.h>
#include "complexNumbers.h"

/* Returns a dinamically allocated string that contains the textual representation
 * of the complex number c.
 * The string should be manually deallocated (free) when no longer needed.
 */
char * formatComplexNumber(complexNumber c) {
    char * r;
    r = (char *)malloc(20*sizeof(char *));
    if(r != NULL) {
        sprintf(r, "%f+(%f)i", c.re, c.im);
    }
    return r;
}