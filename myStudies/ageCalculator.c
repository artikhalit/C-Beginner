#include <stdio.h>
#include <stdlib.h>

int main()

{
   int birthDay,result = 0;
   int year = 2024;
   
   printf("Welcome! Which year was you born?.\t Please enter.\n");
   //bazı özel durumları çıkaralım   
   scanf("%d",&birthDay);
   //Mevcut yıldan doğduğu yılı çıkarırsak, (2024) kişinin yaşını elde ederiz.

   if(birthDay < 1930){
    
    printf("Are you sure?\n Enter again:\t");
    scanf("%d",&birthDay);
    result = year - birthDay;
    printf("Your age is:\a\t%d",result);

return 0;
   }if( birthDay < 0 ){
    
    printf("Please take it serious!\n");
    scanf("%d",&birthDay);
    result = year - birthDay;
    printf("Your age is:\a\t%d",result);

return 0;
   }if ( birthDay >= 2024 )
   {
    printf("Please take it serious!\n");
    scanf("%d",&birthDay);
       result = year - birthDay;
    printf("Your age is:\a\t%d",result);

return 0; 
   }
   
   result = year - birthDay;
   printf("Your age is:\a\t%d",result);

  return 0;
}