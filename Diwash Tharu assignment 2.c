
#include<stdio.h>
#include<stdlib.h>

void display();
void line();
void head();

void our_offer();
void costomer();
void count();
void package();
void offer();

void monthly1home();
void monthly3home();
void monthly6home();
void yearlyhome();

void monthly1super();
void monthly3super();
void monthly6super();
void yearly1super();

void monthly1fiber();
void monthly3fiber();
void monthly6fiber();
void yearly1fiber();

void calculate();
void repeat();
void random_number();
void end();

int main()
{
    display();
    return 0;

}

void random_number()
{
    printf("\nYou are selected for smart 55 inch tv lottery\n");
    printf("\tYour, Unique ID is %d\n",rand()%10000+5000);

}
void display()
{
    head();
    our_offer();
    costomer();
    printf("\n--------------------------------------------------------------------------------\n");
    package();
    count();
    end();
    repeat();
}
void line()
{
    printf("......................................................................................\n");
}
void head()
{
    printf("\n\t\t\t welcome to world link \n");
    line();

}
void our_offer()
{
   printf("\n\t\t\t offers on our 25 th anniversary\n\n");
   printf("\t package \tmonthlt \t3 monthly \t6 monthly \t1 yearly\n");
   printf("\t home zoom20X \t 1499 \t\t4199 \t\t7499 \t\t13999\n");
   printf("\tsuper sonic30X \t 1799 \t\t4999 \t\t9299 \t\t17999\n");
   printf("\tfiber flash50X \t2399 \t\t6599 \t\t12199 \t\t23999\n");
}
void costomer()
{
    int number;
    char  first_name[20],address[50], last_name[20];
    printf("\nEnter first  name:");
    scanf("%s",&first_name);
    printf("\nEnter last  name:");
    scanf("%s",&last_name);
    printf("\n wecome to worldlink billingsystem  mr/mis.%s %s\n",&first_name,&last_name);
    printf("\nEnter your address:");
    scanf("%s",&address);
    printf("\nEnter your phone number:");
    scanf("%d",&number);

}
void count()
{

    int static count;
    count += 1 ;
    printf("\n\tTotal number of costomer %d\n",count);
}
void package()
{
    int an ;
    printf("\nPackage details are:\n");
    printf("[1] for home zoom 20X  [2] for supper sonic 30X [3] for fiber flash 50X\n");
    printf("please enter the number : ");
    scanf("%d",&an);
    an;
    offer(an);
}
void offer(int a)
{
    int dt;
    line();
    int rate[3][4]={{1499, 4199, 7499, 13999},
                 {1799, 4999, 9299, 17999 },
                 {2399, 6599, 12199, 23999}};
    printf("[1] for monthly [2] for 3 monthly [3] for 6 monthly [4] for 1 yearly :");
    scanf("%d",&dt);
    if (a ==1 && dt == 1)
    {
        monthly1home(rate);

    }
    else if (a ==1 && dt ==2)
    {
        monthly3home(rate);
    }
    else if (a == 1 && dt ==3)
    {
        monthly6home(rate);
    }
    else if (a ==1 && dt ==4)
    {
        yearlyhome(rate);
    }
    else if (a ==2 && dt == 1)
    {
        monthly1super(rate);
    }
    else if (a == 2 && dt == 2)
    {
        monthly3super(rate);

    }
    else if (a ==2 && dt ==3)
    {
        monthly6super(rate);
    }
    else if (a ==2 && dt == 4)
    {
        yearly1super(rate);
    }
    else if (a == 3 && dt ==1)
    {
        monthly1fiber(rate);
    }
    else if (a ==3 && dt ==2)
    {
        monthly3fiber(rate);
    }
    else if (a ==3 && dt == 3)
    {
        monthly6fiber(rate);
    }
    else if (a == 3 && dt == 4)
    {
        yearly1fiber(rate);
    }
    else
    {
        printf("You have enter invalid number");
        package();
    }

}
void monthly1home(int price[3][4])
{

    for (int i = 0;i<1;i++)
    {
        for (int j = 0;j<1;j++)
        {
            printf("\nAmount witout tax is:%d\n",price[i][j]);
        }
    }calculate(price[0][0]);

}

