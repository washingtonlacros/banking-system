#include <stdio.h>
#include <conio.h>
//#include <string>
#include <stdlib.h>

 int x;
int amount1=100;
int amount2;
int amount3;
int amount4;
int deposit;
int withdraw;
int balance;
//amount1=+deposit;



     char username[10];
     char username1[10];
    int account;
   int password;
    int y;
     void myfunction();
     void login();
int main()
{
login();
        time_t t;
	time(&t);
   printf("\n\n\t*******THANK YOU*******\n");
   printf("\n\tFOR TRUSTING OUR SERVICE\n\n\t");
        for(int i=0;i<60;i++){
		printf("-");}
	    printf("\n\t Current date and time : %s\t",ctime(&t));
	    for(int i=0;i<60;i++)
		printf("-");
		printf("\n");

 return 0;}

void myfunction(){



     system("cls");

      printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
     printf("\n\n\tHello %s, welcome to Barclays Bank.\n\n",username);
   printf(" \t*******|What do you want to do?|******* \n\n");
  printf(" \t1. Withdraw some money. \n");
    printf(" \t------------------------\n");
 printf(" \t2. Deposit some money. \n");
   printf(" \t----------------------\n");
   printf(" \t3. Check balance. \n");
   printf(" \t-----------------\n");
   printf(" \t4.Exit\n");
   printf(" \t--------\n");
   printf(" \n\tEnter your choice: ");
   scanf("%d",&x);

   if(x==1){

           system("cls");
 printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
       printf("\n\t*********** |Withdraw some money| ************ \n\n");
      printf("\n\tHow much do you wish to withdraw? : ") ;
       scanf("%d",&withdraw);
amount3=amount1+deposit;
amount2=amount3-withdraw;
       if(withdraw>=amount3){printf(" \n\tError!!!..The amount you want to withdraw is more than your account balance.\n");}
       else{
            printf(" \n\tConfirmed you have received ksh %d.00 Your new account balance is ksh %d.00 .\n",withdraw,amount2);
            printf("\n\t***********|Thank you for using our services|**************\n\n");
            printf("\n\tPress 0 to go back to the main menu or any other key to exit.: ");
            scanf("%d",&y);
            if(y==0){
            myfunction();
            }

    }}
  else  if(x==2){

           system("cls");
printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
     printf("\n\t************** |Deposit some money| ****************** \n\n");
     printf("\n\tHow much do you wish to deposit? : ") ;
  scanf("%d",&deposit);

amount4=amount1+deposit;
  printf(" \n\tDear %s you have successfully deposited ksh %d.00 .Your new account balance is ksh %d.00.\n",username,deposit,amount4);
  printf("\n\t***********|Thank you for using our services|**************\n\n");
            printf("\n\tPress 0 to go back to the main menu or any other key to exit.:");
            scanf("%d",&y);
            if(y==0){
            myfunction();
            }
    }
    else if (x==3){
amount3=amount1+deposit;
balance=amount3-withdraw;

           system("cls");
         printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
       printf(" \n\tDear %s your account balance is ksh %d.00.\n\n",username,balance);
      printf("\t***********|Thank you for using our services|**************\n\n");
            printf("\n\tPress 0 to go back to the main menu or any other key to exit.:");
           scanf("%d",&y);
            if(y==0){
            myfunction();
            }
    }
    else if(x==4){
system("cls");
         time_t t;
	time(&t);
   printf("\n\n\t *******THANK YOU*******\n");
   printf("\n\t FOR TRUSTING OUR SERVICE\n\n\t");
        for(int i=0;i<60;i++){
		printf("-");}
	    printf("\n\t Current date and time : %s\t",ctime(&t));
	    for(int i=0;i<60;i++)
		printf("-");
		printf("\n");

            exit(0);}
    else{
          system("cls");
         printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
         printf(" \n\tSorry,%s you entered an invalid choice.\n",username);
    printf("\n\tPress 0 to go back to the main menu or any other key to exit.:");
            scanf("%d",&y);
            if(y==0){
            myfunction();
            }
    }
}
void login(){
system("cls");
 printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
 printf("\t             *************|Create Account|****************** \n\n");
printf("\tEnter your username: ");
  scanf("%s",username1);
printf("\n\tEnter a password: ");
 scanf("%d",&account);
system("cls");
 printf("\n\t*********************** |BARCLAYS BANK SYSTEM| ************************ \n\n");
 printf("\t              *************|Login|******************\n\n ");
printf("\tEnter your username: ");
  scanf("%s",username);
printf("\n\tEnter your password: ");
   scanf("%d",&password);

if(password==account&& !strcmp(username,username1))
   {
    myfunction();}
    else
{printf(" \n\tYou entered an  incorrect username or password!..please try again.\n");
   printf("\n\tPress 0 to go back or any other key to exit: ");
            scanf("%d",&y);
            if(y==0){
            login();}
}}

