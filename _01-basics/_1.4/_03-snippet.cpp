#include <iostream>

/**
 * seção: variable initialization
 * compilação no windows: g++ _03-snippet.cpp -o _03-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * uma desvantagem da atribuição é que atribuir um valor para um objeto que acabou de ser definido
 * requer duas declarações: uma para definir a variável, e outra para atribuir o valor;
 *
 * esses dois passos podem ser combinados. quando um objeto é definido, você pode opcionalmente
 * fornecer um valor inicial para o objeto. o processo de especificar um valor inicial para um objeto é
 * chamado de 'inicialização', e a sintaxe usada para inicializar um objeto é chamada 'inicializador'.
 * informalmente, o valor inicial é frequentemente chamado 'inicializador' também.
 *
 * por exemplo, a seguinte declaração, tanto define uma variável chamada 'width' (do tipo 'int'), assim
 * como, a inicializa com o valor '5';
 */
int main()
{
    int width{5};       // define a variável 'width', e a inicializa com o valor '5';
    std::cout << width; // imprime o valor '5';

    /**
     * na inicialização da variável 'width' acima, '{5}' é o inicializador, e '5' é o valor inicial;
     */

    /**
     * Principais Percepções: a inicialização fornece um valor inicial para a variável. pense 
     * "initial-ization";
     */

    return 0;
}
