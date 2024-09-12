#include <iostream>
#include <string>

int main() {
    
    std::string str = "Exemplo de string para inverter";

    
    int tamanho = str.length();

    
    for (int i = 0; i < tamanho / 2; ++i) {
        // Troca de caracteres
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }

    
    std::cout << "String invertida: " << str << std::endl;

    return 0;
}

