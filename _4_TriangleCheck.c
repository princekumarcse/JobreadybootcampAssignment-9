/*
4.	Write a menu driven program with the following options:
a.	Check whether a given set of three numbers are lengths of an isosceles triangle or not
b.	Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
c.	Check whether a given set of three numbers are equilateral triangle or not
d.	Exit
*/
#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("Enter Tringle length:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter The Choise\n");
    printf("\n1.To Check Isosceles triangle");
    printf("\n2.To Check Right angled triangle");
    printf("\n3.To check Equilateral triangle"); 
    printf("\n4.Exit\n");
    scanf("%d",&x);
     
    switch(x)
    {
        case 1:
        if(a==b || b==c || c==a)
        printf("Yes it is Isosceles Triangle");
        else
        printf("Not a Isosceles Triangle");
        break;
        case 2:
        if((a*a) == (b*b+c*c) ||( b*b) == (a*a+c*c) || (c*c) == (a*a+b*b))
        printf("Yes it is Right angle Triangle");
        else
        printf("Not a Right angle triangle");
        break;
        case 3:
        if(a==b==c)
        printf("Yes it is Equilateral Triangle");
        else
        printf("Not a Equilateral Triangle");
        break;
        case 4:
        break;
        default:
        printf("Not Found !");
        break;
    }
    return 0;

}