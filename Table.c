// Write a program print the table of 3 in the following :

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int i=1 , Mul=3 ;
        while(i<=10)
            //for(i=1; i<=10; i++)
        {
            printf("%d * %d = %d\n",Mul , i , Mul * i);
            i++;
        }
        getch();
    }