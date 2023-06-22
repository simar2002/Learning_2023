#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthToDays(int month, int year) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month];
}

int countDays(char* date) {
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    int totalDays = 0;

    for (int y = 1; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        totalDays += monthToDays(m, year);
    }

    totalDays += day;

    return totalDays;
}

int main() {
    char date1[] = "10/04/2015";
    

    printf("Days Elapsed: %d\n", countDays(date1));
    

    return 0;
}