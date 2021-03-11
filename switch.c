#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b, s, choice;
    while (1)
    {
        printf("\n1. Addition");
        printf("\n2. odd-even");
        printf("\n3. Natural number");
        printf("\n4. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers:\n");
            scanf("%d%d", &a, &b);
            s = a + b;
            printf("\nSum is %d\n", s);
            break;
        case 2:
            printf("Enter a number:\n");
            scanf("%d", &a);
            if (a % 2 == 0)
                printf("\nEven number\n");
            else
                printf("\nOdd number");
            break;
        case 3:
            printf("Enter a number:\n");
            scanf("%d", &a);
            for (b = 1; b <= a; b++)
                printf("%d\n", b);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}