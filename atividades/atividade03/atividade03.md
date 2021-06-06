## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01: 
Com base na aula, eu fui fazendo a transformação por etapas. Durante a aula eu ia fazendo os exemplos no caderno, e consegui desenvolver melhor quando "quebrava" as expressões regulares em partes para aplicar as etapas do metodo de thompson.

Segue abaixo o passo a passo até chegar ao NFA final:


![image](https://drive.google.com/uc?export=view&id=1FyOS7Zx0YmYkcLYgqtC6o_zPUml-kk9U)

![image](https://drive.google.com/uc?export=view&id=16JsLRJyUosHQUWtm3aR7qBlX68xVPVXs)

"Juntando" as duas partes anteriormente feitas, cheguei ao NFA Final:

![image](https://drive.google.com/uc?export=view&id=1cXsUSxSHnJLPDqeGfMhSUWGId2XnYZM4)

Na segunda parte da questão, pedia para que chegassemos ao DFA através do metodo dos subconjuntos:
PS: perdão a bagunça, computador estava travando muito e precisei fazer no word
![image](https://drive.google.com/uc?export=view&id=1PiM_S_CnhO-9NxlUFKy8buQGrcCb3KQu)


### Questão 02: 
Para fazer a questão dois, instalei o lex e o bison em um computador windows. 
No tutorial, o teste era em um codigo que tinha um formato um pouco diferente do que o senhor estava utilizando nas aulas de Lex.

~~~
%{  
#include <stdio.h> 
int numero_letras = 0; 
int numero_palavras = 0; 
int numero_linhas = 0;  
%}  

letra [a-zA-Z]
digito [0-9]
palavra ({letra}|{digito})+
linha \n

%%  

{line} { numero_linhas++; numero_letras++; }
[palavra] { numero_palavras++; numero_letras += yyleng; }
. { numero_letras++; }


%%  

int main(void) {  	

	yylex();     
	printf("Numero de Letras: %d", numero_letras);     
	printf("\n");     
	printf("Numero de Palavras: %d", numero_palavras);     
	printf("\n");     
	printf("Numero de Linhas count: %d", numero_linhas);     
	printf("\n");  

return 0; 

}
~~
