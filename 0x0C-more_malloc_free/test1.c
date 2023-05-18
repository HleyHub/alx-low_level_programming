#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int num1, num2, mul, ind1, ind2;

    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    for (ind1 = 1; ind1 < argc; ind1++){
        for (ind2 = 0; argv[ind1][ind2] != '\0'; ind2++) {
            if (!isdigit(argv[ind1][ind2])) {
                printf("Error\n");
                exit(98);
            }
        }
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    mul = num1 * num2;

    printf("%d\n", mul);
    return 0;
}
