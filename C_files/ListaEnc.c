typedef struct {
	/* Nó Encadeado */
	char chave;
	char valor;
	NoEnc* proximo; //Isso é C?! Posso declarar o tipo de variável igual ao tipo que estou criando?!
} NoEnc;

typedef struct {
	NoEnc* inicio;
	int N;

	void constroi() {
		/* Inicializa a lista para uso. */
		inicio = NULL;
		N = 0;
	} 

	void destroi() {
		/* Libera os recursos requisitados. */
		while ( inicio != NULL ) {
			NoEnc* segundo = inicio -> proximo;
			delete inicio;
			inicio = segundo;
			N--;
		}
	}

	NoEnc* busca (char chave) {
		NoEnc* no = inicio;
		while ( no != NULL ) {
			if (no->chave == chave) {
				return no;
			} else {
				no = no->proximo;
			}
		}
		return NULL;
	}

	void insere(char chave, char valor, NoEnc* noAnterior) {
		NoEnc* novo = new NoEnc;
		novo->chave = chave;
		novo->valor = valor;
		
		if (noAnterior == NULL) { // começo da lista
			novo->proximo = inicio;
			inicio = novo;
		} else {
			novo->proximo = noAnterior->proximo;
			noAnterior->proximo = novo;
		}
		N++;
	}

	void remove(NoEnc* noAnterior) {
		if (noAnterior == NULL) { // começo da lista
			novo->proximo = inicio;
			inicio = novo;
		} else {
			novo->proximo = noAnterior->proximo;
			noAnterior->proximo = novo;
		}
		N++;
	}
} ListaEnc;
