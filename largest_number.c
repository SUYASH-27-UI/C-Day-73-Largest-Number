#include <stdio.h>

int main()
{
    int n, number, largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (i == 1 || number > largest)
        {
            largest = number;
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}
