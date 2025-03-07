#include <iostream>

/**
 * seção: direct-initialization
 * compilação no windows: g++ _07-snippet.cpp -o _07-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * quando um valor inicial é fornecido dentro de parênteses, isto é chamado inicialização-direta;
 */
int main()
{
    int width(5); // inicialização-direta do valor '5' para a variável 'width';

    /**
     * a inicialização-direta foi inicialmente introduzida para permitir uma inicialização mais eficiente
     * de objetos complexos (aqueles com tipos classe, que nós iremos cobrir em um capítulo futuro). assim
     * como a inicialização-por-cópia, a inicialização-direta tem caído em desuso no C++ Moderno, amplamente
     * devido por estar sendo substituída pela inicialização-de-lista-direta. entretanto, a
     * inicialização-de-lista-direta tem algumas peculiaridades por conta própria, e então a
     * inicialização-direta está novamente encontrando uso em certos casos;
     */

    /**
     * Para leitores avançados: a inicialização-direta é também usada quando valores são explicitamente
     * convertidos para outro tipo (por exemplo, através de 'static_cast');
     */

    return 0;
}
