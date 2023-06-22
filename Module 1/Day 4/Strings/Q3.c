#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long calculateTotalSeconds(const char* timeStr) {
    char* token;
    char timeCopy[9];  // Additional buffer to store a copy of the time string

    strcpy(timeCopy, timeStr);  // Make a copy of the time string

    token = strtok(timeCopy, ":");
    unsigned long hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    unsigned long minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    unsigned long seconds = strtoul(token, NULL, 10);

    unsigned long totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    const char* timeStr = "10:12:50";

    unsigned long totalSeconds = calculateTotalSeconds(timeStr);

    printf("Total Seconds: %lu\n", totalSeconds);

    return 0;
}