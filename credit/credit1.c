#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to check if the input string contains only digits
bool isNumeric(const char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

// Function to validate a credit card number using the Luhn algorithm
bool isValidCreditCard(const char* cardNumber) {
    int len = strlen(cardNumber);
    int sum = 0;
    bool alternate = false;

    for (int i = len - 1; i >= 0; i--) {
        int digit = cardNumber[i] - '0';

        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        alternate = !alternate;
    }

    return (sum % 10 == 0);
}

// Function to determine the credit card issuer (Visa, Amex, Mastercard)
void determineCardIssuer(const char* cardNumber) {
    if (strlen(cardNumber) == 15 && (strncmp(cardNumber, "34", 2) == 0 || strncmp(cardNumber, "37", 2) == 0)) {
        printf("American Express (Amex)\n");
    } else if (strlen(cardNumber) == 16 && strncmp(cardNumber, "4", 1) == 0) {
        printf("Visa\n");
    } else if (strlen(cardNumber) == 16 && (strncmp(cardNumber, "5", 1) == 0 || strncmp(cardNumber, "2", 1) == 0)) {
        printf("Mastercard\n");
    } else {
        printf("Unknown issuer\n");
    }
}

int main() {
    char cardNumber[20];

    printf("Enter your credit card number: ");
    scanf("%s", cardNumber);

    if (!isNumeric(cardNumber)) {
        printf("Invalid input. Credit card number should contain only digits.\n");
        return 1;
    }

    if (!isValidCreditCard(cardNumber)) {
        printf("Invalid credit card number.\n");
        return 1;
    }

    determineCardIssuer(cardNumber);

    return 0;
}