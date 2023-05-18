#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isNumber(const char *str) {
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    int *num1, *num2, *mul;

    if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2])) {
        printf("Error\n");
        exit(98);
    }

    num1 = (int *)malloc(sizeof(int));
    num2 = (int *)malloc(sizeof(int));
    mul = (int *)malloc(sizeof(int));

    if (num1 == NULL || num2 == NULL || mul == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }

    *num1 = atoi(argv[1]);
    *num2 = atoi(argv[2]);
    *mul = multiply(*num1, *num2);

    printf("%d\n", *mul);

    free(num1);
    free(num2);
    free(mul);

    return 0;
}
