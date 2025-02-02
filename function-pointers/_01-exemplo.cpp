#include <utility>
#include <iostream>

int foo()
{
  return 5;
}

int goo()
{
  return 6;
}

double hoo()
{
  return 6.25;
}

int joo(int x)
{
  using std::cout;
  using std::endl;

  cout << "invoking function[joo]..." << endl;

  return 5;
}

void print(int x)
{
  std::cout << "print(int)\n";
}

void print(int x, int y = 10)
{
  std::cout << "print(int, int)\n";
}

// ordenação ascendente - do menor para o maior;
bool ascending(int x, int y)
{
  return x > y;
}

// ordenação descendente - do maior para o menor;
bool descending(int x, int y)
{
  return x < y;
}

// função que implementa o algoritmo de ordenação de arrays, através do algoritmo Selection Sorting;
// essa função declara como parâmetro um ponteiro de função, portanto, essa função pode receber 
// outra função;
// essa função foi incrementada com a declaração de um valor padrão para o parâmetro que deve receber um
// ponteiro de função; agora, esse parâmetro se torna opcional, pois já tem um valor predefinido, que
// neste caso, é a função 'ascending';
void selectionSort(int *array, int size, bool (*cmpFn)(int, int) = ascending)
{
  if (!array || !cmpFn)
  {
    return;
  }

  for (int startIndex{0}; startIndex < (size - 1); ++startIndex)
  {
    int bestIndex{startIndex};
    for (int currentIndex{startIndex + 1}; currentIndex < size; ++currentIndex)
    {
      if (cmpFn(array[bestIndex], array[currentIndex]))
      {
        bestIndex = currentIndex;
      }
    }
    std::swap(array[startIndex], array[bestIndex]);
  }
}

void printArray(int *array, int size)
{
  if (!array)
  {
    return;
  }

  for (int index{0}; index < size; ++index)
  {
    std::cout << array[index] << ' ';
  }

  std::cout << '\n';
}

bool evensFirst(int x, int y)
{
  if ((x % 2 == 0) && !(y % 2 == 0))
  {
    return false;
  }

  if (!(x % 2 == 0) && (y % 2 == 0))
  {
    return true;
  }

  return ascending(x, y);
}

