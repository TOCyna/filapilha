#include <iostream>
#include "fila.h"
#include "fila.cpp"
#include "fila2.h"
#include "fila2.cpp"
#include <queue>          // std::queue

using namespace std;


int main()
{
    cout<<"===>>> Teste da fila 1 <<<==="<<endl;
    cout << "Inicio e e e e e Fim\n";
    cout<<"\nPopulando fila1:";
    Fila<int> * fila = new Fila <int> ();
    for(int i=0;i<6;i++) fila->insert(i);
    fila->print();
    cout<<"\nInsere elemento 6 na fila1:";
    fila->insert(6);
    fila->print();
    cout<<"\nRemove e retorna o primeiro da fila1:\n";
    for(int i=0;i<9;i++)cout << fila->remove();
    cout<<"\nfila1 final:";
    fila->print();
    cout<<"\n";

    cout<<"\n\n===>>> Teste da fila 2 <<<==="<<endl;
    cout << "Inicio e e e e e Fim\n";
    Fila2<int>  * fila2 = new Fila2 <int>();
    cout<<"\nPopulando fila2:";
    for(int i=0;i<6;i++) fila2->insert(i);
    fila2->print();
    cout<<"\nInsere elemento 6 na fila2:";
    fila2->insert(6);
    fila2->print();
    cout<<"\nRemovendo da Fila2...\n";
    for(int i=0;i<9;i++)cout << fila2->remove();


    cout<<"\nFila2 final:";
    fila2->print();
    cout<<"\n";


    cout<<"\n\n===>>> Teste da fila 3 (queue) <<<==="<<endl;
    queue<int> fila3;
    cout << "Inicio e e e e e Fim\n";
    cout<<"\nPopulando fila3:";
    for(int i=0;i<6;i++) fila3.push(i);
    //fila2->print();
    cout<<"\nInsere elemento 6 na fila3:";
    fila3.push(6);
    //fila2->print();
    cout<<"\nRemovendo da Fila3...\n";
    for(int i=0;i<9;i++) {
        cout << fila3.front();
        fila3.pop();
    }
    //cout<<"\nFila3 final:";
    //fila2->print();
    cout<<"\n";


    return 0;
}

