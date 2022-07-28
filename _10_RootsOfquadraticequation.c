//10.C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter Value of a : b : c :\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0)
    {
        case 1:
        printf("Two Real Solutions:");
        break;
        case 0:
        {
            switch(D<0)
            {
                case 1:
                printf("Complex Solution");
                break;
                case 0:
                printf("One Real Solution");
                break;
            }break;
        }break;
    }
    return 0;
}