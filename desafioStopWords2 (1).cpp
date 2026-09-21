/*
Desafio em Arquivos txt

A ideia geral e principal é:
i) carregar os stop words do arquivo stopWords.txt em um lista de stopWords
ii) ler o arquivo do texto original e suas palavras
iii) comparar a palavra lida com as palavras na lista de stopWords
iv) descarregar em arquivo de saida as palavras do texto que não forem stop words

cultura in [a, as, o, os, um, uns, uma, umas]
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "util.h"

int main() {
    ifstream arquivoStopWords;
    vector<string> listaStopWords;

    //rotina que carrega os stop words do arquivo para listaStopWords
    arquivoStopWords.open("stopWords.txt");
    if (!arquivoStopWords) {
        cout << "Arquivo de stop words nao localizado. Programa encerrado." << endl;
        exit(0);
    } 

    //le o arquivo capturando as frases
	string linha;
	while (!arquivoStopWords.eof()) {
		getline(arquivoStopWords,linha); //lendo a linha inteira
        //colocar a linha para maiusculo
        linha = paraMaiusculoStringComRetorno(linha);

        listaStopWords.push_back(linha);
		
	}
	arquivoStopWords.close();
    //fim rotina que carrega os stop words do arquivo para listaStopWords


    //rotina que exiba os stop words inseridos na listaStopWords
    for (int i = 0; i < listaStopWords.size(); i++) {
        cout << listaStopWords[i] << ", ";
    }
    //fim rotina que exiba os stop words inseridos na listaStopWords
    


    ofstream arquivoTextoSemStopWords;
    ifstream arquivoTextoOriginal;
    //rotina que abre e le palavra por palavra
    //para cada palavra lida, comparar na listaStopWords
    
    //caso a palavra lida nao esteja na lista, adiciona-la no arquivo de saida


    return 1;
}