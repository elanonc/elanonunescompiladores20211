# Atividade 08
## Nome: Elano Nunes Caitano
## Matrícula: 0473434
> Correção: 1,5
> 
> Tudo OK!!!
### Questão 01:

Note que o não terminal “var-lista” deriva duas vezes o terminal “identificador”, o que permite que façamos a fatoração a esquerda nessa gramática. 
Segue a gramática gerada pela regra: 

declaração -> tipo var-lista 
tipo -> int | float 
var-lista -> identificador var-lista’
var-lista’ -> , var-lista | ϵ

Um dos objetivos de fazer essa operação de fatoração é torna-la LL(1).

### Questão 02: 

Com base no que foi visto em aula e no livro: 

P(DECLARAÇÃO) = P(TIPO) = P(VAR-LISTA) = P(VAR-LISTA') = vazio
P(int) = {int} P(float) = {float} P(id) = {id} P(,) = {,} P(ϵ) = {ϵ} 

 ![image](https://drive.google.com/uc?export=view&id=1jtZivOUwSg0HxURjO1WIRpQ4vYRnYgk6)
 
Portanto, fica: 

Primeiro(Declaração) = {int,float} <br />
Primeiro(Tipo) = {int, float} <br />
Primeiro(Var-list) = {identificador} <br />
Primeiro(Var-list) = {",", ϵ} <br />

Sequencia(Declaração) = {$} <br />
Sequencia(Tipo) = {identificador} <br />
Sequencia(Var-list) = {$} <br />
Sequencia(Var-list) = {$} <br />

OBS: coloquei aspas apenas pra diferenciar da outra virgula
 
### Questão 03:  
Para uma gramática ser LL(1) ela precisa não ser recursiva a esquerda e não ser ambígua. Ou seja, não deve possuir não terminais no lado esquerdo das produções, ou melhor, o lado direito das produções devem começar por terminais. 
Podemos ver que isso acontece nessa gramática: 

declaração -> tipo var-lista 
tipo -> int | float 
var-lista -> identificador var-lista’
var-lista’ -> , var-lista | ϵ

Além disso, não deve ser permitido que duas regras comecem com um mesmo terminal. Para provar isso, precisaremos da tabela de analise sintatica LL(1), que é requisitada na questão 04.

  
  
 ### Questão 04:  
  ![image](https://drive.google.com/uc?export=view&id=1oFOY-fGA9pjJF2AMpetKv9Nf3DZFaevc)
  
 ### Questão 05:  
  ![image](https://drive.google.com/uc?export=view&id=1AP1k1_9eB-MsGVs_AQ4ausPulniXM9Bh)
