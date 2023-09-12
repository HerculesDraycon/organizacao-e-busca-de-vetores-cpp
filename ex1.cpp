/*Algoritmo de Pesquisa Linear que recebe um vetor e uma chave como
argumentos; faz uma pesquisa linear no arranjo para encontrar a chave; e
retorna sua posição no arranjo ou retorna -1 se ela não for encontrada.
Há também um programa que gera 500 números inteiros de forma randômica e 
armazena-os num vetor.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int pesquisaLinear(int v[500], int);

int main(){

    srand(time(0));

    int v[500];
    int i, x, pos;

    for(i=0; i<500; i++){
        v[i] = (1+rand()%500);
    }

    cout<<"Escolha um numero inteiro."<<endl;
    cin>>x;

    cout<<"Vetor gerado:"<<endl;

    for(i=0; i<500; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<endl;

    pos = pesquisaLinear(v, x);

    cout<<"Posicao da chave selecionada: "<<pos;

    return 0;
}

int pesquisaLinear(int v[500], int x){

    for(int i=0; i<500; i++){

        if(v[i] == x){
            return i;
        }

    }
    return -1;
}