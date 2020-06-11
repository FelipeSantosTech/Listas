#include <iostream>
using namespace std;
void fazListaVazia(int *posLivre);
void insere(int lista[], int *posLivre, int numero);
void imprime(int lista[], int posLivre, int size);
bool retira(int lista[], int *posLivre, int numero);


int main(int argc, char const *argv[])
{
    int lista[6], posLivre;
    fazListaVazia(&posLivre);


    return 0;
}
void fazListaVazia(int *posLivre){
    *posLivre = 0;
}
void insere(int lista[], int *posLivre, int numero, int size){
   /* if (*posLivre < size){
    int aux = *posLivre;
    lista[aux] = numero;
    *posLivre++;
    }*/
    int aux ;
    int i = 0;
    
    if(*posLivre + 1  < size) {
            while (i < *posLivre && numero > lista[i]){
            i++;
        }
    }

    
    
}
bool retira(int lista[], int *posLivre, int numero){
    int aux = *posLivre, i = 0;
    bool achou = false;
    while(!achou && i < aux){
        if ( numero == lista[i]){
            achou = true;
        }
        i++;
    }
    if (achou){
        for (int j = i+1; j < aux; j++)
        {
            lista[j-1] = lista[j];
        }
        *posLivre--;
        aux = *posLivre; 
        cout<<"Numero retirado\n";
        imprime(lista, );
    } else {
        cout<<"Nomero nao encontrado\n";
    }
} 
void imprime(int lista[], int posLivre, int size){
    for (size_t i = 0; i < posLivre && i < size; i++)
    {
        cout<<lista[i]<<" | ";
    }
    cout<<endl;
    
}

