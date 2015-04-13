#include "Fila.h"
#include <stack>
#include <iostream>

using namespace std;
template <class T>

Fila<T>::Fila()
{

}
template <class T>
T Fila<T>::remove()
{

    while(!stackF.empty()){
        stackB.push(stackF.top());
        stackF.pop();
    }
    T x =stackB.top();
    stackB.pop();
    while(!stackB.empty()){
        stackF.push(stackB.top());
        stackB.pop();
    }
    return x;
}
template <class T>
void Fila<T>::insert(T e)
{
    stackF.push(e);

}
template <class T>
void Fila<T>::print_stack(stack<T> stackX){
    while(!stackX.empty()){
        cout<<' '<<stackX.top();
        stackX.pop();
    }
    cout<<endl;
}
template <class T>
void Fila<T>::print(void){
    print_stack(stackF);
}
