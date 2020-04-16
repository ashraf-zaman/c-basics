#include <stdio.h>
int main()
{
    int num;

    printf("Enter your int number : ");
    scanf("%d", &num);

    printf("Your int number is : %d", num);

    getch(); //remove extra lines
    return 0;
}
