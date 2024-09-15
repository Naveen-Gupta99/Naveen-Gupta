#include <stdio.h>

int main() {
    int year;

    // Input the year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year condition
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
