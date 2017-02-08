//opção 2: alocação encadeada dos filhos

var M: Inteiro ← <valor de m>

estrutura No<TChave, TElem>:
    Chave: <TChave>
    Elem: <TElem>
    Prox: ^No, NosFilhos: ^No

estrutura Arvore<TChave, TElem>:
    Raiz: ^No<TChave, TElem>
    m: Inteiro

procedimento Constroi(ref T: Arvore, m: Inteiro)
    T.Raiz, T.m ← NULO, m

var T: Arvore<Caracter, ^Elemento > Constroi(T, M)