int main()
{
  using std::cout;
  using std::endl;

  // quando o compilador da linguagem encontra uma referência para um nome de função
  // sem o uso do operador de invocação de função (o operador '()'), ele converte a função para
  // um ponteiro para função, que contém o endereço da função;
  // já o operador de inserção de fluxo (o operador '<<'), ele não sabe como interpretar o valor
  // do ponteiro de função; então, o padrão da linguagem informa que esse valor deve ser 
  // convertido para um valor 'bool' (booleano); então, como o ponteiro de função, neste caso,
  // é um ponteiro não nulo, ele é convertido para o valor booleano '1'; portanto, este é 
  // o resultado da seguinte instrução;
  cout << "printing function: " << foo << "!" << endl;

  // alguns compiladores tem uma extensão que imprime o valor do endereço de memória da função;
  // para obter sempre esse resultado, basta usar a seguinte instrução;
  cout << "printing function address: " << reinterpret_cast<void *>(foo) << "!" << endl;

  // exemplo de ponteiro não-constante para função;
  // neste exemplo, o ponteiro para função representa uma função que não declera parâmetros e 
  // retorna um 'int';
  // neste exemplo, 'fnPtr' é o identificador do ponteiro para função; portanto, é através dele 
  // que se torna possível acessar a função apontada; é uma variável, portanto tem um tipo, e 
  // rotulo (nome; identificador);
  // 'fnPtr' pode apontar para qualquer função que atenda ao critério de tipo informado;
  // int (*fnPtr)();

  // para criar um ponteiro para função que seja constante, é preciso utilizar a palavra-chave 
  // 'const', após o operador asterísco (*), e dentro dos parênteses, conforme o seguinte exemplo;
  // int (*const fnPtr2)();

  // uma variável do tipo ponteiro para função pode ser inicializada com uma função;
  // como ponteiros para variáveis, é preciso utilizar o operador de obtenção de endereço (operador &);
  int (*fnPtr)(){&foo};

  // reatribuição; é necessário utilizar o operador de endereço: &;
  fnPtr = &goo;

  // essa atribuição não compila; gera a seguinte mensagem de erro de compilação:
  // incompatible function pointer types assigning to 'int (*)()' from 'double (*)()'
  // fnPtr = &hoo;

  // essa inicialização não compila; porque o tipo de retorno declarado é incompatível;
  // gera a seguinte mensagem de erro de compilação:
  // cannot initialize a variable of type 'double (*)()' with an rvalue of type 'int (*)()': 
  // different return type ('double' vs 'int') double (*fnPtr2)() { &foo };

  // essa atribuição não compila; porque, novamente, está sendo utilizado tipos incompatíveis;
  // nesse caso, o ponteiro de função não declara que a função 'joo', tem um parâmetro do tipo 'int';
  // gera a seguinte mensagem de erro de compilação:
  // incompatible function pointer types assigning to 'int (*)()' from 
  // 'int (*)(int)' int (*fnPtr2)();
  // fnPtr2 = &joo;

  // IMPORTANTE: diferente de tipos fundamentais, C++ irá implicitamente converter uma função para 
  // um ponteiro para função se necessário (então você não precisa usar o operador de 
  // endereço-de (&), para obter o endereço da função);
  int (*fnPtr2)(){foo};

  // a seguinte inicialização não compila; porque ponteiros de função não irão ser convertidos 
  // implicitamente para ponteiros 'void*'; isso depende do compilador utilizado, alguns 
  // podem permitir esse comportamento;
  // gera a seguinte mensagem de erro de compilação:
  // cannot initialize a variable of type 'void *' with an lvalue of type 
  // 'int ()' void *ptr { foo };

  // ponteiros de função podem ser inicializados ou receber a atribuição do valor literal 'nullptr';
  int (*fnPtr3)(){nullptr};

  // uma outra coisa básica que é possível fazer com um ponteiro de função é invocar a função em si;
  // existem duas formas para realizar essa atividade; a primeira delas, é com a 
  // 'desreferência explícita', e a segunda maneira, é com a 'desreferência implícita';
  // primeiro, é preciso atribuir, inicializar, o ponteiro de função para que ele possa ser utilizado;
  int (*fnPtr4)(int){&joo};

  // com a desreferência explícita:
  (*fnPtr4)(6);

  // com a desreferência implícita:
  fnPtr4(6);

  // como você pode ver, o método de desreferência implícito se parece com uma chamada de 
  // função normal - que é o que você esperaria, já que nomes de funções normais são 
  // ponteiros para funções de qualquer maneira! no entanto, alguns compiladores mais 
  // antigos não suportam o método de desreferência implícito, mas todos os compiladores 
  // modernos deveriam;

  // observe também que, como os ponteiros de função podem ser definidos como 'nullptr', é 
  // uma boa ideia, afirmar ou testar, condicionalmente, se seu ponteiro de função é um 
  // ponteiro nulo antes de chamá-lo. assim como com ponteiros normais, desreferenciar 
  // um ponteiro de função nulo leva a um comportamento indefinido;
  int (*fnPtr5)(int){&joo};
  if (fnPtr5)
  {
    // usa a desreferência implícita;
    fnPtr5(6);
  }

  // argumentos padrão não funcionam para chamadas de função através de ponteiros de função;
  // a seguinte linha não compila; porque o compilador não sabe qual das funções invocar;
  // gera a seguinte mensagem de erro de compilação:
  // call to 'print' is ambiguous
  // print(1);

  // mas, através de um ponteiro de função, o compilador consegue saber qual função 
  // invocar, porque a resolução de ponteiros de função acontece em runtime ao invés de em
  // tempo de compilação;
  using vnPtr = void (*)(int); // declaração de um alias para um tipo, que 
  // tem papel semelhante ao typedef, da linguagem C;
  vnPtr p{&print};

  p(6);

  // outra maneira de fazer algo semelhante;
  static_cast<void (*)(int)>(print)(6);

  // uma das coisas mais úteis de se fazer com ponteiros de função é passar um ponteiro de
  // função para outra função;
  // funções que são usadas como argumento para outras funções são muitas vezes chamadas
  // de função de callback;
  int array[9]{3, 7, 9, 5, 6, 1, 8, 2, 4};

  selectionSort(array, 9, descending);
  printArray(array, 9);

  selectionSort(array, 9, ascending);
  printArray(array, 9);

  selectionSort(array, 9, evensFirst);
  printArray(array, 9);

  // tornando pointeiros de função mais bonitos com apelidos de tipo:
  // isto define um apelido de tipo chamado 'ValidateFunction', que é um ponteiro de função
  // que recebe dois inteiros e retorna um booleano;
  using ValidateFunction = bool (*)(int, int);

  // bloco anônimo, delimita um novo escopo;
  {
    // exemplo de função que declara um parâmetro como um ponteiro de função;
    // perceba que essa notação, além de cansativa, ela não é tão amigável ao programador;
    bool validate(int x, int y, bool (*fn)(int, int));
  }

  // bloco anônimo, delimita um novo escopo;
  {
    // essa é uma declaração de como pode ser usado um type alias (apelido de tipo), para 
    // declarar um parâmetro que é um ponteiro de função; agora, está mais fácil de ler e 
    // dar manutenção nesta versão;
    bool validate(int x, int y, ValidateFunction pFn);
  }

  return 0;
}
