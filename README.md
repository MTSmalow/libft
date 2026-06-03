*Este projeto foi criado como parte do currículo da 42 por edmedeir.*


# libft

Uma biblioteca estática em C que reimplementa funções essenciais da libc e adiciona utilitários próprios para uso nos projetos futuros do currículo da 42.


## Descrição

A **libft** é a base de toda a jornada na 42. Em vez de depender da libc padrão, você constrói suas próprias versões das funções — entendendo de verdade como manipulação de memória, strings e estruturas de dados funcionam em C.

O resultado é um arquivo `libft.a` que pode ser linkado em qualquer projeto futuro da escola.


## Referência da API

### Classificação de caracteres

```c
int  ft_isalpha(int c);       // letra alfabética?
int  ft_isdigit(int c);       // dígito decimal?
int  ft_isalnum(int c);       // alfanumérico?
int  ft_isascii(int c);       // pertence ao ASCII (0–127)?
int  ft_isprint(int c);       // caractere imprimível?
```

Retornam `1` se verdadeiro, `0` caso contrário.


### Conversão de caracteres

```c
int  ft_toupper(int c);       // converte para maiúsculo
int  ft_tolower(int c);       // converte para minúsculo
```


### Manipulação de memória

```c
void  *ft_memset(void *b, int c, size_t len);
void   ft_bzero(void *s, size_t n);
void  *ft_memcpy(void *dst, const void *src, size_t n);
void  *ft_memmove(void *dst, const void *src, size_t len);
void  *ft_memchr(const void *s, int c, size_t n);
int    ft_memcmp(const void *s1, const void *s2, size_t n);
void  *ft_calloc(size_t count, size_t size);
```


### Manipulação de strings

```c
size_t        ft_strlen(const char *s);
char         *ft_strchr(const char *s, int c);
char         *ft_strrchr(const char *s, int c);
int           ft_strncmp(const char *s1, const char *s2, size_t n);
char         *ft_strnstr(const char *big, const char *little, size_t len);
size_t        ft_strlcpy(char *dst, const char *src, size_t dsize);
unsigned int  ft_strlcat(char *dest, const char *src, unsigned int size);
char         *ft_strdup(const char *src);
```


### Conversão numérica

```c
int   ft_atoi(char *str);    // string → int
char *ft_itoa(int n);        // int → string (malloc)
```


### Funções adicionais de string

```c
char  *ft_substr(char const *s, unsigned int start, size_t len);
// Retorna uma substring de 's' começando em 'start' com no máximo 'len' caracteres.

char  *ft_strjoin(char const *s1, char const *s2);
// Concatena 's1' e 's2' em uma nova string alocada.

char  *ft_strtrim(char const *s1, char const *set);
// Remove do início e fim de 's1' qualquer caractere presente em 'set'.

char **ft_split(char const *s, char c);
// Divide 's' usando 'c' como delimitador. Retorna array NULL-terminado.

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Aplica 'f' a cada caractere de 's', retorna nova string com os resultados.

void   ft_striteri(char *s, void (*f)(unsigned int, char *));
// Aplica 'f' a cada caractere de 's' passando o índice e o endereço do char.
```


### Saída em file descriptor

```c
void  ft_putchar_fd(char c, int fd);      // escreve um caractere
void  ft_putstr_fd(char *s, int fd);      // escreve uma string
void  ft_putendl_fd(char *s, int fd);     // escreve string + '\n'
void  ft_putnbr_fd(int n, int fd);        // escreve um inteiro
```


### Lista encadeada

A biblioteca define a estrutura `t_list` para listas simplesmente encadeadas:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}   t_list;
```

Funções disponíveis:

```c
t_list *ft_lstnew(void *content);
// Aloca e retorna um novo nó com 'content' e next = NULL.

void    ft_lstadd_front(t_list **lst, t_list *new);
// Insere 'new' no início da lista.

void    ft_lstadd_back(t_list **lst, t_list *new);
// Insere 'new' no final da lista.

int     ft_lstsize(t_list *lst);
// Retorna o número de nós da lista.

t_list *ft_lstlast(t_list *lst);
// Retorna o último nó da lista.

void    ft_lstdelone(t_list *lst, void (*del)(void *));
// Libera o conteúdo do nó com 'del' e depois libera o nó (não o próximo).

void    ft_lstclear(t_list **lst, void (*del)(void *));
// Libera todos os nós da lista usando 'del', e define *lst como NULL.

void    ft_lstiter(t_list *lst, void (*f)(void *));
// Aplica 'f' ao conteúdo de cada nó.

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// Cria nova lista aplicando 'f' a cada nó. Usa 'del' em caso de falha.
```


## Instruções

### Compilação

```bash
git clone <url-do-repositorio>
cd libft
make
```

Gera `libft.a` na raiz do repositório.

### Regras do Makefile

```
make          compila a biblioteca
make clean    remove os arquivos .o
make fclean   remove os .o e o libft.a
make re       fclean + make
```

### Integrando em outro projeto

Copie `libft.a` e `libft.h` para o diretório do seu projeto:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o programa
```


## Recursos

- [man7.org — Linux man pages](https://man7.org/linux/man-pages/)
- [GNU C Library — documentação oficial](https://www.gnu.org/software/libc/manual/)
- [Diferenças entre glibc e BSD libc](https://wiki.musl-libc.org/functional-differences-from-glibc.html)
- [Learn-C — Linked Lists](https://www.learn-c.org/en/Linked_lists)
- [The C Programming Language — Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)

### Uso de IA

A IA (Claude) foi utilizada pontualmente como suporte, não como fonte de respostas diretas:

- **README**: estrutura e escrita deste documento.
- **Dúvidas conceituais**: comportamento esperado de funções como `memmove` e `strlcat`, sem solicitar implementações.
- **Revisão de raciocínio**: validação de entendimento sobre gestão de memória e ponteiros.

As implementações foram desenvolvidas de forma independente, com base nas man pages.