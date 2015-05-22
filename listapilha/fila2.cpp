#include "fila2.h"

template <class T>

Fila2<T>::Fila2()
{

}
template <class T>

Fila2<T>::~Fila2()
{

}
template <class T>
void Fila2<T>::print_stack(stack<T> stackX){
    while(!stackX.empty()){
        cout << ' ' << stackX.top();
        stackX.pop();
    }
    cout << endl;
}


template <class T>
void Fila2<T>::insert(T e)
{
    if(!stackA.empty()){
        T aux;
        aux=stackA.top();
        stackA.pop();
        insert(e);
        stackA.push(aux);
    } else
        stackA.push(e);
}

template <class T>
void Fila2<T>::print()
{
    print_stack(stackA);
}

template <class T>
T Fila2<T>::remove()
{
    if(!stackA.empty()) {
        T aux = stackA.top();
        stackA.pop();
        return aux;
    }
    return NULL;
}
