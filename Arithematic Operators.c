1. ADDITION
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int sum = a + b;
    printf("Sum: %d\n", sum);  // Output: Sum: 8
    return 0;
}

2.SUBTRACTION
#include <stdio.h>

int main() {
    int a = 8, b = 3;
    int difference = a - b;
    printf("Difference: %d\n", difference);  // Output: Difference: 5
    return 0;
}

3.MULTIPLICATION
#include <stdio.h>

int main() {
    float a = 4.5, b = 6.2;
    float product = a * b;
    printf("Product: %f\n", product);  // Output: Product: 27.90000
    return 0;
}

4.DIVISION
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float quotient = (float)a / b; // Typecasting to float for precise division
    printf("Quotient: %.2f\n", quotient);  // Output: Quotient: 3.33
    return 0;
}

5.MODULUS
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int remainder = a % b;
    printf("Remainder: %d\n", remainder);  // Output: Remainder: 1
    return 0;
}

6.INCREMENT AND DECREMENT
#include <stdio.h>

int main() {
    int a = 5;
    a++;  // Increment a by 1
    printf("After increment: %d\n", a);  // Output: After increment: 6

    int b = 8;
    b--;  // Decrement b by 1
    printf("After decrement: %d\n", b);  // Output: After decrement: 7

    return 0;
}

  
