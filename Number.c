//Write a program input two number from the user (a and b) , print all the numbers between a and b (includng a and b) ?

#include<stdio.h>
#include<conio.h>

void main()
{
    int  i=5 , a , b  ;
    printf("Enter value a and b");
    scanf("%d %d",&a,&b);
    while(i<=b)
        //for(i=a; i<=b; i++)
    {
        printf("%d\n",i);
        i++;
    }
    getch();
}