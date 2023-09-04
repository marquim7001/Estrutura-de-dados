typedef struct{
    int id;
    int qtd;
    char nome[50];

} Produto;

int adicionar_produtos(Produto *produtos, int qtdProdutos);
void listar_produtos(Produto *produtos, int qtdProdutos); 
void editar_produtos(Produto *produtos, int qtdProdutos); 
void remover_produtos(Produto *produtos, int qtdProdutos); 