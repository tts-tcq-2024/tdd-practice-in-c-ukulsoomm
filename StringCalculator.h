int Add_EmptyStringInput(const char* input){
  if(input == NULL  || input[0] == '\0' ) { 
    return 0;
  }
  return -1; 
}

int Add_GreaterThan1000Input(const char* input){
  if(input > 1000){
    return input;
  }
  return 0;
}
