#include<stdio.h>

int main()
{
      int n, q;
      system("COLOR 0b");
      while(1)

      {
             printf("\n\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~\n");

printf("     \n\n\t  ========================================================================================================\n");
 printf("     \t  press ||6|| if you want to go customer section \n     \t  press ||7|| if u want to go assistant section \n     \t  press ||8|| if u want to go dealer section \n     \t  press ||9|| if u want to go monthly evaluation section\n     \t  press ||10|| if u want to go product section \n");
 printf("     \n\t  ========================================================================================================\n");
 printf("\n     \t  Enter Choice\n");
 scanf("%d", &n);// choice to go to desired sections
 system("cls");
//--------------------------------------------------------------------------------------------------------------------------------------------
//============================================================================================================================================

       if(n==6)
          {
                  int a, k, i, j, n, b, sum=0, count=0, wholesum=0, sum1=0, c, counter[2000];
                   system("cls");
     int r[1000];// r[100] is for product price
      for(k=1; k<=1000; k++)
     {
      printf(" \n\n\t\t\t______________________________________________________________________");
      printf("\n\t\t\t\tif u want to stop press 0 \n\t\t\t\t\t||or||\n\t\t\t\tpress anything to continue");
      printf("\n\t\t\t\t|~~~~~~~~~~~~~~~~~~~~|");
      printf("\n\t\t\t\t|        PRESS       |");
      printf("\n\t\t\t\t|~~~~~~~~~~~~~~~~~~~~|");

      scanf("%d", &b);//choice for pressing integer number in order to stop or go on
system("cls");
          if(b==0)
          {
               exit(0);
          }
          else
          {
           printf("\n\n\n\t\t\t\t\t\t CUSTOMER SECTION\n");
                 printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~");
     printf("\n\nToken number of customer %d is: ", k);
     scanf("%d", &a);// a means token number
      for(i=0; i<=2000;i++)
     {
          counter[i]= 0;// count the number of code
     }
     printf("\nHow many products have bought:");
     scanf("%d", &j);//number of product
for(i=0;i<j; i++)
     {
          printf("\nCode no of product %d is: ", i+1);
          scanf("%d", &c);// code no of product
          counter[c]++;

          printf("Prices of the products %d is: ", i+1);
           scanf("%d", &r[i]);
     }
       for(i=1; i<=2000;i++)
     {
         if(counter[i]>0)

              printf("\n\t\t\tNumber of buying product code ||%d|| is: ||%d||\n", i, counter[i]);//i means the code number, counter[i] means number of product according to the code

     }


     for(i=0, sum1=0; i<j;i++)
     {
            sum1+=r[i];//r[i] means price of product
     }
  //printf("sum is %d\n", sum1);
  if(sum1>0 && sum1<=4999)
  {
       sum = sum1;
       printf("\n\n\t\t\t[Price is: %d]\n", sum);
  }
  else if(sum1>=5000 && sum1<=49999 && a!=5)// token number
   {
         sum=sum1;
         printf("\n\n\t\t\t[Price is: %d]\n", sum);
   }
   else if(sum1>=5000 && sum1<=49999 && a==5)
   {
         sum=sum1-((sum1*3)/100);
          printf("\n\n\t\t\t[Discount price is BDT %d]\n", sum);
   }
   else if(sum1>=50000 && sum1<=100000)
   {
       sum=sum1-((sum1*5)/100);
          printf("\n\n\t\t\t[Discount price is BDT %d]\n", sum);
   }
   else if(sum1>100000)
   {
        sum=sum1-((sum1*7)/100);
          printf("\n\n\t\t\t[Discount price is BDT %d]\n", sum);
   }
          }
wholesum+=sum;//wholesum means full sum of money by selling products
   printf("\n\t\t\t||----------------------------------------------------||\n\t\t\t|| total income from selling products have been: %d\n\t\t\t||----------------------------------------------------||\n", wholesum);

}
          }

//==================================================================================================================================================================================================================================
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

          else if(n==7)
          {
                int i,a , v, wd, b, c, sal, m, sum;
                 system("cls");
        printf("\n\n\n\t\t\t\t\t\t ASSISTANT SECTION\n");
        printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~");
        printf("\n\n\t\tNumber of assistant: ");
        scanf("%d", &a);// a means assistant number

        printf("\n\t\tPut the number of working day:");
        scanf("%d", &wd);// wd means working day
        for(i=1, sum=0; i<=a; i++)
        {
        printf("\n\t\tHow many days have not been presented by assistant %d: ", i);
        scanf("%d", &b);// b means absent number of assistant
        printf("\n\t\tSalary of assistant %d: ", i);
        scanf("%d", &sal);// sal means salary

         m = (sal/wd);//m means per day income
  if(b>wd)
        {
             printf("\n\t\t\t\t~~Wrong input. Try again~~\n\n\n");
             break;
        }
       else if(b>=5 && b<=15)
        {
              c = (b*(m -(m*.75)));// cs means how many salary will be got after cutting 75%
            v= sal - ((b*m)-c);// updated salary
  printf("\t\t\t\t___________________________________________\n");
  printf("\t\t\t\tAfter cutting 75%, salary have become: %d\n\n\n", v);// v means final salary
        }
       else if(b>15 && b<=wd)//b means absent day, wd means working day
        {
             v= m*(wd-b);// v means final salary
             printf("\t\t\t\t____________________________");
             printf("\n\t\t\t\t||Salary have become: %d||\n\n\n", v);// v means final salary
        }

        sum+=v;

        printf("\t\t\t\t|----------------------------------------\n");
        printf("\t\t\t\t| Total ammount for assitant: %d\n", sum);// sum of the salary of the assistants
        printf("\t\t\t\t|----------------------------------------\n");


        }

          }
//===========================================================================================================================
//----------------------------------------------------------------------------------------------------------------------------

          else if(n==8)
          {
  int i,n;
   system("cls");
   printf("\n\n\n\t\t\t\t\t\t DEALER SECTION\n");
         printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~");
  float arr[100];
  printf("\n\n\n\t\t\tNumber of dealer: ");
  scanf("%d",&n);// n means number of dealer
  printf("\n");
  for(i=0;i<n;i++)
    {
    printf("\n\t\t\tTotal product of dealer code 30290D-%d: ",i+1);
    scanf("%f",&arr[i]);// means product number
  }
  int code = 0;
    for(i=1;i<n;++i)
    {
    if(arr[0]<arr[i])
        {
        arr[0]=arr[i];
        code = i;
        }
}
printf("\n\n\t\t\t\t\t\t|***Star pointer dealer code = 30290D-%d***|\n\t\t\t\t\t\t|***Number of product = %.2f***|",code+1,arr[0]);


          }
//===================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------
else if(n==9)
{
     double Ti,Tinv,Es,Eb,Sr,Mcal;
     printf("\n\n\n\t\t\t\t\t MONTHLY PROFIT AND LOSS\n");
         printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n\t\tEnter the Total Income: ");
    scanf("%lf",&Ti); // Ti = Total Income
    printf("\n\t\tEnter the Total Investment: ");
    scanf("%lf",&Tinv); // Tinv = Total Investment
    printf("\n\t\tEnter the Electricity Bill: ");
    scanf("%lf",&Eb); // Eb = Electricity Bill
    printf("\n\t\tEnter the Total Employee's Salary: ");
    scanf("%lf",&Es); // Es = the total Employee's Salary
    printf("\n\t\tEnter the Store Rent: ");
    scanf("%lf",&Sr); // Sr = Rent of the Store
    Mcal= Ti-(Tinv+Eb+Es+Sr);// Mcal means full calculation of a month

    if(Mcal<0){
        printf("\n\n\t\t\t\t\t***The store has seen the face of Loss***\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\n\t\t\t\t\tThe Monthly Loss is: %.2lf\n",(-1)*Mcal);// Mcal means full calculation of a month
    }
    else if (Mcal==0){
        printf("\t\t\t\t\t***The store has no profit or loss this month***\n");
    }
    else {
        printf("\t\t\t\t\t***The store has seen the face of Profit***\n");
        printf("\t\t\t\t\tThe Monthly Profit is: %.2lf\n",Mcal);// Mcal means full calculation of a month
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------------
//============================================================================================================================================

     else if(n==10)
     {
    struct product{
    char Product_Name[20];
    char code[20];
    double Quantity_of_Product;
};
    int p, i;
    printf("\n\n\n\t\t\t\t\t\t PRODUCT SECTION\n");
          printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~");
    printf("\n\n\n\tEnter the reading number of Product: ");
    scanf("%d",&p);//p means number of product
    struct product std[p];
    for(i=0;i<p;i++)
     {
        printf("\n\tInformation of Product- %d\n",i+1);
        printf("\n\tEnter the Product name: ");
        scanf("%s",std[i].Product_Name);
        printf("\n\tEnter the Product Code: ");
        scanf("%s",std[i].code);
        printf("\n\tEnter the Quantity of Product: ");
        scanf("%d",&std[i].Quantity_of_Product);

    printf("*=**=**=**=**=**=**=**=**=**=**=**=**=*\n");
    }
    system("cls");
    char stdcode[20];
    printf("\nSearch by Product Code: ");
    scanf("%s",stdcode);

    for(int i=0;i<p;i++){
        if(strcmp(stdcode,std[i].code)==0)
          {
            printf("\n\n\tProduct Information code- %s\n",stdcode);
            printf("\n\tProduct name: %s",std[i].Product_Name);
            printf("\n\tProduct Code: %s",std[i].code);
            printf("\n\tQuantity of Product: %d\n",std[i].Quantity_of_Product);


    printf("*=**=**=**=**=**=**=**=**=**=**=**=**=**=*\n");

        }

    }
}
}
getch();
return 0;
}
