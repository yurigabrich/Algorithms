typedef struct {
	/* Classe Nó que definie seu valor e seus filhos.*/
	int valor; // conteúdo do nó
	int ∗esq; // filho esquerdo
	int ∗dir; // filho direito
} No;

typedef struct {
	/* Classe Árvore Binária que define toda a árvore
	a partir da raiz e as funções elementares da mesma.*/
	No raiz; // Poderia ser assim? Não deveria estar dentro de constroi?!	
	void constroi(){...}
	
	void destroi(){...}
	
	void imprime(){...}
} ArvoreBinaria;
