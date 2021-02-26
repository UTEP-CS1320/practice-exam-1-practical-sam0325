/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    int x, y;
    scanf("%d %d", &x, &y);

    int x_digit = x % 100; // Gets last two digits of the integer. 
    int y_digit = y % 100; // Gets last two digits of the integer. 

    if(x_digit == y_digit) 
    {
      printf("TRUE"); //'f' was missing in printf. 
    }
    else // if last two digits are not the same then print: FALSE. 
    {
      printf("FALSE"); //'f' was missing in printf. 
    }
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    char winner[5] = "7239";
    char ticket[5];

    scanf("%s", ticket);

    int sameNumber = 0; // variable that keeps count of how many input numbers coincide with the winning numbers. 
    
    if (ticket[1] == winner [1]) // if the first digit coincides with the first digit of the winning number then add 1 to sameNumber. 
    {
      sameNumber += 1;
    }
    if (ticket[2] == winner [2]) // if the second digit coincides with the second digit of the winning number then add 1 to sameNumber. 
    {
      sameNumber += 1;
    }
    if (ticket[3] == winner [3]) // if the third digit coincides with the third digit of the winning number then add 1 to sameNumber. 
    {
      sameNumber += 1;
    }
    if (ticket[4] == winner [4]) // if the fourth digit coincides with the fourth digit of the winning number then add 1 to sameNumber. 
    {
      sameNumber += 1;
    }

    if (sameNumber == 4) // if 4 digits coincide then it is the 1st Prize. 
    {
      printf("1st Prize!\n");
    }
    else if (sameNumber == 3) // if 3 digits coincide then it is the 2nd Prize. 
    {
      printf("2nd Prize!\n");
    }
    else if (sameNumber == 2) // if 2 digits coincide then it is the 3rd Prize. 
    {
      printf("3rd Prize!\n");
    }
    else // if 1 or 0 digits coincide then no prize. 
    {
      printf("No Prize! Better luck next time!\n");
    }

  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[5];
    scanf("%s", hex_in);
    }
    
    /* Problem 3 End */
  }

