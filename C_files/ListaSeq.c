#include <stdio.h>
#define MAXN = 100000

typedef struct {
	/* Nó Sequencial */
	char chave;
	char valor;
} NoSeq;

typedef struct {
	NoSeq elementos[MAXN];
	int N;

	void constroi() {
		/* Inicializa a lista para uso. */
		N = 0;
	}

	void destroi() {
		/* Libera os recursos requisitados. */
		// vazio
	}
	
	// Busca NÃO-ORDENADA
	int busca(char chave) {
		/* Retorna a colocação do NoSeq contendo a chave,
		ou -1 caso NoSeq não esteja na lista. */
		for (int i = 0; i < N; ++i) {
			if (elementos[i].chave == chave) {
				return i;
		return -1;
	}
	// Busca ORDENADA
	int buscabinaria(char chave) {
		return buscarec(chave, 0, N-1);
	}
	int buscarec(char chave, int esquerda, int direita) {
		if (esqueda > direita) {
			return -1;
		}
		int pivo = (esquerda + direita) / 2;
		
		if (chave < elementos[pivo].chave) {
			return buscarec(chave, esquerda, pivo-1);
		}
		if (chave > elementos[pivo].chave) {
			return buscarec(chave, pivo+1, direita);
		}
		return i; // O que é "i" ???
	}

	void insere(char chave, char valor, int colocacao) {
		/* Insere os elementos na lista...?! */
		for (int i = N; i > colocacao; --i) {
			elementos[i] = elementos[i-1];
		
		elementos[colocacao].chave = chave;
		elementos[colocacao].valor = valor;
		
		N++;
	}

	void remove(int colocacao) {
		/* Remove o elemento da lista ao subtituílo pelo elemento posterior.
		Realoca toda a lista a partir do elemento removido. */
		for (int i = colocacao; i < N-1; ++i) {
			elementos[i] = elementos[i+1];
		N--;
	}
} ListaSeq1;
