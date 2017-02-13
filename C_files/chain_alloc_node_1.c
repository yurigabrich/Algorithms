//opção 1: alocação sequencial dos filhos

var M: Inteiro ← <valor de m>

estrutura No<TChave, TElem>:
    Chave: <TChave>
    Elem: <TElem>
    NosFilhos(1..M): ^No

estrutura Arvore<TChave, TElem>:
    Raiz: ^No<TChave, TElem>
    m: Inteiro

procedimento Constroi(ref T: Arvore, m: Inteiro)
    T.Raiz, T.m ← NULO, m

var T: Arvore<Caracter, ^Elemento > Constroi(T, M)
