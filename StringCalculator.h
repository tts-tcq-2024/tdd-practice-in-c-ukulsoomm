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

