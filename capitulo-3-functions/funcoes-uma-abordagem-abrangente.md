# Funções - Uma abordagem abrangente

Como já soubemos que na programação funções são blocos de código reutilizáveis que ajudam a organizar um programa e evitar repetição de código.

Ao invés de repetirmos o mesmo código várias e várias vezes, você pode escrever uma função e simplesmente chamá-la sempre que precisar. Quando a sua estrutura foi explicada anteriormente de uma forma bastante simples e resumida, agora vamos aprender outros tipos de funções podemos chamar-los de [**Built-in**](#user-content-fn-1)[^1].

## Leitura de dados

***

### `scanf`&#x20;

A função `scanf`  certamente é uma das principais funções de entrada em C, utilizada para leitura de dados do usuário a partir do teclado. Permite que você capture diferentes tipos de dados, como **inteiros**, **floats**, **caracteres** e **strings**. O padrão C11 (2011) trouxe uma versão alternativa e mais segura da função `scanf` o `scanf_s` com ela mais bibliotecas C seguras como [Microsoft Secure CRT](#user-content-fn-2)[^2], embora adiciona segurança, mas é **exclusivo para Windows**.

O [**Annex K**](#user-content-fn-3)[^3] introduziu funções seguras que possuem um `_s` no final no entanto muitos dos recursos adicionados foram para mitigar os problemas de segurança associados ao `scanf` tradicional, como vimos mais acima esta solução não está disponível em todos os ambientes de desenvolvimento o suporte real pode ser vista muitas vezes no compilador da Microsoft.&#x20;

A pouca adoção de outros compiladores incluindo **GCC** e **Clang** por acreditar que ele não resolve completamente os problemas de segurança. Ainda se diz que **Annex K** não respeitou a filosofia do C que foi projetado para ser **minimalista** e **portável**. **O Annex K** adiciona **muita complexidade**, o que não é bem-visto pela comunidade e amantes da linguagem.

[Devido à **baixa adoção**, o Annex K foi **removido do padrão C23**. A **comunidade C** decidiu que ele **não era essencial** e preferiu investir em práticas de segurança mais amplamente adotadas.](#user-content-fn-4)[^4]



***



A função `scanf` é uma ferramenta poderosa na linguagem C para receber entradas do usuário ao lado de outras funções como `fgets()`. Aqui estão algumas das principais vantagens de seu uso:\


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
