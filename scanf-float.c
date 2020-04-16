#include <stdio.h>
int main ()
{
    float f;

    printf("Enter your float number : ");
    scanf("%f",&f);

    printf("Your float number is : %.2f", f);

    getch(); //remove extra lines
    return 0;
}
