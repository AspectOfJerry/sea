#include <stdio.h>
#include <stdbool.h>
// credits: BroCode

int main() {
    char a = 'A'; // single character %c
    char b[] = "Jerry"; // string %s

    float c = 3.141592; // 4 bytes (32 bit precision) %f
    const double d = 3.141592653589793; // 8 bytes (64 but precision) %lf

    bool e = true; // 1 byte %d

    char f = 127; // ASCII character, 1 byte (-128 to 127) %d or %c
    unsigned char g = 255; // ASCII character, 1 byte (0 to 255) %d or %c

    short int h = 32767; // 2 bytes (-32768 to 32767) %d
    unsigned short int i = 65535; // 2 bytes (0 to 65535) %d

    int j = 2147483647; // 4 bytes (-2147483648 to 2147483647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to 4294967295) %u
    long int l = 2147483647; // 4 bytes (-2147483648 to 2147483647) %ld
    unsigned long int m = 4294967295; // 4 bytes (0 to 4294967295) %lu

    long long n = 9223372036854775807; // 8 bytes (-9223372036854775808 to 9223372036854775807) %lld
    unsigned long long int o = 18446744073709551615U; // 8 bytes (0 to 18446744073709551615) %llu
    long long int p = 9223372036854775807; // 8 bytes (-9223372036854775808 to 9223372036854775807) %llu
    unsigned long long int q = 18446744073709551615U; // 8 bytes (0 to 18446744073709551615) %llu

    printf("char a = %c\n", a);
    printf("char[] b = %s\n", b);
    printf("float c = %f\n", c);
    printf("double d = %lf\n", d);
    printf("bool e = %d\n", e);
    printf("char f = %d\n", f);
    printf("unsigned char g = %d\n", g);
    printf("short int h = %d\n", h);
    printf("unsigned short int i = %d\n", i);
    printf("int j = %d\n", j);
    printf("unsigned int k = %u\n", k);
    printf("long int l = %ld\n", l);
    printf("unsigned long int m = %lu\n", m);
    printf("long long n = %llu\n", n);
    printf("unsigned long long o = %llu\n", o);
    printf("long long int p = %llu\n", p);
    printf("unsigned long long int q = %llu\n", q);

    printf("\n");

    // %.1 decimal precision
    printf("float c = %.1f\n", c);
    printf("double d = %.1lf\n", d);

    // %1 minimum width
    printf("float c = %5.0f\n", c);
    printf("double d = %5.0lf\n", d);

    // %- left align
    printf("float c = %-5.0f\n", c);
    printf("double d = %-5.0lf\n", d);

    printf("\n");


    return 0;
}
