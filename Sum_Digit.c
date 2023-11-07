//                      Write a program sum of the digit of a number.

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            int num , Sum = 0 , r  ;
            printf("Enter any three number");
            scanf("%d",&num);

                while(num>0)
                {
                    r = num % 10;
                    Sum = Sum + r;

                    num = num / 10;
                } 
                    printf("Sum = %d",Sum);
                     
            getch();

        }