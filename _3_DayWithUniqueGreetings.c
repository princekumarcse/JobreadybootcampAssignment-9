/*
3.	Write a program which takes the day number of a week
 and displays a unique greeting message for the day.
*/
#include<stdio.h>
int main()
{
    int day;
    printf("Enter Days Number:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Hello! Today is Monday");
        break;
        case 2:
        printf("Hello! Today is Tuesday");
        break;
        case 3:
        printf("Hello! Today is Wednessday");
        break;
        case 4:
        printf("Hello! Today is Thursday");
        break;
        case 5:
        printf("Hello! Today is Friday");
        break;
        case 6:
        printf("Hello! Today is Saturday");
        break;
        case 7:
        printf("Hello! Today is Sunday");
        break;
        default:
        printf("Not Found !");
        break;
    }
    return 0;
}