#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transactions.h"

char dateValidation(const char *date) {

    //Date validation
        
    if (date[2] != '-' || date[5] != '-' || strlen(date) != 10) {
        printf("\nInvalid date format. Please use MM-DD-YYYY.");
        return 1;
    }

    int month = ((date[0] - '0') * 10) + date[1] - '0';
    int day = ((date[3] - '0') * 10) + date[4] - '0';
    int year = ((date[6] - '0') * 1000) + ((date[7] - '0') * 100) + ((date[8] - '0') * 10) + (date[9] - '0');

    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1900) {
        printf("\nInvalid date. Please enter a valid date in MM-DD-YYYY format.");
        return 1;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        printf("\nInvalid date. The month you entered has only 30 days.");
        return 1;
    } else if (month == 2) {
        int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeapYear && day > 29) {
            printf("\nInvalid date. February in a leap year has only 29 days.");
            return 1;
        } else if (!isLeapYear && day > 28) {
            printf("\nInvalid date. February has only 28 days in a non-leap year.");
            return 1;
        }
    }

    return 0;
}



void addIncome() {
    double income;
    printf("\nEnter income amount: ");
    scanf("%lf", &income);
    // Logic to add income to the system
    printf("\nIncome of %.2f added successfully.", income);
}



void addExpense() {


    double expense;
    printf("\nEnter expense amount: ");
    scanf("%lf", &expense);

    printf("\nEnter expense description:");
    char description[100];
    fgets(description, sizeof(description), stdin); 
    
    char date[11];
    int validationResult = 1;
    
    do {

        printf("\nEnter date of expense (MM-DD-YYYY): ");
        fgets(date, sizeof(date), stdin);

        if (date[strlen(date) - 1] == '\n') {
        date[strlen(date) - 1] = '\0';
        }
         
        validationResult = dateValidation(date);
       
    } while (validationResult != 0);
    
    printf("\nExpense of %.2f added successfully.", expense);

}



void listIncome() {
    // Logic to list income
    printf("\nListing income...");
}



void listExpenses() {
    // Logic to list expenses
    printf("\nListing expenses...");
}