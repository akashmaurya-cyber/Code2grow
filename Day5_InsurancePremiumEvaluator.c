#include <stdio.h>
int main() {
    int a, h;
    float p;
    char g;
    printf("Enter age: ");
    scanf("%d", &a);
    printf("Enter gender (M/F): ");
    scanf(" %c", &g);
     printf("Health condition (1-Healthy / 0-Unhealthy): ");
    scanf("%d", &h);
    printf("\nCustomer Details:\n");
    printf("Age: %d\n", a);
    printf("Gender: %c\n", g);
    printf("Health: %s\n", (h == 1) ? "Healthy" : "Unhealthy");    
    if (a < 25) {
        if (h == 1)
            p = 5000;
        else
            p = 2; 
    }
    else if (a >= 25 && a <= 40) {
        if (h == 1)
            p = 7000;
        else
            p = 9500;
    }
    else if (a >= 41 && a <= 60) {
        if (h == 1)
            p = 10000;
        else
            p = 13000;
    }
    else if (a > 60) {
        if (h == 1)
            p = 15000;
        else
            p = 2; 
    }
    if (p == 2) {
        printf("Status: Not Eligible for Insurance\n");
        return 0;
    }    
    if (g == 'F' || g == 'f')
        p = p * 0.9;

    printf("Final Premium: ₹%.2f\n", p);
    return 0;
}

