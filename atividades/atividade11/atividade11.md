# Atividade 11
## Nome: Elano Nunes Caitano
## Matrícula: 0473434
> Correção: 3,0
> 
> Tudo OK!
### Questão 01:

### Gramática da Atividade 09
 ![image](https://drive.google.com/uc?export=view&id=1B_QnXNOKdgGL57hbUKgtGQJVNvCJGUlX)
 
### Gramática da Atividade 10
 ![image](https://drive.google.com/uc?export=view&id=1BpTaTGAVFTRxT8YFPm_JXTScM6yQGz1-)
 
### Questão 02:  
### Gramática da Atividade 09
  ![image](https://drive.google.com/uc?export=view&id=1IAN59YBYNhandmwlZH9d_VBx9ON-S9F7)
 
Eu acabei fazendo a mesma tabela LR(1) e LALR(1) para gramática da Atividade 10, então adicionei apenas uma vez que foi na questão 04.


### Questão 03:  
### Gramática da Atividade 09
 ![image](https://drive.google.com/uc?export=view&id=18KeEOd14fasysR8_yTvEU6av9mNF26Tb)
 
### Gramática da Atividade 10
 ![image](https://drive.google.com/uc?export=view&id=1nZAllm-KNx47JKlQtcNn-hCfA0p-cnSp)

### Questão 04:
### Gramática da Atividade 09
 ![image](https://drive.google.com/uc?export=view&id=1uc2KGReDbhr-2zWd_6H7YVLMBXaAJxch)
 
### Gramática da Atividade 10
 ![image](https://drive.google.com/uc?export=view&id=1xRjC128F458Pn0dFO-ZJB-NBEINADfSx)


### Questão 05:
Um analisador LR (1) é um analisador significativamente mais poderoso que rastreia informações ainda mais precisas do que um analisador LALR (1). <br />
O analisador LALR(1) aparente ser um meio termo entre o LR (1) e o LR (0) que vimos nas aulas passadas, pois ele mantem uma expressividade que lembra o LR (1) mas ao mesmo tempo consegue reduzir o número de estados próximo ao que vimos no LR (0). <br />
Uma forma de formar um analisador LALR (1) é começando um analisador LR (1) e depois combinar os estados que possuem o mesmo conjunto de produções e suas produções, e então complementar as informações de lookahead. <br />
Apesar do uso do LALR (1) gerar um número menor de estados, ele poderá não conseguir reconhecer algumas sequências que poderiam ser lidas e reconhecidas por um analisador LR (1). <br />
