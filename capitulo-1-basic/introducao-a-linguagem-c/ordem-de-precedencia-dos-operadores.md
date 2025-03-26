# Ordem de precedência dos operadores

Em C, assim como em muitas outras linguagens de programação, a ordem de avaliação dos operadores matemáticos segue a convenção padrão da matemática. Aqui está a ordem de precedência dos operadores matemáticos em C, da mais alta para a mais baixa:

1. **Parênteses**: Expressões dentro de parênteses são avaliadas primeiro.
2. **Multiplicação (\*) e Divisão (/)**: Multiplicação e divisão têm a mesma prioridade e são avaliadas da esquerda para a direita.
3. **Adição (+) e subtracção (-)**: Adição e subtracção têm a mesma prioridade e são avaliadas da esquerda para a direita.

Quando há operadores com a mesma precedência, a avaliação ocorre da esquerda para a direita.

**Dicas para usar operadores relacionais:**

* Utilize os operadores relacionais para comparar valores e tomar decisões em seu programa.
* Lembre-se da precedência dos operadores para evitar erros de lógica.
* Utilize parênteses para alterar a ordem de execução das operações, se necessário.

É sempre importante lembrar da precedência dos operadores, que define a ordem em que as operações são realizadas em uma expressão.

***

#### T**abela de Precedência (Principais Operadores)**

<table data-full-width="true"><thead><tr><th>Precedência (Alta → Baixa)</th><th>Operadores</th><th>Associatividade</th></tr></thead><tbody><tr><td>1</td><td><code>()</code> (parênteses), <code>[]</code>, <code>-></code>, <code>.</code></td><td>Esquerda para direita</td></tr><tr><td>2</td><td><code>!</code>, <code>~</code>, <code>++</code> (prefixo), <code>--</code> (prefixo), <code>+</code> (unário), <code>-</code> (unário), <code>&#x26;</code> (endereço), <code>*</code> (desreferência), <code>sizeof</code>, <code>(type)</code> (cast)</td><td>Direita para esquerda</td></tr><tr><td>3</td><td><code>*</code>, <code>/</code>, <code>%</code></td><td>Esquerda para direita</td></tr><tr><td>4</td><td><code>+</code>, <code>-</code></td><td>Esquerda para direita</td></tr><tr><td>5</td><td><code>&#x3C;</code>, <code>&#x3C;=</code>, <code>></code>, <code>>=</code></td><td>Esquerda para direita</td></tr><tr><td>6</td><td><code>==</code>, <code>!=</code></td><td>Esquerda para direita</td></tr><tr><td>7</td><td><code>&#x26;</code> (bitwise AND)</td><td>Esquerda para direita</td></tr><tr><td>8</td><td><code>^</code> (bitwise XOR)</td><td>Esquerda para direita</td></tr><tr><td>9</td><td>`</td><td>` (bitwise OR)</td></tr><tr><td>10</td><td><code>&#x26;&#x26;</code> (logical AND)</td><td>Esquerda para direita</td></tr><tr><td>11</td><td><code>?:</code> (operador condicional ternário)</td><td>Direita para esquerda</td></tr><tr><td>12</td><td><code>=</code>, <code>+=</code>, <code>-=</code>, <code>*=</code>, <code>/=</code>, <code>%=</code>, <code>&#x26;=</code>, `</td><td>=<code>,</code> ^=<code>,</code> &#x3C;&#x3C;=<code>,</code> >>=` (atribuições)</td></tr><tr><td>13</td><td><code>,</code> (vírgula)</td><td>Esquerda para direita</td></tr></tbody></table>



***



Exemplo que demonstra a **precedência de operadores** :&#x20;

#### **Exemplo de Código**

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2, result;

    result = a + b * c; 
    // Multiplicação (*) tem precedência sobre adição (+)
    printf("Resultado 1: %d\n", result);

    result = (a + b) * c; // Parênteses alteram a precedência
    printf("Resultado 2: %d\n", result);
    
    result = a > b && b > c; 
    // Operadores relacionais têm precedência sobre operadores lógicos
    printf("Resultado 3: %d\n", result);

    return 0;
}
```
{% endcode %}

#### **Saída**

{% code overflow="wrap" %}
```c
Resultado 1: 20
Resultado 2: 30
Resultado 3: 1

```
{% endcode %}

