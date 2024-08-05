#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("Welcome to our challange show!\n");
    printf("Please enter \"0\" to start.\n");
    printf("Enter \"9\" to quit.\n");
    scanf("%d",&x);
    if (x==0)
    {printf("Good luck!\n");
    }else if (x==9)
    {
        printf("Have a good day!\n");
    }else
        {
            printf("Wrong character.\n");
        }

    return 0;
    
    

}