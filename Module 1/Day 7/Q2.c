#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpper(FILE* sourceFile, FILE* destinationFile) {
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destinationFile);
    }
}

void convertToLower(FILE* sourceFile, FILE* destinationFile) {
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(tolower(ch), destinationFile);
    }
}

void convertToSentenceCase(FILE* sourceFile, FILE* destinationFile) {
    int isFirstChar = 1;
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (isFirstChar && isalpha(ch)) {
            fputc(toupper(ch), destinationFile);
            isFirstChar = 0;
        } else {
            fputc(tolower(ch), destinationFile);
            if (ch == '.' || ch == '!' || ch == '?') {
                isFirstChar = 1;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char* option = argv[1];
    char* sourceFileName = argv[2];
    char* destinationFileName = argv[3];

    FILE* sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    FILE* destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        convertToUpper(sourceFile, destinationFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLower(sourceFile, destinationFile);
    } else if (strcmp(option, "-s") == 0) {
        convertToSentenceCase(sourceFile, destinationFile);
    } else {
        char ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destinationFile);
        }
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}