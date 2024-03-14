#include <stdio.h>
#define size 4
int countLeadingZeros(int num) {
    int count = 0;
    
    
    for (int i = size - 1; i >= 0; i--) {
        if ((num >> i) & 1) // Check if the i-th bit from left is set
            break;
        count++;
    }
    
    return count;
}

int main() {
    int num;
    printf("Enter a number in binary: ");
    scanf("%d", &num);

    int zeros = countLeadingZeros(num);
    printf("Number of leading zeros: %d\n", zeros);

    return 0;
}
/*
Enter a number in binary: 0100
Number of leading zeros: 1
*/
