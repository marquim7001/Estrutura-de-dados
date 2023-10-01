typedef struct {
    int numero[100];
    int topo;
} Pilha;

Pilha* criarPilha();
int estaVazio(Pilha* pilha);
int estaCheio(Pilha* pilha);
void empilhar(Pilha* pilha, int valor);
int desempilhar(Pilha* pilha);