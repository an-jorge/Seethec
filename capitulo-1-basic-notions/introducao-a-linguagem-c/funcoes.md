# Funções

Na programação funções são blocos de código reutilizáveis que ajudam a organizar um programa e evitar repetição de código.&#x20;

Ao invés de repetir o mesmo código várias vezes, você pode escrever uma função e simplesmente chamá-la sempre que precisar, Isso é o poder de funções.

A linguagem incorpora muitas funções que facilita a vida de programadores ao longo da sua leitura conheceras muitas outras funções

### **Estrutura de uma Função**

Uma função normalmente tem:\
**Nome** – Para ser chamada dentro do código.\
**Parâmetros (opcionais)** – Entrada de dados

️**Código executável** – O que a função faz.\
️**Retorno (opcional)** – O que a função devolve ao chamador.

***



<figure><img src="../../.gitbook/assets/My First Board (1).jpg" alt=""><figcaption></figcaption></figure>

***



{% code title="main.c" overflow="wrap" fullWidth="false" %}
```c
#include <stdio.h> 

int main()
{
    printf("Hello World");  // Exibe "Hello World" na tela
    return 0;
}
```
{% endcode %}

***



### **Tipos de Funções**

As funções podem ser classificadas principalmente com base em dois critérios: **tipo de retorno** e **presença de parâmetros.** Veremos as principais razões para uma função ter retorno.

1. **Comunicação de Resultados**: O retorno permite que a função comunique o resultado de sua execução para o chamador. Isso é essencial para funções que realizam cálculos, verificações ou processamentos, onde o resultado precisa ser utilizado posteriormente.
2. **Controle de Fluxo**: O valor de retorno pode ser usado para indicar sucesso, falha ou diferentes estados de execução, permitindo que o programa tome decisões com base no que a função realizou. Por exemplo, muitas funções retornam `0` para indicar sucesso e valores diferentes de `0` para indicar erros.
3. **Conformidade com Protótipos**: Em C, o tipo de retorno da função é parte de sua assinatura. Se uma função é declarada para retornar um valor (por exemplo, `int`, `float`, `char*`, etc.), ela deve retornar um valor compatível com esse tipo. Funções que não retornam nada devem ser declaradas com `void`.



1. **Função sem retorno e sem parâmetros**

{% code overflow="wrap" %}
```c
void hello_message()
{
    printf("Bem-vindo ao sistema!\n");
}
```
{% endcode %}

***

2. &#x20; **Função com retorno e sem parâmetros**

{% code overflow="wrap" %}
```c
void get_number()
{
    return 44;
}
```
{% endcode %}

***



3. &#x20;**Função sem retorno e com parâmetros**

{% code overflow="wrap" %}
```c
void show_name(char nome[]) {
    printf("Olá, %s!\n", nome);
}
```
{% endcode %}

***



A função `printf` é uma ferramenta essencial na linguagem C para exibir mensagens e dados na tela. Ela oferece flexibilidade para formatar a saída e apresentar informações.

{% code overflow="wrap" %}
```c
printf(format_string, argument1, argument2);
```
{% endcode %}

**Componentes:**

* `format_string`: Uma string que define o layout da saída, incluindo texto e especificadores de formato.
* `argument1, argument2, ...`: Uma lista variável de argumentos que fornecem os dados a serem impressos.



***



## Especificadores de formato <a href="#especificadores-de-formato" id="especificadores-de-formato"></a>

Para explorar o poder da linguagem e como os nossos programas pode ser interesentes precisamos antes entender os especificadores de formato como determinar argumentos como serão formatados e exibidos na tela, alguns dos mais comuns incluem:

1. `%d`: Inteiro decimal
2. `%ld`: Longo inteiro decimal
3. `%f`: Ponto flutuante (números com vírgula)
4. `%lf`: Duplo ponto flutuante
5. `%c`: Carácter
6. `%s`: String
7. `%x` ou `%X`: Inteiro hexadecimal
8. `%o`: Inteiro octal
9. `%u`: Inteiro sem sinal
10. `%p`: Ponteiro
11. `%%`: carácter de percentagem (para imprimir um símbolo de percentagem)

{% code overflow="wrap" %}
```c
printf("Olá, mundo!\n"); // Exibe a mensagem "Olá, mundo!"
printf("O valor de x é %d\n", 10); // Exibe "O valor de x é 10"
printf("Nome: %s, Idade: %d\n", "João", 30); // Exibe "Nome: João, Idade: 30"
```
{% endcode %}

### **Formatação adicional:**

A função `printf` oferece opções avançadas para formatar a saída, como:

* Especificar a largura e justificação dos campos de texto.
* Definir a precisão de casas decimais para números de ponto flutuante.
* Usar modificadores de tipo de dados para garantir a correspondência correta entre especificadores e argumentos.



### Sequências de escape em C <a href="#sequencias-de-escape-em-c" id="sequencias-de-escape-em-c"></a>

***



