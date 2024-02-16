#include <stdio.h>
int prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}


int sprime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (prime(i) && prime(num - i)) {
            return 1;         }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (sprime(num)) {
        printf("%d can be expressed as the sum of two prime numbers.\n", num);
    } else {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}
