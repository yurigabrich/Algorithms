void posordem (No∗ no) {
	if (no) {
		preordem(no−>esq);
		preordem(no−>dir);
    printf("%d\n", no−>valor);
	}
};

procedimento PercursoPosOrdem(T: ^No)
	se T ≠ NULO então
	PercursoPosOrdem(T^.Esq)
	PercursoPosOrdem(T^.Dir)
	escrever (T^.Chave)

procedimento PercursoPosOrdem(ref T: Arvore)
	PercursoPosOrdem(T.Raiz)
