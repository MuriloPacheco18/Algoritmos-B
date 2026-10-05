#include <iostream>
#include <string>
#include <cctype>

bool cpfPossui11Digitos(const std::string& cpf) {
    if (cpf.size() != 11) {
        return false;
    }

    for (char c : cpf) {
        if (!std::isdigit(static_cast<unsigned char>(c))) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string cpf;
    std::cout << "Digite o CPF (somente números): ";
    std::cin >> cpf;

    if (cpfPossui11Digitos(cpf)) {
        std::cout << "CPF válido (11 dígitos)." << std::endl;
    } else {
        std::cout << "CPF inválido." << std::endl;
    }

    return 0;
}