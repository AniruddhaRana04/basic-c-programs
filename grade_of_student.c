#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n;    // Declaring two integer variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter marks: ");    // Asking user to enter marks
    scanf("%d",&n); // Taking marks as input
    if(n>=85){  // If marks is greater than or equal to 85 then grade is A
        printf("Grade is A .");
    }else if(n>=70){    // If marks is greater than or equal to 70 then grade is B
        printf("Grade is B .");
    }else if(n>=55){    // If marks is greater than or equal to 55 then grade is C
        printf("Grade is C .");
    }else if(n>=40){    // If marks is greater than or equal to 40 then grade is D
        printf("Grade is D .");
    }else{  // If marks is less than 40 then grade is F
        printf("Grade is F .");
    }
    getch();
}