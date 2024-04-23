#include <iostream>
#include <vector>
using namespace std;

bool vetorOrdenado(vector<int>& A) {
    int tamanho = A.size();
    for (int i = 0; i < tamanho - 1; i++) {
        if (A[i] > A[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    vector<int> vetor1 = {8, 12, 25, 40, 5};

    if (vetorOrdenado(vetor1)) {
        cout << "Vetor ordenado crescentemente" << endl;
    } else {
        cout << "Vetor não ordenado crescentemente" << endl;
    }

    return 0;
}
