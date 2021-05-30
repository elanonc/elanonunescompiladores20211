# Atividade 02

## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01: 
Com base na aula, cheguei ao segunte resultado = (0|1..|9)*('0'|'2'|'4'|'6'|'8'). 
Básicamente, a sequência dos naturais várias vezes e finaliza com algum dos números pares.

Usei o JFLAP pra fazer o automato. Vi umas opções de abreviações de sequencias, como a que é utilizada nas Expressões Regulares. 
Segue o automato que fiz:


![image](https://drive.google.com/uc?export=view&id=1NkaoWYsjIyKYVTiQsxwxXebaAmPShkym)

### Questão 02: 

Segue o automato:


![image](https://drive.google.com/uc?export=view&id=1wn2F2YDM6zE2CvLWen_wxIi6q7wYf2ai)


### Questão 03: 
Acredito que seja melhor para quando a palavra for muito grande, já que o número de casos do switch vai ser menor.

~~~
estado := 1;
While  estado = 1,2,3 ou 4 do 
  case caractere de entrada of
     /: case estado of
	1 : avance entrada;
	    estado := 2;
	end case;
     *: case estado of
	2 : avance entrada;
	    estado : = 3; 
	else estado := ...;
	end case
     *: case estado of
        3 : avance entrada;
	    estado := 4;
	else avance entrada 
	end case;
     /: case estado of
	4 : avance estrada;
	    estado := 5;
	* : avance entrada;
 end case;
end while;
if estado = 5 then aceitacao else erro;
~~~
