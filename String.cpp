
#include "String.h"

const size_t String::max_size_ = 100;


String::string(){
    data_ = ;
    size_ = 0;
    capacity_ = 10 ;
}

// STUDENT_A 

// C_STR
const char* String::c_str() const {
  return data_; 
}
  
// SIZE

size_t String::String(){
   return size_;
}
  
// CLEAR 
}
void String::clear() {
  data_ = ; 
  size = 0 ;
  capacity_ = 10 ;
}
// Assigns a new value to the string, replacing its current contents.
// Operateur d'assignement => Vider le strinf et y mettre un seul caractére d'un coup 
// OPERATOR=(CHAR)
// The string value is set to a single copy of this character (the string length becomes 1).

// Vide le contenu initiale de string 
// Vérifier s'il y a assez de capacity 
// Ecrire le caractère à l'adresse data[0] et mettre à jour la size 






// OPERATOR+(CONST STRING& , CONST CHAR*) 
// Concatenation d'un caractére à un string 




