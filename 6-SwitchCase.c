/* monday 2
tuesday   5
wednesday 7
thursday 10
friday   15
saturday 19
sunday   25
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numberOfProducts, day = 0;
    char dayName[10];

    printf("\nEnter the number between 1 and 7 to days of week:\n");
    scanf("%d", &day);

    switch (day){
    case 7: numberOfProducts += 25;
            if( day == 7 ){ dayName = "Sunday";}

    case 6: numberOfProducts += 19;
            if( day == 6 ){ dayName = "Saturday";}
                    
    case 5: numberOfProducts += 15;
            if( day == 5 ){ dayName = "Friday";}

    case 4: numberOfProducts += 10;
            if( day == 4 ){ dayName = "Thursday";}

    case 3: numberOfProducts += 7;
            if( day == 3 ){ dayName = "Wednesday";}

    case 2: numberOfProducts += 5;
            if( day == 2 ){ dayName = "Tuesday";}

    case 1: numberOfProducts += 2;
            if( day == 1 ){dayName = "Monday";}
    
    default:
        break;
    }

        printf("\nTotaly:%d",numberOfProducts);

return 0;
}
