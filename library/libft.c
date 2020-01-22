#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    char *aux = s;
    for (int i = 0; i < n; i++)
       aux[i] = (char) c;
    s = aux;

    return s;
}

void ft_bzero(void *s, size_t n)
{
    // ft_memset(s, 0, n)
    char *aux = s;
    for (int i = 0; i < n; i++)
       aux[i] = 0;
    s = aux;
}

// void *ft_memcpy(void *dest, const void *src, size_t n)
// void *ft_memccpy(void *dest, const void *src, int c, size_t n)

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *newDest = (char *) dest, *newSrc = (char *) src, arr[n];
    size_t i;
    
    // no funciona
    // for(;newDest && newSrc; *newDest = *newSrc, newDest++, newSrc++);
    
    for (i = 0; i < n; i++)
        arr[i] = newSrc[i];
    for (i = 0; i < n; i++)
        newDest[i] = arr[i];
  
    dest = newDest;

    return dest;
}

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *search = (unsigned char*) s;
    while (search && *search!=(unsigned char) c)
        search++;
    return (*search != (unsigned char) c) ? NULL : search;
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *c1 = (unsigned char *) s1, *c2 = (unsigned char *) s2;
    for(; c1 && c2 && *c1==*c2; c1++, c2++);
    return(*c1-*c2);
}

size_t ft_strlen(const char *s)
{
    size_t i;
    for (i = 0; s[i] != '\0'; i++);
    return(i);
}

// seguir buscando info
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    char *newDst = dst;

    // positioning newDst to the null
    while(*newDst != '\0')
        newDst++;
    
    ft_memmove(newDst, src, size);
    
    return ft_strlen(newDst);
}

size_t ft_strcat(char *dest, const char *src)
{
    unsigned char *newDest = dest;
    while(*newDest != '\0')
        newDest++;
    ft_memmove(newDest, src, ft_strlen(dest));
    
    dest = newDest;
    return ft_strlen(dest);    
}

char *ft_strchr(const char *s, int c)
{
    while(*s!='\0' && *s!=(unsigned char) c)
        s++;
    return (*s!=(unsigned char) c) ? NULL : s;   
}

char *ft_strrchr(const char *s, int c)
{
    char *lastS = NULL;
    while(*s!='\0')
    {
        if(*s==(unsigned char) c)
            lastS = (unsigned char *) s;
        s++;
    }
    return (lastS);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    for(; n && s1 && s2 && *s1==*s2; n--);

    return *s1-*s2;
}

int ft_atoi(const char *nptr)
{
    int i, num = 0;
    for (i = 0; i < ft_strlen(nptr) && ft_isdigit(nptr[i]); i++)
        num = (int) nptr[i] - 48 + num*10;
    
    return (i==ft_strlen(nptr)) ? num : 0;
}

int ft_isalpha(int c)
{
    return (c >= 65 && c<=90) || (c>=97 && c<=122);
}

int ft_isdigit(int c)
{
    return(c>=48 && c<=57);
}

int ft_isalnum(int c)
{
    return ft_isdigit(c) || ft_isalpha(c);
}

int ft_isascii(int c)
{
    return (c>=0 && c<=127);
}

int ft_isprint(int c)
{
    return (c>=32 && c<=255);
}

int ft_toupper(int c)
{
    return (c>=97 && c <=122) ? c-32 : c;
}

int ft_tolower(int c)
{
    return (c>=65 && c <=90) ? c+32 : c;   
}

void *calloc(size_t nmemb, size_t size)
{}

