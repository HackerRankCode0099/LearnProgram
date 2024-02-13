//Write a program input two number from the user (a and b) , print all the even numbers between a and b (including a and b) ?

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int a , b , i ;
        printf("Enter value a & b");
        scanf("%d %d",&a,&b);
        for(i=a; i<=b; i++)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
        getch();
    }