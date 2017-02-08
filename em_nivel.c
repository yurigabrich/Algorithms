procedimento PercursoEmNiveis(T: ^No)
	var Prox: ^No, F: Fila<^No>
	Constroi(F)
	Enfileira(F, T)
	
	Enquanto Tamanho(F) > 0 faça
		Prox ← Desenfileira(F)
		escrever(Prox^.Chave)
		
		se Prox^.Esq ≠ NULO então
			Enfileira(F, Prox^.Esq)
			
		se Prox^.Dir ≠ NULO então
			Enfileira(F, Prox^.Dir)
			
procedimento PercursoEmNiveis(ref T: Arvore)
	PercursoEmNiveis(T.Raiz)
