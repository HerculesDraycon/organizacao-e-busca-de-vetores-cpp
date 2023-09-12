/*ALgoritmo de Busca Binária que recebe um vetor e uma chave como argumentos;
faz uma busca binária no arranjo para encontrar a chave; e retorna sua 
posição no arranjo ou retorna -1 se ela não for encontrada. O vetor 
necessariamente deve estar ordenado.*/

#include <iostream>
using namespace std;

int buscaBinaria(int [], int, int, int);

int main(){

    int x, pos;
    int v[] = {2, 5, 11, 26, 37, 44, 58, 65, 81, 99, 112};

    cout<<"Escolha um numero inteiro."<<endl;
    cin>>x;

    pos = buscaBinaria(v, 0, 10, x);

    if(pos != -1){
        cout<<"Posicao da chave selecionada: "<<pos;
    } else {
        cout<<"A chave selecionada nao se encontra no vetor.";
    }
    return 0;
}

int buscaBinaria(int v[], int ini, int fim, int x){

    int m = (ini+fim)/2;

    if(ini>fim){
        return -1;
    }

    if(v[m] == x){
        return m;
    } else if(v[m] < x){
        return buscaBinaria(v, m+1, fim, x);
    } else {
        return buscaBinaria(v, ini, m-1, x);
    }

}