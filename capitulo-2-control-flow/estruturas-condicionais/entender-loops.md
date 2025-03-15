# Entender loops

### Instrução `for`

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
    printf("Tepetição número %d\n", item);
  }

  return 0;
}
```
{% endcode %}

**Saída:**

{% code overflow="wrap" %}
```

Tepetição número 1
Tepetição número 2
Tepetição número 3
Tepetição número 4
Tepetição número 5
Tepetição número 6
Tepetição número 7
Tepetição número 8
Tepetição número 9
Tepetição número 10

```
{% endcode %}

{% hint style="success" %}
## 💡 Explicação



* **Inicialização**: `int item = 0` (a variável `item` começa em 0).
* **Condição**: `item < 10` (o loop continua enquanto `item` for menor que 10).
* **Incremento**: `item++` (a variável `item` é incrementada em 1 a cada iteração).
{% endhint %}



***
