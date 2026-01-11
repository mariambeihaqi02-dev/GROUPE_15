#include "string.h"
#include <iostream>
#include <cassert>


int main() {

    // ----------------
    // Student A tests
    // ----------------
    std::cout << "Tests Student A\n";
    
    string sa;
    sa = 'H'; // operator=(char)
    assert(sa.size() == 1);
    std::cout << "operator=(char) OK, contenu : " << sa.c_str() << "\n";

    sa.clear();
    assert(sa.size() == 0);
    std::cout << "clear() OK\n";

    sa = 'X';
    assert(sa.c_str()[0] == 'X');
    std::cout << "c_str() OK, contenu : " << sa.c_str() << "\n";
    std::cout << "size() OK, taille : " << sa.size() << "\n";
    
    // int main(){
    string s;
    s = "info 5 "; // Utilisation de l'operateur d'assignement
    string s1;
    s1 = "Salut!!!";
    string X;
    X = "X";
    const char* cstr = s.c_str();
    const char* cstr1 = s1.c_str();
    std::cout<< "Test sur size et c_str "<< std::endl;
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
    
  

    // ----------------
    // Student B tests
    // ----------------
    std::cout << "\nTests Student B\n";

    // Constructor from C-string
    string sb("Bonjour");
    assert(sb.length() == 7);
    std::cout << "Constructor from const char* OK\n";

    // Resize larger
    sb.resize(10, 'x');
    assert(sb.length() == 10);
    std::cout << "Resize larger OK, contenu : " << sb.c_str() << "\n";

    // Resize smaller
    sb.resize(5);
    assert(sb.length() == 5);
    std::cout << "Resize smaller OK, contenu : " << sb.c_str() << "\n";

    // Operator=(const string&)
    string sb2;
    sb2 = sb;
    assert(sb2.length() == sb.length());
    std::cout << "Operator=(const string&) OK, contenu : " << sb2.c_str() << "\n";

    // Operator+(string,char)
    string sb3 = sb + '!';
    assert(sb3.length() == sb.length() + 1);
    std::cout << "Operator+(string,char) OK, contenu : " << sb3.c_str() << "\n";

    // ----------------
    // Student C tests
    // ----------------
    std::cout << "\nTests Student C\n";
        assert(sb.empty());
        std::cout << "default constructor\n";

        string sc;
        assert(sc.empty());
        std::cout << "empty() OK\n";
   
        string sc2("abc");
        size_t c = sc2.capacity();
        sc2.reserve(c + 10);
        assert(sc2.capacity() >= c + 10);
        std::cout << "reserve() OK\n";

        string sc3;
        sc3 = "INSALyon";
        assert(!sc3.empty());
        std::cout << "operator=(const char*) OK, contenu : " << sc3.c_str() << "\n";

        string a("abc");
        string b("efg");
        string d = a + b;
        assert(!d.empty());
        std::cout << "operator+(string,string) OK, contenu : " << d.c_str() << "\n";
    
    std::cout << "\nAll tests passed!\n";
    return 0;
}

