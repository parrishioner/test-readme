#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

/* Declarations for functions and data types */

int add(int a, int b); // Function declaration for adding two integers

struct Point { // Definition of a Point structure
    int x;
    int y;
};

/* Template definition */

template<typename T>
T max(T a, T b) {
    return (a > b ? a : b);
}

#endif /* EXAMPLE_HPP */
