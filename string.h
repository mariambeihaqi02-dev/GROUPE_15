#include<iostream>


class MyString {

  public : 
  MyString() ; //Default constructor 
  MyString(char* string) ; // Constructeur avec val comme parametre  
  MyString(const MyString& s);  // Copy constructeur 
  // Creation d'un nouveau objet à partir de str => Allocation d'une nouvelle zone mémoire de taille 
  // size +1 => Copie des caracteres un par un et ajout de '\0' à la fin 
  size_t size(); 
  size_t string();
  size_t capacity();
  static size_t max_size();
  
  //  Destructeur 
  ~MyString();

  // Initialisation des fonctions 
  // STUDENT_A

  MyClass size(const MyClass other) const; 
  MyString c_str(const MyString other) const;
  //Fonction qui retourne le pointeur vers les caractères , Il fait en sorte à ce que la chaine est 
  // toujours terminée par '\0'

  
  void c_str(){

  
  }
  
  void clear(){
  
  }
  
  void operator=(char){
  
  } 
  
  void operator+(const string&, const char*){
  
  }
  
  MyString clear(const MyString other) const;
  //Fonction qui permet d'effacer une chaine de caractere 
  MyString operator=(char);
  MyString operator+(const string&, const char*); 

  //Student C 
  size_t capacity() const;
  bool empty() const;
  void reserve(size_t n); 

  
  private: 
  size_t size_ ;
  // size() 
  // Fonction qui retourne le longeur du string en terme de bytes
  char* string_; // Initialisation of the string dans une array contingue
  
  size_t capacity_ ;
  // Variable qui permet d'allouer de l'espace memoire du string initile plus 1 => /0 == 0 en ASCII 
  static size_t max_size_; 
  // Variable de classe permettant de fixer l'espace memoire maximale pour allouer les string 
  

  

}; 
