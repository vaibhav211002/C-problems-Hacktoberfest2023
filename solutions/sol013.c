
// This code helps to compute and comment that number is prime oddd or neither any of that.

#include <stdio.h>
int main() {
    int num;
    int is_prime = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);



    if (num <= 1) {
        printf("The number is neither prime nor composite.\n");        //This checks for the prime and composite nature. 
    } else if (num == 2) {
        printf("The number is prime, even, and odd.\n");
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0; 
                break;
//exits the loop when it detects the prime
            }
        }

        if (is_prime) {
            printf("The number is prime.\n");
        } else {
            printf("The number is composite.\n");
        }

        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    }

    return 0;
}
