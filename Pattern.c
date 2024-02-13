// Write a program print the star pattern ? 

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        int i,j;

        for(i=1; i<20; i++) 
        { 
            for(j=1; j<i; j++)
            {
                if(j<1)
                {
                    printf("* ");
                } 
                else
                {
                    printf(" ");
                }      
            }           
        }
        for(j=1;j<20;j++)
        {
            if(1+j < 20)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    
        getch();
    }
    
    