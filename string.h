
#include <iostream>

class string {
public:

    string();  // Default ctor

    //----------------
    // STUDENT A
    //----------------
    
    // Copy ctor
    string(const string& other);

    // Methods
    const char* c_str();
    size_t size() const;
    void clear();

    // Operators
    string& operator=(const char c);
    friend string operator+(const string& s, const char* data) ;
//----------------
    // STUDENT B
    //----------------

    // Constructor from C-string
    string(const char* s);
    // Methods
    size_t length() const;
    void resize(size_t n, char c = '\0');

    // Operators
    string& operator=(const string&);
    friend string operator+(const string&, char);
  
  //----------------
  // STUDENT C
  //----------------

  // Destructor 
    ~string(); 
  // Methods 
    std::size_t capacity() const;
    bool empty() const;
    void reserve(size_t n);

    // Operators
    string& operator=(const char* data_);
    friend string operator+(const string& lhs, const string& rhs);

private:
    size_t size_;       // Longueur du string sans le '\0'
    size_t capacity_;   // Capacité mémoire allouée
    char* data_;        // Contenu du string (terminé par '\0')
    static const size_t max_size_; // Taille max pour les tests / allocations
};



