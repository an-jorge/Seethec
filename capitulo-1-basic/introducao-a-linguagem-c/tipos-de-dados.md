# Tipos de dados

{% hint style="info" %}
### **Saiba mais:**

**No final desta lição, você será capaz de responder ao seguinte**:

* Quais são os tipos de dados
* Qual tipo de dado em C é usado para armazenar um único caractere?
{% endhint %}



## Compreendendo tipos de dados <a href="#variaveis" id="variaveis"></a>

Em C, os tipos de dados são categorias que definem o tipo e o tamanho da informação que pode ser armazenada em uma variável. Eles podem ser classificados em **tipos primitivos**, **modificadores de tipo** e **tipos derivados**. Aqui está uma visão geral:

### **1. Tipos primitivos (ou básicos):** <a href="#id-1-tipos-primitivos-ou-basicos" id="id-1-tipos-primitivos-ou-basicos"></a>

Estes são os tipos de dados fundamentais que vêm com a linguagem:

<table data-full-width="false"><thead><tr><th>Tipo</th><th>Tamanho aproximado¹</th><th>Intervalo aproximado¹</th><th>Uso</th></tr></thead><tbody><tr><td><code>char</code></td><td>1 byte</td><td>-128 a 127 (ou 0 a 255)</td><td>Armazena caracteres ou inteiros pequenos.</td></tr><tr><td><code>int</code></td><td>2 ou 4 bytes</td><td>-32.768 a 32.767 (2 bytes) ou ±2 bilhões (4 bytes)</td><td>Armazena inteiros.</td></tr><tr><td><code>float</code></td><td>4 bytes</td><td>~ ±3.4E-38 a ±3.4E+38</td><td>Armazena números de ponto flutuante (decimais).</td></tr><tr><td><code>double</code></td><td>8 bytes</td><td>~ ±1.7E-308 a ±1.7E+308</td><td>Armazena números decimais maiores e mais precisos.</td></tr><tr><td><code>void</code></td><td>Sem tamanho</td><td>Não aplicável</td><td>Usado para funções que não retornam valor.</td></tr></tbody></table>

***

### **2. Modificadores de tipo:** <a href="#id-2-modificadores-de-tipo" id="id-2-modificadores-de-tipo"></a>

Esses modificadores ajustam o tamanho ou o comportamento de tipos primitivos. Eles incluem:

<table data-full-width="false"><thead><tr><th>Modificador</th><th>Descrição</th></tr></thead><tbody><tr><td><code>signed</code></td><td>Permite valores negativos e positivos (padrão para <code>int</code>).</td></tr><tr><td><code>unsigned</code></td><td>Apenas valores positivos ou zero.</td></tr><tr><td><code>short</code></td><td>Reduz o tamanho padrão de um inteiro.</td></tr><tr><td><code>long</code></td><td>Aumenta o tamanho de um inteiro ou de um <code>double</code>.</td></tr></tbody></table>

**Exemplos:**

* `short int`: Menor intervalo de inteiros.
* `long int`: Maior intervalo de inteiros.
* `unsigned int`: Somente inteiros positivos.

***

### **3. Tipos derivados:** <a href="#id-3-tipos-derivados" id="id-3-tipos-derivados"></a>

Esses tipos são construídos a partir dos tipos primitivos e permitem armazenar colecções de valores ou criar estruturas mais complexas.

<table data-full-width="false"><thead><tr><th>Tipo</th><th>Descrição</th></tr></thead><tbody><tr><td><strong>Array</strong></td><td>Colecção de elementos do mesmo tipo.</td></tr><tr><td><strong>Pointer</strong></td><td>Armazena o endereço de uma variável.</td></tr><tr><td><strong>Struct</strong></td><td>Agrupa diferentes tipos de dados.</td></tr><tr><td><strong>Union</strong></td><td>Semelhante à <code>struct</code>, mas compartilha o mesmo espaço de memória.</td></tr><tr><td><strong>Enum</strong></td><td>Define um conjunto de valores constantes inteiros.</td></tr></tbody></table>

### **Resumo da classificação:** <a href="#resumo-da-classificacao" id="resumo-da-classificacao"></a>

<table data-header-hidden data-full-width="false"><thead><tr><th></th><th></th></tr></thead><tbody><tr><td><strong>Categoria</strong></td><td><strong>Exemplos</strong></td></tr><tr><td><strong>Primitivos</strong></td><td><code>int</code>, <code>char</code>, <code>float</code>, <code>double</code>, <code>void</code></td></tr><tr><td><strong>Modificados</strong></td><td><code>signed</code>, <code>unsigned</code>, <code>short</code>, <code>long</code></td></tr><tr><td><strong>Derivados</strong></td><td><code>array</code>, <code>pointer</code>, <code>struct</code>, <code>union</code>, <code>enum</code></td></tr><tr><td><strong>Definidos pelo usuário</strong></td><td><code>typedef</code>, <code>enum</code>, <code>struct</code></td></tr></tbody></table>

***



{% hint style="warning" %}
#### ✏️ Actividade de aprendizagem <a href="#actividade-de-aprendizagem" id="actividade-de-aprendizagem"></a>

Qual a diferença entre os tipos `float` e `double` em C?

Qual biblioteca em C contém a definição para o tipo `bool`?\

{% endhint %}

