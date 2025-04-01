# Funções - Uma abordagem abrangente

Como já soubemos que na programação funções são blocos de código reutilizáveis que ajudam a organizar um programa e evitar repetição de código.

Ao invés de repetirmos o mesmo código várias e várias vezes, você pode escrever uma função e simplesmente chamá-la sempre que precisar. Quando a sua estrutura foi explicada anteriormente de uma forma bastante simples e resumida, agora vamos aprender outros tipos de funções podemos chamar-los de [**built-in**](#user-content-fn-1)[^1]





## Ler dados do usuário

### Função `scanf_s` <a href="#funcao-scanf_s" id="funcao-scanf_s"></a>

`scanf_s` é uma versão alternativa e mais segura da função `scanf` introduzida no padrão C11 (2011) e em bibliotecas C seguras como Microsoft Secure CRT. Ela oferece recursos para mitigar os problemas de segurança associados ao `scanf` tradicional, mas nem sempre está disponível em todos os ambientes de desenvolvimento.

### **Vantagens de segurança do scanf\_s:**

* **Verificação de tamanho:** Ao especificar o tamanho máximo do buffer de destino como argumento adicional, `scanf_s` ajuda a prevenir estouro de buffer.
* **Validação de tipo (opcional):** Dependendo da implementação, `scanf_s` pode realizar verificações de tipo opcionais para garantir que os dados lidos correspondam ao tipo de variável esperado.
* **Retorno de erro:** `scanf_s` retorna códigos de erro específicos para indicar problemas durante a leitura, auxiliando no tratamento de excepções.

Vamos fazer um conjunto de bricandeiras com a funções `scanf` e `print`

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
    printf("Seu nome: %s, sua idade: %d\n", name, age);
    printf("Obrigado por informar \n");

    return 0;
}


```



[^1]: Funções "built-in" (ou nativas) são funções pré-definidas e integradas à linguagem, que estão sempre disponíveis para uso sem a necessidade de importação de bibliotecas externas. \


    Funções Built-in Comuns em C:\


    `printf` (para imprimir texto na tela)

    `scanf` (para ler dados do teclado)

    etc.
