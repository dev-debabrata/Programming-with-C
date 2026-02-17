#include <stdio.h>
#include <math.h>
int main(){
    double P, r, t, A, CI;

    printf("Enter Principal Amount: ");
    scanf("%lf", &P);

    printf("Enter Rate of inerest: ");
    scanf("%lf", &r);

    printf("Enter the Time: ");
    scanf("%lf", &t);

    A = P * pow((1 + r / 100), t);
    CI = A - P;

    printf("Compount Interest: %.2lf\n", CI);
    printf("Amount: %.2lf", A);

    return 0;
}
