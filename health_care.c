#include<stdio.h>
int main(){
    int age, oxygen, bpm;

    printf("Enter Your Age: \n");
    scanf("%d", &age);

    printf("Enter Oxygen Level (%%) : \n");
    scanf("%d", &oxygen);

    printf("Enter Heartbeat(bpn): \n");
    scanf("%d", &bpm);


    if(oxygen<90)
    {
        printf("Immidiate Attention!!!\n");
    }
    else if(bpm>130 || bpm<40)
        {
            printf("Cardiac Alert!!\n");
        }
    else if(age>=65 && oxygen<95)
        {
            printf("High Priority\n");
        }
    else if(age<=5 && bpm>110)
        {
            printf("High Priority\n");
        }
        
    else if(oxygen<97)
    {
        printf("Medium Priority\n");
    }
    else
    printf("Low Priority\n");
}