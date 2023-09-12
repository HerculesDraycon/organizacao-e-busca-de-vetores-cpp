/*A partir da BubbleSort original, foi criada sua versão aprimorada,
reduzindo o número de comparações a cada passagem, considerando que após 
a primeira passagem, o último elemento já estará ordenado; após a segunda 
passagem, os dois últimos elementos já estarão ordenados; após a terceira 
passagem, os três últimos, e assim sucessivamente. Por fim, foi introduzida
uma forma de truncar o processo assim que o arranjo estiver completamente 
ordenado, evitando passagens desnecessárias.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int vet1[500]); //Prototipo bubbleSort
void bubbleSortMelhor(int vet2[500]); //Prototipo bubbleSortMelhor

int main(){

    srand(time(0));

    int vet1[500], vet2[500];

    for(int i=0; i<500; i++){
        vet1[i] = (1+rand()%100); //criacao de 500 numeros de 1 a 100
    }

    for(int i=0; i<500; i++){
        vet2[i] = vet1[i]; //copiando para ter 2 vetores iguais (desordenados)
    }

    bubbleSort(vet1);
    bubbleSortMelhor(vet2);

    cout<<"Saida de vet1 organizado por bubbleSort:"<<endl;

    for(int i=0; i<500; i++){
        cout<<vet1[i]<<" ";
    }

    cout<<endl<<endl;
    cout<<"Saida de vet2 organizado por bubbleSortMelhor:"<<endl;

    for(int i=0; i<500; i++){
        cout<<vet2[i]<<" ";
    }

    cout<<endl;

    return 0;
}

void bubbleSort(int vet1[500]){

    int change, i, j;

    for(i=0; i<499; i++){
        for(j=0; j<499; j++){

            if(vet1[j] > vet1[j+1]){

                change = vet1[j];
                vet1[j] = vet1[j+1];
                vet1[j+1] = change;

            }

        }
    }

}

void bubbleSortMelhor(int vet2[500]){

    int change, i, j;

    for(i=0; i<499; i++){
        for(j=0; j<500-i-1; j++){

            if(vet2[j] > vet2[j+1]){

                change = vet2[j];
                vet2[j] = vet2[j+1];
                vet2[j+1] = change;

            }

        }
    }

}