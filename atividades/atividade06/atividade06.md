# Atividade 06
## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01:

declaração -> atribuição-decl | ativação-decl | outra
atribuição-decl -> identificador := exp
ativação-decl -> identificador ( exp-lista )

Os símbolos outra, identificador, : e = são terminais, os outros são não terminais.


Primeiramente, ao verificar a gramática percebemos que podemos passa-la para EBNF como foi visto em aula, já que temos identificador tanto em atribuição-decl como também em ativação-decl. Dito isso, ao ver no livro Conceitos de Linguagem de Porgramação (que professor Wladimir usou em LIP), pude ver que a extensão com parenteses era a mais adequada para a situação, pois tratava-se de opções de múltipla escolha. Sendo assim, reduzi para a seguinte forma:

declaracao -> identificador (:= exp | (exp-lista)) | outra

> Correção: 0,8
> 
> O raciocínio para transformar em EBNF está ok. Porém, você não pode casar um não terminal, como fez em casamento (:= exp). O correto seria casar cada símbolo em separado
> e depois chamar o procedimento exp, como afirmo no enunciado que já existem.

```
procedure declaracao 
begin 
	casamento (identificador);
	if marca = ':' then
	   casamento(:= exp);
	else if marca = '(':
	   casamento ('(');
	   exp-lista;
	   casamento (')');
	end if;
        casamento (outra);
	else: erro;
end declaracao;
 ```
