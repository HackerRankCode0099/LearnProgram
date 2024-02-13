// Write a program to print factorial Number ?

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int n , i , fact=1;
        printf("Enter any number :");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            fact=fact*i;   
        }
            printf("Fctorial of %d",fact);
        getch();
    }