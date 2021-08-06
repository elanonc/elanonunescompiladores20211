# Atividade 12
## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01:

| Regras Gramaticais       | Regras Semânticas                      |
|--------------------------|----------------------------------------|
| exp -> termo exp'        | exp.val -> termo.val exp'1.val         |
| exp' -> + termo exp'     | exp'1.val -> + termo.val exp'2.val     |
| exp' -> - termo exp'     | exp'1.val -> - termo.val exp'2.val     |
| exp' -> e                | exp'1.val -> e.val                     |
| termo -> fator termo'    | termo.val -> fator.val termo'1.val     |
| termo' -> * fator termo' | termo'1.val -> * fator.val termo'2.val |
| termo' -> e              | termo'1.val -> e.val                   |
| fator -> ( exp )         | fator.val -> exp.val                   |
| fator -> numero          | fator.val -> numero                    |

exp => termo exp’ <br />
exp => fator termo’ exp’ <br />
exp => (exp) termo’ exp’ <br />
exp => (termo exp’) termo’ exp’ <br />
exp => (fator termo’ exp’) termo’ exp’ <br />
exp => (numero termo’ exp’) termo’ exp’ <br />
exp => (numero exp’) termo’ exp’ <br />
exp => (numero – termo exp’) termo’ exp’ <br />
exp => (numero – fator termo’ exp’) termo‘ exp’ <br />
exp => (numero – numero termo’ exp’) termo’ exp’ <br />
exp => (numero – numero exp’) termo’ exp’ <br />
exp => (numero - numero) termo’ exp’ <br />
exp => (numero - numero) * fator termo’ exp’ <br />
exp => (numero - numero) * numero termo’ exp’ <br />
exp => (numero – numero) * numero exp’ <br />
exp => (numero – numero) * numero <br />

![image](https://drive.google.com/uc?export=view&id=12fuXDq_fvPdErHApRhAiFDEeRdriw1pH)
 
