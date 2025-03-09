#include <iostream>

/**
 * seção: list-initialization disallows narrowing conversions
 * compilação no windows: g++ _09-snippet.cpp -o _09-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * um dos principais benefícios da inicialização-lista para novos programadores C++ é que ela não permite
 * "narrowing conversions" (conversões de estreitamento). isso signifca que se você tentar usar a
 * inicialização-lista com uma variável usando um valor que a variável não possa "seguramente" armazenar,
 * o compilador é solicitado a produzir um diagnóstico (erro ou aviso de compilação) para te notificar.
 */

void exemplo_01(void);
void exemplo_02(void);

int main()
{
    exemplo_01();
    exemplo_02();

    return 0;
}

void exemplo_01(void)
{
    /**
     * um integer (int) pode apenas armazenar valores não-fracionários;
     * inicializar um inteiro com o valor fracionário '4.5' requer que o compilador converta '4.5' para
     * um valor que um int possa armazenar;
     * este tipo de conversão é uma conversão de estreitamento, uma vez que a parte fracionária do valor
     * será perdida;
     */

    int w1{4.5}; // erro de compilação: inicialização-lista não permite conversão de estreitamento;

    int w2 = 4.5; // compila: w2 usa a inicialização-por-cópia para o valor '4';
    int w3(4.5);  // compila: w3 usa a inicialização-direta para o valor '4';

    /**
     * na linha da variável 'w1' deste programa, estamos usando um valor (4.5) com um componente
     * fracionário (.5) para list-initialize uma variável inteira (que pode somente armazenar valores
     * não-fracionários). como isto é uma conversão de estreitamento, o compilador é solicitado a gerar um
     * diagnóstico nestes casos;
     */

    /**
     * a inicialização-por-cópia da variável 'w2', e a inicialização-direta da variável 'w3' ambas
     * silenciosamente removem o '.5' e inicializam a variável com o valor '4' (que provavelmente não
     * é o que se deseja). o seu compilador pode avisá-lo sobre isso (uma vez que, a perda de dados é
     * raramente o desejado), mas ele pode não avisá-lo.
     */
}

void exemplo_02(void)
{
    /**
     * note que esta restrição sobre a conversão de estreitamento somente é aplicada a 
     * inicialização-lista, e não a nenhuma atribuição subsequente a variável;
     */

    int w1 {4.5};   // erro de compilação: inicialização-lista não permite conversão de estreitamento de '4.5' para '4';

    w1 = 4.5;       // ok: atribuição-por-cópia permite conversão de estreitamento de '4.5' para '4';
}
