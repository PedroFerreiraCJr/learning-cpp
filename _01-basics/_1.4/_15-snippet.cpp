#include <iostream>

/**
 * seção: unused initialized variables warnings
 * compilação no windows: g++ _15-snippet.cpp -o _15-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * compiladores modernos irão geralmente gerar avisos se uma variável é inicializada mas não usada (uma vez
 * que isso é raramente desejado). e então, se "tratar avisos como erros" estiver habilitado, este avisos
 * serão promovidos a erros e fazer com que a compilação falhe;
 */
int main()
{
    /**
     * considere o seguinte programa que se parece inocente;
     */

    int x{5}; // variável 'x' definida, mas não usada;

    /**
     * quando compilando isto com o GCC e "tratar avisos como erros" estiver habilitado, o seguinte erro é
     * gerado:
     * prog.cc: In function 'int main()':
     * prog.cc:3:9: error: unused variable 'x' [-Werror=unused-variable]
     *
     * e o progama falha na compilação;
     */

    /**
     * existem algumas formas fáceis de corrigir isso:
     *
     * 1. se a variável realmente não estiver sendo usada e você não precisa dela, a opção mais fácil é remover
     * a definição da variável 'x' (ou comentar ela). afinal de contas, se ela não está sendo usada, então
     * remover ela não afetará em nada;
     *
     * 2. outra opção é simplemente usar a variáve em algum lugar;
     */

    int x{5}; // variável declarada e inicializada;

    std::cout << x; // variável agora usada em algum local;

    /**
     * mas isso requer algum esforço para escrever código que usa ela, e tem a desvantagem de potencialmente
     * alterar o comportamento do seu programa;
     */

    return 0;
}
