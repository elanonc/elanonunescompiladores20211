# Atividade 10
## Nome: Elano Nunes Caitano
## Matrícula: 0473434
> Correção: 1,8
> 
> Faltou explicar como como SLR(1) resolveria o conflito. Parece que você ia escrever mais e cortou?


### Questão 01:

 ![image](https://drive.google.com/uc?export=view&id=1IWgH34P_vKR9Ur259kGDYw7guXoECmCl)
 
### Questão 02:  
  ![image](https://drive.google.com/uc?export=view&id=1_v17-SMDqZXnY0O_EY3eBsxLo_wnnzsu)
 
### Questão 03:  
 ![image](https://drive.google.com/uc?export=view&id=1GHws_EAAqgXeVWCz9q9-uQFMfvC4naKp)

### Questão 04:

Como observado no DFA apresentado na questão 01, podemos ver que existem conflitos carrega-reduz para o algoritmo de análise sintática LR(0), como por exemplo no estado 2.
Ou seja, a gramática não é LR(0).

No metodo de análise SLR(1), é possível identificar que esses conflitos não aparecem nos estados. 
Pegando como exemplo a tabela gerada na questão 2, podemos observar que há estados que carregam e estados que fazem reduções, mas não existe um estado que faça ambas as coisas. 
Dito isso, mesmo uma gramática não sendo LR(0), na análise SLR(1) os conflitos não geram ambiguidade por conta da 
