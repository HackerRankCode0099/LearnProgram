/*  Write a program to input two number from the user a and b , print all the number between a and b           
    (a and b both are not included) ? */

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            int a , b , i ;
            printf("Enter the value a & b");
            scanf("%d%d",&a,&b);
            for(i=a+1; i<=b-1; i++)
            {
                printf("%d\n",i);
            }
            getch();

        }
