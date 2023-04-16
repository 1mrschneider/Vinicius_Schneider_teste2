#include <stdio.h>
#include <string.h>

int main() {
    // Definindo a string a ser invertida
    char string[] = "exemplo";
    
    // Obtendo o tamanho da string
    int tamanho = strlen(string);
    
    // Invertendo a ordem dos caracteres da string
    for (int i = 0; i < tamanho/2; i++) {
        char temp = string[i];
        string[i] = string[tamanho - i - 1];
        string[tamanho - i - 1] = temp;
    }
    
    // Imprimindo a string invertida
    printf("Resultado: %s", string);
    
    return 0;
}
