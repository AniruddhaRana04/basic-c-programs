// Check whether a year is a leap year or not.
// A leap year is a year that is divisible by 4 but not by 100, or a year that is divisible by 400.
#include<stdio.h>   // Preprocessor directive to include standard input output header file
#include<conio.h>   // Preprocessor directive to include console input output header file
void main(){    // Main function
    int year;   // Variable declaration
    printf("Enter a year: ");   // Printf function calling
    scanf("%d",&year);  // Scanf function calling
    if((year%4==0 && year%100!=0) || year%400==0){  // If else statement
        printf("The year is a leap year."); // Printf function calling
    }
    else{   // Else statement
        printf("The year is not a leap year."); // Printf function calling
    }
    getch();
}
