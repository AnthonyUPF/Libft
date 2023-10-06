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

- `int ft_isalpha(int c);`
  - Descripción: Verifica si el caracter `c` es alfabético.
  - `c`: El carácter que se va a verificar.
  - Retorna: Devuelve un valor distinto de cero si `c` es una letra, de lo contrario, retorna cero.

- `int ft_isdigit(int c);`
  - Descripción: Verifica si el caracter `c` es un dígito decimal (0 al 9).
  - `c`: El carácter que se va a verificar.
  - Retorna: Devuelve un valor distinto de cero si `c` es un dígito, de lo contrario, retorna cero.

- `int ft_isalnum(int c);`
  - Descripción: Verifica si el caracter `c` es alfanumérico, es decir, si es una letra o un dígito.
  - `c`: El carácter que se va a verificar.
  - Retorna: Devuelve un valor distinto de cero si `c` es alfanumérico, de lo contrario, retorna cero.

- `int ft_isascii(int c);`
  - Descripción: Verifica si el valor `c` está dentro del rango ASCII.
  - `c`: El valor que se va a verificar.
  - Retorna: Devuelve un valor distinto de cero si `c` es un valor ASCII, de lo contrario, retorna cero.

- `int ft_isprint(int c);`
  - Descripción: Verifica si el caracter `c` es imprimible.
  - `c`: El carácter que se va a verificar.
  - Retorna: Devuelve un valor distinto de cero si `c` es un carácter imprimible, de lo contrario, retorna cero.

- `size_t ft_strlen(const char *s);`
  - Descripción: Calcula la longitud de una cadena.
  - `s`: La cadena de la cual se calculará la longitud.
  - Retorna: La cantidad de caracteres en la cadena (sin incluir el carácter nulo).

- `void *ft_memset(void *s, int c, size_t n);`
  - Descripción: Llena la memoria apuntada por `s` con el valor `c`.
  - `s`: Puntero al área de memoria que será llenada.
  - `c`: Valor que se usará para llenar la memoria.
  - `n`: Número de bytes que se llenarán.
  - Retorna: Un puntero a la memoria llenada.

- `void ft_bzero(void *s, size_t n);`
  - Descripción: Pone a cero `n` bytes de memoria a partir del puntero `s`.
  - `s`: Puntero al área de memoria que se va a poner a cero.
  - `n`: Número de bytes a poner a cero.

- `void *ft_memcpy(void *dest, const void *src, size_t n);`
  - Descripción: Copia `n` bytes de memoria de `src` a `dest`.
  - `dest`: Puntero al área de memoria de destino.
  - `src`: Puntero al área de memoria de origen.
  - `n`: Número de bytes a copiar.
  - Retorna: Un puntero a `dest`.

- `void *ft_memmove(void *dest, const void *src, size_t n);`
  - Descripción: Copia `n` bytes de memoria de `src` a `dest`, manejando solapamientos.
  - `dest`: Puntero al área de memoria de destino.
  - `src`: Puntero al área de memoria de origen.
  - `n`: Número de bytes a copiar.
  - Retorna: Un puntero a `dest`.

- `size_t ft_strlcpy(char *dest, const char *src, size_t size);`
  - Descripción: Copia una cadena desde `src` a `dest` con un límite máximo de `size` caracteres.
  - `dest`: Puntero a la cadena de destino.
  - `src`: Puntero a la cadena de origen.
  - `size`: Tamaño máximo del área de destino.
  - Retorna: La longitud de `src`.

- `size_t ft_strlcat(char *dest, const char *src, size_t size);`
  - Descripción: Concatena una cadena desde `src` a `dest` con un límite máximo de `size` caracteres.
  - `dest`: Puntero a la cadena de destino.
  - `src`: Puntero a la cadena de origen.
  - `size`: Tamaño máximo del área de destino.
  - Retorna: La longitud de la cadena concatenada.

- `int ft_toupper(int c);`
  - Descripción: Convierte el carácter `c` a mayúsculas si es una letra minúscula.
  - `c`: El carácter que se va a convertir.
  - Retorna: El carácter convertido, o `c` si no es una letra minúscula.

- `int ft_tolower(int c);`
  - Descripción: Convierte el carácter `c` a minúsculas si es una letra mayúscula.
  - `c`: El carácter que se va a convertir.
  - Retorna: El carácter convertido, o `c` si no es una letra mayúscula.

- `char *ft_strchr(const char *s, int c);`
  - Descripción: Busca la primera ocurrencia de `c` en la cadena `s`.
  - `s`: La cadena en la cual se buscará.
  - `c`: El carácter que se está buscando.
  - Retorna: Un puntero a la primera ocurrencia de `c` en `s`, o NULL si no se encuentra.

