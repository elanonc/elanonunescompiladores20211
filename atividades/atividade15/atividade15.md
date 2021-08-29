# Atividade 15
## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01:

Em aula, o professor chegou a dizer que poderiamos considerar a tabela 6.9 do livro para a resolução dessa atividade, porém a alterando para o que foi pedido na questão. 
Dito isso, fiz a tabela abaixo alterando a tabela 6.9 para ser calculado o valor de cada expressão de gramática. 

As seguintes funções foram utilizadas: 

* atributo booleano sintetizado err (true expressão errada, false caso contrário);  <br />
* atributo herdado simtab para representar a tabela;  <br />
* atributo herdado nivelaninh, para identificar o nível do bloco; <br />
* inserir(s, n, l) retorna uma nova tabela de símbolos que contém todas as informaçõoes de s, mas com o nome n associado ao nível l; <br />
* estaem(s, n) verdadeiro ou falso se n está em s ou não; <br />
* verificar(s, n) retorna o aninhamento de n em s; <br />


| Regras Gramaticais                 | Regras Semânticas                         |   
|------------------------------------|-------------------------------------------|
| S -> exp                           | S.val = if (exp.val = error) then error else exp.val           |  
| exp1 -> (exp2)                     | exp1.val = exp2.val              |   
| exp1 -> exp2 + exp3                | exp1.val = if ((exp2.val = error) or (exp3.val = error)) <br /> then error <br /> else exp2.val + exp3.val |
| exp -> id                          | exp.val = not estaem (exp.simtab, id.nome) |  
| exp -> num                         | exp.val = num.val |   
| exp1 -> let dec-lista in exp2      | exp.val = if(decl-lista.saitab = errtab) <br /> then error <br /> else exp2.val |
| decl-lista1 -> dec-lista2	         | decl-lista2.val = decl-lista1.val |
| decl-lista -> decl                 | decl.val = decl-lista.val  |
| decl -> id = exp                   | decl.saitab = if ((decl.enttab = errtab) or exp.val = error) <br /> then errtab <br /> else if (verificar(decl.enttab, id.name) = decl.nivelaninh) <br /> then errtab <br /> else inserir (decl.enttab, id.nome; decl.nivelaninh)
