#include<iostream>



class String {

  public : 
   String() ; //Default ctor
   
  // STUDENT_A

   String (const String& other) ; //Copy ctor
   // Creation d'un nouveau objet à partir de str => Allocation d'une nouvelle zone mémoire de taille 
  // size +1 => Copie des caracteres un par un et ajout de '\0' à la fin 
   const char* c_str();
   size_t size() const ;  

  //Fonction qui retourne le pointeur vers les caractères , Il fait en sorte à ce que la chaine est // toujours terminée par '\0'
  
   void clear();  
   String& operator=(const char c); // prends en paramétre un str , le pointeur , et la liste d'affectation 
   // String operator+(const String&  , const char* )  ; A revoir 

  //Student C 
   // size_t capacity() const;
   bool empty() const;
   void reserve(size_t n); 
  
   ~String();
  private: 
   size_t size_ ; // Longeur du string sans le '\0'
   size_t capacity_ ;
  // Variable qui permet d'allouer de l'espace memoire du string initile plus 1 => /0 == 0 en ASCII 
   char* data_;// Initialisation of the string dans une array contingue terminée pas \0
   static const size_t max_size_; 
  // Variable de classe permettant de fixer l'espace memoire maximale pour allouer les string 
  
}; 
