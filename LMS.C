#include<stdio.h>

void addbook();
void issuebook();
void returnbook();
void viewbooks();
void searchstudent();
void viewstudents();
void addstudent();

int main() {
    int c;

    printf("Wecome to Library Management System!\n");
    printf("MAIN MENU\n");
    printf("1. Add book\n");
    printf("2. Issue a book\n");
    printf("3. Return book\n");
    printf("4. View books\n");
    printf("5. Search students\n");
    printf("6. View students\n");
    printf("7. Add student\n");
    printf("0. Exit\n");

    printf("Enter a choice");
    scanf("%d", &c);

    switch(c) {
        case 0:
        printf("Are you sure you want to exit?");
        break;

        case 1:
        addbook();
        break;

        case 2:
        issuebook();
        break;

        case 3:
        returnbook();
        break;

        case 4:
        viewbooks();
        break;

        case 5:
        searchstudent();
        break;

        case 6:
        viewstudents();
        break;

        case 7:
        addstudent();
        break;

        default:
        printf("Invalis choice! Please enter a valid choice.");
    }
    return 0;
}

