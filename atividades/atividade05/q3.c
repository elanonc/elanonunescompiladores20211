typedef enum {StmtK, ExpK} NodeKind; // Tipos básicos de estrutura, declarações (stmtK) e estrutura (ExpK) 
typedef enum {OpK, ConstK, LexpK, LexpseqK} // StmtKind é o tipo de declaração, aqui coloquei OpK para definir um operador e ConstK para um numero inteiro
              StmtKind;  // Além disso também tem o LexpK para a expressão e para a sequencia da expressão há o LexpseqK
typedef enum {Plus, Minus, Times} ExpKind; // ExpKind é o tipo de expressão, podendo ser Operação, Inteiro ou Identificador. Aqui coloquei Plus para representar o +, Minus o - e Times o *. 

// Correção: Não precisaria colocar o LexpK e LexpseqK, visto que peço para fazer a árvore abstrata. Mas aí você teria que ter defendido a sua ideia, não colocado duas árvores
// na resposta da 4. Então fica a impressão de que a diferença entre árvore de análise e árvore de abstrata não foi dominada.
typedef struct streenode 
{
	ExpKind kind;
	OpKind op;
	struct streenode *lchild, *sibling;
	int val;
} STreeNode;
typedef StreeNode *SyntaxTree;

/*
Fiquei bastante em duvida quanto a necessidade de colocar LexpK e LexpseqK, 
no exemplo do livro eu havia entendido que, trazendo para a questão, 
LexpK e LexpseqK iriam terminar em Op ou ConstK. Na duvida coloquei,
e se o senhor puder explicar na correção eu ficaria muito grato
*/
