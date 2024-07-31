#inlcude <string.h>
#include <stdlib.h>

int Add_EmptyStringInput(const char* input){
  if(input == NULL  || input[0] == '\0' ) { 
    return 0;
  }
  return -1; 
}

int Add_InputLessThan1000(const char* input){
  int value = atoi(input);
  return (value < 1000) ? value : 0;
}

