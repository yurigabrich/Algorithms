#define MAXN = 100000

typedef struct {
	char elementos[MAXN];
	int N;	// número de elementos atualmente na fila
	
	void constroi() {
		// inicializa a fila para uso
		N = 0;
	}

	void destroi() {
		// libera os recursos requisitados
		// vazio
	}

	char frente() {
		// retorna o primeiro elemento a entrar na fila
		return elementos[0];
	}

	void enfileirar(char valor) {
		// ENQUEUE = adiciona um novo elemento no fim da fila
		elementos[N] = valor;
		N++;
	}

	char desenfileirar() {
		// DEQUEUE = remove e retorna o primeiro elemento da fila
		char r = elementos[0];

		// atualizando a lista sem o elemento 'r'
		for ( int i = 0; i < N-1; i++ ){
			elementos[i] = elementos[i+1];
		}
		N--;
		return r
	}
} FilaSeq;
