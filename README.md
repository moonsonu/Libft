# libft
- Recode a number of standard C library functions,
as well as other utility functions that will reuse throughout your curriculum.

Part 1 :
- [X] memset
- [X] bzero
- [X] memcpy
- [X] memccpy
- [X] memmove
- [X] memchr
- [X] memcmp
- [X] strlen
- [X] strdup
- [X] strcpy
- [X] strncpy
- [X] strcat
- [X] strncat
- [X] strlcat
- [X] strchr
- [X] strrchr
- [X] strstr
- [X] strnstr
- [X] strcmp
- [X] strncmp
- [X] atoi
- [X] isalpha
- [X] isdigit
- [X] isalnum
- [X] isascii
- [X] isprint
- [X] toupper
- [X] tolower

Part 2:

|     | Function | Description |
| --- | -------- | ----------- |
| - [X] | ft_memalloc | Allocates (with malloc(3)) and returns a “fresh” memory area.The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| [X] | ft_memdel | Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL. |
| [X] | ft_strnew | Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL. |

- [X] ft_strdel : Takes as a parameter the address of a string that need to be freed with free(3),
                  then sets its pointer to NULL.
- [X] ft_strclr : Sets every character of the string to the value ’\0’.
- [X] ft_striter : Applies the function f to each character of the string passed as argument.
                   Each character is passed by address to f to be modified if necessary
- [X] ft_striteri : Applies the function f to each character of the string passed as argument,
                    and passing its index as first argument. Each character is passed by address to f to be modified if necessary.
- [X] ft_ strmap : Applies the function f to each character of the string given as argument to create
                   a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
- [X] ft_strmapi : Applies the function f to each character of the string passed as argument by giving its index
                   as first argument to create a “fresh” new string (with malloc(3))
                   resulting from the successive applications of f.
- [X] ft_strequ : Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1,
                  or 0 otherwise.
- [X] ft_strnequ : Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached.
                   If the 2 strings are identical, the function returns 1, or 0 otherwise.
- [X] ft_strsub : Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument.
                  The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the
                  allocation fails, the function returns NULL.
- [X] ft_strjoin : Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
                   result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
- [X] ft_strtrim : Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces
                   at the beginning or at the end of the string. Will be considered as whitespaces
                   the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end,
                   the function returns a copy of s. If the allocation fails the function returns NULL.
- [X] ft_strsplit : Allocates (with malloc(3)) and returns an array of “fresh”
                    strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c
                    as a delimiter. If the allocation fails the function returns NULL.
                    Example: ft_strsplit("*hello*fellow***students*", ’*’)
- [X] ft_itoa : Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n
                given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.
- [X] ft_putchar : Outputs the character c to the standard output.
- [X] ft_putstr : Outputs the string s to the standard output.
- [X] ft_putendl : Outputs the string s to the standard output followed by a ’\n’.
- [X] ft_putnbr : Outputs the integer n to the standard output.
- [X] ft_putchar_fd : Outputs the char c to the file descriptor fd.
- [X] ft_putstr_fd : Outputs the string s to the file descriptor fd.
- [X] ft_putendl_fd : Outputs the string s to the file descriptor fd followed by a ’\n’.
- [X] ft_putnbr_fd : Outputs the integer n to the file descriptor fd.

Bonus:
- [X] ft_lstnew : Allocates (with malloc(3)) and returns a “fresh” link.
                  The variables content and content_size of the new link are initialized by copy of the parameters
                  of the function. If the parameter content is nul, the variable content is initialized to NULL
                  and the variable content_size is initialized to 0 even if the parameter content_size isn’t.
                  The variable next is initialized to NULL. If the allocation fails, the function returns NULL
- [X] ft_lstdelone : Takes as a parameter a link’s pointer address and frees the memory of the link’s content
                     using the function del given as a parameter, then frees the link’s memory using free(3).
                     The memory of next must not be freed under any circumstance.
                     Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel in the mandatory part).
- [X] ft_lstdel : Takes as a parameter the adress of a pointer to a link and frees the memory of this link
                  and every successors of that link using the functions del and free(3).
                  Finally the pointer to the link that was just freed must be set to NULL
                  (quite similar to the function ft_memdel from the mandatory part).
- [X] ft_lstadd : Adds the element new at the beginning of the list.
- [X] ft_lstiter : Iterates the list lst and applies the function f to each link.
- [X] ft_lstmap : Iterates a list lst and applies the function f to each link to create a “fresh” list
                  (using malloc(3)) resulting from the successive applications of f. If the allocation fails,
                  the function returns NULL.
