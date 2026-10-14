#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void popularVetor(vector<int>& v, int qtd, int inicio, int fim) {
    for (int i = 0; i < qtd; i++) {
        v.push_back(rand() % (fim - inicio + 1) + inicio);
    }
}

void exibirVetor(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}

vector<int> exercicio2(vector<int> vetorA, vector<int> vetorB, vector<int> vetorResultado) {
    for (int i = 0; i < vetorA.size(); i++) {
        for (int j = 0; j < vetorB.size(); j++) {
            if (vetorA[i] == vetorB[j]) {
                bool repetido = false;
                for (int k = 0; k < vetorResultado.size(); k++) {
                    if (vetorResultado[k] == vetorA[i]) {
                        repetido = true;
                    }
                }
                if (!repetido) {
                    vetorResultado.push_back(vetorA[i]);
                }
                break;
            }
        }
    }
    return vetorResultado;
}

int main() {
    srand(time(NULL));

    int n = 15;
    vector<int> vetorA, vetorB, vetorResultado;

    popularVetor(vetorA, n, 1, 30);
    popularVetor(vetorB, n, 1, 30);

    cout << "Vetor A: ";
    exibirVetor(vetorA);
    cout << "Vetor B: ";
    exibirVetor(vetorB);

    vetorResultado = exercicio2(vetorA, vetorB, vetorResultado);

    cout << "Resultado: ";
    exibirVetor(vetorResultado);

    return 0;
}