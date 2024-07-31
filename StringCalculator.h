#inlcude <string.h>
#include <stdlib.h>

int Add_EmptyStringInput(const char* input){
  if(input == NULL  || input[0] == '\0' ) { 
    return 0;
  }
  return -1; 
}

int Add_InputLessThan1000(int input){
  return (input < 1000) ? input : 0;
}
