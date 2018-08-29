#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int i = INT_MAX;
    float f = FLT_MAX;
    double d = DBL_MAX;
    printf("INT: Max value is - %d. Size is - %d\n", i, (int) sizeof(i));
    printf("FLOAT: Max value is - %f. Size is - %d\n", f, (int) sizeof(f));
    printf("DOUBLE: Max value is - %f. Size is - %d\n", d, (int) sizeof(d));
    return 0;
}