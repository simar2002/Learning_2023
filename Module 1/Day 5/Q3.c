#include <stdio.h>

struct t{
    int hrs;
    int mins;
    int sec;
};

struct t gettDifference(struct t t1, struct t t2) {
    struct t diff;

    int totalSeconds1 = t1.hrs * 3600 + t1.mins * 60 + t1.sec;
    int totalSeconds2 = t2.hrs * 3600 + t2.mins * 60 + t2.sec;
    int difference = totalSeconds1 - totalSeconds2;

    diff.hrs = difference / 3600;
    difference %= 3600;
    diff.mins = difference / 60;
    diff.sec = difference % 60;

    return diff;
}

int main() {
    struct t startt, endt, difference;

    printf("Enter the start time (hrs): ");
    scanf("%d %d %d", &(startt.hrs), &(startt.mins), &(startt.sec));

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endt.hrs), &(endt.mins), &(endt.sec));

    difference = gettDifference(endt, startt);

    printf("t difference: %d hours %d minutes %d seconds\n",
           difference.hrs, difference.mins, difference.sec);

    return 0;
}