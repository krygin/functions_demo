#include <iostream>
#include <vector>

void print(std::vector<int> v);

double sum(double, double);

void multi_2(std::vector<int> &v);

struct Book {
    int pages;
    int year;

    void print() const {
        std::cout << "pages: " << pages << ";" << "year:" << year << ";" << std::endl;
    }
};

void incrementYear(Book &b) {
    b.year++;
}

void incrementYear(Book *b) {
    b->year++;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    multi_2(v);
    print(v);


    Book *b = new Book{20, 2004};

    Book c = Book{45, 1999};
    incrementYear(b);
    incrementYear(c);

    b->print();
    c.print();


    delete b;

    return 0;
}


int foo(int a, double b, char *c, int d) {
    return 0;
}

double sum(double a, double b) {
    double c = a + b;
    return c;
}

void multi_2(std::vector<int> &v) {
    for (int &e: v) {
        e *= 2;
    }
//    for (int i = 0; i < v.size(); i++) {
//        v[i]*=2;
//    }
//    print(v);
}

void print(std::vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << "v[" << i << "]=" << v[i] << std::endl;
    }
}
