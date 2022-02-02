#include<stdio.h>

int authorise();
int recall();

int balance=10000;
int left = 10000;
int authorise(int pin) {
    int  a, choice,  amount,  deposit=0;
    // int * left =&balance; balance=10000,
  printf("Hello! Welcome to our ATM Service\n1.Balance Checking\n2.Cash Withdrawal\n3.Cash Deposition\n4.Exit\n********************************\n");
  printf("\n\n");
  printf("Please proceed with your choice: "); 
   scanf("%d",&a);
  if(a==1)
   {    printf("The Current balance in Rs %d\n",balance);
       recall();
   }
   if(a==2) 
   {
       printf("Insert the amount to be withdrawal: ");
       scanf("%d",&amount);
       if(amount<balance)
      {     if(amount%100==0)
            {   
                 printf("You can collect the cash\n");
               left-=amount;
              printf("The Current balance is %d\n",left);
              balance=left;
                   recall();
             }
           else
           {
               printf("You are requested to insert the amount in multiples of 100");
               recall();
           }
      }
        else
        {     printf("Unsufficient amount");
                recall();
        }
   }
   if(a==3)
   {
       printf("Insert the amount to be deposited:- ");
       scanf("%d",&deposit);
       printf("The balance is %d",balance+deposit);
       balance+=deposit;
       recall();
   }
    if(a==4)
        { printf("We are thankful to you for USING our ATM services!\n\n");
          }
    return 0;
}

int recall(void){
       int choice, pin;
     printf("\n\n");
                    printf("Would you like to have another ATM transaction? ( 1: YES/ 2: NO )\n");
                    scanf("%d",&choice);
                    if(choice==1) 
                    authorise(pin);
                    else
                    if(choice==2)
                    {
                        printf("\n\n");
                        printf("We are thankful to you for USING our ATM services!\n\n");
                        return 0;
                    }
    return 0;
}


int main(){
    int pin=2002, x, cnt=0;
    while (1)
    {
      printf("Enter your secret pin number:\n");
       scanf("%d",&x);
       if(x==pin)
       {break;}
       else
       {    printf("INCORRECT PIN!\n\n");
            cnt++;
            if(cnt==3)
            {printf("You have reached maximum number of attempt"); 
               return 0; }
        }
    }
    authorise( pin);
 
    return 0; 
}