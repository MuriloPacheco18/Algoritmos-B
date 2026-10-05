#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

std::string gerarEmail(const std::string& nomeCompleto) {
    std::istringstream iss(nomeCompleto);
    std::vector<std::string> partes;
    std::string palavra;

    while (iss >> palavra) {
        partes.push_back(palavra);
    }

    if (partes.size() < 2) {
        return "";
    }

    std::string primeiro = partes.front();
    std::string ultimo = partes.back();

    for (char& c : primeiro) {
        c = std::tolower(static_cast<unsigned char>(c));
    }
    for (char& c : ultimo) {
        c = std::tolower(static_cast<unsigned char>(c));
    }

    return primeiro + "." + ultimo + "@ufn.edu.br";
}

int main() {
    std::string nome;
    std::cout << "Digite o nome completo: ";
    std::getline(std::cin, nome);

    std::string email = gerarEmail(nome);

    if (email.empty()) {
        std::cout << "Informe o nome completo (nome e sobrenome)." << std::endl;
    } else {
        std::cout << "E-mail: " << email << std::endl;
    }

    return 0;
}
