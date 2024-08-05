#include<stdlib.h>
#include<stdio.h>

int main()
{
/*
The algorithm that calculates the area of the apartment
1-Find variables and define
2-veriables type
3-Area=pi*r*r circumference==2*pi*r
4-take datas 
5-do math
6-get outpu
*/ 
// (Turkish note) Bonus- const int araştır! ders5 13.54 hazır..
// --------------const int/float x=... diye kullanılır.

float cevre,alan;
int yaricap;
const float PI=3.14;


printf("Yari capi giriniz:\t");
scanf("%d",&yaricap);
alan = PI * yaricap * yaricap;
cevre = 2 * PI * yaricap;

printf("Alan:%fm\n",alan);
printf("cevre:%fm\n",cevre);
return 0;
}
