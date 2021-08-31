# Atividade 14
## Nome: Elano Nunes Caitano
## Matrícula: 0473434
> Correção: 1,2
> 
> Você cometeu um pequeno deslize, referenciando tipo, quando acho que na verdade queria refenciar new2, não?
### Questão 01:

A atividade solicita que se reescreva a gramática para que o tipo de uma variável seja puramente sintetizado ou herdado entre irmãos. Analisando a gramática de atributos original a partir do que foi visto em aula, é possível perceber diferentes casos de atributos, como em "decl -> var-lista : tipo" onde gera-se "var-lista.dtipo = tipo.dtipo", onde classificamos como um caso de atributo herdado. 


| Regras Gramaticais                 | Regras Semânticas            |   
|------------------------------------|------------------------------|
| decl -> var-lista : tipo           | var-lista.dtipo = tipo.dtipo |  
| var-lista1 -> var-lista2 , id      | id.dtipo = var-lista1.dtipo  |   
|                                    |var-lista2.dtipo = var-lista1.dtipo|  
| var-lista -> id                    | id.dtipo = var-lista.dtipo   |  
| tipo -> integer                    | tipo.dtipo = interger        |  
| tipo-> real                        | tipo.dtipo = real            |  

Dito isso, note que a gramática reescrita tem sua maior alteração no começo, visto que decl agora gera "id new", onde "id" herdava do seu pai "var-lista", mas agora herda do irmão "new". 

| Regras Gramaticais                 | Regras Semânticas            |   
|------------------------------------|------------------------------|
| decl  -> id new                    | id.tipo = new.dtipo          |  
| new1 -> , id new2                  | id.tipo = new2, dtipo        |   
|                                    | new1.tipo = tipo.dtipo  **Correção**: neste ponto, tipo não está na regra sintática.     |  
| new -> : tipo	                     | new.dtipo = tipo.dtipo       |  
| tipo -> interger                   | tipo.dtipo = interger        |  
| tipo -> real                       | tipo.dtipo = real            |  
