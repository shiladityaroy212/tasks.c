#include <stdio.h>
#include "./headerfiles/00.h"
#include "./headerfiles/01.h"
#include "./headerfiles/02.h"
#include "./headerfiles/03.h"
#include "./headerfiles/04.h"
#include "./headerfiles/05.h"
#include "./headerfiles/06.h"
#include "./headerfiles/07.h"
#include "./headerfiles/08.h"
#include "./headerfiles/09.h"
#include "./headerfiles/10.h"
#include "./headerfiles/11.h"
#include "./headerfiles/12.h"
#include "./headerfiles/13.h"
#include "./headerfiles/14.h"
#include "./headerfiles/15.h"
#include "./headerfiles/16.h"
#include "./headerfiles/17.h"
#include "./headerfiles/18.h"
#include "./headerfiles/19.h"
#include "./headerfiles/20.h"
#include "./headerfiles/21.h"
#include "./headerfiles/22.h"
#include "./headerfiles/23.h"
#include "./headerfiles/24.h"
#include "./headerfiles/25.h"
#include "./headerfiles/26.h"
#include "./headerfiles/27.h"
#include "./headerfiles/28.h"
#include "./headerfiles/29.h"
#include "./headerfiles/30.h"

void main()
{
  int ch;
  printf("List of Programs:\n00. Program to find a sum of two numbers(Example)\n");
  printf("01. Count distinct elements of an array\n02. Program to convert string from lower case to upper case\n03. Sort a set of strings in ascending alphabetical order\n04. Find length of a string without using strlen()\n05. String concatenation without using strcat\n06. Reverse a String using recursion\n");
  printf("07. Program to sort array in ascending order\n08. Find largest element of given array\n09. Program to find sum of array elements\n10. Program to find number of elements in an array\n");
  printf("11. Program to find the largest of three numbers using Pointers\n12. Program to count vowels and consonants in a String using pointer\n13. Program to print String using Pointer\n14. Program to swap two numbers using pointers\n15. Program to create initialize and access a pointer variable\n");
  printf("16. Find the value of nPr for given value of n & r\n17. Find the value of nCr for given value of n & r\n18. Program to multiply two floating numbers\n19. Program to find out Quotient and Remainder\n20. Program to find average of two numbers\n");
  printf("21. Program to Add Two Matrices Using Multi-dimensional Arrays\n22. Program to Multiply Two Matrices Using Multi-dimensional Arrays\n23. Program Swap Numbers in Cyclic Order Using Call by Reference\n24. Program to Find Largest Number Using Dynamic Memory Allocation\n25. Program to Sort Elements in Lexicographical Order (Dictionary Order)\n");
  printf("26. Program to Calculate Difference Between Two Time Periods\n27. Program to Display its own Source Code as Output\n28. Matrix rotation by 90 degrees clockwise and anticlockwise\n29. Saddle point coordinates of a given matrix\n30. Matrix printing in aspiral form\n");
  printf("Select your program number from above: ");
  scanf("%d", &ch);
  switch (ch)
  {
  case 0:
  {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum of %d and %d is %d\n", x, y, sum(x, y));
    break;
  }
  case 1:
  {
    break;
  }
  case 2:
  {
    break;
  }
  case 3:
  {
    break;
  }
  case 4:
  {
    break;
  }
  case 5:
  {
    break;
  }
  case 6:
  {
    break;
  }
  case 7:
  {
    break;
  }
  case 8:
  {
     int c, array[100], size, location, maximum;
      printf("Input number of elements in array\n");
      scanf("%d", &size);
      printf("Enter %d integers\n", size);
      for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
    // finds the location of the largest number in the array
      location = find_maximum(array, size);
    // finds the value of the element in that location from the array
      maximum  = array[location];
    //prints the value of the largest element in the array
      printf("Largest element value = %d.\n", maximum);
    break;
  }
  case 9:
  {
    break;
  }
  case 10:
  {
    break;
  }
  case 11:
  {
    break;
  }
  case 12:
  {
    break;
  }
  case 13:
  {
    break;
  }
  case 14:
  {
    int num1,num2;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    //displaying numbers before swapping
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    //calling the user defined function swap()
    swapusingpointer(&num1,&num2);
    //displaying numbers after swapping
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    break;
  }
  case 15:
  {
    break;
  }
  case 16:
  {
    break;
  }
  case 17:
  {
    break;
  }
  case 18:
  {
    break;
  }
  case 19:
  {
    break;
  }
  case 20:
  {
    break;
  }
  case 21:
  {
    break;
  }
  case 22:
  {
   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   // Taking input until
   // 1st matrix columns is not equal to 2nd matrix row
   while (c1 != r2) 
   {
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }
   // get elements of the first matrix
   getMatrixElements(first, r1, c1);
   // get elements of the second matrix
   getMatrixElements(second, r2, c2);
   // multiply two matrices.
   multiplyMatrices(first, second, result, r1, c1, r2, c2);
   // display the result
   display(result, r1, c2);
    break;
  }
  case 23:
  {
    break;
  }
  case 24:
  {
    break;
  }
  case 25:
  {
    break;
  }
  case 26:
  {
    break;
  }
  case 27:
  {
    break;
  }
  case 28:
  {
    break;
  }
  case 29:
  {
    break;
  }
  case 30:
  {
    break;
  }
  default:
    printf("Invalid Input. Try Again!\n");
    break;
  }
}
