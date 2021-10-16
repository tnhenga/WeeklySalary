/* Tanaka Nhenga
Goal: Write a program to compute and display a
person’s weekly salary as determined by the following expressions: If the number of
hours worked is less than or equal to 40, the person receives $8 per hour; otherwise,
the person receives $320, plus $12 for each hour worked over 40 hours. The program
should request the hours worked as input and should display the salary as output.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  
  /* x is the user input for hours worked.
  pt is for anything under 40 hr. ft is over 40 hr. */
  int x;
  int pt;
  pt = 8;
  int ft;
  ft = 12;

  //user is asked to enter hours worked.
  //if then statements were used to detect if
  //< 40, = 40, or > 40 were inputted. 


  while(1){

  
  printf("\nPlease enter the amount of hours worked: \n");
  scanf("%d", &x);
  

  if (x < 40) {
    printf("Your Salary (in USD): \n$%d\n",  (x*pt) );
  } else if (x == 40) {
    printf("Your Salary (in USD): \n$%d\n", (320));
  } else if (x > 40) {
    printf("Your Salary (in USD): \n$%d\n", (320 + ((x-40)*ft) ));
  }
  

  }


  return 0;
}