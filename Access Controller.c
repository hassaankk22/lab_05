#include<stdio.h>
int main(){
    int permission,status;
    printf("Enter permission : \n");
    scanf("%d", &permission);
    
    if(permission & 4)
    {
        printf("Access Granted : Full control\n");
    }
    else
    {
        if(permission & 1 && permission & 2)
    {
        printf("Access Granted : read and write\n");
    }
    else if(permission & 1)
    {
        printf("Access Granted : read only\n");
    }
    else
    printf("acess denied\n");
    }
    
}