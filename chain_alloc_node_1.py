class Arvore(object):
    def __init__(self, raiz):
        '''
        Classe utilizada para se construir uma estrutura
        de dados não-linear, tipo Árvore.
        
        Inicializa com a definição da raiz.
        
        Returns: NOTHING
        '''
        self.raiz = [raiz, []] # [pai, [f1, f2, ...]]
        return None
        
    def constroi(self, node, pai = None):
        '''
        Constrói a árvore dando-se um valor para o nó e
        seu parentesco. Se o pai não for identificado,
        o nó será considerado filho da raiz.
        '''
        self.node = node
        self.pai = pai

        if self.pai == None:
            self.raiz[1].append(self.node)
        
        else:
            if self.pai == self.raiz[0]: # pai = raiz de uma subárvore
                self.raiz[1].append(self.node) # constrói a subárvore
            
            elif self.pai not in self.raiz[1]:
                self.raiz[1].append(self.pai)
            
            else:
                k = self.raiz[1].index(pai)
                self.raiz[1][k] = Arvore(pai)
                self.raiz[1][k].constroi(self.node, self.pai)
        
        return None
        
    def destroi(self):
        '''
        '''
        return
    
    def imprime(self):
        '''
        '''
        return
    
#--------------------------------------
T = Arvore(4)
T.constroi(2)
T.constroi(3)
T.constroi(5)
T.constroi(7, 2)
