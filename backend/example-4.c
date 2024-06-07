#include <stddef.h>

typedef ptrdiff_t R_xlen_t;
typedef struct SEXPREC SEXPREC;
typedef SEXPREC *SEXP;
#define SEXPREC_HEADER                                                         \
  long sxpinfo;                                                                \
  struct SEXPREC *attrib;                                                      \
  struct SEXPREC *gengc_next_node, *gengc_prev_node

struct vecsxp_struct {
  R_xlen_t length;
  R_xlen_t truelength;
};

typedef struct VECTOR_SEXPREC {
  SEXPREC_HEADER;
  struct vecsxp_struct vecsxp;
} VECTOR_SEXPREC, *VECSEXP;

typedef union {
  VECTOR_SEXPREC s;
  double align;
} SEXPREC_ALIGN;

#define DATAPTR(x) ((void *)(((SEXPREC_ALIGN *)(x)) + 1))
#define INTEGER(x) ((int *)DATAPTR(x))

SEXP Rf_allocVector(int, int);

// function(x) x * 2

SEXP jit_f(SEXP x) {
  int n = (((VECSEXP)(x))->vecsxp.length);
  //
  SEXP _1 = Rf_allocVector(13, n);

  int *restrict px = INTEGER(x);
  int *restrict p_1 = INTEGER(_1);

  for (int i = 0; i < n; ++i) {
    p_1[i] = px[i] * 2;
  }

  return _1;
}
