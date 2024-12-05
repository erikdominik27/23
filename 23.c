#include <stdio.h>

int percalc(int length, int width);

int main()
{
    int length, width;
    printf("Please enter a length: ");
    scanf("%d", &length);
    printf("Please enter a width: ");
    scanf("%d", &width);
    printf("The perimeter of the rectangle is: %d", percalc(length, width));

}

int percalc(int length, int width)
{
    return 2 * (length + width);
}