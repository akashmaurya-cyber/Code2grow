#include<stdio.h>
int main(){
    int c;
    float bal=10000,amt,bns;
    do{
        printf("\n1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\nEnter choice: ");
        scanf("%d",&c);
        if(c==1){
            printf("Enter amt to deposit: ");
            scanf("%f",&amt);
            if(amt>25000){
                bns=amt*0.01;
                amt=amt+bns;
                printf("Bonus of ₹%.0f added!\n",bns);
            }
            bal=bal+amt;
            bal=bal-5;
            printf("Service charge ₹5 applied.\nUpdated Balance: ₹%.0f\n",bal);
        }
        else if(c==2){
            printf("Enter amt to withdraw: ");
            scanf("%f",&amt);
            if(amt>bal){
                printf("Insufficient balance!\n");
            }
            else{
                bal=bal-amt;
                bal=bal-5;
                printf("Service charge ₹5 applied.\nUpdated Balance: ₹%.0f\n",bal);
            }
        }
        else if(c==3){
            printf("Current Balance: ₹%.0f\n",bal);
        }
        else if(c==4){
            printf("Thank you for banking with us!\n");
        }
        else{
            printf("Invalid choice!\n");
        }
    }while(c!=4);
    return 0;
}
