#include <stdio.h>
#include <stdbool.h>



int main(int argc, char ** argv){
    int n;
    scanf ("number %d", &n);
    bool notHasReminder = ( n % 2 == 0);

    // if the number is perfectly divisible by 2
    if (notHasReminder){ 
        printf("The number %d is even \n", n);  
    } else {
        printf("The number %d is odd \n", n);
    }
    return 0;
}