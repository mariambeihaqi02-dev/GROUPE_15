
#include "String.h"

const size_t String::max_size_ = 100;

//Default ctor 
String::String(){
    size_ = 0;
    capacity_ = 10 ;
    data_ = new char[capacity_];
    data_[0] = '\0';
}

//------------
// Student A 
//------------


// C_STR
const char* String::c_str() {
  return data_; 
}
// SIZE
size_t String::size() const { 
   return size_;
}
// CLEAR 
void String::clear() {
  data_[0] = '\0'; 
}
// ASSIGNEMENT OPERATOR

String& String::operator=(char c ) {  
  data_[0] = c;
  data_[1] = '\0';
  size_ = 1; 
  return *this ; // On renvoie l'objet modifiée 
}

/*
String& String::operator=(const char c ) { 

  // Vide le contenu initiale de string 
  data_[0] = '\0'
  // Vérifier s'il y a assez de capacity 
  if capacity_ > c.size_(){
  // Ecrire le caractère à l'adresse data[0]  
    data_[0] = c ; 
  // Mettre à jour la size
    size_ = 1 
  }
*/

// OPERATOR+(CONST STRING& , CONST CHAR*) 
// Concatenation d'un caractére à un string


//String operator+(const String&, const char* )  {
// On récupere les tailles de string et char 
// On crée un objet local et on lui alloue de l'éspace mémoire 
// On copie la premiere partie puis la deuxiéme ( à l'indexe de la taille du string ) 
// Ajouter le '\0' à la fin 
// On renvoie une variable resultat 




//------------
// Student C 
//------------

String::~String() {
    delete[] data_;
}

size_t String::capacity() const {
    return capacity_;
}

bool String::empty() const {
    return size_ == 0;
}


void String::reserve(std::size_t n) {
    if (n > max_size_) {
        n=max_size_;
    }
    if (n <=capacity_) {
        return;
    }
    char* new_string_ = new char[n + 1];
    for (std::size_t i = 0; i < size_; ++i) {
        new_string_[i] = data_[i];
    }
    new_string_[size_] = '\0';
    delete[] data_;
    data_ = new_string_;
    capacity_ = n;
}




String& String::operator=(const char* s) {

    if (s == nullptr) {
        size_ = 0;
        data_[0] ='\0';
        return *this; 
    }

    std::size_t len = 0;
    while (s[len]!= '\0' && len < 100) {
        len++;
    } 

    if (len > capacity_) {
        reserve(len);
    }

    for (std::size_t i = 0; i < len; i++) {
        data_[i] = s[i];
    }    
    size_=len;
    data_[size_]='\0';
    return *this;
}



String operator+(const String& lhs, const String& rhs) {
    String resultat; 
    std::size_t total = lhs.size_ + rhs.size_;
    if (total > 100) {
        total = 100;
    }
    
    if (total > resultat.capacity_) {
        resultat.reserve(total);
    }

    std::size_t i = 0;
    
    while (i < lhs.size_ && i < total) {
        resultat.data_[i] = lhs.data_[i];
        i++;
    }
    std::size_t  j = 0;
    while (j < rhs.size_ && i < total) {
        resultat.data_[i] = rhs.data_[j];
        i++;
        j++;
    }
    resultat.size_ = i;
    resultat.data_[ resultat.size_] = '\0';

    return resultat;
}


