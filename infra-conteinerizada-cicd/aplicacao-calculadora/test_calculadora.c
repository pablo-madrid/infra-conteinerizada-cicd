#include <assert.h>
#include <stdio.h>

int somar(int a, int b);

int main() {
    printf("Rodando testes automatizados...\n");

    assert(somar(2, 3) == 5); 
    assert(somar(-1, 1) == 0);
    assert(somar(0, 0) == 0);

    printf("Todos os testes passaram com sucesso! (Green)\n");
    return 0; // Retorna 0 para indicar sucesso ao CI
}
