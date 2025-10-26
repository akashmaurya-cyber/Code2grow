#include<stdio.h> 
int main() {
    float s1, s2, s3, s4, s5, p, a;
    printf("enter five sub marks:");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    p = ((s1 + s2 + s3 + s4 + s5) / 500) * 100;
    printf("enter the attendance percentage:");
    scanf("%f", &a); 
       if (a >= 90) {
        if (p < 50 && p >= 45)
            p = p + (5.0 / 500) * 100;}  
       if (a > 75) {
        if (p > 90) {
            printf("total percentage: %f\n attendance:%f\nfinal grade:A+\n remarks:excellent\n",p,a);
        }
        else if (p < 90 && p >= 80) {
            printf("total percentage: %f\nattendance: %f\nfinal grade: A\nremarks: very good\n", p,a);
        }
        else if (p < 80 && p >= 70) {   
            printf("total percentage: %f\nattendance: %f\nfinal grade:B\nremarks:good\n", p,a);
        }
        else if (p < 70 && p >= 60) {   
            printf("total percentage: %f\nattendance: %f\nfinal grade:C\nremarks:average\n", p,a);
        }
        else if (p < 60 && p >= 50) {   
            printf("total percentage: %f\nattendance: %f\nfinal grade:D\nremarks:pass\n", p,a);
        }
        else {
            printf("total percentage:%f\nattendance:%f\nfinal grade:f\nremarks:f\n", p,a);
        }
  }  
    return 0;
}
