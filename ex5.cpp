/*O algoritmo atual implementa uma busca binária no lugar da linear,
utilizando o vetor ordenado pela função BubbleSort, isto é, no programa,
a chave é lida, cria-se o vetor, ordena-se (com BubbleSort) e por fim, 
o programa busca a chave (com Busca Binaria).*/

#include <iostream>
using namespace std;

void bubbleSort(int vet[10]); //Prototipo bubbleSort
int buscaBinaria(int vet[10], int, int, int);

int main(){

    int vet[10];
    int x, pos;

    cout<<"Escolha dez numeros inteiros de forma aleatoria."<<endl;

    for(int i=0; i<10; i++){
        cin>>vet[i];
    }

    cout<<"Escolha a chave que sera buscada."<<endl;

    cin>>x;

    cout<<"O vetor escolhido foi:"<<endl;

    for(int i=0; i<10; i++){
        cout<<vet[i]<<" ";
    }

    cout<<endl;

    bubbleSort(vet);
    pos = buscaBinaria(vet, 0, 9, x);

    cout<<"Vetor com bubbleSort:"<<endl;

    for(int i=0; i<10; i++){
        cout<<vet[i]<<" ";
    }

    cout<<endl;

    if(pos != -1){
        cout<<"Posicao da chave selecionada: "<<pos;
    } else {
        cout<<"A chave selecionada nao se encontra no vetor.";
    }
    return 0;

    return 0;
}

void bubbleSort(int vet[10]){

    int change, i, j;

    for(i=0; i<9; i++){
        for(j=0; j<9; j++){

            if(vet[j] > vet[j+1]){

                change = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = change;

            }

        }
    }

}

int buscaBinaria(int vet[10], int ini, int fim, int x){

    int m;
    m = (ini+fim)/2;

    if(ini>fim){
        return -1;
    }

    if(vet[m] == x){
        return m;
    } else if(vet[m] < x){
        return buscaBinaria(vet, m+1, fim, x);
    } else {
        return buscaBinaria(vet, ini, m-1, x);
    }

}