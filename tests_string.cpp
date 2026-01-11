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
    assert(sa.size() == 1) ;
    assert(sa.c_str()[0] == 'H') ;
    std::cout << "operator=(char) OK, contenu : " << sa.c_str() << "\n";

    sa.clear();
    assert(sa.size() == 0);
    std::cout << "clear() OK\n";
    
    string res_a = sa + "ello";
    std::cout << "Taille obtenue : " << res_a.size() << " (Attendu : 5)" << std::endl;
    assert(res_a.size() == 5);
    assert(res_a.c_str()[0] == 'H');
    std::cout << "operator+(str,char) OK, contenu : " << res_a.c_str() << "\n";
    
    assert(res_a.size() == 4);   
    std::cout << "operator+(string, char*) OK, contenu : " << res_a.c_str() << "\n"; 
    
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
 
        // Default and empy()
        string sc;
        assert(sc.empty() == true );
        std::cout << "default constructor et empty() OK\n" << "\n";
         
        // Capacity and reserve()
        string sc2("abc");
        size_t c = sc2.capacity();
        sc2.reserve(c + 10);
        assert(sc2.capacity() >= c + 10);
        //assert(std::strcmp(sc2.c_str(), "abc") == 0);
        std::cout << "reserve() OK\n" << "\n";

        // Operator=(const char*) 
        string sc3;
        sc3 = "INSALyon";
        assert(!sc3.empty());
        std::cout << "operator=(const char*) OK, contenu : " << sc3.c_str() << "\n";
        
        // Operator+(string, string)
        string a("abc");
        string b("efg");
        string d = a + b;
        assert(!d.empty());
        std::cout << "operator+(string,string) OK, contenu : " << d.c_str() << "\n";
    
    std::cout << "\nAll tests passed!\n";
    return 0;
}

