#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("\n Enter a number: ");
    scanf("%d",&a);
    printf("\n Enter a number: ");
    scanf("%d",&b);
    if(a==30 && b==30)
    {
        printf("\n You have won a lottery!!");
    }
    printf("\n The number you have entered is %d",a);
    printf("\n The number you have entered is %d",b);
    getch();
}