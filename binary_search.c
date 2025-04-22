// for ascending order array

#include<stdio.h>   // Preprocessor directive to include standard input output header file
#include<conio.h>   // Preprocessor directive to include console input output header file

void main(){    // Main function
    int n, a[20], target, i, first, last, middle, f = 0;    // Variable declaration
    printf("Enter the number of elements: ");   // Printf function calling
    scanf("%d", &n);    // Scanf function calling
    printf("Enter the elements in ascending order: ");  // Printf function calling
    for(i=0; i<n; i++){ // For loop statement for i=0 and i<n and i=i+1 for the array elements
        scanf("%d", &a[i]); // Scanf function calling
    }
    printf("Enter the element to be searched: ");   // Printf function calling
    scanf("%d", &target);   // Scanf function calling
    first = 0;  // Variable initialization
    last = n-1; // Variable initialization
    middle = (first+last)/2;    // Variable initialization
    while(first<=last){ // While loop statement for first<=last
        if(a[middle]==target){  // If statement
            printf("%d found at location %d\n", target, middle+1);  // Printf function calling
            f = 1;  // Variable initialization
            break;  // Break statement
        }else if(a[middle]<target){ // Else if statement
            first = middle+1;   // Variable initialization
        }else{  // Else statement
            last = middle-1;    // Variable initialization
        }
        middle = (first+last)/2;    // Variable initialization
    }
    if(f==0){   // If statement
        printf("Element not found\n");  // Printf function calling
    }
    getch();    // Getch function calling
}
// Output:
// Enter the number of elements: 5
// Enter the elements in ascending order: 1 2 3 4 5
// Enter the element to be searched: 3
// 3 found at location 3
// DryRun:
// n = 5
// a = {1, 2, 3, 4, 5}
// target = 3
// first = 0
// last = 5-1 = 4
// middle = (0+4)/2 = 2
// a[middle] = a[2] = 3
// 3 == 3
// 3 found at location 3
//
// n = 5
// a = {1, 2, 3, 4, 5}
// target = 6
// first = 0
// last = 5-1 = 4
// middle = (0+4)/2 = 2
// a[middle] = a[2] = 3
// 3 < 6
// first = 2+1 = 3
// middle = (3+4)/2 = 3
// a[middle] = a[3] = 4
// 4 < 6
// first = 3+1 = 4
// middle = (4+4)/2 = 4
// a[middle] = a[4] = 5
// 5 < 6
// first = 4+1 = 5
// middle = (5+4)/2 = 4
// a[middle] = a[4] = 5
// 5 < 6
// first = 5+1 = 6
// f = 0
// Element not found

// for descending order array
#include<stdio.h>   // Preprocessor directive to include standard input output header file
#include<conio.h>   // Preprocessor directive to include console input output header file

void main(){    // Main function
    int n, a[20], target, i, first, last, middle, f = 0;    // Variable declaration
    printf("Enter the number of elements: ");   // Printf function calling
    scanf("%d", &n);    // Scanf function calling
    printf("Enter the elements in ascending order: ");  // Printf function calling
    for(i=0; i<n; i++){ // For loop statement for i=0 and i<n and i=i+1 for the array elements
        scanf("%d", &a[i]); // Scanf function calling
    }
    printf("Enter the element to be searched: ");   // Printf function calling
    scanf("%d", &target);   // Scanf function calling
    first = 0;  // Variable initialization
    last = n-1; // Variable initialization
    middle = (first+last)/2;    // Variable initialization
    while(first<=last){ // While loop statement for first<=last
        if(a[middle]==target){  // If statement
            printf("%d found at location %d\n", target, middle+1);  // Printf function calling
            f = 1;  // Variable initialization
            break;  // Break statement
        }else if(a[middle]>target){ // Else if statement ei statement just change hobe baki same thakbe
            first = middle+1;   // Variable initialization
        }else{  // Else statement
            last = middle-1;    // Variable initialization
        }
        middle = (first+last)/2;    // Variable initialization
    }
    if(f==0){   // If statement
        printf("Element not found\n");  // Printf function calling
    }
    getch();    // Getch function calling
}