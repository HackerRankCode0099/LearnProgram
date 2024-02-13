// Write a program to check even number is prime or not ? 

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int i,n,count=0;
        printf("Enter any number : ");
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("It is a prime number");
        }       
        else
        {
            printf("It is a not prime number");
        }       
        getch();
    }