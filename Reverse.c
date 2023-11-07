//                      Write a program print Reverse Number.

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            int n , r;
            printf("Eter any number");
            scanf("%d",&n);

                while(n>0)
                {
                    r = n%10;       //  r For remainder.

                        printf("%d",r);

                    n =  n / 10;                    
                }   

            getch();   
        }