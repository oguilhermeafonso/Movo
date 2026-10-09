#include <stdio.h>
#include <stdlib.h>
#include "transactions.h"

int main() {
  
    
    int choice = 0;

    printf("Financial Manager\n");
    printf("1 - Add Income\n");
    printf("2 - Add Expense\n");
    printf("3 - List Income\n");
    printf("4 - List Expenses\n");
    printf("5 - Exit\n");

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
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
    }


    return 0;


}