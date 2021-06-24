#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("\n Enter a number: ");
    scanf("\n %d",&marks);
    if(marks = 100)
    {
        printf("\n You have scored an Honorary!",marks);
    }
    else if(marks >= 90)
    {
        printf("\n You have scored a Merit!",marks);
    }
    else if(marks >= 75)
    {
        printf("\n You have scored a Distinction!",marks);
    }
    else if(marks >= 60)
    {
        printf("\n You have scored First Class!",marks);
    }
    else if(marks >= 55)
    {
        printf("\n You have scored Higher Second Class!",marks);
    }
    else if(marks >= 50)
    {
        printf("\n You have scored Second Class",marks);
    }
    else if(marks >=40)
    {
        printf("\n You have scored Pass Class!",marks);
    }
    else if(marks >= 0)
    {
        printf("\n You have Failed!",marks);
    }
    printf("\n You have scored: %d out of 100");
    getch();
}