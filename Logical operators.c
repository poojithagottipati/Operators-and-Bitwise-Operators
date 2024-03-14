1. Logical AND(&&)
  #include <stdio.h>

int main() {
    int a = 5, b = 3, c = 7;
    if (a > b && a < c) {
        printf("a is between b and c\n");  // Output: a is between b and c
    }
    return 0;
}
2. Logical OR(||)
#include <stdio.h>

int main() {
    int age = 25;
    if (age < 18 || age > 60) {
        printf("You are either too young or too old\n");  // Output: You are either too young or too old
    }
    return 0;
}
3. Logical NOT (!)
  #include <stdio.h>

int main() {
    int flag = 0;
    if (!flag) {
        printf("flag is false\n");  // Output: flag is false
    }
    return 0;
}

