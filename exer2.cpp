#include <iostream>
#include <vector>
using namespace std;

int buscaBinariaIterativa(vector<int>& A, int chave) {
    int esquerda = 0;
    int direita = A.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (A[meio] == chave) {
            return meio;
        } else if (A[meio] < chave) {
            esquerda = meio + 1; 
        } else {
            direita = meio - 1; 
        }
    }

    return -1;
}

int main() {
    vector<int> vetor = {1, 5, 16, 75, 84, 6};
    int chave = 5;

    int indice = buscaBinariaIterativa(vetor, chave);

    if (indice != -1) {
        cout << "Chave " << chave << " encontrada no indice " << indice << endl;
    } else {
        cout << "Chave " << chave << " nao encontrada no vetor." << endl;
    }

    return 0;
}
