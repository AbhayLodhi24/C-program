// PROJECT ON NUMBER GUESSING GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int again(int ans, int sum , char name[]){
    
    int number,  guess, nguess=0, range;
     printf("Choose range of number upto which you wanna play\n Enter 10 for between 1 to 10\n Enter 50 for between 1 to 50\n Enter 100 for between 1 to 100\n");
    scanf("%d",&range);
     number=rand()%range+1;
        if (ans== sum)
    {
        do{
        printf("Enter a number between 1 to %d\n", range);
        scanf("%d",&guess);
        if(guess<number)
        {printf("Higher number please\n");
        nguess++;}
        if(guess>number)
        {printf("Lower number please\n");
        nguess++;}
        if(guess==number)
        {nguess++;
        break;
        }
        }while(number!=guess);

         printf("You %s guessed the number correctly in %d attempts \n", name, nguess);
         
         if(nguess<=5)
            printf("EXCELLENT\n*****");
         
         if(nguess>10 && nguess<=15)
            printf("GOOD\n***");
         
         if(nguess>5 && nguess<=10)
            printf("VERY GOOD\n****");
         
         if(nguess>15 && nguess<=20)
            printf("AVERAGE\n **");  

         if(nguess>20){ 
             printf("POOR \n");
             printf("*");
             }
    }
return 0;
}


int main(){
    int number ,n1 ,n2, n3, n4 ,sum=0,ans_1, ans_2;
    char name[50];
    srand(time(0));
    // number=(rand()%100)+1;
    /*printf("The number is %d",number);*/

    printf("Welcome! to the number guessing game\n ");
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("Please solve simple sum problem to proceed\n");
    // THIS IS LIKE CAPTCHA TO TEST USER BEFORE BEGIN THE GAME
    n1=(rand()%10)+1;
    n2=(rand()%10)+1;
    sum = n1+n2;
    printf("%d+%d= ", n1,n2);
    scanf("%d",&ans_1);
   
    while(1)
    { 
      if(sum==ans_1)
            { again( ans_1, sum , name);
                break;
            }
        else{   
                printf("Try again\n");
                n3=(rand()%10)+1;
                n4=(rand()%10)+1;

                printf("%d+%d= ", n3,n4);
                scanf("%d",&ans_2);
                sum = n3+n4;
                if(sum==ans_2)
                { again( ans_2, sum, name);
                    break; }
            }
    }   
    return 0;}
