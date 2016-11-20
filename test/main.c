#include <assert.h>
#include <stdio.h>
#include "../src/Calculated.h"

int panjangKata;

int main (int argc, char *argv[]) {

    printf("\nCalculated - UNIT TESTS\n===================\n");
    printf("Starting tests...\n");

    printf("%s\n", argv[0]);
    boolean valid = true;

    int idx=0;
    float res=0;
    panjangKata=3;
    Calculate("2+3", &idx, &res, &valid);
    assert(res == 5);
    assert(valid == true);
    res = 0;
    valid = true;
    Calculate("wew", &idx, &res, &valid);
    assert(res == 0);
    //printf("%d",valid);

    printf("Tests completed.\n\n");
    return 0;
}