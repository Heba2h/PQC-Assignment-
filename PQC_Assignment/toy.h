#ifndef TOY_H_INCLUDED
#define TOY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TK_K 3
#define TK_N 4
#define TK_Q 97
#define TK_SQRT_W 33
#define TK_W 22

#define NEG(X) (TK_Q - (X))


static void toy_fill_small(short *buf, int n);

static void toy_polmul_naive(short *dst, const short *a, const short *b, int add);

static void toy_mulmTv(short *dst, const short *mat, const short *vec);

static void toy_dot(short *dst, const short *v1, const short *v2);

static void toy_add(short *dst, const short *v1, const short *v2, int Count, int v2_neg);

void toy_gen(short *A, short *t, short *s);

void toy_enc(const short *A, const short *t, int plain, short *u, short *v);

int toy_dec(const short *s, const short *u, const short *v);

void print_bin(int num, int num_bits);


#endif // TOY_H_INCLUDED
