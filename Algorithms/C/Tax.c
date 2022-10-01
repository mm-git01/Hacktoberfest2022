#include <stdio.h>
#include <math.h>

int main(void)
{
    float n,t,ttotal,total;

    printf("Enter the amount");
    scanf("%f",&n);

    printf("Enter the tax rate");
    scanf("%f", &t);

    ttotal = n / t ;
    total = ttotal + n;
    printf("The Tax is %f",ttotal);
    printf("The total including tax is %f", total);

return 0;
}
