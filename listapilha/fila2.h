#ifndef FILA2_H
#define FILA2_H
#include <stack>
#include <iostream>

using namespace std;

template <class T>

class Fila2
{
private:
    stack<T> stackA;
    void print_stack(stack<T>);
public:
    Fila2();
    ~Fila2();
    T remove();
    void insert(T);
    void print(void);
    void first();
};

#endif // FILA2_H
