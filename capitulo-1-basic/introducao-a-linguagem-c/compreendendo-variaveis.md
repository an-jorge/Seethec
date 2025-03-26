# Compreendendo variáveis

## Variáveis <a href="#variaveis" id="variaveis"></a>

Variáveis são elementos fundamentais para armazenar e manipular dados durante a execução de um programa. Elas permitem que você represente valores e associe-os a identificadores únicos para uso posterior. Antes de usar uma variável, é necessário declará-la. A declaração informa ao compilador o tipo de dado que a variável armazenará e aloca **memória** para ela.

### **1. Regras de nomenclatura**

* Deve começar com uma **letra** ou **underscore** (`_`), mas não com um número.
  * ✅ **Correto**: `idade`, `_altura`
  * ❌ **Errado**: `2anos`, `@valor`&#x20;
* Pode conter letras, números e underscores, mas **não pode conter espaços** nem caracteres especiais.
  * ✅ **Corret**o: `valor_total`
  * ❌ **Errado**: `valor total`, `valor@total`
* Não pode usar palavras reservadas do C (ex.: `int`, `float`, `return`, etc.).



<figure><img src="../../.gitbook/assets/RAM memory.jpg" alt="Memoria RAM"><figcaption><p>RAM Memory</p></figcaption></figure>

***



**A sintaxe básica para declarar variáveis em C é:**

```c
int number; // Declara uma variável inteira chamada "number"
float price; // Declara uma variável do tipo flutuante chamada "price"
char letter; // Declara uma variável do tipo caractere chamada 'letter'
```

### **Escopo das variáveis**

O local onde a variável é declarada determina onde ela pode ser usada:

* **Global**: Declarada fora de funções, pode ser usada em qualquer parte do programa.
* **Local**: Declarada dentro de uma função ou bloco, só pode ser usada naquele escopo.

Vale ressaltar que em C, a linguagem não possui um tipo de dado `boolean` nativo como algumas linguagens modernas. No entanto, desde o padrão C99, existe a biblioteca `<stdbool.h>`, que fornece suporte ao tipo booleano de forma prática.

Além desses, C também [suporta modificadores de tipo](tipos-de-dados.md#id-2-modificadores-de-tipo) como `unsigned` para indicar que um **número inteiro não deve ser negativo**, e `signed` para indicar que um **número inteiro pode ser positivo ou negativo** (o qual é implícito para tipos inteiros).

### 2.  Variáveis imutáveis <a href="#variaveis-imutaveis" id="variaveis-imutaveis"></a>

Embora que as variaveis podem ser alteradas na programação temos variáveis imutáveis aquelas que não pode ser alteradas depois de declaradas. Em C, `#define` e `const` são usados para finalidades semelhantes (definir valores constantes), mas são conceitos diferentes e têm nomes específicos:

#### `define` — **Directiva de pré-processador** (Macro) <a href="#define--directiva-de-pre-processador-macro" id="define--directiva-de-pre-processador-macro"></a>

O pré-processador de C, o que significa que ele actua antes da fase de compilação. Quando você usa `#define`, o pré-processador simplesmente substitui todas as ocorrências da palavra definida pelo valor ou texto correspondente.

```c
#define WEIGHT_MAX 100
```

Aqui, `WEIGHT_MAX` será substituído por `100` em todo o código onde aparecer. O `#define` não possui tipo associado e ocorre durante o pré-processamento.

#### `const` — **Variável constante** <a href="#const--variavel-constante" id="const--variavel-constante"></a>

`const` define uma **variável constante**, ou seja, uma variável cujo valor não pode ser alterado depois de inicializada. Ao contrário de uma macro, uma variável `const` possui tipo e é verificada pelo compilador durante a fase de compilação.

```c
const weightMax 100
```

Aqui, `weightMax` é uma variável do tipo `int` que não pode ser modificada. Diferente de `#define`, ela tem um tipo definido (neste caso `int`) e o compilador faz a verificação de tipo.

## Diferenças entre `#define` e `const` <a href="#diferencas-entre-define-e-const" id="diferencas-entre-define-e-const"></a>

1. **Tempo de avaliação**: O `#define` é processado pelo pré-processador antes da compilação, enquanto `const` é avaliado durante a compilação.
2. **Tipo**: Uma macro `#define` não possui tipo, enquanto uma variável `const` é do tipo especificado (como `int`, `float`, etc.).
3. **Escopo e visibilidade**: As variáveis `const` seguem as regras de escopo da linguagem C (local ou global), enquanto macros `#define` têm escopo global, a menos que sejam usadas dentro de directivas condicionais.
4. **Segurança**: `const` é mais seguro, já que está sob controle do compilador, com verificação de tipos.

### Características <a href="#caracteristicas" id="caracteristicas"></a>

* **Não ocupa memória**: Diferente de variáveis, `#define` não ocupa espaço de memória, já que a substituição ocorre antes da compilação.
* **Sem tipo**: Como é uma substituição de texto, não tem tipo definido. É importante tomar cuidado com tipos e precedências ao usar macros.
* **Escopo global**: As macros definidas com `#define` são visíveis por todo o arquivo em que são declaradas, a menos que haja directivas condicionais.

***



{% hint style="warning" %}
#### ✏️ Actividade de aprendizagem <a href="#actividade-de-aprendizagem" id="actividade-de-aprendizagem"></a>

* Por que a memoria é tão importante para o computador?
{% endhint %}

