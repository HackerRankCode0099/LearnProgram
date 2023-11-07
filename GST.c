/* Write a program find GST and total bill. Total bill is the sum of amount and GST.
   GST is calculated as the 10% of total bill. */


    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        float GST , Amount , Total_Bill;

            printf("Enter the Amount");
            scanf("%f", &Amount);

                GST = Amount * 0.10;
                    printf("GST = %f\n",GST);

                Total_Bill = Amount + GST;

                    printf("Total_Bill(include GST) = %f", Total_Bill);
        getch();

    }
