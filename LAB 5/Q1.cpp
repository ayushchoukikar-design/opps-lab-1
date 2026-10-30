// A digital library platform requires a module to process catalog listings for physical books and digital e-books while reusing core formatting routines.
#include <iostream>
using namespace std;

class Library {
public:
    void formatCatalog() {
        cout << "Formatting library catalog..." << endl;
    }
};

class Book : public Library {
public:
    void displayBook() {
        cout << "Physical Book: C++ Programming" << endl;
    }
};

int main() {
    Book b;

    b.formatCatalog();
    b.displayBook();

    return 0;
}