#include "string.h"
#include<iostream>
#include<string>
#include<cstring>


// A string is a null-terminated character array 
int main(){
  String str ;
  std::string str("Hello World");
  
  // STUDENT_A
  String::
  const char* cstr = str.c_str();
  std::cout<< "The c_str of " << str << " is " << cstr << std::endl;
  
  std::cout << "The size of " << str << " is " << str.size() << " bytes.\n";
  
  str.clear();  
  
  delete[] cstr;

}
