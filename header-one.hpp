#ifndef EXAMPLE_H
#define EXAMPLE_H

/* Declarations for functions and data types */

int add(int a, int b); // Function declaration for adding two integers

typedef struct {
    int x;
    int y;
} Point; // Definition of a Point structure

/* Macro definition */

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#endif /* EXAMPLE_H */
