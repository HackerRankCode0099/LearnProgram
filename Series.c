// Write a program print the sum of series ?

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int n , i , r , sum=0;
        printf("Enter any number:");
        scanf("%d",&n);
        for(i=1; i<=5; i++)
        {
         r = n % 10;
         sum = sum + r;
         n = n / 10;  
        }
         printf(" sum of digit: %d ",sum); 
        getch();
    }