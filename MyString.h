#include<iostream>


class MyString {

  public : 
  MyString() ; //Default constructor 
  MyString(char* string) ; // Constructeur avec val comme parametre  
  MyString(const MyString& s);  // Copy constructeur 
  // Creation d'un nouveau objet à partir de str => Allocation d'une nouvelle zone mémoire de taille 
  // size +1 => Copie des caracteres un par un et ajout de '\0' à la fin 
  
  

  // Initialisation des fonctions 
<<<<<<< HEAD
  // STUDENT A
  // Fonction qui retourne le pointeur vers les caractères , Il fait en sorte à ce que la chaine est 
  // toujours terminée par '\0'
  
  void c_str(){
=======
  //Omar
  size_t capacity() const;
  bool empty() const;
  void reserve(size_t n); 
>>>>>>> 3e6d92f (je déclare mes 3 premières fonction ( capacity,empty,reserve))
  
  }
  
  void clear(){
  
  }
  
  void operator=(char){
  
  } 
  
  void operator+(const string&, const char*){
  
  }
  

  private: 
  size_t size_ ;
  // size() 
  // Fonction qui retourne le longeur du string en terme de bytes
  char* string; // Initialisation of the string dans une array contingue
  
  size_t capacity_ ;
  // Variable qui permet d'allouer de l'espace memoire du string initile plus 1 => /0 == 0 en ASCII 
  static size_t max_size_; 
  // Variable de classe permettant de fixer l'espace memoire maximale pour allouer les string 
  
  //  Destructeur 
  ~MyString();
  

}; 

