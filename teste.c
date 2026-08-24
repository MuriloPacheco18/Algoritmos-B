#include <stdio.h>

#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    float altura;
    float peso;
    float imc;
} Pessoa;

// Função para calcular o IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Função para classificar o IMC
const char* classificarIMC(float imc) {
    if (imc < 18.5)
        return "Abaixo do peso";
    else if (imc < 25.0)
        return "Peso normal";
    else if (imc < 30.0)
        return "Sobrepeso";
    else
        return "Obesidade";
}

int main() {
    int n, i;

    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &n);

    Pessoa pessoas[n];

    // Leitura dos dados
    for (i = 0; i < n; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Altura (m): ");
        scanf("%f", &pessoas[i].altura);

        printf("Peso (kg): ");
        scanf("%f", &pessoas[i].peso);

        // Calcula o IMC assim que os dados são lidos
        pessoas[i].imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
    }

    // Exibição dos dados
    printf("\n===== DADOS CADASTRADOS =====\n");
    for (i = 0; i < n; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Altura: %.2f m\n", pessoas[i].altura);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("IMC: %.2f (%s)\n", pessoas[i].imc, classificarIMC(pessoas[i].imc));
    }

    return 0;
}

