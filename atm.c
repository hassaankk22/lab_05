#include<stdio.h>
int main(){
    int pin, balance, withdraw, card, valid_pin;
    printf("Enter Your Pin: \n");
    scanf("%d", &pin);
    printf("Enter Withdrawal Amount: \n");
    scanf("%d", &withdraw);
    printf("Is Pin Valid?  1--Yes 2--No \n");
    scanf("%d", &valid_pin);
    printf("Is your Account Blocked?  1--yes 2--no \n");
    scanf("%d", &card);
    
    balance = 50000;
    if(card == 2)
    {
        if(valid_pin == 1)  
        {
            if(withdraw<=0)
            {
                printf("Invalid Amount\n");
            }
            else if(withdraw > balance)
            {
                printf("Insufficient Balance\n");
            }
            else if(withdraw>25000)
            {
                printf("Daily Limit Exceed\n");
            }
            else if(balance-withdraw<1000)
            {
                printf("Minimum Balance Must Be Maintained\n");
            }
            else
            {
                printf("Transaction is being processed!\n ");
                int notes_2000, notes_500, notes_100;                  
                notes_2000 = withdraw / 2000;
                notes_500 = (withdraw%2000) /500;
                notes_100 = (withdraw%500) /100;
                
                printf("New Balance: %d\n" , balance-withdraw);
                printf("2000 Notees = %d\n", notes_2000);
                printf("500 Notees = %d\n", notes_500);
                printf("100 Notees = %d\n", notes_100);
                
                printf("Please Collect Your Cash!\n");
            }
        }
        else
        printf("Inavlid Pin\n");
    }
    else
    printf("Card Blocked\n");                          
}