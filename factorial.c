#include <stdio.h>
#include <time.h>

int calculateFactorial (int num) {
    // function to calculate the factorial of a number.

    int factorial = 1;

    // handles negative numbers
    if (num < 0) {
        return -1;
    }

    for (int i=1; i <= num; i++) { 
        factorial *= i;
    }

    return factorial;
}

int main () {
    clock_t start, end;
    float timeTaken;
    int num;

    printf("Enter a number to calculate the factorial: ");
    scanf(" %d", &num);

    start = clock();

    int factorial = calculateFactorial(num);
    
    if (factorial == -1) {
        printf("Integer must be a positive number.");
    } else {
        printf("%d is the factorial of %d\n", factorial, num);
    }

    end = clock();

    timeTaken = ((float)(end-start)) / CLOCKS_PER_SEC;
    printf("Processor time taken: %f seconds\n", timeTaken);

    return 0;
}