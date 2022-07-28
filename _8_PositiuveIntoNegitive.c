/*8.Program to convert a positive number into a negative number and 
negative number into a positive number using a switch  statement.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter A number:");
    scanf("%d",&num);
    switch(num<0)
    {
        case 1:
        printf("%d",(-2*num)+num);
        break;
        case 0:
        printf("%d",-num);
        break;
    }
    return 0;
}