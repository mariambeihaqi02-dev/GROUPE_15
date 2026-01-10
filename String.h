#include<iostream>



class String {

  public : 
   String() ; //Default ctor
  
  //----------------
  // STUDENT A
  //----------------
   
   // Copy Ctor 
   String (const String& other) ; 
   // Methods 
   const char* c_str();
   size_t size() const ;  
   void clear();  
   // Operators
   String& operator=(char ); 
   friend String operator+(const String&, const char* )  ;




  
  //----------------
  // Student C 
  //----------------

  // Destructor 
    ~String(); 
  // Methods 
    std::size_t capacity() const;
    bool empty() const;
    void reserve (size_t n);
  //Operators
    String& operator = (const char* data_);
    friend String operator+(const String& lhs, const String& rhs);



  
  private: 
   size_t size_ ; // Longeur du string sans le '\0'
   size_t capacity_ ;
  // Variable qui permet d'allouer de l'espace memoire du string initiale plus 1 => /0 == 0 en ASCII 
   char* data_;// Initialisation of the string dans une array contingue terminée pas \0
   static const size_t max_size_; 
  // Variable de classe permettant de fixer l'espace memoire maximale pour allouer les string 
  
}; 
