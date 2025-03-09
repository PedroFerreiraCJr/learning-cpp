#include <iostream>

/**
 * seção: list-initialization is the preferred form of initialization in modern C++
 * compilação no windows: g++ _11-snippet.cpp -o _11-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * inicialização-lista (incluindo inicialização-valor) é geralmente preferida sobre as outras formas de
 * inicialização porque ela funciona na maioria dos casos (e portanto é mais consistente), ela não permite
 * conversões de estreitamento (que nós normalmente não desejamos), e ela suporta inicialização com uma
 * lista de valores (algo que nós cobriremos em aulas futuras);
 */
int main()
{
    /**
     * Melhores práticas: prefira inicialização-lista-direta ou inicialização-valor para inicializar
     * variáveis;
     */

    /**
     * Notas do Autor: Bjarne Stroustrup (criador do C++) e Herb Sutter (expert em C++) também recomendam
     * usar inicialização-lista para inicializar variáveis.
     *
     * em C++ moderno, existem alguns casos onde a inicialização-lista não funciona como o esperado. nós
     * cobrimos um destes tipos de casos na aula 16.2 - Introduction to std::vector and list constructors.
     * por conta de tais peculiaridades, alguns desenvolvedores experientes agora defendem para o uso de uma
     * mesclagem de cópia, direta, e inicialização-lista, dependendo das circunstâncias. uma vez que você
     * esteja familiarizado o suficiente coma linguagem para endenter as nuances de cada tipo de inicialização
     * e a motivação por trás de tais recomendações, você poderá avaliar por conta própia se você considera
     * esses argumentos persuasivos;
     */

    /**
     * Q: quando eu devo inicializar com {0} vs {}?
     * use a inicialização-lista-direta quando você estiver usando um valor inicial:
     * int x {0};       // inicialização-lista-direta com o valor inicial '0';
     * std::cout << x;  // nós estamos usando aquele valor '0' aqui;
     *
     * use a inicialização-valor quando o valor do objeto é temporário e irá ser substituído:
     * int x {};        // inicialização-valor;
     * std::cin >> x;   // nós estamos imediatamente substituíndo aquele valor então um valor explícito '0' seria redundante;
     */

    return 0;
}
