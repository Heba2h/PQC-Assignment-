#include "toy.h"


int main() {
    // Define parameters
    short A[TK_K * TK_K * TK_N];
    short t[TK_K * TK_N];
    short s[TK_K * TK_N];
    short u[TK_K * TK_N];
    short v[TK_N];
    // Key generation
    toy_gen(A, t, s);

    // Example 1
    int plaintext1 = 10;
    toy_enc(A, t, plaintext1, u, v);
    int decrypted1 = toy_dec(s, u, v);
    printf("Original plaintext_1 : %d\n", plaintext1);
    printf("Decrypted plaintext_1 : %d\n", decrypted1);
    printf("Binary representations:\n");
    printf("plaintext1: ");
    print_bin(plaintext1, TK_N);
    printf(" , ");
    printf("decrypted1: ");
    print_bin(decrypted1, TK_N);
    printf(" , ");
    printf("plaintext1 ^ decrypted1: ");
    print_bin(plaintext1 ^ decrypted1, TK_N);
    printf("\n\n");

    // Example 2
    int plaintext2 = 7;
    toy_enc(A, t, plaintext2, u, v);
    int decrypted2 = toy_dec(s, u, v);
    printf("Original plaintext_2 : %d\n", plaintext2);
    printf("Decrypted plaintext_2 : %d\n", decrypted2);
    printf("Binary representations:\n");
    printf("plaintext2: ");
    print_bin(plaintext2, TK_N);
    printf(" , ");
    printf("decrypted2: ");
    print_bin(decrypted2, TK_N);
    printf(" , ");
    printf("plaintext2 ^ decrypted2: ");
    print_bin(plaintext2 ^ decrypted2, TK_N);
    printf("\n\n");

    // Add more examples as needed

    return 0;
}
