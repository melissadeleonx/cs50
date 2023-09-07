#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
#define MAX_CONTACTS 100

// Define a structure to represent a contact
struct Contact {
    char name[50];
    char phoneNumber[15];
    char address[100];
};

// Function to add a contact to the phone book
void addContact(struct Contact phoneBook[], int *count) {
    if (*count < MAX_CONTACTS) {
        printf("Enter Name: ");
        scanf("%s", phoneBook[*count].name);
        printf("Enter Phone Number: ");
        scanf("%s", phoneBook[*count].phoneNumber);
        printf("Enter Address: ");
        scanf("%s", phoneBook[*count].address);
        (*count)++;
        printf("Contact added successfully!\n");
    } else {
        printf("Phone book is full!\n");
    }
}

// Function to display all contacts in the phone book
void displayContacts(struct Contact phoneBook[], int count) {
    if (count == 0) {
        printf("Phone book is empty.\n");
    } else {
        printf("Contacts in the phone book:\n");
        for (int i = 0; i < count; i++) {
            printf("Name: %s\n", phoneBook[i].name);
            printf("Phone Number: %s\n", phoneBook[i].phoneNumber);
            printf("Address: %s\n", phoneBook[i].address);
            printf("\n");
        }
    }
}

int main() {
    struct Contact phoneBook[MAX_CONTACTS];
    int contactCount = 0;
    int choice;

    while (1) {
        printf("\nPhone Book Menu:\n");
        printf("1. Add a Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(phoneBook, &contactCount);
                break;
            case 2:
                displayContacts(phoneBook, contactCount);
                break;
            case 3:
                printf("Exiting Phone Book. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}