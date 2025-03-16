# Entender loops

## Instrução `for`

&#x20;loop `for` é uma estrutura de controle de fluxo ou repetição que permite executar repetidamente um bloco de código enquanto uma condição for verdadeira. Ele é amplamente utilizado para situações em que o número de iterações é conhecido previamente.

#### **Sintaxe Geral**

{% code overflow="wrap" %}
```c
for (inicialização; condição; incremento) {
  // bloco de código a ser repetido
}
```
{% endcode %}

* **inicialização:** Esta expressão é executada apenas uma vez, no início do loop. É comum usada para inicializar uma variável de controle que será utilizada para contar o número de iterações.
* **condição:** Esta expressão é avaliada antes de cada iteração do loop. Se a condição for verdadeira, o bloco de código é executado. Se a condição for falsa, o loop termina.
* **incremento:** Esta expressão é executada após cada iteração do loop. É comum usada para atualizar a variável de controle para a próxima iteração.

#### **Exemplo:**

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
  int item;

  for (item = 1; item <= 10; item++) {
    printf("Repetição número %d\n", item);
  }

  return 0;
}
```
{% endcode %}

**Saída:**

{% code overflow="wrap" %}
```

Rodada 1
Rodada 2
Rodada 3
Rodada 4
Rodada 5
Rodada 6
Rodada 7
Rodada 8
Rodada 9
Rodada 10

```
{% endcode %}

{% hint style="success" %}
## 💡 Explicação



* **Inicialização**: `int item = 0` (a variável `item` começa em 0).
* **Condição**: `item < 10` (o loop continua enquanto `item` for menor que 10).
* **Incremento**: `item++` (a variável `item` é incrementada em 1 a cada iteração).
{% endhint %}



***



## Instrução `while` <a href="#instrucao-while" id="instrucao-while"></a>



O `while` é uma **instrução de controle de fluxo** que utiliza uma **condição** para determinar se um bloco de código será executado repetidamente. Em poucas palavras podemos dizer que, o `while` é uma **estrutura de repetição** que depende de uma **condição lógica** para continuar ou parar a execução de um loop.

#### **Sintaxe Geral**

{% code overflow="wrap" %}
```c
while (condição) {
    // Bloco de código a ser executado enquanto a condição for verdadeira
}
```
{% endcode %}



