#include<stdio.h>
#include<stdlib.h>

int main()
/*4 Presses taken from the user. the program that collects the digits of a number - lesson 9
(Think concrete)*/
{

int sum,kalan,bolum,myNumber;
sum=0;
printf("Enter a four digit number:");
scanf("%d",&myNumber);
//4. bas
bolum=myNumber/1000;
kalan=myNumber%1000;
sum+=bolum;
//3.bas
bolum=kalan/100;
sum+=bolum;
kalan=kalan%100;
//2.bas
bolum=kalan/10;
sum+=bolum;
kalan=kalan%10;
//1.bas
bolum=kalan/1;
sum+=bolum;
kalan=kalan%1;

printf("Sum:%d",sum);

 

return 0;
}