typedef struct {
    int n;
    char tab[n][n];
} Tabuleiro;

void setTamanho(Tabuleiro*, int);
void setElemento(Tabuleiro*, int, int, char);
char getElemento(Tabuleiro*,int, int);
void marcaTodos(Tabuleiro*, char);
int testaLinha(Tabuleiro*, int, char);
int testaColuna(Tabuleiro*, int, char);
int testaDiagonalED(Tabuleiro*, char);
int testaDiagonalDE(Tabuleiro*, char);
int testaDiferente(Tabuleiro*, int);
void imprime(Tabuleiro*);

bool testaTamanho(Tabuleiro*);
