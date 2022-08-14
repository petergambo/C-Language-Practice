// C Datatypes 
// by Peter Aren Gambo
//
// 
// Integers (int) which are whole numbers such as 1,2,3,4,0
// Floats (float) which are numbers in decimal places (fractional parts) such as 4.5, 10.03476, 32.85 etc.
// Double (double) which are double precision floating point values such as
// Character (char) which is any single character such as a,b,C,D,&,@ etc.

#include <stdio.h>

int main()
{
    // Example 1
    printf("Example 1 (Integer): \n");
    int my_var;
    my_var = 45;

    // One line code for thesame code above is
    // int my_var = 45;

    printf("%d \n\n", my_var);
    

    // Example 2
    printf("Example 2 (Float): \n");

    float price = 5000.32;

    printf("%f \n\n", price);

    
    // Example 3
    printf("Example 3 (Character): \n");

    char name = 'P';

    printf("%c \n\n", name);
    
    
    // CONSTANTS
    // Constants are used to indicate values that cannot be changed. By default, 
    // values of datatypes are variables (i.e can be changed or updated at any time to a new value)

    // Example 4: Variable below is a score integer with an assigned value of 1000
    int score = 1000;
    printf("Example 4 (Variable): \n Score is: %d \n", score);

    score = score + 550;

    // 550 has now been added to the initial score value, score now holds a new value
    printf(" Score is: %d \n\n", score);

    // Constant values
    const int zip_code = 930001;

    printf(" (Constant) Zip Code is: %d", zip_code);

    // Trying to update the zip code with line below will show the following error: assignment of read-only variable 'zip_code'
    // Delete the slashes // at the beginning of next line below, save and run this file to see the error. Then put back the line when done
    
    // zip_code = zip_code + 1500;

    return 0;
    
}