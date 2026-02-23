#include <stdio.h>

int main() {
    float balance = 1000.00;
    float amount;
    int choice;
    int transactions_limit = 5;
    int i;

    printf("Welcome to the C Banking Simulator!\n");
    printf("Initial Balance: $%.2f\n", balance);

    for (i = 1; i <= transactions_limit; i++) {
        printf("\n--- Transaction %d of %d ---\n", i, transactions_limit);
        
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("Enter choice: ");

        // Check if input is a valid number
        if (scanf("%d", &choice) != 1) {
            printf("Error: Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear bad input
            i--; 
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter deposit amount: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Success! New balance: $%.2f\n", balance);
                } else {
                    printf("Error: Amount must be positive.\n");
                    i--;
                }
                break;

            case 2:
                printf("Enter withdrawal amount: $");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Error: Insufficient funds! You only have $%.2f\n", balance);
                } else if (amount > 0) {
                    balance -= amount;
                    printf("Success! New balance: $%.2f\n", balance);
                } else {
                    printf("Error: Invalid amount.\n");
                    i--;
                }
                break;

            case 3:
                printf("Current Balance: $%.2f\n", balance);
                break;

            default:
                printf("Error: Please choose 1, 2, or 3.\n");
                i--;
                break;
        }
    }

    printf("\n--- Summary ---\n");
    printf("Final Balance: $%.2f\n", balance);
    printf("Thank you for using our bank!\n");

    return 0;
}