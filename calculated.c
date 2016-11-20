#include <stdio.h>
#include "lib/bintree.h"

/*
S -> T | S+T | S-T calculate
T -> F | T*F | T/F timesdiv
F -> (S) | -A | A | A.A | -A.A sign
A -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | AA number
*/
S
    S
    +
    T

10 / (5 + 6) * 3 + 4
10 / (5+6) * 3 + 4 - 4
S + T
S+T + T
T/F + T + T
T/F + T*F + T
T/A + T*A + T

    S
        S
            T
                F
                    A
            /
            F
                A
        +
        T
            T
                F
                    A
            *
            A
    +
    4


int main()
{
    int idx = 0;
    char* s;
    scanf("%s", s);

    return 0;
}

boolean isNumber(char st) {
    return (st >= '0') && (st <='9');
}

boolean isSymbol(char st) {
    return (st == '.') || (st == '(') || (st == ')');
}

void Calculate(char* st, int*idx, float * result) {
    int angka;
    if(isNumber(st[*idx])) {
        Angka(st, idx, angka);
    } else {

    }
}

void TimesDiv(char* st,int* idx, float* result) {
    if(isSymbol(st[*idx])) {

    } else {

    }
}

void Sign(char* st,int* idx, float* result) {
    if(isNumber(st[*idx])) {

    } else {

    }
}

void Number(char* st,int* idx, float* result) {
    if (!isNumber(st[*idx]))
        return;
    else
    {
        *result = (*result*10)+(float)st[*idx];
        (*idx)++;
        Number(st,idx,result);
    }
}

