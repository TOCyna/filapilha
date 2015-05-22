#include "fila.h"

template <class T>

Fila<T>::Fila()
{

}
template <class T>
T Fila<T>::remove()
{
    if(!stackF.empty()) {
        stackB.push(stackF.top());
        stackF.pop();
        return stackB.top();
    }
    return NULL;
}
template <class T>
void Fila<T>::insert(T e)
{
    while(!stackF.empty()){
        stackB.push(stackF.top());
        stackF.pop();
    }
    stackF.push(e);
    while(!stackB.empty()){
        stackF.push(stackB.top());
        stackB.pop();
    }
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
