# Funções - Uma abordagem abrangente

Como já soubemos que na programação funções são blocos de código reutilizáveis que ajudam a organizar um programa e evitar repetição de código.

Ao invés de repetirmos o mesmo código várias e várias vezes, você pode escrever uma função e simplesmente chamá-la sempre que precisar. Quando a sua estrutura foi explicada anteriormente de uma forma bastante simples e resumida, agora vamos aprender outros tipos de funções podemos chamar-los de [**Built-in**](#user-content-fn-1)[^1].

## Leitura de dados

***

A função `scanf`  certamente é uma das principais funções de entrada em C, utilizada para leitura de dados do usuário a partir do teclado. Permite que você capture diferentes tipos de dados, como **inteiros**, **floats**, **caracteres** e **strings**. O padrão C11 (2011) trouxe uma versão alternativa e mais segura da função `scanf` o `scanf_s` com ela mais bibliotecas C seguras como [Microsoft Secure CRT](#user-content-fn-2)[^2], embora adiciona segurança, mas é **exclusivo para Windows**.

O [**Annex K**](#user-content-fn-3)[^3] introduziu funções seguras que possuem um `_s` no final no entanto muitos dos recursos adicionados foram para mitigar os problemas de segurança associados ao `scanf` tradicional, como vimos mais acima esta solução não está disponível em todos os ambientes de desenvolvimento o suporte real pode ser vista muitas vezes no compilador da Microsoft.&#x20;

A pouca adoção de outros compiladores incluindo **GCC** e **Clang** por acreditar que ele não resolve completamente os problemas de segurança. Ainda se diz que **Annex K** não respeitou a filosofia do C que foi projetado para ser **minimalista** e **portável**. **O Annex K** adiciona **muita complexidade**, o que não é bem-visto pela comunidade e amantes da linguagem.

[Devido à **baixa adoção**, o Annex K foi **removido do padrão C23**. A **comunidade C** decidiu que ele **não era essencial** e preferiu investir em práticas de segurança mais amplamente adotadas.](#user-content-fn-4)[^4]



***

### `scanf`

A função `scanf` é uma ferramenta poderosa na linguagem C para receber entradas do usuário ao lado de outras funções como `fgets()`. Aqui estão algumas das principais vantagens de seu uso:

**1. Leitura de Dados Formatada**

* A função `scanf` permite que leia dados de forma **formatada**, especificando o tipo de dados que espera receber (como **inteiros**, **floats**, **strings**, etc.). Isso ajuda a garantir que os dados sejam interpretados corretamente.

**2. Interatividade**

* `scanf` permite que os programas interajam com os usuários, solicitando entradas pelo teclado Algo super essencial para muitos softwares que dependem de entradas de dados dinâmicos fornecidos pelo usuário.

**3. Flexibilidade**

* `scanf` retorna o número de itens lidos com sucesso, permitindo que você verifique se a entrada foi processada corretamente. Isso é útil para implementar verificações de erro e garantir que o programa não falhe devido a entradas inválidas.

**4. Controle de Erros**

* O `scanf` pode ler múltiplos valores em uma única chamada, o que a torna eficiente para capturar várias entradas de uma só vez. Por exemplo, você pode ler um **inteiro** e um **float** em uma única linha de entrada.

### As Desvantanges do `scanf`&#x20;

Embora a função `scanf` seja amplamente utilizada para entrada de dados em C, ela possui algumas desvantagens que podem impactar a segurança e a robustez do seu código. Aqui estão algumas das principais desvantagens:

**1. Falta de Verificação de Limites**

* `scanf` não verifica o tamanho do **buffer** ao ler strings. Isso pode levar ao que chamos de **buffer overflow**, onde dados são escritos além dos limites da memória alocada, resultando em comportamento indefinido ou vulnerabilidades de **segurança**.

**2. Dificuldade em Ler Linhas Inteiras**

* `scanf` não é ideal para ler linhas inteiras de texto, peca bastante neste quesito especialmente se houver espaços em branco. Para isso é melhor usar funções como `fgets`, que podem lidar melhor com entradas de texto.

**3. Dependência de Espaços em Branco**

* `scanf` ignora espaços em branco, o que pode causar problemas ao ler múltiplos valores em uma única linha. O que pode levar a confusões se o usuário não inserir os dados exatamente como esperado.

***



**Vamos fazer um conjunto de bricandeiras com a funções** `scanf` **e** `print` .

{% code overflow="wrap" %}
```c

#include <stdio.h>

int main()
{
    char name[20];
    int age;

    printf("Digite seu nome: ");
    scanf("%s", name);
    printf("Digite sua idade: ");
    scanf("%d", &age);
    printf("Seu nome: %s, Sua idade: %d anos\n", name, age);
    printf("Obrigado por informar \n");

    return 0;
}

```
{% endcode %}

{% hint style="info" %}
## Terminal



Digite seu nome: Andre\
Digite sua idade: 12

Seu nome: Andre, Sua idade: 12 anos
{% endhint %}



[^1]: Funções "built-in" (ou nativas) são funções pré-definidas e integradas à linguagem, que estão sempre disponíveis para uso sem a necessidade de importação de bibliotecas externas. \


    Funções Built-in Comuns em C:

    `printf` (para imprimir texto na tela)

    `scanf` (para ler dados do teclado) etc.

[^2]: A **Microsoft Secure CRT** é um conjunto de funções implementado no **MSVC (Microsoft Visual C++)** que expande as funções tradicionais do C com verificações de segurança. Essas funções são **específicas para o Windows** e não fazem parte do padrão ISO C11

[^3]: **Annex K** (Anexo K) é uma extensão opcional do padrão **ISO C11** que define um conjunto de **funções seguras** para manipulação de strings, entrada e saída de dados, e manipulação de arquivos. Ele foi introduzido para mitigar problemas comuns, como **buffer overflow**, **format string attacks** e **acessos indevidos à memória**.

[^4]: Informações detalhadas sobre a remoção do **Annex K** no padrão **C23** proposta **WG14 N2809**, intitulada **"Annex K Repairs"**, de autoria de **Robert C. Seacord**, 4 de outubro de 2021
