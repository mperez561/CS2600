#include <stdio.h>
int main() {
    //Local variable definition
    int a = 100;

    //check boolean condition
    if (a == 10) {
        //if condition is true print the following
        printf ("Value of a is 10\n");
        //if else if condition is true
    } else if(a == 20) {
        printf ("Value of a is 20\n");
        //if else if condition is true
    } else if (a == 30) {
        printf ("Value of a is 30\n");
        //if else if condition is true
    } else {
        //none are true
        printf ("None of the values are matching\n");
    }

    printf("The value is %d\n", a);
    return 0;

}