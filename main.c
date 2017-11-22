#include<stdio.h>
#include<stdlib.h>
#include "HIGHLIGHT.h"
#include <string.h>
#include <math.h>
int i,j,count;
void nira(void);
void main()
{
   char pass[100] = "NIRAJ1994";
   char pas[100];
   found:
   system("color 30");
   gotoxy(33,1);
   col_back(14,12);
   printf("....WELCOME....");
   gotoxy(28,4);
   printf("....SMART CALCULATOR....");
   col_back(0,254);
   gotoxy(25,10);
   printf(".....Plz enter your password....");
   col_back(0,250);
   gotoxy(38,11);
   for(j=0;j<9;j++)
  {
      pas[j] = _getch();
      printf("%c",'*');
  }
  count=strcmp(pass,pas);
if(count==0)
  {
    col_back(0,253);
    gotoxy(28,17);
    printf("Your password is right......");
    gotoxy(28,20);
    printf("loading");
    for(i=0;i<5;i++)
    {
    printf(". ");
    delay(2000);
    }
      system("cls");
      nira();
   }
else
    {
     gotoxy(28,17);
     printf("Sorry your password is wrong......\n");
     gotoxy(28,19);
     printf("Plz try again.....");
     _getch();
     system("cls");
      goto found;
    }

      system("cls");

  }

  void nira(void)
 {
     float num1,num2;
       int a,n;
    LABEL:
    system("color 30");
    printf("\t\t\tPlz select option.....\n");
    printf("\t\t\t\t1.ADD\n");
    printf("\t\t\t\t2.SUBTRACT\n");
    printf("\t\t\t\t3.MULTIPLY\n");
    printf("\t\t\t\t4.DIVIDE\n");
    printf("\t\t\t\t5.FIND SQUARE OF NUMBER\n");
    printf("\t\t\t\t6.FIND CUBE OF NUMBER\n");
    printf("\t\t\t\t7.FIND THE SQUARE ROOT OF NUMBER\n");
    printf("\t\t\t\t8.FIND THE CUBE ROOT OF NUMBER\n");
    printf("\t\t\t\t9.FIND TABLE OF GIVEN  NUMBER\n");
    printf("\t\t\t\t10.EXIT");
    printf("\n\n\n\n\t\t\t\t");
    printf("Plz select option\n");
     printf("\n\t\t\t\t");
    scanf("%d",&a);
    system("cls");
    switch(a)
{
 case 1:
    printf("Plz enter two number for addition\n");
    scanf("%f%f",&num1,&num2);
    printf("The addition is %.3f",num1+num2);
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;

 case 2:
    printf("Plz enter two number for subtraction\n");
    scanf("%f%f",&num1,&num2);
    printf("The subtraction is %.3f",num1-num2);
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
 case 3:
    printf("Plz enter two number for multiplication\n");
    scanf("%f%f",&num1,&num2);
    printf("The multiplication is %.3f",num1*num2);
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
   break;
 case 4:
    printf("Plz enter two number for divide\n");
    scanf("%f%f",&num1,&num2);
    printf("The answer is %.3f",num1/num2);
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
 case 5:
    printf("Plz enter a number for square\n");
    scanf("%f",&num1);
    printf("\nThe square of %f is %.3f",num1,num1*num1);
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
 case 6:
    printf("Plz enter a number for cube\n");
    scanf("%f",&num1);
    printf("\nThe cube of %f is %.3f",num1,num1*num1*num1);
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
 case 7:
    printf("Plz enter a number for square root\n");
    scanf("%f",&num1);
    printf("\nThe square root of %f is %.3f",num1,sqrt(num1));
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    gotoxy(25,16);
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
 case 8:
    printf("Plz enter a number for cube root\n");
    scanf("%f",&num1);
    printf("\nThe cube root of %f is %.3f",num1,pow(num1,0.33333389));
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    gotoxy(25,16);
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
case 9:
    printf("Plz enter a number for table \n");
    scanf("%f",&num1);
    printf("\nThe table of %f is",num1);
    for(i=1;i<11;i++)
    {
      printf("\n%.1f",i*num1);
    }
    gotoxy(25,15);
    printf("Enter 0 to main menu...");
    scanf("%d",&n);
    system("cls");
    if(n==0)
    goto LABEL;
    break;
case 10:
    break;


}

}






