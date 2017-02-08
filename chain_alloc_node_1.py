class Arvore(object):	
	
	def __init__(self, raiz):
	    '''
        Classe utilizada para se construir uma estrutura
        de dados não-linear, tipo Árvore.
	    
	    Initializa com a definição da raiz.
	    
	    Returns: NOTHING
	    '''
	    self.raiz = [raiz, []] # [pai, [f1, f2, ...]]
	    return None
	    
	def constroi(self, node, pai = 0):
	    '''
	    Constrói a árvore dando-se um valor para o nó e
	    seu parentesco. Se o índice do pai não for iden-
	    tificado, o nó será considerado filho da raiz.
	    '''
	    self.node = node

        if pai == 0:
            self.raiz[1].append(self.node)
        else:
            if pai not in self.raiz[1]: #na vdd não deveria ser filho de ninguém
                self.raiz[1].append[pai, []]
            else:
                k = self.raiz.index(pai)
                self.raiz[1][k] = [pai, []]
            
            pai[1].append[self.node]
            
        return None
	
	def destroi(self):
	    '''
	    '''
	    
	    return
	
	def imprime(self):
	    '''
	    '''
	    
	    return
