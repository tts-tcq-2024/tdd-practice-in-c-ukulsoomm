#inlcude <stdio.h>
#inlcude <string.h>
#include <stdlib.h>

int EmptyStringInput(const char* input){
  if(input == NULL  || input[0] == '\0' ) { 
    return 0;
  }
  return -1; 
}

int InputLessThan1000(const char* input){
  int value = atoi(input);
  return (value < 1000) ? value : 0;
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
        sum += InputLessThan1000(InputSegment);
        InputSegment = strtok(NULL, delimiter);
    }
    free(CopiedInput); 
    return sum;
}
