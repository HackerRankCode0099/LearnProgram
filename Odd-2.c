/*  Write a program to input two number from the user a and b , print all the numbers between a and b 
    (a and b are not included) ? */

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            int a , b , i ;
            printf("Enter value of a & b : ");
            scanf("%d %d",&a,&b);
            for(i=a+2; i<=b-2; i=i+2)
            {
                printf("%d\n",i);
            }
            getch();
        }