#ifndef LIBFT
    #define LIBFT
    #include <stdio.h>
    #include <stdlib.h>

    // functions
    void *ft_memset(void *, int, size_t);
    void ft_bzero(void *, size_t);
    // void *ft_memcpy(void *, const void *, size_t);
    // void *ft_memccpy(void *, const void *, int, size_t);
    void *ft_memmove(void *, const void *, size_t);
    void *ft_memchr(const void *, int, size_t);
    int ft_memcmp(const void *, const void *, size_t);
    size_t ft_strlen(const char *);
    size_t ft_strlcpy(char *, const char *, size_t); // seguir buscando info
    size_t ft_strcat(char *, const char *);
    char *ft_strchr(const char *, int);
    char *ft_strrchr(const char *, int);
    int ft_strncmp(const char *, const char *, size_t);
    int ft_atoi(const char *);
    int ft_isalpha(int);
    int ft_isdigit(int);
    int ft_isalnum(int);
    int ft_isascii(int);
    int ft_isprint(int);
    int ft_toupper(int);
    int ft_tolower(int);
    void *ft_calloc(size_t, size_t);
#endif