#include <iostream>
#include <string>
#include <cctype>

bool dataPossui10Caracteres(const std::string& data) {
    if (data.size() != 10) {
        return false;
    }

    for (size_t i = 0; i < data.size(); ++i) {
        if (i == 2 || i == 5) {
            if (data[i] != '/') {
                return false;
            }
        } else if (!std::isdigit(static_cast<unsigned char>(data[i]))) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string data;
    std::cout << "Digite a data (dd/mm/aaaa): ";
    std::cin >> data;

    if (dataPossui10Caracteres(data)) {
        std::cout << "Data válida (10 caracteres)." << std::endl;
    } else {
        std::cout << "Data inválida." << std::endl;
    }

    return 0;
}
