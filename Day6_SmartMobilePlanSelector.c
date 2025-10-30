#include <stdio.h> 

int main() {
    float du, bc, ec, tc, fb, ed = 0;
    int s, c;
    float discount = 0.0;
    char planName[20];

    printf("Enter total data used (GB): ");
    scanf("%f", &du);

    printf("Are you a student? (1-Yes / 0-No): ");
    scanf("%d", &s);

    printf("Corporate user? (1-Yes / 0-No): ");
    scanf("%d", &c);

    if (du > 100) {
        printf("Excessive Usage – Plan Not Allowed\n");
    } 
    else {
        if (du < 30) {
            bc = 299;
            ec = 50;
            if (du > 30) 
                ed = du - 30;
            else
                ed = 0;
            sprintf(planName, "Silver");
        } 
        else if (du <= 60) {
            bc = 499;
            ec = 40;
            if (du > 60)
                ed = du - 60;
            else
                ed = 0;
            sprintf(planName, "Gold");
        } 
        else {
            bc = 799;
            ec = 30;
            if (du > 60)
                ed = du - 60;
            else
                ed = 0;
            sprintf(planName, "Platinum");
        }

        tc = bc + (ed * ec);

        if (s == 1 && c == 1) { 
            discount = 15;
        } 
        else if (s == 1) {
            discount = 15;
        } 
        else if (c == 1) {
            discount = 10;
        } 
        else {
            discount = 0;
        }

        fb = tc - (tc * discount / 100);

        printf("\nUser Plan Summary:\n");
        printf("Data Used: %.0f GB\n", du);
        printf("Selected Plan: %s\n", planName);
        printf("Base Cost: ₹%.0f\n", bc);
        printf("Extra Data: %.0f GB\n", ed);
        
        if (ed > 0)
            printf("Total (before discount): ₹%.2f\n", tc);

        printf("Discount Applied: %.0f%%\n", discount);
        printf("Final Bill: ₹%.2f\n", fb);
    }

    return 0;
}

