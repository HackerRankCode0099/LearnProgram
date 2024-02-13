// Write a program to print the fibonacci series ?

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int n , i , a = 0 , b = 1 , c ;
        printf("Enter number:");
        scanf("%d", &n);

       // printf("Fibonacci series: ");

        for(i=1; i<=8; i++)
        {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        getch();
    }