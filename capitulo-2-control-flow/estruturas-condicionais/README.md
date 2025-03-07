---
layout:
  title:
    visible: true
  description:
    visible: false
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: true
---

# Estruturas condicionais

{% hint style="info" %}
#### **Saiba mais** <a href="#saiba-mais" id="saiba-mais"></a>

**No final desta lição, você será capaz de responder ao seguinte**:\
O que são "Estruturas Condicionais"

* `if`, `else`, `switch`

O que são "Instruções Condicionais"
{% endhint %}



## Introdução às Instruções if e else

Na programação as instruções `if` e `else` são usadas para controlar o fluxo do programa com base em condições. Assim como na vida, as condições permitem que você execute diferentes blocos de código dependendo se uma condição é verdadeira ou falsa.

***



{% code overflow="wrap" %}
```c
if (condição) {
  // bloco de código a ser executado se a condição for verdadeira
} else {
  // bloco de código a ser executado se a condição for falsa (opcional)
}
```
{% endcode %}

{% hint style="info" %}
### Saiba mais

`condição`: Uma expressão booleana que deve ser avaliada como verdadeira (não zero) ou falsa para determinar qual bloco de código será executado.

`bloco de código`: Um conjunto de instruções que serão executadas se a condição for verdadeira (bloco `if`) ou falsa (bloco `else`).
{% endhint %}



{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo ou zero.\n");
    }

    return 0;
}
```
{% endcode %}



***

## Introdução à Instrução `else-if`&#x20;

A instrução `else if` é usada quando você precisa verificar **múltiplas condições** em um programa. Ela é uma extensão da estrutura `if-else` e permite adicionar várias condições intermediárias antes de chegar ao bloco `else`.

***



{% hint style="info" %}
## Saiba mais

O programa verifica as condições na ordem em que aparecem.

Assim que uma condição for verdadeira 1, o bloco correspondente será executado e o restante será ignorado. O bloco `else` é opcional e será executado apenas se **nenhuma das condições anteriores for verdadeira**.


{% endhint %}



**Aqui está um exemplo prático**:

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main()
{
    int score = 10;

    printf("Sua pontuacao %d", score);

    if (score >= 90)
    {
        printf("Você tirou A.\n");
    }
    else if (score >= 80)
    {
        printf("Você tirou B.\n");
    }
    else if (score >= 70)
    {
        printf("Você tirou C.\n");
    }
    else if (score >= 60)
    {
        printf("Você tirou D.\n");
    }
    else
    {
        printf("Você foi reprovado.\n");
    }

    return 0;
}
```
{% endcode %}



A instrução `else if` é uma ferramenta poderosa para lidar com múltiplas condições em um programa. Ela permite que você crie fluxos de decisão mais complexos e dinâmicos, tornando seu código mais flexível e funcional.



***



## Introdução às Instruções `switch`



`switche` é usada para realizar uma selecção entre várias alternativas com base no valor de uma expressão. É uma forma mais organizada e eficiente de lidar com múltiplas opções do que uma série de instruções if e else if.&#x20;

**A estrutura básica do** `switch` **é a seguinte:**

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int option = 2;

    switch (option) {
        case 1:
            printf("Opção 1 selecionada.\n");
            break;
        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        case 3:
            printf("Opção 3 selecionada.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
```
{% endcode %}



**Vantagens do uso de** `switch`**:**

* **Melhora a legibilidade:** O `switch` torna o código mais organizado e fácil de ler, especialmente quando comparado a longas cadeias de instruções `if else`, `else-if`.
* **Manutenção facilitada:** Adicionar ou remover casos é simples, pois cada condição e seu código associado ficam agrupados.
* **Eficiência:** Em alguns casos, o `switch` pode ser mais eficiente que encadeamentos de `if else else if` devido à optimizações realizadas pelo compilador.

***



{% hint style="info" %}
## Saiba mais

Os valores nos casos (`case`) devem ser constantes e do mesmo tipo que a expressão sendo avaliada.

O `break` é crucial para evitar a execução descontrolada de casos subsequentes.

O bloco `default` é opcional, mas recomendado para lidar com valores inesperados da expressão.
{% endhint %}

