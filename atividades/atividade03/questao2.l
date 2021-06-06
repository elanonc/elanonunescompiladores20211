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
