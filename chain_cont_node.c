var MAX_N: Inteiro ← <NÚMERO MÁXIMO DE ELEMENTOS>

//os nós são armezados em níveis, da esquerda para direita

estrutura No <TChave, TElem>:
	Chave: <TElem>
	Elem: <TElem>

estrutura Arvore <TChave, TElem>:
	Val(1..MAX_N): No<TChave, TElem>
	N: Inteiro //quantidade de nós da árvore

procedimento Constroi(ref T: Arvore)
	T.N ← 0

var T: Arvore
Constroi(T)
