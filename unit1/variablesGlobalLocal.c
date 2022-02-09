#include <stdio.h>
#include <stdlib.h>

//*Global Variables*//
char* date = "02-02-22T10:25:00z";
/////////////////////////7/////

/// La ejecucion del programa//
int main(){
    date = "02-02-22T10:25:00z";
    char* hours = "10:25:00z";
    int hours = 22; //Local:main  %d %i
    float pi = 3.1416; //%f
    char character = 'c'; //%c
    char* name = "damaris"; //%s
    int *adress = &hours; //%p
    hours = hours + 2;
    printf(hours)
    return 0;
}
///////////////////////////////