- `char *ft_strrchr(const char *s, int c);`
  - Descripción: Busca la última ocurrencia de `c` en la cadena `s`.
  - `s`: La cadena en la cual se buscará.
  - `c`: El carácter que se está buscando.
  - Retorna: Un puntero a la última ocurrencia de `c` en `s`, o NULL si no se encuentra.

- `int ft_strncmp(const char *s1, const char *s2, size_t n);`
  - Descripción: Compara los primeros `n` caracteres de las cadenas `s1` y `s2`.
  - `s1`: La primera cadena a comparar.
  - `s2`: La segunda cadena a comparar.
  - `n`: Número de caracteres a comparar.
  - Retorna: Un valor menor que cero si `s1` es menor que `s2`, cero si son iguales, o mayor que cero si `s1` es mayor que `s2`.

- `void *ft_memchr(const void *s, int c, size_t n);`
  - Descripción: Busca el valor `c` en los primeros `n` bytes de la memoria apuntada por `s`.
  - `s`: Puntero al área de memoria en la cual se realizará la búsqueda.
  - `c`: El valor que se está buscando.
  - `n`: Número de bytes a buscar.
  - Retorna: Un puntero a la primera ocurrencia de `c` en `s`, o NULL si no se encuentra.

- `int ft_memcmp(const void *s1, const void *s2, size_t n);`
  - Descripción: Compara los primeros `n` bytes de las áreas de memoria apuntadas por `s1` y `s2`.
  - `s1`: Puntero a la primera área de memoria a comparar.
  - `s2`: Puntero a la segunda área de memoria a comparar.
  - `n`: Número de bytes a comparar.
  - Retorna: Un valor menor que cero si `s1` es menor que `s2`, cero si son iguales, o mayor que cero si `s1` es mayor que `s2`.

- `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
  - Descripción: Busca la subcadena `needle` en la cadena `haystack` con un límite máximo de `len` caracteres.
  - `haystack`: La cadena en la cual se realizará la búsqueda.
  - `needle`: La subcadena que se está buscando.
  - `len`: La cantidad máxima de caracteres a considerar en `haystack`.
  - Retorna: Un puntero a la primera ocurrencia de `needle` en `haystack`, o NULL si no se encuentra.

- `int ft_atoi(const char *nptr);`
  - Descripción: Convierte la cadena `nptr` a un entero.
  - `nptr`: La cadena que se va a convertir.
  - Retorna: El valor entero resultante.

### Para implementar estas otras dos funciones, se tendra que utilizar malloc():

- `void *ft_calloc(size_t nmemb, size_t size);`
  - Descripción: Asigna memoria inicializada a cero para un arreglo de `nmemb` elementos, cada uno de tamaño `size` bytes.
  - `nmemb`: Número de elementos.
  - `size`: Tamaño en bytes de cada elemento.
  - Retorna: Un puntero al área de memoria asignada, o NULL en caso de fallo.

- `char *ft_strdup(const char *s1);`
  - Descripción: Duplica la cadena `s1`.
  - `s1`: La cadena que se va a duplicar.
  - Retorna: Un puntero a la nueva cadena duplicada, o NULL en caso de fallo.


## Parte 2 - Funciones adicionales

- `char *ft_substr(char const *s, unsigned int start, size_t len);`
  - Descripción: Reserva y devuelve una subcadena de `s`.
  - `s`: La cadena de la cual se obtendrá la subcadena.
  - `start`: La posición inicial de la subcadena en `s`.
  - `len`: La longitud máxima de la subcadena.
  - Retorna: Un puntero a la nueva subcadena, o NULL en caso de fallo.

- `char *ft_strjoin(char const *s1, char const *s2);`
  - Descripción: Reserva y devuelve una nueva cadena formada por la concatenación de `s1` y `s2`.
  - `s1`: La primera cadena en la concatenación.
  - `s2`: La segunda cadena en la concatenación.
  - Retorna: Un puntero a la nueva cadena concatenada, o NULL en caso de fallo.

- `char *ft_strtrim(char const *s1, char const *set);`
  - Descripción: Elimina los caracteres de `set` al principio y al final de `s1`.
  - `s1`: La cadena que será modificada.
  - `set`: Los caracteres que se van a eliminar.
  - Retorna: Un puntero a la nueva cadena resultante.

- `char **ft_split(char const *s, char c);`
  - Descripción: Reserva un arreglo de cadenas resultante de dividir `s` utilizando `c` como delimitador.
  - `s`: La cadena que será dividida.
  - `c`: El carácter delimitador.
  - Retorna: Un arreglo de punteros a cadenas, o NULL en caso de fallo.

- `char *ft_itoa(int n);`
  - Descripción: Convierte un entero `n` a una cadena.
  - `n`: El entero que se va a convertir.
  - Retorna: Un puntero a la nueva cadena resultante.

- `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
  - Descripción: Aplica la función `f` a cada carácter de `s`.
  - `s`: La cadena a la cual se aplicará la función.
  - `f`: La función que se aplicará a cada carácter.
  - Retorna: Un puntero a la nueva cadena resultante.

