#include "String.h"
#include<iostream>
#include<string>
#include<cstring>


// A string is a null-terminated character array 
int main(){
  
  std::string str("Hello World");
  std::string str1("Info5");
  
  // STUDENT_A

  const char* cstr = str.c_str();
  std::cout<< "The c_str of str is " << cstr << std::endl;
  
  std::cout << "The size of str is " << str.size() << " bytes.\n";
  
  const char* cstr1 = str1.c_str();
  std::cout<< "The c_str of str is " << cstr1 << std::endl;
  
  std::cout << "The size of str is " << str1.size() << " bytes.\n";
  
  std::cout << str.c_str()[0]  << std::endl;
  std::cout << str1.c_str()[0]  << std::endl;
  
  str.clear(); 
  str1.clear();  
  // Test de la fonction clear : 
  std::cout << str.c_str()[0]  << std::endl;
  std::cout << str1.c_str()[0]  << std::endl;
  

}
