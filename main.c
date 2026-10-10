#include <stdio.h>
#include <stdlib.h>
#include "transactions.h"

int main() {
  
    
    int choice = 0;

    do {
        printf("\nFinancial Manager");
        printf("\n1 - Add Income");
        printf("\n2 - Add Expense");
        printf("\n3 - List Income");
        printf("\n4 - List Expenses");
        printf("\n5 - Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addIncome();
                break;
            case 2:
                addExpense();
                break;
            case 3:
                listIncome();
                break;
            case 4:
                listExpenses();
                break;
            case 5:
                printf("\nExiting the program.");
                return 0;
            default:
                printf("\nInvalid choice. Please try again.");
        }
    } while (choice != 5);


    return 0;


}