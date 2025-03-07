#include <iostream>

/**
 * seção: list-initialization
 * compilação no windows: g++ _08-snippet.cpp -o _08-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * a forma moderna para inicializar objetos em C++ é usar uma forma de inicialização que faz uso
 * do operador chaves '{}', conhecido na literatura inglêsa por: curly braces. esta é chamada de
 * inicialização-lista (list-initialization), ou inicialização-uniforme (uniform initialization), ou
 * conhecida por inicialização-chave (brace initialization);
 */
int main()
{
    /**
     * existem duas formas de inicialização-lista:
     *  1. direct-list-initialization;
     *  2. copy-list-initialization.
     */

    int width{5};     // inicialização-lista-direta do valor inicial '5' para dentro da variável 'width';
    int height = {6}; // inicialização-lista-por-copia do valor inicial '6' para dentro da variável 'height';

    /**
     * antes do C++11, alguns tipos de inicialização solicitavam o uso da inicialização-por-cópia, e outros
     * tipos de inicialização solicitavam a inicialização-direta. a inicialização-por-cópia pode ser difícil
     * para diferenciar da atribuição-por-cópia porque ambas usam o operador igual (=). e a
     * inicialização-direta pode ser difícil de diferenciar de operações relacionadas a função (porque ambas
     * usam parênteses).
     */

    /**
     * a inicialização-lista foi introduzida para fornecer uma sintaxe de inicialização que funcionasse na 
     * maioria dos casos, se comportasse de maneira consistente, e tivesse uma sintaxe que não fosse ambígua
     * que tornasse fácil dizer onde nós estamos inicializando um objeto.
     */

    /**
     * Principais percepções: quando nós vemos uma chaves, nós sabemos que nós estamos usando a 
     * inicialização-lista em um objeto.
    */

    /**
     * adicionalmente, a inicialização-lista também fornece uma maneira de inicializar objetos com uma lista 
     * de valores ao invés de um único valor (onde este é o motivo de ser chamada de inicialização-lista). 
     * nós mostramos um exemplo disto na aula 16.2 - Introduction to std::vector e list constructors.
    */

    return 0;
}
