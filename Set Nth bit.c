#include <stdio.h>

int set_nth_bit(int num, int n) {
 
    int mask = 1 << n;
    
    return num | mask;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to set (0-indexed): ");
    scanf("%d", &n);

    if (n < 0 || n >= sizeof(int) * 8) {
        printf("Invalid bit position.\n");
        return 1;
    }


    int new_num = set_nth_bit(num, n);

    printf("Number after setting the %dth bit: %d\n", n, new_num);

    return 0;
}
/*
Enter a number: 5
Enter the bit position to set (0-indexed): 4
Number after setting the 4th bit: 21
  */
