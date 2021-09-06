# Atividade 16
## Nome: Elano Nunes Caitano
## Matrícula: 0473434

> Correção: 1,5
> 
> Por estrutura eu quis dizer o tipo estruturado de dados, como as _structs_ em C. Você dá um exemplo de um nó para uma função com dois parâmetros, mas
> caso fosse um número arbitrário, como seria representado?

### Questão 01:

A atividade solicita a construção de uma estrutura de subárvore adequada para novas estruturas de tipos de funções. Ao ver a gramática passada como exercício, é possível notar que na regra gramátical "fun-decls -> fun id( var-decls ) : tipo-exp ; corpo" de certa forma molda as novas estruturas de tipos de funções que é requisitado na questão. Segue abaixo uma árvore de como pode ser interpretado esse trecho:

 ![image](https://drive.google.com/uc?export=view&id=1W_bhLOqje2DsJjwecfkvKzmmVZIHJuz_)

Dito isso, temos a seguinte estrutura como exemplo: fun soma (a: int, b: int) : int

 ![image](https://drive.google.com/uc?export=view&id=1hLebSbE9GIXPcuh9151la76kUUfMVOFO)
 
 A segunda parte da questão, requer o algoritmo pra função tipoIgual, que verifique se duas funções tem equivalência estrutural, ou seja, se elas tem nomes, lista de parâmetros e tipo de registro iguais.


### Questão 02:

* inserir insere um identificador s na tabela de simbolos e associa um tipo a ele; 
* criaTipoNó constrói um nó de tipo, onde o filho do nó da matriz é a árvore de tipos dada pelo parâmetro tipo; 
* tipoIgual indica se há equivalência estrutural de expressões de tipos da gramática;
* tipo-erro indica um mecanismo de registro de erros;
* tipoFunção indica se 
* parametrosTipo busca um atributo para usa-lo como parametro e aplica-lo como um tipo válido;
* verificar realiza uma busca, como por exemplo buscar o nome ou o valor de um identificador;

| Regras Gramaticais                 | Regras Semânticas                         |   
|------------------------------------|-------------------------------------------|
| var-decl -> id : type-exp            | inserir(id.nome, type-exp.tipo)           |  
| type-exp -> int                    | type-exp.tipo := integer                 |   
| type-exp -> bool                   | type-exp.tipo := boolean                 |
| type-exp1 -> array [num] of type-exp2 | type-exp1.tipo := criaTipoNó (matriz, num.tamanho, type-exp2.tipo) |  
| stmt -> if exp then stmt | if not tipoIgual (exp.tipo, boolean) then tipo-erro(stmt) |   
| stmt -> id := exp      | if not tipoIgual (lookup(id.nome).exp.tipo) then tipo-erro(stmt) |
| exp1 -> exp2 + exp3 | if not (tipoIgual (exp2.tipo , integer) and tipoIgual (exp3.tipo , integer)) then tipo-erro(exp1); exp1.tipo := integer |
| exp1 -> exp2 or exp3 | if not (tipoIgual (exp2.tipo , boolean) and tipoIgual (exp3.tipo , boolean)) then tipo-erro(exp1); exp1.tipo := boolean |
| exp1 -> exp2 [exp3] | if éTipoMatriz(exp2.tipo) and tipoIgual (exp3.type , integer)) then exp1.tipo := exp2.tipo.child else tipo-erro(exp1) |
| exp -> num | exp.tipo := integer |
| exp -> true | exp.tipo := boolean |
| exp -> false | exp.tipo := boolean |
| exp -> id | exp.tipo := verificar (id.nome) |
| fun-decls -> fun id (var-decls) : type-exp; body | func-decls.tipo = criaTipoNó (fun, var-decls.tipos, types-exp.tipo) |
| var-decls1 -> var-decls2 ; var-decl                | var-decls1.tipos = var-decls2.tipo + var-decl.tipo  |
| var-decls -> var-decl          | var-decls.tipos = var-decl.tipo |
| exp -> id (exps)               | if tipoFunção (verificar(id.nome)) and exps.tipos = parametrosTipo(id.nome) then exp.tipo = verificar(id.name) else tipo-erro |
| exps1 -> exps2, exp | exps1.tipos = exps2.tipos + exp.type |
| exps -> exp | exps.tipos = exp.tipo |

May the force be with you
