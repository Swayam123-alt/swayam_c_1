#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find primes in range and save them to a file
void find_and_save_primes(int start, int end, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to create file.\n");
        return;
    }

    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);
    printf("Prime numbers between %d and %d have been saved to '%s'.\n", start, end, filename);
}

int main() {
    int start, end;
    char filename[] = "primes.txt";

    // Input range from user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Find primes and save to file
    find_and_save_primes(start, end, filename);

    return 0;
}
