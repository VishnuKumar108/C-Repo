#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sum_of_divisors(int num) {
    int sum = 1;  // Start with 1 as a proper divisor for any number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

int main() {
    int N, M;
    
    // Reading the input values for N and M
    scanf("%d", &N);
    scanf("%d", &M);
    
    // Check if sum of divisors of N is equal to M and sum of divisors of M is equal to N
    if (sum_of_divisors(N) == M && sum_of_divisors(M) == N) {
        printf("Amicable\n");
    } else {
        printf("Not Amicable\n");
    }

    return 0;
}
