#include <stdio.h>
#define MAXN = 100000

typedef struct {
	char chave;
	char valor;
} NoSeq;

typedef struct {
	NoSeq elementos[MAXN];
	int N;

	void constroi() {
		/* inicializa a lista para uso */
		N = 0;
	}

	void destroi() {
		/* libera os recursos requisitados */
		// vazio
	}

	int busca(char chave) {
		/*  */
	}

	void insere(char chave, char valor, int colocacao) {
		/*  */
	}

	void remove(int colocacao) {
		/*  */
	}
} ListaSeq1;
