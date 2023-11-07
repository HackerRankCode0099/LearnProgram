/* Write a program find HRA DA and Total salary. Total salary is the sum of HRA DA,Basic salary.
 (1) HRA is 10% Basic salary.
 (2) DA is 15% of Basic salary. */

        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            float Salary , HRA , DA , Total_Salary , Basic_Salary;

                printf("Enter the Salary");
                scanf("%f", &Salary);

                    HRA = 0.10 * Salary;
                    DA =  0.15 * Salary;

                        Basic_Salary = Salary - HRA - DA ;

                    printf("HRA = %f\n",HRA);
                    printf("DA = %f\n",DA);

                        printf("Basic_Salary = %f",Basic_Salary);
            getch();

        }