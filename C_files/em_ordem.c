void emordem (No∗ no) {
	if (no) {
		preordem(no−>esq);
		printf("%d\n", no−>valor);
		preordem(no−>dir);
	}
};

procedimento PercursoInOrdem(T: ^No)
	se T ≠ NULO então
	PercursoInOrdem(T^.Esq)
	escrever (T^.Chave)
	PercursoInOrdem(T^.Dir)

procedimento PercursoInOrdem(ref T: Arvore)
	PercursoInOrdem(T.Raiz)
