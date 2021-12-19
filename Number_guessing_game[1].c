#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int number, guess,nguess=0;
srand(time(0));
number=rand()%100+1;
    /*printf("The number is %d",number);*/
    
    do{
    printf("Enter a number between 1 to 100\n");
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
    printf("Total number of  guesses is %d \t",nguess);
    return 0;
}