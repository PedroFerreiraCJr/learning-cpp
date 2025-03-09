#include <iostream>

/**
 * seção: value-initialization and zero-initialization
 * compilação no windows: g++ _10-snippet.cpp -o _10-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * quando uma variável é inicializada usando uma conjunto vazio de chaves '{}', uma forma especial de
 * inicialização-lista chamada inicialização-valor é utilizada. na maioria dos casos, a inicialização-valor
 * irá implicitamente inicializar a variável para zero (ou qualquer valor mais próximo de zero para o
 * tipo em questão). em casos onde o valor é zero, isto é chamado de inicialização-zero.
 */
int main()
{
    int width{}; // inicialização-valor, que neste caso é uma inicialização-zero para o valor '0';

    /**
     * Para leitores avançados: para tipos classe, inicialização-valor (e inicialização-padrão) podem
     * talvez inicializar o objeto para valores-padrão predefinidos, que podem ser não-zero.
     */
    return 0;
}
