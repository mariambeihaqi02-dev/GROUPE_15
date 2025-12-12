#include<iostream>


class MyString {

  public : 
  MyString() ; //Default constructor 
  MyString(char* string) ; // Constructeur avec val comme parametre  
  Mystring(const Mystring& s);  // Copy constructeur 
  // Creation d'un nouveau objet à partir de str => Allocation d'une nouvelle zone mémoire de taille 
  // size +1 => Copie des caracteres un par un et ajout de '\0' à la fin 
  
  

  // Initialisation des fonctions 
  
  
  

  private: 
  size_t size_ ;
  // size() 
  // Fonction qui retourne le longeur du string en terme de bytes
  char* string; // Initialisation of the string dans une array lié par des pointeurs
  // Fonction qui retourne le pointeur vers les caractères , Il fait en sorte à ce que la chaine est 
  // toujours terminée par '\0'
  size_t capacity_ ;
  
  
  //  Destructeur 
  ~MyString();
  

}; 

