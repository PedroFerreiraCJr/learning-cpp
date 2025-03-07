#include <iostream>

/**
 * seção: different forms of initialization
 * compilação no windows: g++ _04-snippet.cpp -o _04-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * diferente da atribuição (que geralmente é bem direta), inicialização em C++ é
 * surpreendentemente complexa. então nós iremos apresentar aqui uma visão simplificada
 * para começarmos. existem 5 maneiras de inicialização em C++;
 */
int main()
{
    int a; // inicialização-padrão (sem inicializador);

    // formas de inicialização tradicional:
    int b = 5; // inicialização-por-cópia (valor inicial após o sinal de igual '=');
    int c(6);  // inicialização-direta (valor inicial dentro de parênteses '()');

    // formas de inicialização mordena:
    int d{7}; // inicialização-de-lista-direta (valor inicial dentro de chaves '{}');
    int e{};  // inicialização-de-valor (chaves vazias);

    /**
     * você pode ver as formas acima escritas em diferentes espaçamentos (exemplos: int b=5,
     * int c(6), int d{7}, int e{}). se caso você use espaços extra por questões de legibilidade
     * ou não, é uma questão de preferência profissional;
     *
     * a partir do C++17, inicialização-por-cópia, inicialização-direta, inicialização-de-lista-direta se
     * comportam identicamente na maioria dos casos. nós iremos cobrir os casos mais relevantes onde eles
     * diferem abaixo;
     */

    return 0;
}
