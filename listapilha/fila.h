#ifndef FILA_H
#define FILA_H
#include <stack>
#include <iostream>

using namespace std;

template <class T>

class Fila
{
private:
    stack<T> stackF;
    stack<T> stackB;
    void print_stack(stack<T>);
public:
    Fila<T>();
    T remove();
    void insert(T);
    void print(void);

};

#endif // FILA_H
