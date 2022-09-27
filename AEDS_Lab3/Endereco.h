typedef struct{
    int numero;
    char rua[500];
    char bairro[500];
    char cidade[500];
    char UF[3]; //um a mais da qnt de letras possiveis
}Endereco;


void InicializaEndereco(Endereco* endereco, int numero, char* rua, char* bairro, char* cidade, char* UF);
void ImprimeEndereco(Endereco* endereco);
int getNumero(Endereco* endereco);
char* getRua(Endereco* endereco);
char* getBairro(Endereco* endereco);
char* getCidade(Endereco* endereco);
char* getUF(Endereco* endereco);
void setNumero(Endereco* endereco, int newNumero);
void setRua(Endereco* endereco, char* newRua);
void setBairro(Endereco* endereco, char* newBairro);
void setCidade(Endereco* endereco, char* newCidade);
void setUF(Endereco* endereco, char* newUF);
