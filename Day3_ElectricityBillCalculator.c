//this program is to create a smart electricity bill calculator using if else statements
#include<stdio.h>
int main(){
float tu,c=50,tb;//tu is a variable to take total units as input where as tb is variable for total bill
printf("Enter total units consumed:");
scanf("%f",&tu);
printf("\nElectricity bill summary:");
printf("\nunits consumed:%f\n",tu);
// since the challenge comes up with various conditions so we will use if else statements to check/gothrough multiple conditions 
if (tu>0 && tu<=100) //if the comsumption lies between 0to100 ,thenthis code will run
{
tb=(3*tu+50);
}
else if(tu>100 && tu<=200)//if the consumption lies between 100to200,then this code will run
{
tb=((9*tu/2)+50);
}
else if(tu>200 && tu<=300)//if the consumption lies between 200to300 ,this code will run
{
tb=(6*tu + 50);
}
else//if the consumption is above 300, then this code will run
{tb=(8*tu+50);}
printf("Total Bill (including ₹50 meter charge):%f",tb);

return 0;}
