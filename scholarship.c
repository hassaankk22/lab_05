#include<stdio.h>
int main(){
    int income, marks;
    double attendance;

    printf("Enter your Marks:\n");
    scanf("%d", &marks);

    printf("Enter Your Attendance(%%):\n ");
    scanf("%lf", &attendance);

    printf("Enter Your Income:\n");
    scanf("%d" , &income);

    if(marks>50)
    {
        if(attendance>75)
        {
            if(income<80000)
            {
                if(marks>=90 && attendance>=90)
                {
                    printf("Full Scholarship\n");
                }
                else if(marks>=75 && attendance>=85)
                {
                    printf("Half Scholarship\n");
                }
                else
                printf("Quarter Scholarship\n");
            }
            else
            printf("Not eligible -- Income Too High\n");
        }
        else
        printf("Not eligible -- Low Attendance\n");
    }
    else
    printf("Not eligible -- too low marks\n");
}