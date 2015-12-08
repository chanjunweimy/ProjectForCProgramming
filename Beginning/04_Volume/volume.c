#include <stdio.h>

int main()
{
    int length, width, height, volume;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Enter height: ");
    scanf("%d", &height);

    volume = length * width * height;
    printf("Volume = %d\n", volume);

    return 0;
}
