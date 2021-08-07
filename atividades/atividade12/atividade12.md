# Atividade 12
## Nome: Elano Nunes Caitano
## Matrícula: 0473434

### Questão 01:

| Regras Gramaticais       | Regras Semânticas                      |
|--------------------------|----------------------------------------|
| exp -> termo exp1'        | exp.val -> termo.val exp1'.val         |
| exp1' -> + termo exp2'     | exp1'.val -> + termo.val exp2'.val     |
| exp1' -> - termo exp2'     | exp1'.val -> - termo.val exp2'.val     |
| exp1' -> e                | exp1'.val -> e                    |
| termo -> fator termo'    | termo.val -> fator.val termo1'.val     |
| termo1' -> * fator termo'2 | termo1'.val -> * fator.val termo2'.val |
| termo1' -> e              | termo1'.val -> e                   |
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

Fiz um exemplo para a expressão que costuma-se utilizar em questões, a (34-3)*42 ou (- 34 3) * 42

![image](https://drive.google.com/uc?export=view&id=1xpgDT-hE298GgV1eNl7VDGAg-klS4Xy0)
 
