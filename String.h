#ifndef STRING_H
#define STRING_H

#include <cstddef>
#include <iostream>

class String {
public:
    //--------------------
    // Default constructor
    //--------------------
    String();  

    //----------------
    // STUDENT A
    //----------------
    
    // Copy constructor
    String(const String& other);

    // Methods
    const char* c_str();
    size_t size() const;
    void clear();

    // Operators
    String& operator=(const char c);
    friend String operator+(const String&, const char*);

    //----------------
    // STUDENT B
    //----------------

    // Constructor from C-string
    String(const char* s);

    // Methods
    size_t length() const;
    void resize(size_t n, char c = '\0');

    // Operators
    String& operator=(const String&);
    friend String operator+(const String&, char);

    //----------------
    // STUDENT C
    //----------------

    // Destructor
    ~String();

    // Methods
    std::size_t capacity() const;
    bool empty() const;
    void reserve(size_t n);

    // Operators
    String& operator=(const char* data_);
    friend String operator+(const String& lhs, const String& rhs);

private:
    size_t size_;       // Longueur du string sans le '\0'
    size_t capacity_;   // Capacité mémoire allouée
    char* data_;        // Contenu du string (terminé par '\0')
    static const size_t max_size_; // Taille max pour les tests / allocations
};

#endif

