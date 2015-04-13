#include "fila2.h"
#include <iostream>
#include <stack>

using namespace std;

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
        cout<<' '<<stackX.top();
        stackX.pop();
    }
    cout<<endl;
}


template <class T>
void Fila2<T>::insert(T e)
{
    stackA.push(e);
}

template <class T>
void Fila2<T>::print()
{
    print_stack(stackA);
}

template <class T>
void Fila2<T>::first()
{
    T aux;
    aux=stackA.top();
    stackA.pop();
    if(!stackA.empty()){
        first();
        stackA.push(aux);
    }
    return;

    /*
    if(stackA.size()==1){
        T aux;
        aux=stackA.top();
        return aux;
    }
    else{
        T aux;
        aux=stackA.top();
        stackA.pop();
        if(stackA.size()==1){

            stackA.push(aux);

        }
        return first();
    }
    */

}
/*
4321
3421
3241
3214
*/
template <class T>
void Fila2<T>::remove()
{
    first();
}
