typedef struct Objeto{

    char valor;
    struct Objeto* proximo_objeto;

} Objeto;

typedef struct {

    Objeto* topo;
    int quantidade;

} Pilha;

Pilha*  pilha ();

void empilhar(Pilha* P, Objeto* o);

Objeto* desempilhar(Pilha* P);


