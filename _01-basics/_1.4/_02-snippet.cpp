#include <iostream>

/**
 * seção: variable assigment
 * compilação no windows: g++ _02-snippet.cpp -o _02-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

int main()
{
    /**
     * após uma variável ter sido definida, você pode dar a ela um valor (em uma declaração separada) usando
     * o operador '=' (operador de atribuição). esse processo é chamado 'atribuição', e o operador '=' é
     * chamado de operador de atribuição.
     */
    int width; // define uma variável do tipo 'int', chamada de 'width';
    width = 5; // atribui o valor '5' para a variável 'width';

    // a variável 'width' agora tem o valor '5';

    /**
     * por padrão, a atribuição copia o valor do operando do lado direito do operador '=', para variável
     * do lado esquerdo deste operador. isto é chamado de 'atribuição de cópia' (copy-assigment);
     *
     * uma vez que a variável tenha um valor, o valor da variável pode impresso através do objeto
     * 'std::cout', usando o operador '<<' (operador de inserção de fluxo);
     *
     * a atribuição pode ser usada a qualquer momento onde se deseja alterar o valor mantido por uma
     * variável. aqui está um exemplo onde a atribuição é usada duas vezes;
     */

    std::cout << width;     // imprime o valor '5';

    width = 7;              // altera o valor armazenado na variável 'width' para '7';

    std::cout << width;     // imprime o valor '7';

    /**
     * quando esse programa é rodado, a execução começa no topo da função 'main' e procede 
     * sequencialmente. primeiro, memória é alocada para a variável 'width'. nós então atribuímos o 
     * valor '5' para a variável 'width'. então nós imprimimos o valor da variável 'width', ela 
     * imprime o valor '5' no console. então nós atribuímos o valor '7' para a variável 'width', qualquer
     * valor anterior, neste caso o valor '5', é sobrescrito. portanto, quando é solicitado a impressão 
     * do valor da variável 'width' novamente, o valor que é impresso no console é o valor '7';
     * 
     * variáveis normais podem armazenar somente um valor de cada vez;
     * 
    */

    /**
     * Aviso: um dos erros mais comuns que os novos programadores cometem é confundir o operador de 
     * atribuição (=) com o operador de igualdade (==). igualdade (==) é usado para testar se os dois 
     * operandos são iguais em valor;
    */

    return 0;
}
