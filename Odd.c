#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    while(i<=9)
        //for(i=1; i<=9; i=i+2)
    {
        printf("Odd number is %d\n",i);
        i=i+2;
    }
    i=2;
    while(i<=10)
        //for(i=2; i<=10; i=i+2)
    {
        printf("Even number is %d\n",i);
        i=i+2;
    }
    getch();
}