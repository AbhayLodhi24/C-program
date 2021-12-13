#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    
        if (marks > 90)
        {
            printf("student get A grade");
        }
        else if(marks > 80)
        {
            printf("student get B grade");
        }        
       else
        if (marks > 70)
        {
            printf("student get C grade");
        }       
       else
        if (marks > 60)
        {
            printf("student get D grade");
        }       
       else
        if (marks < 60)
        {
            printf("student get F grade");
        }
        else
        printf("Invalid marks");
     
    
    return 0;
}