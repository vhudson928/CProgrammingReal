/*
    Getting the input from the keyboard. 
    */

   #include <stdio.h>

   int main() {
    int square_side = 1;
    int square_perimeter = 0; 
    int square_area = 0; 

//Write the prompt. 
puts("Enter the side of a square.");

//Get the input.
// & - address operator
scanf("%d", &square_side);

    // Do the math.
    square_perimeter = square_side * 4; 

    // Create the output. 
    printf("the perimeter of the square with side %d is %d\n", square_side, square_perimeter);

    return 0;
   }