As sequências de escape são combinações de caracteres que começam com uma barra invertida (`\`) e são usadas para representar caracteres especiais ou ações específicas em strings e caracteres. Elas são úteis para incluir caracteres que não podem ser digitados diretamente ou para controlar a formatação de saída.

1. `\n`: Nova linha
2. `\t`: Tabulação horizontal
3. `\r`: Retorno de carro (move o cursor para o início da linha)
4. `\\`: Barra invertida (usada para representar uma barra invertida literal)
5. `\"`: Aspas duplas (usada para representar aspas duplas literais dentro de uma string)
6. `\'`: Apóstrofo (usado para representar um apóstrofo literal dentro de uma string)
7. `\b`: Retrocesso (move o cursor uma posição para trás)
8. `\f`: Avanço de página (usado para mover o cursor para a próxima página)
9. `\v`: Tabulação vertical
10. `\a`: Alerta sonoro (produz um som de alerta)
11. `\0`: carácter nulo (termina uma string)
12. `\ooo` - Caractere Octal
13. `\xhh` - Caractere Hexadecimal

Estes são apenas alguns dos especificadores de formato básicos. Existem outros modificadores que podem ser usados com esses especificadores para controlar a precisão, largura do campo, preenchimento, alinhamento e muito mais.



***



## Função `scanf_s` <a href="#funcao-scanf_s" id="funcao-scanf_s"></a>

`scanf_s` é uma versão alternativa e mais segura da função `scanf` introduzida no padrão C11 (2011) e em bibliotecas C seguras como Microsoft Secure CRT. Ela oferece recursos para mitigar os problemas de segurança associados ao `scanf` tradicional, mas nem sempre está disponível em todos os ambientes de desenvolvimento.

**Vantagens de segurança do scanf\_s:**

* **Verificação de tamanho:** Ao especificar o tamanho máximo do buffer de destino como argumento adicional, `scanf_s` ajuda a prevenir estouro de buffer.
* **Validação de tipo (opcional):** Dependendo da implementação, `scanf_s` pode realizar verificações de tipo opcionais para garantir que os dados lidos correspondam ao tipo de variável esperado.
* **Retorno de erro:** `scanf_s` retorna códigos de erro específicos para indicar problemas durante a leitura, auxiliando no tratamento de excepções.

Vamos fazer um conjunto de bricandeiras com a funções `scanf` e `print`

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() 
{
  char name[50];
  int age;

  printf("Digite seu nome: ");
  scanf_s("%s", nome, sizeof(name));
  printf("Digite sua idade: ");
  scanf_s("%d", &age, sizeof(age));
  printf("Nome: %s, Idade: %d\n", name, age);

  return 0;
}
```
{% endcode %}

### Scanf\_s ambas plataformas <a href="#scanf_s-ambas-plataformas" id="scanf_s-ambas-plataformas"></a>

**`scanf_s`**, não está disponível em sistemas Linux porque faz parte de uma extensão de segurança usada no Microsoft Visual Studio, e não faz parte do padrão C.

**Observações Scanf**

* **`scanf_s`** é exclusivo do Microsoft Visual Studio e Windows, enquanto `scanf` é amplamente suportado em qualquer compilador compatível com C (incluindo Linux, GCC, Clang, etc.).
* Usar diretivas de pré-processador permite que o código se adapte automaticamente ao sistema onde está sendo compilado, tornando-o portável entre Windows e Linux.

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main()
{
    float height = 0.0;

#ifdef _WIN32
    // Se estiver no Windows, usa scanf_s
    printf("Enter your height: ");
    scanf_s("%f", &height);
#else
    // Para Linux e outros sistemas, usa scanf
    printf("Enter your height: ");
    scanf("%f", &height);
#endif

    printf("The height: %.2f\n", height);
    return 0;
}
```
{% endcode %}

### **Por que `_WIN32` funciona no Windows de 64 bits?**

Se você o seu computador for um 64 bit esta duvida pode surgir, entretanto saiba que o nome **`_WIN32`** é um resquício histórico da época em que o Windows 32 bits era introduzido, mas foi mantido por razões de compatibilidade. Mesmo em ambientes de 64 bits, essa macro é definida para indicar que o sistema operacional é Windows, independentemente da arquitectura.

Se você quiser especificamente verificar se está em um sistema **Windows de 64 bits**, pode usar a macro **`_WIN64`**, que **apenas** é definida em sistemas Windows de 64 bits. Assim, se você precisa distinguir entre sistemas de 32 bits e 64 bits no Windows, pode usar as duas macros:

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    #ifdef _WIN64
        printf("Sistema Windows 64 bits\n");
    #elif _WIN32
        printf("Sistema Windows 32 bits\n");
    #else
        printf("Sistema não é Windows\n");
    #endif

    return 0;
}
```
{% endcode %}

***

## I/O Funções



Começando com a **função** mais popular da programação a função `printf. É` uma ferramenta essencial em qualuer linguagem serve para exibir mensagens e dados na **tela**. Ela oferece flexibilidade para formatar a saída e apresentar informações.

{% code overflow="wrap" %}
```c
printf(format_string, argument1, argument2);
```
{% endcode %}

**Componentes:**

* `format_string`: Uma string que define o layout da saída, incluindo texto e especificadores de formato.
* `argument1, argument2, ...`: Uma lista variável de argumentos que fornecem os dados a serem impressos.

<pre class="language-c" data-overflow="wrap"><code class="lang-c"><strong>
</strong><strong>printf("Olá, mundo!\n"); // Exibe a mensagem "Olá, mundo!"
</strong>printf("O valor de x é %d\n", 10); // Exibe "O valor de x é 10"
printf("Nome: %s, Idade: %d\n", "João", 30); // Exibe "Nome: João, Idade: 30"

</code></pre>



***



{% hint style="info" %}
## Saiba mais

## Resumindo

***



**a) Tipo de retorno**

* Define o tipo de dado que a função retorna:
  * `int`, `float`, `char`, `void`, etc.
* Se a função não retorna nenhum valor, o tipo de retorno é `void`.

**b) Nome da função**

* Deve seguir as regras de nomenclatura para identificadores em C.

c) **Parâmetros**

* São variáveis recebidas pela função para processar dados.
* Podem ser de qualquer tipo e passar por **valor** (cópia) ou por **referência** (ponteiro).

d) **Corpo da função**

* Contém o código que será executado.
{% endhint %}

