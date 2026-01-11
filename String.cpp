#include "String.h"
#include <cstring> // pour memcpy, strlen

const size_t String::max_size_ = 100;

//--------------------
// Default constructor
//--------------------
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
    size_ = 0;
}

// ASSIGNMENT OPERATOR (char)
String& String::operator=(char c) {
    data_[0] = c;
    data_[1] = '\0';
    size_ = 1;
    return *this;
}

// CONCATENATION OPERATOR 
// OPERATOR+(CONST STRING& , CONST CHAR*) 

String operator+(const String& lhs, const char* rhs)  {
// On récupere les tailles de string et char 

   size_t tot_size = lhs.size() + sizeof(rhs) ;
   // On crée un objet de taille tot_size et on lui alloue un espace mémoire + 1 ( avec le '\0' à la fin 
   String res; 
  
   if (res.capacity_ < 10) {
     delete[] res.data_;
     res.data_ = new char[tot_size+1]; 
   } else {
     res.reserve(tot_size);
     // On copie la premiere partie ( lhs )  puis la deuxiéme ( à l'indexe de la taille de lhs ) 
     for ( size_t i = 0 ; i < lhs.size() ; i++) {
       res.data_[i] = lhs.data_[i]; 
     }
     for ( size_t i = 0 ; i < sizeof(rhs) ; i++) {
       res.data_[i+lhs.size()] = rhs[i]; 
     }
     res.size_ = tot_size; 
     res.data_[tot_size] = '\0';
   }
   return res ;
   
} 

//------------
// Student B
//------------

// Constructor from C-string
String::String(const char* s) {
    if (!s) { // nullptr
        size_ = 0;
        capacity_ = 1;
        data_ = new char[capacity_];
        data_[0] = '\0';
        return;
    }

    size_ = 0;
    while (s[size_] != '\0') size_++;

    capacity_ = size_ + 1;
    data_ = new char[capacity_];

    for (size_t i = 0; i < size_; i++) {
        data_[i] = s[i];
    }
    data_[size_] = '\0';
}

// LENGTH
size_t String::length() const {
    return size_;
}

// RESIZE
void String::resize(size_t n, char c) {
    if (n > max_size_) n = max_size_;

    if (n + 1 > capacity_) {
        char* new_data = new char[n + 1];
        memcpy(new_data, data_, size_);
        delete[] data_;
        data_ = new_data;
        capacity_ = n + 1;
    }

    if (n > size_) {
        for (size_t i = size_; i < n; i++)
            data_[i] = c;
    }

    size_ = n;
    data_[size_] = '\0';
}

// ASSIGNMENT OPERATOR (String)
String& String::operator=(const String& other) {
    if (this == &other) {
      return *this;
    } else {
    
      delete[] data_;

      size_ = other.size_;
      capacity_ = other.capacity_;
      data_ = new char[capacity_];
      
      for (size_t i = 0 ; i < size_ ; i++) {
        data_[i] = other.data_[i];
      }
      data_[size_] = '\0';
    }
    return *this;
}

// OPERATOR+(const String&, char)
String operator+(const String& lhs, char c) {
    String result;
    size_t total = lhs.size_ + 1;
    if (total > String::max_size_) total = String::max_size_;

    result.reserve(total);

    size_t i = 0;
    for (; i < lhs.size_ && i < total; i++)
        result.data_[i] = lhs.data_[i];
    if (i < total) {
        result.data_[i] = c;
        i++;
    }

    result.size_ = i;
    result.data_[i] = '\0';
    return result;
}

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
    if (n > max_size_) n = max_size_;
    if (n <= capacity_) return;

    char* new_string = new char[n + 1];
    for (size_t i = 0; i < size_; ++i) {
        new_string[i] = data_[i];
    }
    new_string[size_] = '\0';
    delete[] data_;
    data_ = new_string;
    capacity_ = n;
}

String& String::operator=(const char* s) {
    if (!s) {
        size_ = 0;
        data_[0] = '\0';
        return *this;
    }

    size_t len = 0;
    while (s[len] != '\0' && len < max_size_) len++;

    if (len > capacity_) reserve(len);

    for (size_t i = 0; i < len; i++)
        data_[i] = s[i];

    size_ = len;
    data_[size_] = '\0';
    return *this;
}

String operator+(const String& lhs, const String& rhs) {
    String result;
    size_t total = lhs.size_ + rhs.size_;
    if (total > String::max_size_) total = String::max_size_;

    if (total > result.capacity_) result.reserve(total);

    size_t i = 0;
    for (; i < lhs.size_ && i < total; i++)
        result.data_[i] = lhs.data_[i];

    size_t j = 0;
    for (; j < rhs.size_ && i < total; j++, i++)
        result.data_[i] = rhs.data_[j];

    result.size_ = i;
    result.data_[result.size_] = '\0';
    return result;
}

