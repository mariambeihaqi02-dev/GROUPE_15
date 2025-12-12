#include "MyString.h"
#include<cstring>

// A string is a null-terminated character array 
int main(){
  char string = "Hello World";
  std::cout<< string << std::endl; // Affichage de la phrase 
  
  // Fonction c_string 
  char* string2 = new char[strlen(string)+1];
  
  // cstr now contains a c-string copy of str ==>  La fonction c_str renvoie un const char* aux données stockées dans la chaîne.
  
  delete[] string;



}
