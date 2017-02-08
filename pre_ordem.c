void preordem (No∗ no) {
	if (no) {
		printf("%d\n", no−>valor);
		preordem(no−>esq);
		preordem(no−>dir);
	}
};

procedimento PercursoPreOrdem(T: ^No)
	se T ≠ NULO então
	escrever (T^.Chave)
	PercursoPreOrdem(T^.Esq)
	PercursoPreOrdem(T^.Dir)

procedimento PercursoPreOrdem(ref T: Arvore)
	PercursoPreOrdem(T.Raiz)
