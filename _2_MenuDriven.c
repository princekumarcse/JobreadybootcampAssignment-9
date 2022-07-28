/*
2.	Write a menu driven program with the following options:
a.	Addition
b.	Subtraction
c.	Multiplication
d.	Division
e.	Exit
*/
#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter the Following:");
    printf("\n1.Addition:");
    printf("\n2.Subtraction:");
    printf("\n3.Multiplication:");
    printf("\n4.Division:");
    printf("\n5.Exit \n");
    scanf("%d",&x);
    
    switch(x)
    {
        case 1:
        printf("Sum is %d",a+b);
        break;
        case 2:
        printf("Difference is %d",a-b);
        break;
        case 3:
        printf("Multiplication is %d",a*b);
        break;
        case 4:
        printf("Division is %d",a/b);
        break;
        default:
        printf("Not Found!");
        case 5:
        break;
    }
    return 0;
}