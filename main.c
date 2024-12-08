#include <stdio.h>      // Normal printf için
#include "ft_printf.h"  // ft_printf prototipleri için

int main(void)
{
    // // Karakter çıktısı testi
    // printf("** Character Test **\n");
    // printf("Original printf: %c\n", 'A');
    // ft_printf("Custom ft_printf: %c\n", 'A');

    // // String çıktısı testi
    // printf("\n** String Test **\n");
    // printf("Original printf: %s\n", "Hello, World!");
    // ft_printf("Custom ft_printf: %s\n", "Hello, World!");

    // Pointer çıktısı testi
    printf("\n** Pointer Test **\n");
    void *ptr = (void *)0xdeadbeef;
    printf("Original printf: %p\n", ptr);
    ft_printf("Custom ft_printf: %p\n", ptr);

    // // Integer çıktısı testi
    // printf("\n** Integer Test **\n");
    // printf("Original printf: %d\n", 12345);
    // ft_printf("Custom ft_printf: %d\n", 12345);

    // // Unsigned integer testi
    // printf("\n** Unsigned Integer Test **\n");
    // printf("Original printf: %u\n", 12345);
    // ft_printf("Custom ft_printf: %u\n", 12345);

    // // Hexadecimal küçük harf testi
    // printf("\n** Hexadecimal Lowercase Test **\n");
    // printf("Original printf: %x\n", 12345);
    // ft_printf("Custom ft_printf: %x\n", 12345);

    // // Hexadecimal büyük harf testi
    // printf("\n** Hexadecimal Uppercase Test **\n");
    // printf("Original printf: %X\n", 12345);
    // ft_printf("Custom ft_printf: %X\n", 12345);

    // // Yüzde karakteri testi
    // printf("\n** Percent Sign Test **\n");
    // printf("Original printf: %%\n");
    // ft_printf("Custom ft_printf: %%\n");

    return 0;
}