- `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
  - Descripción: Aplica la función `f` a cada carácter de `s` junto con su índice.
  - `s`: La cadena sobre la cual se aplicará la función.
  - `f`: La función que se aplicará a cada carácter y su índice.

- `void ft_putchar_fd(char c, int fd);`
  - Descripción: Escribe el carácter `c` en el descriptor de archivo especificado por `fd`.
  - `c`: El carácter que se va a escribir.
  - `fd`: El descriptor de archivo.

- `void ft_putstr_fd(char *s, int fd);`
  - Descripción: Escribe la cadena `s` en el descriptor de archivo especificado por `fd`.
  - `s`: La cadena que se va a escribir.
  - `fd`: El descriptor de archivo.

- `void ft_putendl_fd(char *s, int fd);`
  - Descripción: Escribe la cadena `s` seguida de un salto de línea en el descriptor de archivo especificado por `fd`.
  - `s`: La cadena que se va a escribir.
  - `fd`: El descriptor de archivo.

- `void ft_putnbr_fd(int n, int fd);`
  - Descripción: Escribe el número `n` en el descriptor de archivo especificado por `fd`.
  - `n`: El número que se va a escribir.
  - `fd`: El descriptor de archivo.



## Parte Bonus - Funciones para manipular listas

### Estructura `t_list`

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

- `t_list *ft_lstnew(void *content);`
  - Descripción: Crea un nuevo nodo con el contenido proporcionado.
  - `content`: El contenido que se asignará al nodo.
  - Retorna: Un puntero al nuevo nodo creado o NULL en caso de error.

- `void ft_lstadd_front(t_list **lst, t_list *new);`
  - Descripción: Añade un nodo al principio de la lista.
  - `lst`: Puntero al puntero que apunta al primer nodo de la lista.
  - `new`: El nodo que se añadirá al principio.
  - Retorna: N/A.

- `int ft_lstsize(t_list *lst);`
  - Descripción: Cuenta el número de nodos en la lista.
  - `lst`: Puntero al primer nodo de la lista.
  - Retorna: El número de nodos en la lista.

- `t_list *ft_lstlast(t_list *lst);`
  - Descripción: Devuelve el último nodo de la lista.
  - `lst`: Puntero al primer nodo de la lista.
  - Retorna: Un puntero al último nodo de la lista.

- `void ft_lstadd_back(t_list **lst, t_list *new);`
  - Descripción: Añade un nodo al final de la lista.
  - `lst`: Puntero al puntero que apunta al primer nodo de la lista.
  - `new`: El nodo que se añadirá al final.
  - Retorna: N/A.

- `void ft_lstdelone(t_list *lst, void (*del)(void *));`
  - Descripción: Elimina un nodo.
  - `lst`: El nodo que se va a eliminar.
  - `del`: La función que libera la memoria del contenido del nodo.
  - Retorna: N/A.

- `void ft_lstclear(t_list **lst, void (*del)(void *));`
  - Descripción: Elimina y libera la memoria de todos los nodos de la lista.
  - `lst`: Puntero al puntero que apunta al primer nodo de la lista.
  - `del`: La función que libera la memoria del contenido de cada nodo.
  - Retorna: N/A.

- `void ft_lstiter(t_list *lst, void (*f)(void *));`
  - Descripción: Aplica una función a cada nodo de la lista.
  - `lst`: Puntero al primer nodo de la lista.
  - `f`: La función que se aplicará a cada nodo.
  - Retorna: N/A.

- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
  - Descripción: Aplica una función a cada nodo y crea una nueva lista.
  - `lst`: Puntero al primer nodo de la lista original.
  - `f`: La función que se aplicará a cada nodo para crear una nueva lista.
  - `del`: La función que libera la memoria del contenido de cada nodo de la nueva lista (en caso de error).
  - Retorna: Un puntero al primer nodo de la nueva lista o NULL en caso de error.

