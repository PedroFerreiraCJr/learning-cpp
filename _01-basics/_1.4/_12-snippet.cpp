#include <iostream>

/**
 * seção: initialize your variables
 * compilação no windows: g++ _12-snippet.cpp -o _12-snippet.exe
 * referência: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
 */

/**
 * inicialize suas variáveis no momento da criação. você talvez eventualmente encontre casos onde 
 * você deseje ignorar este conselho por uma razão em específico (por exemplo, uma seção de código 
 * crítica de perfomance que usa muitas variáveis), e está tudo bem, contanto que a escolha seja 
 * feita deliberadamente;
 */
int main()
{
    /**
     * Conteúdo relacionado: para mais discussões neste tópico, Bjarne Stroustrup (criador do C++) e
     * Herb Sutter (expert em C++) fazem esta recomendação eles mesmo neste link:
     * https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es20-always-initialize-an-object
    */

    /**
     * nós exploramos o que acontece se você tentar usar uma variável que não tem um valor bem-definido
     * na aula 1.6 - Uninitialized variables and undefined behavior;
    */

    /**
     * Melhores práticas: inicialize suas variáveis no momento de sua criação;
    */

    return 0;
}
