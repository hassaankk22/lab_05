#include<stdio.h>
int main(){
    int permission;

    printf("Enter Permission Code: \n");
    scanf("%d" , &permission);

    if(permission & 16)
        printf("Full access: admin\n");
    else if((permission&8) && (permission&2) )
    printf("Access : delete  and write\n");
    else if((permission&4) && (permission&2) )
    printf("Access : execute Only\n");
    else if((permission& 1) && !(permission&2) && !(permission&4) )
    printf("Access : execute Only\n");
    else if((permission&1) && (permission&2) && (permission & 4))
    printf("Access: Read Only\n");
    else if(!(permission&31))
    printf("Access Denied\n");
    else
    printf("Custom permissions\n");

    printf("Permissions Detected:\n");
    if(permission&1)
    printf("Read\n");
    if(permission&2)
    printf("Write\n");
    if(permission&4)
    printf("Execute\n");
    if(permission&8)
    printf("Delete\n");
    if(permission&16)
    printf("Admin\n");
}