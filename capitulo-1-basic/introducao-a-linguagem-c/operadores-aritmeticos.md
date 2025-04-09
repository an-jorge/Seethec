# Operadores aritméticos

## Sobre os operadores **aritméticos** <a href="#operadores-matematicos" id="operadores-matematicos"></a>

Operadores **aritméticos** são símbolos usados na linguagem C para realizar cálculos com variáveis e valores numéricos. Eles se comportam de maneira similar aos operadores matemáticos que você já conhece da álgebra.

1. Adição: `+`
2. subtracção: `-`
3. Multiplicação: `*`
4. Divisão: `/`
5. Módulo (resto da divisão): `%`
6. Incremento: `++`
7. Decremento: `--`

### 1.  Adição `+`

Na programação de forma geral, o operador de adição é o símbolo **+**. Ele é usado para somar dois ou mais valores, sejam eles números inteiros, números de ponto flutuante ou até mesmo caracteres. A sintaxe é igual para todos todos os operadores matemáticos.

{% code overflow="wrap" %}
```c
result = value + value2;
```
{% endcode %}

onde:

* `result` é a variável que irá armazenar o resultado da soma.
* `value` e `value2` são os valores que serão somados.

{% code overflow="wrap" %}
```c
int value = 10;
int value2 = 5;
int result = value + value2; // soma será igual a 15
```
{% endcode %}

{% code overflow="wrap" %}
```c
char c1 = 'A';
char c2 = 'B';
int soma = c1 + c2; // soma será igual a 131 (valor ASCII de 'A' + valor ASCII de 'B')
```
{% endcode %}

{% hint style="info" %}
### **Saiba mais:**

O operador de adição pode ser usado com qualquer tipo de dado numérico em C, incluindo `int`, `float`, `double`, `char`, etc.

Quando os operandos são de tipos diferentes, o C realiza conversões automáticas para um tipo comum antes de realizar a soma.

O operador de adição também pode ser usado para concatenar strings em C, mas para isso é necessário usar funções específicas da [**biblioteca string.h**](#user-content-fn-1)[^1], como `strcat`.
{% endhint %}

***

### 2. Subtração: `-`

A **subtração** é feita usando o operador de subtração `-`, assim como fazemos na matemática. Aqui estão alguns exemplos práticos:

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 4;
    int result = a - b;

    printf("Resultado da subtração: %d\n", result);  // Saída: 6
    return 0;
}

```
{% endcode %}

#### **Subtração com números de ponto flutuante (`float`)**

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    float x = 5.5;
    float y = 2.2;
    float result = x - y;

    printf("Resultado da subtração: %.2f\n", result);  // Saída: 3.30
    return 0;
}

```
{% endcode %}

***

### 3. Multiplicação `*`

A **multiplicação** é feita usando o operador `*` (asterisco). Esse operador funciona para multiplicar **inteiros**, **floats** e **doubles**. Aqui vão exemplos simples e práticos:

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int result = a * b;

    printf("Resultado da multiplicação: %d\n", result);  // Saída: 15
    return 0;
}

```
{% endcode %}

***

### 4. Divisão `/`

A **divisão** é feita usando o operador `/`. Dependendo do tipo de dado (inteiro ou ponto flutuante), a divisão pode ter comportamentos diferentes.

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int resultado = a / b;  // A parte decimal será descartada

    printf("Resultado da divisão: %d\n", resultado);  // Saída: 3
    return 0;
}

```
{% endcode %}

{% hint style="info" %}
**Saiba mais:**

* O resultado não será 3.33, porque a divisão entre inteiros retorna apenas a parte inteira.
{% endhint %}

#### **Divisão de números de ponto flutuante (`float` ou `double`)**

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    float x = 10.0;
    float y = 3.0;
    float result = x / y;

    printf("Resultado da divisão: %.2f\n", result);  // Saída: 3.33
    return 0;
}

```
{% endcode %}

{% hint style="danger" %}
## **Atenção**

* Se um ou ambos os números forem de ponto flutuante, o resultado será um número decimal.

### <mark style="color:red;">**Cuidado com a divisão por zero**</mark>

* Divisão por zero em C pode causar erros ou resultados indefinidos. Sempre verifique se o divisor não é zero antes de dividir.


{% endhint %}

***

### 5. Módulo `%`

O **módulo** (também chamado de **resto da divisão**) é feito usando o operador `%`. Esse operador retorna o **resto** de uma divisão entre dois números inteiros e Não o resultado da divisão como vimos com o operador `/` .

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int result = a % b;  // 10 dividido por 3 dá 3 e sobra 1

    printf("O resto da divisão é: %d\n", result);  // Saída: 1
    return 0;
}
```
{% endcode %}

