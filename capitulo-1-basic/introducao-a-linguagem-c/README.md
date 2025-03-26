# Introdução a Linguagem C

### O que é a linguagem C? <a href="#a-introducao-a-linguagem-c" id="a-introducao-a-linguagem-c"></a>

C é uma linguagem poderosa e flexível, ideal para desenvolvimento de baixo nível e aplicações que exigem **desempenho optimizado.** Embora exigente em termos de gerenciamento de memória e complexidade, seu aprendizado é fundamental para quem deseja entender profundamente como o computador e a programação funcionam.

Desenvolvida por **Dennis Ritchie** no início dos anos 1970 na AT\&T Bell Labs. Ela é amplamente utilizada devido à sua **eficiência**, **flexibilidade** e controle detalhado sobre o **hardware**, C é considerada uma linguagem de baixo nível em relação a outras linguagens modernas, o que a torna ideal para o **desenvolvimento de sistemas**, **aplicativos** e **software que exigem alta performance**.

### **Eficiência e Desempenho**

A linguagem C é uma linguagem de **baixo nível**, o que significa que ela oferece controle direto sobre o hardware e a memória tornando tudo mais proximo e direito. O código escrito em C é altamente otimizado e rápido, tornando-o ideal para aplicações que exigem alto desempenho, como sistemas operacionais, jogos e sistemas embarcados.

### Portabilidade

C é sim uma linguagem **multiplataforma**, o que significa que programas escritos em C podem ser compilados e executados em diferentes sistemas operacionais (Windows, Linux, macOS, etc.) e arquiteturas de hardware com poucas ou nenhuma modificação. Isso é possível graças aos **padrões de linguagem** e a disponibilidade de compiladores para diversas plataformas.

### **Simplicidade e Flexibilidade**

O C possui uma sintaxe bastante simples e um conjunto reduzido de palavras-chave, o que facilita o aprendizado e o uso. Ao mesmo tempo, a linguagem é extremamente poderosa, permitindo a criação de estruturas complexas

### A "**mãe**" moderna

Popularmente a linguagem C é chamada de "**mãe**" das linguagens modernas porque influenciou muitas linguagens que vieram depois. Pela eficiencia, flexíbilidade e impacto enorme no desenvolvimento de software. Abaixo algumas linguagens que foram diretamente derivadas ou fortemente influenciadas por **C**:

### Linguagens influênciadas pelo C <a href="#a-introducao-a-linguagem-c" id="a-introducao-a-linguagem-c"></a>

1. **C++**

Usam a sintaxe e conceitos de **C** como base:

* **O que é?**\
  Uma extensão do C com suporte a **programação orientada a objetos**, criada por Bjarne Stroustrup nos anos 1980.
* **Usos:**\
  Jogos, sistemas operacionais, softwares gráficos, e aplicações de alto desempenho.
* **Diferença para C:**\
  Adiciona classes, herança, polimorfismo e outras abstrações de alto nível.

2. **Objective-C**

* **O que é?**\
  Uma extensão do C que adiciona elementos de **programação orientada a objetos**, usada principalmente por Apple.
* **Usos:**\
  Desenvolvimento de aplicativos para macOS e iOS (antes do Swift).
* **Diferença para C:**\
  Adiciona mensagens e interfaces, inspirado em Smalltalk.

3. **C# (C-Sharp)**

* **O que é?**\
  Desenvolvida pela Microsoft, baseada em C/C++, mas com foco em **programação orientada a objetos** e produtividade.
* **Usos:**\
  Desenvolvimento para Windows, web (ASP.NET) e jogos (Unity).
* **Diferença para C:**\
  Sintaxe moderna, garbage collector e integração com o .NET Framework.

4. **Java**

* **O que é?**\
  Inspirada pela sintaxe do C e do C++, mas é 100% **orientada a objetos** e roda em uma **Máquina Virtual Java (JVM)**.
* **Usos:**\
  Desenvolvimento web, aplicativos empresariais, Android, entre outros.
* **Diferença para C:**\
  Sem ponteiros e com gerenciamento automático de memória.

5. **Python**

* **O que é?**\
  Embora seja de alto nível, sua implementação inicial foi feita em C (**CPython**) e sua sintaxe foi levemente inspirada por C.
* **Usos:**\
  Ciência de dados, inteligência artificial, automação, e desenvolvimento web.
* **Diferença para C:**\
  Sintaxe mais simples, tipagem dinâmica e foco na legibilidade.

6. **Rust**

* **O que é?**\
  Uma linguagem moderna inspirada por C e C++, mas com foco em segurança de memória e performance.
* **Usos:**\
  Sistemas operacionais, webassembly e aplicações de alto desempenho.
* **Diferença para C:**\
  Sem ponteiros inseguros e com um sistema de "ownership" para evitar erros de memória.

***

### **Sistemas operacionais baseados em C**

Além das linguagens, o C é a base para muitos sistemas operacionais, como:

* **UNIX**: Originalmente escrito em C.
* **Linux**: O kernel é escrito em C.
* **Android:**&#x20;
  * O Android é construído sobre o[ **kernel Linux**](#user-content-fn-1)[^1], que é escrito predominantemente em **C**.
  * O kernel é responsável por:
    * Gerenciar hardware (CPU, memória, armazenamento, etc.).
    * Controlar processos, segurança e drivers.
  * Como o Android utiliza o Linux, toda a interação de [baixo nível](#user-content-fn-2)[^2] depende diretamente de C.
* **Windows**: Grandes partes foram implementadas em C.

***



## [TIOBE Index for January 2025](https://www.tiobe.com/tiobe-index/)



***

{% hint style="warning" %}
## ✏️ **Actividades de aprendizagem**

O que é entendes por Hardware e Software?

O que entendes por multiplataforma e quais OS conheces?

O que é a sintaxe de uma linguagem de programção?
{% endhint %}



[^1]: O kernel é o **cérebro do sistema operacional**, controlando tudo o que acontece entre o hardware e os programas. Sem ele, nada funcionaria.

[^2]: **Baixo nível** se refere a uma proximidade maior do **hardware** e das operações internas do computador. As linguagens ou sistemas de baixo nível lidam diretamente com os componentes da máquina, como processador, memória e dispositivos.
