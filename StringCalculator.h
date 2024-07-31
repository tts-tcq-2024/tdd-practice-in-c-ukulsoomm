#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>

int EmptyStringInput(const char* input){
   return (input == NULL || input[0] == '\0');
}

int InputLessThan1000(int input) {
    return (input < 1000) ? input : 0;
}

int Check_InputIsNegative(int value){
    if (value<0) {
        throw std::runtime_error("negatives not allowed");
    }
}

void ExtractCustomDelimiter(const char* input, char* delimiter) {
    int i = 2; 
    delimiter[0] = '\0';
    while (input[i] != '\0' && input[i] != '\n') {
        strncat(delimiter, &input[i], 1);
        i++;
    }
}
void HasCustomDelimiter(const char* input, char* delimiter) {
    if (input[0] == '/' && input[1] == '/'){
        ExtractCustomDelimiter(input, delimiter);
    }
    else
         strcpy(delimiter, ",\n");
}

int CalculateSum(const char* input, const char* delimiter){
    int sum = 0;
    char* CopiedInput = strdup(input); 
    char* InputSegment = strtok(CopiedInput, delimiter);
    while (InputSegment != NULL) {
        int Input = atoi(InputSegment);
        Check_InputIsNegative(Input);
        sum += InputLessThan1000(Input);
        InputSegment = strtok(NULL, delimiter);
    }
    free(CopiedInput); 
    return sum;
}

int add(const char* input) {
    char delimiter[20];
    if (EmptyStringInput(input)) {
        return 0;
    }
    HasCustomDelimiter(input, delimiter);
    int sum = CalculateSum(input, delimiter);
    return sum;
}
