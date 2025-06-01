// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <iostream>
using std::cout;

struct Book{
    const char *title {};
    const char *author {};
    const char *publisher {};
    const char *subject {};
    const char *isbn {};
    short int ddc1 {};
    short int ddc2 {};
    short int publishedDate {};
    short int aquiredDate {};
    short int quantity {};
};


int main() {
    
    Book book1 = {"Happy Family", "Sandra Bullock", "New York Books", "Family Bonding", "167-A5C9", 434, 111, 2020, 2023, 4};

    cout << "Book 1 details --------------------------" << std::endl;
    cout << "Title: " << book1.title << std::endl;
    cout << "Author: " << book1.author << std::endl;
    cout << "Publisher: " << book1.publisher << std::endl;
    cout << "Subject: " << book1.subject << std::endl;
    cout << "ISBN: " << book1.isbn << std::endl;
    cout << "Dewy Decimal: " << book1.ddc1 << " : " << book1.ddc2 << std::endl;
    cout << "Publish Date: " << book1.publishedDate << std::endl;
    cout << "Year Aquired: " << book1.aquiredDate << std::endl;
    cout << "Quantity: " << book1.quantity << std::endl;

}
