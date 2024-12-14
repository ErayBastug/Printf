#include <stdio.h>      // Normal printf için
#include "ft_printf.h"  // ft_printf prototipleri için

int main(void)
{
    int ret_ft, ret_orig;

    // Test 1: Basit metin
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Hello, world!\n");
    printf("\n[printf]:\n");
    ret_orig = printf("Hello, world!\n");
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 2: Tamsayılar
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Integer test: %%d = %d, %%i = %i\n", 42, -42);
    printf("\n[printf]:\n");
    ret_orig = printf("Integer test: %%d = %d, %%i = %i\n", 42, -42);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 3: Unsigned tamsayılar
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Unsigned test: %%u = %u\n", 3000000000u);
    printf("\n[printf]:\n");
    ret_orig = printf("Unsigned test: %%u = %u\n", 3000000000u);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 4: Hexadecimal (küçük ve büyük)
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Hex test: %%x = %x, %%X = %X\n", 255, 255);
    printf("\n[printf]:\n");
    ret_orig = printf("Hex test: %%x = %x, %%X = %X\n", 255, 255);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 5: Pointer adresi
    int x = 42;
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Pointer test: %%p = %p\n", &x);
    printf("\n[printf]:\n");
    ret_orig = printf("Pointer test: %%p = %p\n", &x);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 6: Karakter ve dize
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Char and string test: %%c = %c, %%s = %s\n", 'A', "Test string");
    printf("\n[printf]:\n");
    ret_orig = printf("Char and string test: %%c = %c, %%s = %s\n", 'A', "Test string");
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 7: Yüzde işareti
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Percent sign test: %% = %%\n");
    printf("\n[printf]:\n");
    ret_orig = printf("Percent sign test: %% = %%\n");
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 8: NULL karakter (char)
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("NULL character test: %%c = %c\n", 0);  // NULL karakteri yazdırma
    printf("\n[printf]:\n");
    ret_orig = printf("NULL character test: %%c = %c\n", 0);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 9: NULL string (char *)
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("NULL string test: %%s = %s\n", NULL);  // NULL string
    printf("\n[printf]:\n");
    ret_orig = printf("NULL string test: %%s = %s\n", NULL);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 10: NULL pointer (void *)
    printf("[ft_printf]:\n");
    void *ptr = NULL;
    ret_ft = ft_printf("NULL pointer test: %%p = %p\n", ptr);  // NULL pointer
    printf("\n[printf]:\n");
    ret_orig = printf("NULL pointer test: %%p = %p\n", ptr);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 11: NULL sayılar (int, unsigned, hexadecimal)
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("NULL number tests: %%d = %d, %%i = %i, %%u = %u, %%x = %x, %%X = %X\n", 0, 0, 0, 0, 0);
    printf("\n[printf]:\n");
    ret_orig = printf("NULL number tests: %%d = %d, %%i = %i, %%u = %u, %%x = %x, %%X = %X\n", 0, 0, 0, 0, 0);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 12: Karmaşık NULL kombinasyonu
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Complex NULL combination: %%c = %c, %%s = %s, %%p = %p, %%d = %d, %%i = %i, %%u = %u, %%x = %x, %%X = %X\n", 0, NULL, NULL, 0, 0, 0, 0, 0);
    printf("\n[printf]:\n");
    ret_orig = printf("Complex NULL combination: %%c = %c, %%s = %s, %%p = %p, %%d = %d, %%i = %i, %%u = %u, %%x = %x, %%X = %X\n", 0, NULL, NULL, 0, 0, 0, 0, 0);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 13: Genişlik ve sıfır dolgu kaldırılmış
    printf("[ft_printf]:\n");
    ret_ft = ft_printf("Width and zero padding removed: %%d = %d, %%i = %i\n", 42, -42);
    printf("\n[printf]:\n");
    ret_orig = printf("Width and zero padding removed: %%d = %d, %%i = %i\n", 42, -42);
    printf("\nReturn values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    return 0;
}