void monthly3home(int price[3][4])
{

    for (int i = 0;i<1;i++)
       {

        for(int j = 1;j<2;j++)
          {
        printf("\nAmouny witout tax is: %d\n",price[i][j]);
           }
    }calculate(price[0][1]);
}
void monthly6home(int price[3][4])
{

    for (int i = 0;i<1;i++)
    {
        for (int j = 2;j<3;j++)
        {
            printf("\nAmount witout tax is :%d\n",price[i][j]);
        }
    }calculate(price[0][2]);
}

void yearlyhome(int price[3][4])
{
    random_number();
    for (int i = 0; i <1;i++)
    {
        for (int j = 3;j < 4;j++)
        {
            printf("\nAmount witout tax is%d\n",price[i][j]);
        }
    }calculate(price[0][3]);
}

void monthly1super(int price[3][4])
{
    for (int i = 1;i<2;i++)
    {
        for (int j = 0;j<1;j++)
        {
            printf("\nAmount witout tax is: %d\n",price[i][j]);
        }
    }calculate(price[1][0]);
}
void monthly3super(int price[3][4])
{
    for (int i = 1;i<2;i++)
    {
        for (int j = 1;j <2;j++)
        {
            printf("\nAmount witout tax is: %d\n",price[i][j]);

        }
    }calculate(price[1][1]);
}
void monthly6super(int price[3][4])
{
    for (int i = 1;i<2;i++)
    {
        {
           for (int j = 2;j<3;j++)

                printf("\nAmount witout tax is :%d\n",price[i][j]);
        }
    }calculate(price[1][2]);
}
void yearly1super(int price[3][4])
{
    random_number();
    for (int i = 1;i<2;i++)
    {
        for(int j = 3;j<4;j++)
        {
            printf("\nAmount without tax is :%d\n",price[i][j]);
        }
    }calculate(price[1][3]);
}
void monthly1fiber(int price[3][4])
{
    for(int i = 2;i<3;i++)
    {
        for(int j = 0;j<1;j++)
        {
            printf("\nAmount without tax is :%d\n",price[i][j]);
        }
    }calculate(price[2][0]);
}
void monthly3fiber(int price[3][4])
{
    for(int i = 2;i<3;i++)
    {
        for(int j = 1;j<2;j++)
        {
            printf("\nAmount without tax is :%d\n",price[i][j]);

        }
    }calculate(price[2][1]);

}
void monthly6fiber(int price[3][4])

{
    for(int i = 2;i<3;i++)
    {
        for(int j = 2;j<3;j++)
        {
            printf("\nAmount witout tax is :%d\n",price[i][j]);

        }
    }calculate(price[2][2]);

}
void yearly1fiber(int price[3][4] )
{
    random_number();
    for(int i = 2;i<3;i++)
    {
        for(int j = 3;j<4;j++)
        {
            printf("\nAmount without tax is: %d\n",price[i][j]);

        }
    }calculate(price[2][3]);

}
void calculate(int a)
{

    float taxamount,vatamount;
    taxamount= a + (0.10*a);
    vatamount = taxamount + (0.13*taxamount);
    printf("\nTotal amount with telecom tax:%.2f\n",taxamount);
    printf("\nTotal amount with vat:%.2f\n",vatamount);
    printf("\nTotal charge is :%.2f\n",vatamount);
    line();
}
void repeat()
{
    int  tharu;
    line();
    printf("\ndo u want repat? press [1] for repeat and press  any key to exit: ");
    scanf("%d",&tharu);
    if (tharu ==1)
    {
        line();
        printf("\n");
        main();
    }


}
void end()
{

    printf("\n\t\t\tThank You\n");

}
