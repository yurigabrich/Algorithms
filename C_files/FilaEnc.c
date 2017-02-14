typedef struct {
	char valor;
	NoFila* prox; // Que porra é essa?!
} NoFila;

typedef struct {

	NoFila* inicio;
	int N; // número de elementos atualmente na fila

	void constroi() {
		// inicializa a fila para uso
		N = 0;
		inicio = NULL;
	}

	void destroi() {
		// libera os recursos requisitados
		while ( inicio != NULL ) {
			NoFila* p = inicio -> prox;
			delete inicio;
			inicio = p;
		}
	}

	char frente () {
		// retorna o primeiro elemento a entrar na fila
		NoFila* p = inicio;
		while ( p -> NoFila.prox -> NoFila.prox != NULL ) {
			// dois a frente
			p = p -> NoFila.prox;
		}
		
		char r = p -> prox -> NoFila.valor;
		delete NoFila.p -> prox;
		NoFila.p -> prox = NULL;
		N--;
		
		return r; // → Corrigir o método para O(N < 2)!
	}

	void enfileirar(char v) {
		// ENQUEUE = adiciona um novo elemento no fim da fila
		NoFila* no = new NoFila;
		no -> NoFila.valor = v;
		no -> NoFila.prox = inicio;
		inicio = no;
		N++;
	}

	char desenfileirar() {
		// DEQUEUE = remove e retorna o primeiro elemento da fila
		NoFila* p = inicio;
		while ( p -> NoFila.prox -> NoFila.prox != NULL ) {
			// dois a frente
			p = p -> NoFila.prox;
		}

		char r = p -> NoFila.prox -> valor;
		delete p -> NoFila.prox;
		p -> NoFila.prox = NULL;
		N--;
		return r; // → Corrigir o método para O(N < 2)!
	}

} FilaEnc;
