#include <iostream>

/**
 * seção: initialization multiple variables
 * compilação no windows: g++ _14-snippet.cpp -o _14-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

int main()
{
    /**
     * na última seção, nós vimos que é possível definir múltiplas variáveis do mesmo tipo em uma única
     * declaração separando os nomes delas com uma vírgula;
     */

    int a, b;

    /**
     * nós também notamos que a melhor prática é evitar completamente esta sintaxe. porém, você talvez encontre
     * outro código que use esse estilo, desta forma é útil falar um pouco mais sobre isso, se não por outro
     * motivo senão para reforçar algumas das razões pelas quais você deve evitá-lo;
     */

    /**
     * você pode inicializar múltiplas variáveis definidas na mesma linha:
     */

    int a = 5, b = 6; // inicialização-por-cópia;
    int c(7), d(8);   // inicialização-direta;
    int e{9}, f{10};  // inicialização-lista-direta;
    int i{}, j{};     // inicialização-valor;

    /**
     * infelizmente, existe uma armadilha comum aqui que pode ocorrer quando o programador tenta erroneamente
     * inicializar ambas as variáveis usando uma declaração de inicialização;
     */

    int a, b = 5;     // incorreto: 'a' não é inicializada para 5;
    int a = 5, b = 5; // correto: 'a' e 'b' são inicializadas para 5;

    /**
     * na primeira declaração, a variável 'a' irá ser deixada não inicializada, e o compilador pode ou não
     * reclamar. se ele não reclamar, é uma ótima maneira para seu programa parar intermitentemente ou produzir
     * resultados esporádicos. nós falaremos mais sobre o que acontece se você usar variáveis não inicializadas;
     */

    /**
     * a melhor maneira para lembrar que isto é incorreto é notar que cada variável pode somente ser
     * inicializada por seu próprio inicializador;
     */

    int a = 4, b = 5; // correto: 'a' e 'b' tem inicializadores;
    int a, b = 5;     // incorreto: 'a' não tem seu próprio inicializador;

    return 0;
}
