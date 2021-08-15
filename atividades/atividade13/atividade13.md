# Atividade 13
## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01:

Para a gramática bárvore -> (número bárvore bárvore) | nil desenvolvi as seguinte tabela:
| Regras Gramaticais       | Regras Semânticas                      |
|--------------------------|----------------------------------------|
| barvore -> (numero barvore barvore)        | barvore1.ehArvoreBinaria -> (numero.val barvore2.ehArvoreBinaria barvore.ehArvoreBinaria)         |
| barvore -> nil     | barvore1.val = nil.val     |

A ideia era ter um metodo "ehArvoreBinaria" que verificasse se a árvore está organizada (e consequentemente se é árvore binária) como o que foi visto na cadeira de ED/EDA.
O método está em pseudocodigo, pra implementa-lo utilizei dois métodos auxiliares MAX e MIN que pegam o nó mais a direita e o nó mais a esquerda respectivamente. 

~~~~
ehArvoreBinaria (barvore1)
	se (barvore1.val != NULL) então:
		retorna falso
	fim_se
	se (barvore1.barvore2 != NULL e MAX(barvore1.barvore2) > barvore1.val) então
		retorna falso
	fim_se
	se (barvore1.barvore3.val != NULL e MIN(barvore1.barvore3) < barvore1.val) então
		retorna falso
	fim_se
	se (não ehArvoreBinaria(barvore1.barvore2) ou não ehArvoreBinaria(barvore1.barvore3)) então
		retorna falso
	fim_se

	retorna verdadeiro

MAX(barvore1)
	enquanto (barvore1.barvore3.val != NULL)
		Temp = barvore1.barvore3.val 
	retorna Temp

MIN(barvore1)
	enquanto (barvore1.barvore2.val != NULL)
		Temp = barvore1.barvore2.val 
	retorna Temp
~~~~
