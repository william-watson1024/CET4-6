#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cassert>

using namespace std;

// A complex class to demonstrate various features of C++
class Complex {
public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    // Overload the addition operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the multiplication operator
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }

private:
    double real;
    double imag;
};

// A function to demonstrate the use of STL algorithms
void demonstrateSTL() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int v : vec) cout << v << " ";
    cout << endl;

    // Reverse the vector
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (int v : vec) cout << v << " ";
    cout << endl;

    // Calculate the sum of the vector
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of vector: " << sum << endl;
}

// A function to demonstrate the use of lambda expressions
void demonstrateLambda() {
    auto add = [](int a, int b) { return a + b; };
    cout << "Lambda add(3, 4): " << add(3, 4) << endl;
}

// A function to demonstrate the use of smart pointers
void demonstrateSmartPointers() {
    unique_ptr<int> ptr = make_unique<int>(10);
    cout << "Value of unique_ptr: " << *ptr << endl;
}

int main() {
    // Demonstrate the Complex class
    Complex c1(1.0, 2.0), c2(3.0, 4.0);
    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c1 + c2: " << c3 << endl;
    cout << "c1 * c2: " << c4 << endl;

    // Demonstrate STL algorithms
    demonstrateSTL();

    // Demonstrate lambda expressions
    demonstrateLambda();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    return 0;
}