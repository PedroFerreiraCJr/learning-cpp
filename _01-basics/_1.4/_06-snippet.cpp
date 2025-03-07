#include <iostream>

/**
 * seção: copy-initialization
 * compilação no windows: g++ _06-snippet.cpp -o _06-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * quando um valor inicial é fornecido através do símbolo de igual (=), isto é chamado
 * inicialização-por-cópia. esta forma de inicialização foi herdada da linguagem C;
 */
int main()
{
    int width = 5; // inicialização-por-cópia do valor '5' para a variável 'width';

    /**
     * muito semelhante a atribuição-por-cópia, este copia o valor do lado direito da igualdade para a
     * variável sendo criada do lado esquerdo. no trecho de código acima, a variável 'width' irá ser
     * inicializada com o valor '5';
     *
     * inicialização-por-cópia caio em desuso no C++ Moderno devido a sua menor eficiência do que outras
     * formas de inicializaçao para alguns tipos complexos. porém, C++17 remediou vários destes problemas,
     * e a inicializaçaõ-por-cópia está encontrando novos defensores. você também irá encontrá-la em uso
     * em código antigo (especialmente código portanto da linguagem C), ou por desenvolvedores que
     * simplesmente acham que ela se parece mais natural e fácil para ler;
     */

    /**
     * Para leitores avançados: inicialização-por-cópia também é usada onde quer quer valores sejam
     * implicitamente copiados, como passando argumentos para uma função por valor, retornando de uma
     * função por valor, ou capturando exceções por valor;
     */

    return 0;
}
