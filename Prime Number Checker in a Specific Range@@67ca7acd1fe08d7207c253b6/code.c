#include<stdio.h>
#include<math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) // Numbers less than or equal to 1 are not prime
        return 0;

    for (int i = 2; i <= sqrt(n); i++) { // Check divisors up to square root of n
        if (n % i == 0) // If divisible by i, it's not prime
            return 0;
    }
    return 1; // If no divisors found, it's prime
}

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    
    if (isPrime(num)) // Call the function and check its return value
        printf("1");
    else
        printf("0");

    return 0;
}
