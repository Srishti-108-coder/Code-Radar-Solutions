#include<stdio.h>
int prime(int n);

int main()
{
    int n;
    printf(""); // Add a meaningful message here
    scanf("%d", &n);
    prime(n); // Call the prime function
    return 0;
}

int prime(int n)
{
    int x, c = 0;

    for (x = 1; x <= n; x++) // Initialize x and use a for loop for simplicity
    {
        if (n % x == 0) // Check if x is a divisor of n
            c++;
    }

    if (c == 2) // A number is prime if it has exactly two divisors
        return 1; // Prime
    else
        return 0; // Not prime

    return 0;
}
