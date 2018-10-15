#include <stdio.h>

/* Calculation of 10 random two-numbers
Project date 16.10.2018
Project creator: Saidov Jumanazar */

int main() {
    int a,b,i, total = 0, sum = 0;
    printf("Enter two numbers one by one\n");

    for (i = 1; i<=10; i++ ){
    scanf("%d %d", &a, &b);
    sum = a+b;
    total = total + sum;
        if (i == 1) {
    printf("\n The total after the 1st two numbers is: %d\n", total);

        }
        else if (i == 2){
    printf("\n The total after the 2nd two numbers is: %d\n", total);
        }
        else if (i == 3){
    printf("\n The total after the 3rd two numbers is: %d\n", total);
        }
        else if (i == 4){
    printf("\n The total after the 4th two numbers is: %d\n", total);
        }
        else if (i == 5){
    printf("\n The total after the 5th two numbers is: %d\n", total);
        }
        else if (i == 6){
    printf("\n The total after the 6th two numbers is: %d\n", total);
        }
        else if (i == 7){
    printf("\n The total after the 7th two numbers is: %d\n", total);
        }
        else if (i == 8){
    printf("\n The total after the 8th two numbers is: %d\n", total);
        }
        else if (i == 9){
    printf("\n The total after the 9th two numbers is: %d\n", total);
        }
    else
    printf("\n The total after the 10th two numbers is: %d\n", total);
   }
    printf("\n------->>>>>>>><<<<<<<---------\n");
    printf("The sum of 10 random two-numbers is: %d\n", total);
    printf("\n------->>>>>>>><<<<<<<---------\n\n");
    printf("+++++/////////////\\\\\\\\\\\\\\ CONGRATULATION!!!//////////////\\\\\\\\\\\\\\++++++\n +++++/////////////\\\\\\\\\\\\\\ YOU MADE IT! //////////////\\\\\\\\\\\\\\++++++\n");
    printf("\n\n------->>>>>>>>FINISHED!<<<<<<<---------\n");

    return 0;
}
