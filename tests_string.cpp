#include "String.h"
#include<iostream>
#include<string>
#include<cstring>
#include <cassert>

// A string is a null-terminated character array 
int main(){
  String s;
  s = "info 5 "; // Utilisation de l'operateur d'assignement
  String s1;
  s1 = "Salut!!!";
  String X;
  X = "X";
  
  
  // STUDENT_A

  const char* cstr = s.c_str();
  const char* cstr1 = s1.c_str();
  std::cout<< "Le contenu de s est  " << cstr << "et sa taille est " << s.size() << " bytes.\n";
  std::cout<< "Le contenu de s1 est  " << cstr1 << "et sa taille est " << s1.size() << " bytes.\n"; 
  std::cout<< "Test sur la fonction clear "<< std::endl;
 
  std::cout << s.c_str()[0]  << std::endl;
  std::cout << s1.c_str()[0]  << std::endl;
  
  s.clear(); 
  s1.clear();  
  std::cout << s.c_str()[0]  << std::endl;
  std::cout << s1.c_str()[0]  << std::endl;
  std::cout<< "Test sur l'operateur assignement  "<< std::endl;
  if (X.size() == 1 and X.c_str()[0] == 'X' ) {
    std::cout<< "ok "<< std::endl;
  } else {
    std::cout<< "pas bon "<< std::endl;
  }
  

/*
    //-----------
    // Student C
    //-----------
    std::cout << "Student C tests\n";
    {
        
        assert(s.empty());
        std::cout << "default constructor\n";
    }

    {
        String s("hello");
        assert(!s.empty());
        std::cout << "const char* constructor\n";
    }

    {
        String s("abc");
        size_t c = s.capacity();
        s.reserve(c + 10);
        assert(s.capacity() >= c + 10);
        std::cout << "reserve\n";
    }

    {
        String s;
        s = "INSALyon";
        assert(!s.empty());
        std::cout << "operator=(const char*)\n";
    }

    {
        String a("abc");
        String b("efg");
        String c = a + b;
        assert(!c.empty());
        std::cout << "operator+\n";
    }
    std::cout << "tests are verified\n";
    return 0;
*/



}
