#include <iostream>
#include "Fila.h"
#include "Fila.cpp"
#include "fila2.h"
#include "fila2.cpp"

using namespace std;


int main()
{
   cout<<"===>>> Teste da fila 1 <<<==="<<endl;
   cout << "Fim e e e e e Inicio\n";
   cout<<"\nPopulando fila1:";
   Fila<int> * fila = new Fila <int> ();
   for(int i=0;i<6;i++) fila->insert(i);
   fila->print();
   cout<<"\nInsere elemento 6 na fila1:";
   fila->insert(6);
   fila->print();
   cout<<"\nRemove e retorna o primeiro da fila1:";
   int x= fila->remove();
   cout<<x<<endl;
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
   cout << fila2->remove();
   cout << fila2->remove();
   cout << fila2->remove();
   cout << fila2->remove();
   cout<<"\nFila2 final:";
   fila2->print();
   cout<<"\n";

   return 0;
}

