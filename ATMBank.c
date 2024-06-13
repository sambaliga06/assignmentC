#include <stdio.h>
#include <stdlib.h>
#define CODE 5613

int main() {

    printf("Enter The Secret PIN \n");
    int pin,choice,minbal=500,cash,bal=1000;
    scanf("%d",&pin);
    if(pin==CODE){
        while(1){
            printf("**************Welcome to ATM Service **************\n1. Check Balance \n2. Withdraw \n3. Deposit \n4. Quit \n");
            printf("*************************************************** \nEnter your choice = ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                        printf("Balance is %d \n",bal);
                    break;
                case 2:
                    printf("Enter the amount to be withdraw : ");
                    scanf("%d",&cash);
                    if(bal<cash )
                        printf("No balance \n",bal);
                    else if((bal-cash)<minbal){
                        printf("Maintain Minimum Balance \n");
                    }
                    else{
                        bal-=cash;
                           printf("Balance is %d \n",bal);
                    }
                break;
                case 3:
                 printf("Enter the amount to be deposited : ");
                    scanf("%d",&cash);
                    
                        bal+=cash;
                           printf("Balance is %d \n",bal);
                break;
                case 4: printf("Thank you \n");
                    exit(0);
                    break;
            }
        }
    }
  else{
        printf("Invalid PIN \n");
  }

    return 0;
}
