# Especificadores de formato

## Especificadores de formato <a href="#especificadores-de-formato" id="especificadores-de-formato"></a>



Para explorar o poder da linguagem e como os nossos programas pode ser interesentes precisamos antes entender os especificadores de formato como determinar argumentos como serão formatados e exibidos na tela em funções como `printf()` e `scanf()` Eles começam com o símbolo `%` seguido de um caractere que indica o tipo de dado a ser processado. Aqui está uma lista dos principais especificadores de formato em C:

***



1. `%d`: Inteiro decimal
2. `%ld`: Longo inteiro decimal
3. `%f`: Ponto flutuante (números com vírgula)
4. `%lf`: Duplo ponto flutuante
5. `%c`: Carácter
6. `%s`: String
7. `%x` ou `%X`: Inteiro hexadecimal
8. `%o`: Inteiro octal
9. `%u`: Inteiro sem sinal
10. `%p`: Ponteiro
11. `%%`: carácter de percentagem (para imprimir um símbolo de percentagem)



## Sequências de escape em C <a href="#sequencias-de-escape-em-c" id="sequencias-de-escape-em-c"></a>

***



As sequências de escape são combinações de caracteres que começam com uma barra invertida (`\`) e são usadas para representar caracteres especiais ou ações específicas em strings e caracteres. Elas são úteis para incluir caracteres que não podem ser digitados diretamente ou para controlar a formatação de saída.



1. `\n`: Nova linha
2. `\t`: Tabulação horizontal
3. `\r`: Retorno de carro (move o cursor para o início da linha)
4. `\\`: Barra invertida (usada para representar uma barra invertida literal)
5. `\"`: Aspas duplas (usada para representar aspas duplas literais dentro de uma string)
6. `\'`: Apóstrofo (usado para representar um apóstrofo literal dentro de uma string)
7. `\b`: Retrocesso (move o cursor uma posição para trás)
8. `\f`: Avanço de página (usado para mover o cursor para a próxima página)
9. `\v`: Tabulação vertical
10. `\a`: Alerta sonoro (produz um som de alerta)
11. `\0`: carácter nulo (termina uma string)
12. `\ooo` - Caractere Octal
13. `\xhh` - Caractere Hexadecimal

Estes são apenas alguns dos especificadores de formato básicos. Existem outros modificadores que podem ser usados com esses especificadores para controlar a precisão, largura do campo, preenchimento, alinhamento e muito mais.

