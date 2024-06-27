#ifndef RSH_INTERNALS_H
#define RSH_INTERNALS_H

#include <Rinternals.h>
#include <string.h>

// this file contains some internal functions that are not exported

#define SET_PRIMOFFSET(x, v) (((x)->u.primsxp.offset) = (v))
#define PRIMPRINT(x) (((R_FunTab[(x)->u.primsxp.offset].eval) / 100) % 10)
#define PRIMFUN(x) (R_FunTab[(x)->u.primsxp.offset].cfun)

#define NAMED_BITS 16
#define TYPE_BITS 5

/* Flags */

struct sxpinfo_struct {
  SEXPTYPE type : TYPE_BITS;
  /* ==> (FUNSXP == 99) %% 2^5 == 3 == CLOSXP
   * -> warning: `type' is narrower than values
   *              of its type
   * when SEXPTYPE was an enum */
  unsigned int scalar : 1;
  unsigned int obj : 1;
  unsigned int alt : 1;
  unsigned int gp : 16;
  unsigned int mark : 1;
  unsigned int debug : 1;
  unsigned int trace : 1; /* functions and memory tracing */
  unsigned int spare : 1; /* used on closures and when REFCNT is defined */
  unsigned int gcgen : 1; /* old generation number */
  unsigned int gccls : 3; /* node class */
  unsigned int named : NAMED_BITS;
  unsigned int extra : 32 - NAMED_BITS; /* used for immediate bindings */
};                                      /*		    Tot: 64 */

struct vecsxp_struct {
  R_xlen_t length;
  R_xlen_t truelength;
};

struct primsxp_struct {
  int offset;
};

struct symsxp_struct {
  struct SEXPREC *pname;
  struct SEXPREC *value;
  struct SEXPREC *internal;
};

struct listsxp_struct {
  struct SEXPREC *carval;
  struct SEXPREC *cdrval;
  struct SEXPREC *tagval;
};

struct envsxp_struct {
  struct SEXPREC *frame;
  struct SEXPREC *enclos;
  struct SEXPREC *hashtab;
};

struct closxp_struct {
  struct SEXPREC *formals;
  struct SEXPREC *body;
  struct SEXPREC *env;
};

struct promsxp_struct {
  struct SEXPREC *value;
  struct SEXPREC *expr;
  struct SEXPREC *env;
};

#define SEXPREC_HEADER                                                         \
  struct sxpinfo_struct sxpinfo;                                               \
  struct SEXPREC *attrib;                                                      \
  struct SEXPREC *gengc_next_node, *gengc_prev_node

/* The standard node structure consists of a header followed by the
   node data. */
typedef struct SEXPREC {
  SEXPREC_HEADER;
  union {
    struct primsxp_struct primsxp;
    struct symsxp_struct symsxp;
    struct listsxp_struct listsxp;
    struct envsxp_struct envsxp;
    struct closxp_struct closxp;
    struct promsxp_struct promsxp;
  } u;
} SEXPREC;

typedef struct SEXPREC *SEXP;

typedef SEXP (*CCODE)(SEXP, SEXP, SEXP, SEXP);
/* Information for Deparsing Expressions */
typedef enum {
  PP_INVALID = 0,
  PP_ASSIGN = 1,
  PP_ASSIGN2 = 2,
  PP_BINARY = 3,
  PP_BINARY2 = 4,
  PP_BREAK = 5,
  PP_CURLY = 6,
  PP_FOR = 7,
  PP_FUNCALL = 8,
  PP_FUNCTION = 9,
  PP_IF = 10,
  PP_NEXT = 11,
  PP_PAREN = 12,
  PP_RETURN = 13,
  PP_SUBASS = 14,
  PP_SUBSET = 15,
  PP_WHILE = 16,
  PP_UNARY = 17,
  PP_DOLLAR = 18,
  PP_FOREIGN = 19,
  PP_REPEAT = 20
} PPkind;

typedef enum {
  PREC_FN = 0,
  PREC_EQ = 1,
  PREC_LEFT = 2,
  PREC_RIGHT = 3,
  PREC_TILDE = 4,
  PREC_OR = 5,
  PREC_AND = 6,
  PREC_NOT = 7,
  PREC_COMPARE = 8,
  PREC_SUM = 9,
  PREC_PROD = 10,
  PREC_PERCENT = 11,
  PREC_COLON = 12,
  PREC_SIGN = 13,
  PREC_POWER = 14,
  PREC_SUBSET = 15,
  PREC_DOLLAR = 16,
  PREC_NS = 17
} PPprec;

typedef struct {
  PPkind kind;             /* deparse kind */
  PPprec precedence;       /* operator precedence */
  unsigned int rightassoc; /* right associative? */
} PPinfo;

typedef struct {
  char *name;  /* print name */
  CCODE cfun;  /* c-code address */
  int code;    /* offset within c-code */
  int eval;    /* evaluate args? */
  int arity;   /* function arity */
  PPinfo gram; /* pretty-print info */
} FUNTAB;

extern FUNTAB R_FunTab[];

static inline SEXP Rif_mkPRIMSXP(int offset, int eval) {
  SEXP result;
  SEXPTYPE type = eval ? BUILTINSXP : SPECIALSXP;
  static SEXP PrimCache = NULL;
  static int FunTabSize = 0;

  if (PrimCache == NULL) {
    /* compute the number of entries in R_FunTab */
    while (R_FunTab[FunTabSize].name)
      FunTabSize++;

    /* allocate and protect the cache */
    PrimCache = allocVector(VECSXP, FunTabSize);
    R_PreserveObject(PrimCache);
  }

  if (offset < 0 || offset >= FunTabSize)
    error("offset is out of R_FunTab range");

  result = VECTOR_ELT(PrimCache, offset);

  if (result == R_NilValue) {
    result = allocSExp(type);
    SET_PRIMOFFSET(result, offset);
    SET_VECTOR_ELT(PrimCache, offset, result);
  } else if (TYPEOF(result) != type)
    error("requested primitive type is not consistent with cached value");

  return result;
}

static inline SEXP Rif_Primitive(const char *primname) {
  for (int i = 0; R_FunTab[i].name; i++)
    if (strcmp(primname, R_FunTab[i].name) == 0) { /* all names are ASCII */
      if ((R_FunTab[i].eval % 100) / 10)
        return R_NilValue; /* it is a .Internal */
      else
        return Rif_mkPRIMSXP(i, R_FunTab[i].eval % 10);
    }
  return R_NilValue;
}

#endif
