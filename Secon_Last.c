/*Write a program to input one number from the user print the second last digit of a number.*/

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            int num ,  First_Digit , Last_Digit ;

            printf("Enter any number");
            scanf("%d", &num);

                First_Digit = (num / 10) / 10;
                    printf("First_Digit = %d\n", First_Digit);

                Last_Digit = (num % 10);
                    printf("Last_Digit = %d",Last_Digit);

            getch();

        }