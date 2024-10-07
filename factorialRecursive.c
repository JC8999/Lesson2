#include <stdio.h>
#include <time.h>

int calculateFactorial (int num) {
    // function to calcuate the factorial of a number

    // base case to prevent infinite loops
    if (num == 0) {
        return 1;
    }

    return num * calculateFactorial(num-1);
}

int main () {
    clock_t start, end;
    float timeTaken;
    int num;

    printf("Enter a number to calculate the factorial: ");
    scanf(" %d", &num);

    start = clock();

    int factorial = calculateFactorial(num);
    printf("%d is the factorial of %d\n", factorial, num);

    end = clock();

    timeTaken = ((float)(end-start)) / CLOCKS_PER_SEC;
    printf("Processor time taken: %f seconds\n", timeTaken);

    return 0;
}