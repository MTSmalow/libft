*Este projeto foi criado como parte do currículo da 42 por edmedeir.*

---

# Libft — Sua primeira biblioteca própria em C

## Descrição

A **libft** é uma biblioteca estática em C desenvolvida como projeto fundamental do currículo da 42. O objetivo é reimplementar diversas funções da libc padrão e criar funções utilitárias adicionais, construindo uma base sólida de conhecimento sobre manipulação de memória, strings e estruturas de dados em C.

A biblioteca é compilada como `libft.a` e pode ser reutilizada em projetos futuros da escola.

### Funções implementadas

**Parte 1 — Funções da libc** (reimplementações com prefixo `ft_`):

| Função | Descrição |
|---|---|
| `ft_isalpha` | Verifica se o caractere é alfabético |
| `ft_isdigit` | Verifica se o caractere é um dígito |
| `ft_isalnum` | Verifica se o caractere é alfanumérico |
| `ft_isascii` | Verifica se o caractere pertence à tabela ASCII |
| `ft_isprint` | Verifica se o caractere é imprimível |
| `ft_strlen` | Retorna o tamanho de uma string |
| `ft_memset` | Preenche uma região de memória com um byte |
| `ft_bzero` | Zera uma região de memória |
| `ft_memcpy` | Copia uma região de memória |
| `ft_memmove` | Copia memória com suporte a sobreposição |
| `ft_strlcpy` | Copia string com limite de tamanho |
| `ft_strlcat` | Concatena string com limite de tamanho |
| `ft_toupper` | Converte caractere para maiúsculo |
| `ft_tolower` | Converte caractere para minúsculo |
| `ft_strchr` | Busca a primeira ocorrência de um caractere |
| `ft_strrchr` | Busca a última ocorrência de um caractere |
| `ft_strncmp` | Compara dois strings até n caracteres |
| `ft_memchr` | Busca um byte em uma região de memória |
| `ft_memcmp` | Compara duas regiões de memória |
| `ft_strnstr` | Busca uma substring dentro de outra string |
| `ft_atoi` | Converte string para inteiro |
| `ft_calloc` | Aloca memória zerando o conteúdo |
| `ft_strdup` | Duplica uma string alocando memória |

**Parte 2 — Funções adicionais:**

| Função | Descrição |
|---|---|
| `ft_substr` | Extrai uma substring de uma string |
| `ft_strjoin` | Concatena duas strings em uma nova |
| `ft_strtrim` | Remove caracteres do início e fim de uma string |
| `ft_split` | Divide uma string em array usando um delimitador |
| `ft_itoa` | Converte inteiro para string |
| `ft_strmapi` | Aplica função a cada caractere, retornando nova string |
| `ft_striteri` | Aplica função a cada caractere da string (in-place) |
| `ft_putchar_fd` | Escreve um caractere em um file descriptor |
| `ft_putstr_fd` | Escreve uma string em um file descriptor |
| `ft_putendl_fd` | Escreve uma string seguida de `\n` em um fd |
| `ft_putnbr_fd` | Escreve um inteiro em um file descriptor |

**Parte 3 — Funções de lista encadeada:**

| Função | Descrição |
|---|---|
| `ft_lstnew` | Cria um novo nó |
| `ft_lstadd_front` | Adiciona nó no início da lista |
| `ft_lstsize` | Retorna o número de nós da lista |
| `ft_lstlast` | Retorna o último nó da lista |
| `ft_lstadd_back` | Adiciona nó no final da lista |
| `ft_lstdelone` | Libera um nó (sem liberar o próximo) |
| `ft_lstclear` | Libera todos os nós da lista |
| `ft_lstiter` | Aplica uma função a cada nó |
| `ft_lstmap` | Cria nova lista aplicando função a cada nó |

---

## Instruções

### Compilação

Clone o repositório e compile a biblioteca com:

```bash
git clone <url-do-repositorio>
cd libft
make
```

Isso gera o arquivo `libft.a` na raiz do repositório.

### Regras do Makefile

```bash
make        # compila a biblioteca (libft.a)
make clean  # remove os arquivos objeto (.o)
make fclean # remove os .o e o libft.a
make re     # executa fclean + make
```

### Uso em outro projeto

Copie `libft.a` e `libft.h` para o diretório do seu projeto e inclua o header:

```c
#include "libft.h"
```

Compile linkando a biblioteca:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o programa
```

---

## Recursos

### Referências

- [Manual das funções libc — man7.org](https://man7.org/linux/man-pages/)
- [The C Programming Language — Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [Documentação GNU C Library](https://www.gnu.org/software/libc/manual/)
- [Diferenças entre glibc e BSD libc](https://wiki.musl-libc.org/functional-differences-from-glibc.html)
- [Understanding Linked Lists in C](https://www.learn-c.org/en/Linked_lists)

### Uso de IA

A IA (Claude) foi utilizada de forma pontual e como suporte ao aprendizado, não como fonte de respostas diretas. Especificamente:

- **Dúvidas conceituais**: consultas sobre comportamento esperado de funções como `memmove` e `strlcat`, sem solicitar implementações prontas.
- **Revisão de entendimento**: validação de raciocínio sobre gestão de memória e ponteiros.

As implementações das funções foram desenvolvidas de forma independente, com base nas man pages e no entendimento construído durante o processo.