{% hint style="danger" %}
### **Atenção:**

### **Explicação:**

* `10 / 3` = **3**, com resto **1**   &#x20;
* `10 % 3` retorna **1**
{% endhint %}

***



{% hint style="danger" %}
### **Atenção:**

### <mark style="color:red;">**Cuidado! O operador**</mark><mark style="color:red;">**&#x20;**</mark><mark style="color:red;">**`%`**</mark><mark style="color:red;">**&#x20;**</mark><mark style="color:red;">**só funciona com inteiros**</mark>

O operador **módulo (%) só pode ser usado com números inteiros (`int`)**.\
Se tentar usá-lo com `float` ou `double`, o compilador dará erro.

***



Se precisar do **resto da divisão para números decimais**, recomendo fortemente que use a função `fmod()` da biblioteca `<math.h>`:
{% endhint %}



***



{% code overflow="wrap" %}
```c
#include <stdio.h>
#include <math.h>  // Biblioteca para fmod()

int main() {
    double a = 10.5;
    double b = 3.2;
    double result = fmod(a, b);  // Retorna o resto da divisão

    printf("O resto da divisão é: %.2f\n", result);  // Saída: Resto: 0.90
    return 0;
}

```
{% endcode %}

{% hint style="info" %}
### Saiba mais:

Mais além entenderemos em detalhe sobre bibloteca **Math.h** e outros.
{% endhint %}

### Incremento `++`

O **operador de incremento** (`++`) em C é usado para **aumentar** o valor de uma variável em 1.

Ele pode ser usado de duas formas:

* **Pré-incremento** (`++x`) → Incrementa **primeiro**, depois usa o valor.
* **Pós-incremento** (`x++`) → Usa o valor primeiro, **depois** incrementa.

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
  int x = 5;

  x++; // Equivalente a: x = x + 1;

  printf("Valor de x: %d\n", x); // Saída: 6
  return 0;
}
```
{% endcode %}

***

### Decremento (`--`)

**O decremento** em C funciona de maneira semelhante ao incremento, mas, em vez de aumentar o valor de uma variável, ele **diminui** o valor. Assim como no incremento, existem duas formas de decremento.

* **Pré-decremento** (`--x`) → **Decrementa antes** de usar o valor.
* **Pós-decremento** (`x--`) → **Usa o valor primeiro**, depois decrementa.

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
  int x = 5;

  x--; // Equivalente a: x = x - 1;

  printf("Valor de x: %d\n", x); // Saída: 4
  return 0;
}

```
{% endcode %}

***

{% hint style="warning" %}
#### ✏️ **Actividade** de aprendizagem <a href="#actividade-de-aprendizagem" id="actividade-de-aprendizagem"></a>

Diga uma aplicação de uso do operator de incremento ou decremento
{% endhint %}



[^1]: 

    **O que é a biblioteca string.h?**\


    A biblioteca `string.h` é uma parte fundamental da linguagem de programação C. Ela fornece um conjunto de funções que permitem manipular strings (cadeias de caracteres) de maneira eficiente. Essas funções são indispensáveis para realizar diversas tarefas, como:

    * **Copiar:** Copiar uma string para outra.
    * **Concatenar:** Juntar duas ou mais strings.
    * **Comparar:** Verificar se duas strings são iguais ou diferentes.
    * **Buscar:** Encontrar uma substring dentro de uma string.
    * **Calcular o comprimento:** Determinar o número de caracteres em uma string.
    * **Converter:** Converter strings para outros tipos de dados (e vice-versa).

    **Por que usar a biblioteca string.h?**

    * **Eficiência:** As funções da biblioteca `string.h` são otimizadas para realizar operações com strings de forma rápida.
    * **Conveniência:** Ao invés de implementar manualmente algoritmos para manipular strings, você pode utilizar as funções prontas da biblioteca.
    * **Padronização:** As funções da biblioteca `string.h` são parte da biblioteca padrão do C, o que garante compatibilidade entre diferentes compiladores.
