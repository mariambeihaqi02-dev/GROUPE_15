#include "String.h"
#include<iostream>
#include<string>
#include<cstring>
#include <cassert>

// A string is a null-terminated character array 
int main(){
  
  std::string str("Hello World");
  std::string str1("Info5");
  
  // STUDENT_A

  const char* cstr = str.c_str();
  std::cout<< "The c_str of str is " << cstr << std::endl;
  
  std::cout << "The size of str is " << str.size() << " bytes.\n";
  
  const char* cstr1 = str1.c_str();
  std::cout<< "The c_str of str is " << cstr1 << std::endl;
  
  std::cout << "The size of str is " << str1.size() << " bytes.\n";
  
  std::cout << str.c_str()[0]  << std::endl;
  std::cout << str1.c_str()[0]  << std::endl;
  
  str.clear(); 
  str1.clear();  
  // Test de la fonction clear : 
  std::cout << str.c_str()[0]  << std::endl;
  std::cout << str1.c_str()[0]  << std::endl;
  












    //-----------
    // Student C
    //-----------
    std::cout << "Student C tests\n";
    {
        String s;
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




}
