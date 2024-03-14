#include <stdio.h>

void flipBits(int *num) {
    *num = ~(*num); // Bitwise NOT operation to flip all bits
}

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    printf("Original number: %d\n", num);

    flipBits(&num);

    printf("Number after flipping bits: %d\n", num);

    return 0;
}
/*
Enter a binary number: 10
Original number: 10
Number after flipping bits: -11
*/
