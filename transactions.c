#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transactions.h"

void addIncome() {
    double income;
    printf("Enter income amount: ");
    scanf("%lf", &income);
    // Logic to add income to the system
    printf("Income of %.2f added successfully.\n", income);
}

void addExpense() {
    double expense;
    printf("Enter expense amount: ");
    scanf("%lf", &expense);

    printf("Enter expense description: ");
    char description[100];
    fgets(description, sizeof(description), stdin); 
    
    printf("Enter date of expense (MM-DD-YYYY): ");

    char date[11];
    fgets(date, sizeof(date), stdin);

    if (date[strlen(date) - 1] == '\n') {
        date[strlen(date) - 1] = '\0';
    }

    if (date[2] != '-' || date[5] != '-' || strlen(date) != 10) {
        printf("Invalid date format. Please use MM-DD-YYYY.\n");
        return;
    }

    printf("Expense of %.2f added successfully.\n", expense);
}

void listIncome() {
    // Logic to list income
    printf("Listing income...\n");
}

void listExpenses() {
    // Logic to list expenses
    printf("Listing expenses...\n");
}