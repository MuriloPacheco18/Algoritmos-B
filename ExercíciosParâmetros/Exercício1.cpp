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

void exercicio1(vector<int> vetorA, vector<int> vetorB) {
    vector<int> jaExibidos;

    cout << "Numeros presentes nos dois vetores: ";
    bool achou = false;

    for (int i = 0; i < vetorA.size(); i++) {
        for (int j = 0; j < vetorB.size(); j++) {
            if (vetorA[i] == vetorB[j]) {
                bool repetido = false;
                for (int k = 0; k < jaExibidos.size(); k++) {
                    if (jaExibidos[k] == vetorA[i]) {
                        repetido = true;
                    }
                }
                if (!repetido) {
                    cout << vetorA[i] << "\t";
                    jaExibidos.push_back(vetorA[i]);
                    achou = true;
                }
                break;
            }
        }
    }

    if (!achou) {
        cout << "nenhum";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));

    int n = 15;
    vector<int> vetorA, vetorB;

    popularVetor(vetorA, n, 1, 30);
    popularVetor(vetorB, n, 1, 30);

    cout << "Vetor A: ";
    exibirVetor(vetorA);
    cout << "Vetor B: ";
    exibirVetor(vetorB);

    exercicio1(vetorA, vetorB);

    return 0;
}