#include<stdio.h>
int main(){
    int time, room, light, cooking, motion;

    printf("Enter Room: \n1--Living Room\n2--Bed Room\n3--Kitchen\n");
    scanf("%d", &room);
    printf("Enter time: (0-23)\n");
    scanf("%d", &time);
    printf("Enter Motion: (1/0)\n");
    scanf("%d", &motion);
    printf("Enter Light Level (0-100)\n");
    scanf("%d", &light);

    if(room==3)
    {
        printf("Exhaust Fan: ON \n");
        if((time>=6 && time<=18) && motion ==1)
        {
            printf("Day mode: Lights ON\n");
        }
        else if((time>=18 && time<=23) && motion ==1)
        {
            printf("Eveniing Mode: Dim Lights\n");
        }
        else if(motion==0)
        {
            printf("No Motion!\n");
        }
    }
    else
    {
            if((time>=6 && time<=18) && motion ==1)
        {
            printf("Day mode: Lights ON\n");
        }
        else if((time>=18 && time<=23) && motion ==1)
        {
            printf("Eveniing Mode: Dim Lights\n");
        }
        else if(motion==0)
        {
            printf("No Motion!\n");
        }
    }
}