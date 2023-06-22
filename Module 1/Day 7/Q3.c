#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

void extractLines(FILE* file, struct LogEntry logEntries[], int* numLines) {
    char line[100];
    *numLines = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &(logEntries[*numLines].entryNo),
               logEntries[*numLines].sensorNo, &(logEntries[*numLines].temperature),
               &(logEntries[*numLines].humidity), &(logEntries[*numLines].light),
               logEntries[*numLines].time);
        (*numLines)++;
    }
}

void displayLogEntries(struct LogEntry logEntries[], int numLines) {
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Time\n");
    for (int i = 0; i < numLines; i++) {
        printf("%-8d %-9s %-12.2f %-9d %-6d %-s\n", logEntries[i].entryNo,
               logEntries[i].sensorNo, logEntries[i].temperature, logEntries[i].humidity,
               logEntries[i].light, logEntries[i].time);
    }
}

int main() {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    struct LogEntry logEntries[MAX_LINES];
    int numLines = 0;

    extractLines(file, logEntries, &numLines);

    displayLogEntries(logEntries, numLines);

    fclose(file);

    return 0;
}