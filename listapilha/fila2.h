#ifndef FILA2_H
#define FILA2_H
#include <stack>

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
    void remove();
    void insert(T);
    void print(void);
    void first();
};

#endif // FILA2_H
