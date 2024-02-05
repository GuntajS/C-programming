/*#include <stdio.h>

int main()
{
    int pin = 1234; // ATM PIN
    int balance = 5000; // Account balance
    int withdraw; // Withdraw amount
    int choice; // User input

    // Welcome message
    printf("Welcome to the ATM machine\n");

    // Prompt for PIN
    printf("Please enter your PIN: ");
    scanf("%d", &pin);

    // Check PIN
    if (pin != 1234)
    {
        printf("Invalid PIN\n");
        return 0;
    }

    // Display menu
    printf("1. Check balance\n");
    printf("2. Withdraw money\n");
    printf("3. Exit\n");

    // Prompt for choice
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    // Process choice
    switch (choice)
    {
        case 1:
            printf("Your balance is %d\n", balance);
            break;

        case 2:
            // Prompt for withdraw amount
            printf("Please enter the amount to withdraw: ");
            scanf("%d", &withdraw);

            // Check balance
            if (withdraw > balance)
            {
                printf("Insufficient balance\n");
                break;
            }

            // Update balance
            balance -= withdraw;

            // Display new balance
            printf("Your new balance is %d\n", balance);
            break;

        case 3:
            printf("Thank you for using the ATM machine\n");
            return 0;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
*/