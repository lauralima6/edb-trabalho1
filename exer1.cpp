#include <iostream>
#include <vector>
using namespace std;

int buscaSequencialRecursiva(vector<int>& A, int X, int indice) {
    if (indice >= A.size()) { 
        return -1;
    }

    if (A[indice] == X) { 
        return indice;
    }

    return buscaSequencialRecursiva(A, X, indice + 1);
}

int main() {
    vector<int> vetor = {1, 9, 8, 10, 21};
    int valor = 9;
    int indice = buscaSequencialRecursiva(vetor, valor, 0);
    
    if (indice != -1) {
        cout << "Valor " << valor << " encontrado no índice " << indice << endl;
    } else {
        cout << "Valor " << valor << " não encontrado no vetor." << endl;
    }

    return 0;
}
