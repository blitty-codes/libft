#include "library/libft.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
/*
    char str[] = "almost every programmer should know memset!";
    char str1[] = "almost every programmer should know memset!";

    memset(str, '-', 6);
    ft_memset(str1, '-', 6);
    printf("memset: %s\nft_memset: %s\n", str, str1);
    bzero(str, 12);
    ft_bzero(str1, 1);
    printf("bzero: %s\nft_bzero: %s\n", str, str1);

    char str[] = "memmove can be very useful......";
    char str1[] = "memmove can be very useful......";

    memmove(str+20,str+15,11);
    ft_memmove(str1+20,str1+15,11);

    printf("\nmemmove: %s\nft_memmove: %s\n", str, str1);
    
    const char str[] = "Example string";
    const char str1[] = "Example string";
    char *ret, *ft_ret;

    ret = memchr(str, 'p', strlen(str));
    ft_ret = ft_memchr(str1, 'p', strlen(str1));

    printf("memchr: %s\nft_memchr: %s\n", ret, ft_ret);

    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";

    int n;

    if(memcmp(buffer1, buffer2, sizeof(buffer1)) && ft_memcmp(buffer1, buffer2, sizeof(buffer1)))
        printf ("'%s' is the same as '%s'.\n", buffer1, buffer2);
    else
        printf("Nope\n");

    char *p = "Buenos dias";
    printf("strlen: %ld\nft_strlen: %ld\n", strlen(p), ft_strlen(p));
*/

    // seguir buscando info
    char h[13] = "Hello ", hs[13] = "Hello ", *w = "world", *ws = "world";
    // size_t n = ft_strlcpy(h, w, 15);
    // printf("strlcpy:\n\t-h: %s\n\t-w: %s\n\t-n: %ld\n", h, w, n);

    strcat(h, w);
    ft_strcat(hs, ws);
    /*
    printf("strcat: %s\nft_strcat: %s\n", h, hs);
    printf("strchr: %p\nft_strchr: %p\n", strchr(h, 'w'), ft_strchr(h, 'w'));
    printf("strrchr: %p\nft_strrchr: %p\n", strrchr(h, 'l'), ft_strrchr(h, 'l'));
    printf("strncmp: %d\nft_strncmp: %d\n", strncmp(h, hs, 3), ft_strncmp(h, hs, 3));
    printf("atoi: %d\nft_atoi: %d\n", atoi("99"), ft_atoi("99"));
    printf("isalpha: %d\nft_isalpha: %d\n", isalpha('Z'), ft_isalpha('Z'));
    printf("isdigit: %d\nft_idigit: %d\n", isdigit('9'), ft_isdigit('9'));
    printf("issalnum: %d\nft_issalnum: %d\n", isalnum('k'), ft_isalnum('k'));
    printf("isascii: %d\nft_isascii: %d\n", isascii('*'), ft_isascii('*'));
    printf("isprint: %d\nft_isisprint: %d\n", isprint(' '), ft_isprint(' '));
    printf("tolower: %d\nft_tolower: %d\n", tolower('R'), ft_tolower('R'));
    printf("toupper: %d\nft_istoupper: %d\n", toupper('z'), ft_toupper('z'));
    */
    return 0;
}   