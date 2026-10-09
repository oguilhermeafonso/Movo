#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transactions.h"

void addIncome() {
    double income;
    printf("Enter income amount: \n");
    scanf("%lf", &income);
    // Logic to add income to the system
    printf("Income of %.2f added successfully.\n", income);
}

void addExpense() {
    double expense;
    printf("Enter expense amount: \n");
    scanf("%lf", &expense);

    printf("Enter expense description: \n");
    char description[100];
    fgets(description, sizeof(description), stdin); 
    
    printf("Enter date of expense (MM-DD-YYYY): \n");

    char date[11];
    fgets(date, sizeof(date), stdin);

    if (date[strlen(date) - 1] == '\n') {
        date[strlen(date) - 1] = '\0';
    }

    if (date[2] != '-' || date[5] != '-' || strlen(date) != 10) {
        printf("Invalid date format. Please use MM-DD-YYYY.\n");
        return;
    }

    //Date validation
    int month = ((date[0] - '0') * 10) + date[1] - '0';
    int day = ((date[3] - '0') * 10) + date[4] - '0';
    int year = ((date[6] - '0') * 1000) + ((date[7] - '0') * 100) + ((date[8] - '0') * 10) + (date[9] - '0');

    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1900) {
        printf("Invalid date. Please enter a valid date in MM-DD-YYYY format.\n");
        return;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        printf("Invalid date. The month you entered has only 30 days.\n");
        return;
    } else if (month == 2) {
        int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeapYear && day > 29) {
            printf("Invalid date. February in a leap year has only 29 days.\n");
            return;
        } else if (!isLeapYear && day > 28) {
            printf("Invalid date. February has only 28 days in a non-leap year.\n");
            return;
        }
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