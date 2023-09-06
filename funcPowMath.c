#include <stdio.h>
#include <math.h>

int main(){
    int base, exponent, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    result = pow(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}