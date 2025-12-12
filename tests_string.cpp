#include "MyString.h"
#include<cstring>


// A string is a null-terminated character array 
int main(){
  char string[55] = "Hello World"; // Initialisation d'un array d'espace mémoire 55
  std::cout<< string << std::endl; // Affichage de la phrase "Hello World"
  
  // Fonction c_string 
  char* string2 = new char[strlen(string)+1];
  std::cout<< string2 << std::endl;
  
  // cstr now contains a c-string copy of str ==>  La fonction c_str renvoie un const char* aux données stockées dans la chaîne et rajoute "/0" à la fin 
  
  
  delete[] string;



}
