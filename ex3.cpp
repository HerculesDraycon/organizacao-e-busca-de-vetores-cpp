/*Algoritmo BubbleSort que ordena os elementos de um vetor. Inicialmente,
com o algoritmo original, executando n-1 passagens, comparando n-1 pares de
elementos em cada passagem.*/

#include <iostream>

using namespace std;
const int size = 10;

void bubbleSort(int list[size]);

int main(){

    int i;
    int list[size];

    cout<<"Escolha dez numeros inteiros de forma aleatoria."<<endl;

    for(i=0; i<size; i++){
        cin>>list[i];
    }

    bubbleSort(list);

    cout<<"Lista com bubbleSort:"<<endl;

    for(i=0; i<size; i++){
        cout<<list[i]<<" ";
    }
    cout<<endl;

    return 0;
}

void bubbleSort(int  list[size]){

    int change, i, j;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1; j++){

            if(list[j] > list[j+1]){

                change = list[j];
                list[j] = list[j+1];
                list[j+1] = change;

            }

        }
    }

}