#include <stdio.h>
#include <math.h>

void main() {
    int n, rem, sum = 0, temp, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    // Calculate the number of digits
    int temp2 = n;
    while (temp2 != 0) {
        temp2 /= 10;
        digits++;
    }

    // Calculate the sum of digits raised to the power of the number of digits
    sum = 0;
    while (n != 0) {
        rem = n % 10;
        sum = sum + (int)pow(rem, digits); // Cast the result of pow to int
        n = n / 10;
    }
    if (sum == temp) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
}


// vs code ea 153 ta run korche na tai turbo c++ a run korbi hoye jabe hoyto na hole bolbi 

