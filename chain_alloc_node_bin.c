//opção usual quando árvore é binária

estrutura No<TChave, TElem>:
    Chave: <TChave>
    Elem: <TElem>
    Esq: ^No, Dir: ^No

estrutura Arvore<TChave, TElem>:
    Raiz: ^No<TChave, TElem>

procedimento Constroi(ref T: Arvore)
    T.Raiz ← NULO

var T: Arvore<Caracter, ^Elemento > Constroi(T)
