---
hidden: true
---

# Instruções condicionais

## Instrução `if` `else`

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





## Instrução `switch` <a href="#instrucao-switch" id="instrucao-switch"></a>

***



`switche` é usada para realizar uma seleção entre várias alternativas com base no valor de uma expressão. É uma forma mais organizada e eficiente de lidar com múltiplas opções do que uma série de instruções `if` e `else if.`&#x20;

**A estrutura básica do `switch` é a seguinte:**

{% code overflow="wrap" %}
```c

#include <stdio.h>

int main()
{
    int option = 1;

    printf("Escolha uma opção:\n");
    printf("1 - Iniciar\n");
    printf("2 - Configurações\n");
    printf("3 - Sair\n");

    switch (option)
    {
    case 1:
        printf("Iniciando...\n");
        break;
    case 2:
        printf("Abrindo configurações...\n");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}

```
{% endcode %}



{% hint style="danger" %}
## **Atenção:**

### <mark style="color:red;">Evitar "Fall-Through" Indesejado</mark>

`break` impede que os próximos `case` sejam executados.

Se esquecermos o `break`, os `case` seguintes serão executados **mesmo sem correspondência**, causando o que é chamado de efeito chamado **"fall-through"**.



***



* [ ] `break` impede que os próximos `case` sejam executados.


{% endhint %}



### Instrução `continue` e `break`

***



`continue` e `break` são utilizados para alterar o fluxo de execução dentro de laços de repetição (`for`, `while`, `do-while`) e também no comando `switch-case` em C.

* **`break`:**
  * Interrompe imediatamente o loop de repetição em que está inserido.
  * O programa continua a execução a partir da instrução seguinte ao loop.
* **`continue`:**
  * Interrompe a iteração actual do loop de repetição em que está inserido.
  * O programa pula para a avaliação da condição do loop e, se verdadeira, executa a próxima iteração.

**Exemplo demonstrando o uso de** `break` **e** `continue`**:**

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break; // Sai do loop quando i for igual a 5
    }
    if (i % 2 == 0) {
      continue; // Pula para a próxima iteração se i for par
    }
    printf(" repetição ímpar número %d\n", i);
  }

  return 0;
}
```
{% endcode %}

