# Libft

## Resumen

Este proyecto consiste en programar una librería en C.

## Parte obligatoria

### Archivos a entregar

- `Makefile`
- `libft.h`
- `ft_*.c`

### Makefile

Incluye las reglas:

- `NAME`
- `all`
- `clean`
- `fclean`
- `re`

### Detalles importantes

- Declarar variables globales está prohibido.
- Usa la palabra `static` para dividir funciones complejas en archivos separados.
- Todos los archivos `.c` deben compilar con las flags `-Wall -Werror -Wextra`.
- Utiliza el comando `ar` para generar la librería. El uso de `libtool` está prohibido.
- `libft.a` debe ser creado en la raíz del repositorio.

## Parte 1 - Funciones de libc

Reescribe las siguientes funciones de la libc con el prefijo `ft_`:

- `int ft_isalpha(int c);` - Verifica si el caracter es alfabético.
- `int ft_isdigit(int c);` - Verifica si el caracter es un dígito.
- `int ft_isalnum(int c);` - Verifica si el caracter es alfanumérico.
- `int ft_isascii(int c);` - Verifica si el valor está dentro del rango ASCII.
- `int ft_isprint(int c);` - Verifica si el caracter es imprimible.
- `size_t ft_strlen(const char *s);` - Calcula la longitud de una cadena.
- `void *ft_memset(void *s, int c, size_t n);` - Llena la memoria con un byte.
- `void ft_bzero(void *s, size_t n);` - Pone a cero n bytes de memoria.
- `void *ft_memcpy(void *dest, const void *src, size_t n);` - Copia n bytes de memoria.
- `void *ft_memmove(void *dest, const void *src, size_t n);` - Copia n bytes de memoria, manejando solapamiento.
- `size_t ft_strlcpy(char *dest, const char *src, size_t size);` - Copia una cadena con un límite máximo.
- `size_t ft_strlcat(char *dest, const char *src, size_t size);` - Concatena una cadena con un límite máximo.
- `int ft_toupper(int c);` - Convierte un caracter a mayúsculas.
- `int ft_tolower(int c);` - Convierte un caracter a minúsculas.
- `char *ft_strchr(const char *s, int c);` - Busca la primera ocurrencia de un caracter en una cadena.
- `char *ft_strrchr(const char *s, int c);` - Busca la última ocurrencia de un caracter en una cadena.
- `int ft_strncmp(const char *s1, const char *s2, size_t n);` - Compara n caracteres de dos cadenas.
- `void *ft_memchr(const void *s, int c, size_t n);` - Busca c en los primeros n bytes de s.
- `int ft_memcmp(const void *s1, const void *s2, size_t n);` - Compara los primeros n bytes de s1 y s2.
- `char *ft_strnstr(const char *haystack, const char *needle, size_t len);` - Busca una subcadena en una cadena limitada.
- `int ft_atoi(const char *nptr);` - Convierte una cadena a un entero.
- `void *ft_calloc(size_t nmemb, size_t size);` - Asigna memoria inicializada a cero para un arreglo.
- `char *ft_strdup(const char *s1);` - Duplica una cadena.

## Parte 2 - Funciones adicionales

- `char *ft_substr(char const *s, unsigned int start, size_t len);` - Reserva y devuelve una subcadena de `s`.
- `char *ft_strjoin(char const *s1, char const *s2);` - Reserva y devuelve una nueva cadena formada por la concatenación de `s1` y `s2`.
- `char *ft_strtrim(char const *s1, char const *set);` - Elimina los caracteres de `set` al principio y al final de `s1`.
- `char **ft_split(char const *s, char c);` - Reserva un arreglo de cadenas resultante de dividir `s` utilizando `c` como delimitador.
- `char *ft_itoa(int n);` - Convierte un entero a una cadena.
- `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` - Aplica la función `f` a cada carácter de `s`.
- `void ft_striteri(char *s, void (*f)(unsigned int, char*));` - Aplica la función `f` a cada carácter de `s` junto con su índice.
- `void ft_putchar_fd(char c, int fd);` - Escribe el carácter `c` en el descriptor de archivo especificado por `fd`.
- `void ft_putstr_fd(char *s, int fd);` - Escribe la cadena `s` en el descriptor de archivo especificado por `fd`.
- `void ft_putendl_fd(char *s, int fd);` - Escribe la cadena `s` seguida de un salto de línea en el descriptor de archivo especificado por `fd`.
- `void ft_putnbr_fd(int n, int fd);` - Escribe el número `n` en el descriptor de archivo especificado por `fd`.


## Parte Bonus - Funciones para manipular listas

### Estructura `t_list`

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

- `t_list *ft_lstnew(void *content);` - Crea un nuevo nodo.
- `void ft_lstadd_front(t_list **lst, t_list *new);` - Añade un nodo al principio de la lista.
- `int ft_lstsize(t_list *lst);` - Cuenta el número de nodos en la lista.
- `t_list *ft_lstlast(t_list *lst);` - Devuelve el último nodo de la lista.
- `void ft_lstadd_back(t_list **lst, t_list *new);` - Añade un nodo al final de la lista.
- `void ft_lstdelone(t_list *lst, void (*del)(void *));` - Elimina un nodo.
- `void ft_lstclear(t_list **lst, void (*del)(void *));` - Elimina y libera la memoria de todos los nodos de la lista.
- `void ft_lstiter(t_list *lst, void (*f)(void *));` - Aplica una función a cada nodo de la lista.
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` - Aplica una función a cada nodo y crea una nueva lista.
