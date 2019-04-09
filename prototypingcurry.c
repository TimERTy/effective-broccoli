#include<stdio.h>

typedef int(*curry)(int, char*[]);

void main (int vargs, char *args[]) {

}

    
int (*executor)(int vargs, char *args[]);

int totArgs;
char *allArgs[];
curry makeCurry (int vargs, char *args[]) {
    //store the initial values
    if (totArgs == NULL) totArgs = vargs;
    if (allArgs == NULL) allArgs = args;

    if (vargs == totArgs) return makeCurry(++vargs, );
    //we are the end execute the function!
    return *executor(totArgs, allArgs);
}
