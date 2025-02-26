#include<stdlib.h>
#include<stdio.h>

 main()
{
  int number1;
  printf("Hello!\t It's your lucky day, i will help you to choose anything.\n\n Let's start!\t");
  printf("Choose a number between 0 and 9\n");
  scanf("%d",&number1);
  
switch (number1)
{
case 1:
  printf("The answer is positive.\n");
  break;

case 2:
  printf("The answer is positive.\n");
  break;
case 3:
  printf("The answer is negative.\n");
  break;
case 4:
  printf("The answer is negative.\n");
  break;
case 5:
  printf("The answer is positive.\n");
  break;
case 6:
  printf("The answer is negative.\n");
  break;
case 7:
  printf("The answer is negative.\n");
  break;
case 8:
  printf("The answer is positive.\n");
  break;
case 9:
  printf("The answer is positive.\n");

default:
  break;
}


  return 0;
}
