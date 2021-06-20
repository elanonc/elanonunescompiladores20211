typedef enum {StmtK, ExpK} NodeKind; // Tipos b�sicos de estrutura, declara��es (stmtK) e estrutura (ExpK) 
typedef enum {OpK, ConstK, LexpK, LexpseqK} // StmtKind � o tipo de declara��o, aqui coloquei OpK para definir um operador e ConstK para um numero inteiro
              StmtKind;  // Al�m disso tamb�m tem o LexpK para a express�o e para a sequencia da express�o h� o LexpseqK
typedef enum {Plus, Minus, Times} ExpKind; // ExpKind � o tipo de express�o, podendo ser Opera��o, Inteiro ou Identificador. Aqui coloquei Plus para representar o +, Minus o - e Times o *. 
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
no exemplo do livro eu havia entendido que, trazendo para a quest�o, 
LexpK e LexpseqK iriam terminar em Op ou ConstK. Na duvida coloquei,
e se o senhor puder explicar na corre��o eu ficaria muito grato
*/