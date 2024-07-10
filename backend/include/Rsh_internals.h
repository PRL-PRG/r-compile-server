#ifndef RSH_INTERNALS_H
#define RSH_INTERNALS_H

#define COMPUTE_REFCNT_VALUES

#include <Rinternals.h>
#include <string.h>

// this file contains some internal functions that are not exported

#define INLINE inline __attribute__((always_inline))

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

SEXP Rf_CreateTag(SEXP);

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

static INLINE SEXP Rif_mkPRIMSXP(int offset, int eval) {
  SEXP result;
  SEXPTYPE type = eval ? BUILTINSXP : SPECIALSXP;
  static SEXP PrimCache = NULL;
  static int FunTabSize = 0;

  if (PrimCache == NULL) {
    /* compute the number of entries in R_FunTab */
    while (R_FunTab[FunTabSize].name)
      FunTabSize++;

    /* allocate and protect the cache */
    PrimCache = Rf_allocVector(VECSXP, FunTabSize);
    R_PreserveObject(PrimCache);
  }

  if (offset < 0 || offset >= FunTabSize)
    Rf_error("offset is out of R_FunTab range");

  result = VECTOR_ELT(PrimCache, offset);

  if (result == R_NilValue) {
    result = Rf_allocSExp(type);
    SET_PRIMOFFSET(result, offset);
    SET_VECTOR_ELT(PrimCache, offset, result);
  } else if (TYPEOF(result) != type)
    Rf_error("requested primitive type is not consistent with cached value");

  return result;
}

static INLINE SEXP Rif_Primitive(const char *primname) {
  for (int i = 0; R_FunTab[i].name; i++)
    if (strcmp(primname, R_FunTab[i].name) == 0) { /* all names are ASCII */
      if ((R_FunTab[i].eval % 100) / 10)
        return R_NilValue; /* it is a .Internal */
      else
        return Rif_mkPRIMSXP(i, R_FunTab[i].eval % 10);
    }
  return R_NilValue;
}

#define SCALAR_LVAL(s) (LOGICAL(s)[0])
#define SCALAR_IVAL(s) (INTEGER(s)[0])

static INLINE Rboolean Rif_asLogicalNoNA(SEXP s, SEXP call) {
  // TODO: i18n
  Rboolean cond = NA_LOGICAL;

  /* handle most common special case directly */
  if (IS_SCALAR(s, LGLSXP)) {
    cond = SCALAR_LVAL(s);
    if (cond != NA_LOGICAL)
      return cond;
  } else if (IS_SCALAR(s, INTSXP)) {
    int val = SCALAR_IVAL(s);
    if (val != NA_INTEGER)
      return val != 0;
  }

  int len = Rf_length(s);
  if (len > 1)
    Rf_errorcall(call, "the condition has length > 1");
  if (len > 0) {
    /* inline common cases for efficiency */
    switch (TYPEOF(s)) {
    case LGLSXP:
      cond = LOGICAL(s)[0];
      break;
    case INTSXP:
      cond = INTEGER(s)[0]; /* relies on NA_INTEGER == NA_LOGICAL */
      break;
    default:
      cond = Rf_asLogical(s);
    }
  }

  if (cond == NA_LOGICAL) {
    char *msg =
        len ? (Rf_isLogical(s) ? "missing value where TRUE/FALSE needed"
                               : "argument is not interpretable as logical")
            : "argument is of length zero";
    Rf_errorcall(call, msg);
  }
  return cond;
}

#define INCREMENT_LINKS(x) do {			\
	SEXP il__x__ = (x);			\
	INCREMENT_NAMED(il__x__);		\
	INCREMENT_REFCNT(il__x__);		\
    } while (0)
#define DECREMENT_LINKS(x) do {			\
	SEXP dl__x__ = (x);			\
	DECREMENT_NAMED(dl__x__);		\
	DECREMENT_REFCNT(dl__x__);		\
    } while (0)

static INLINE void signalMissingArgError(SEXP args, SEXP call)
{
    SEXP a, c;
    int n, k;
    for (a = args, n = 1; a != R_NilValue; a = CDR(a), n++)
	if (CAR(a) == R_MissingArg) {
	    /* check for an empty argument in the call -- start from
	       the beginning in case of ... arguments */
	    if (call != R_NilValue) {
		for (k = 1, c = CDR(call); c != R_NilValue; c = CDR(c), k++)
		    if (CAR(c) == R_MissingArg)
			Rf_errorcall(call, "argument %d is empty", k);
	    }
	    /* An error from evaluating a symbol will already have
	       been signaled.  The interpreter, in evalList, does
	       _not_ signal an error for a call expression that
	       produces an R_MissingArg value; for example

		   c(alist(a=)$a)

	       does not signal an error. If we decide we do want an
	       error in this case we can modify evalList for the
	       interpreter and here use the code below. */
#ifdef NO_COMPUTED_MISSINGS
	    /* otherwise signal a 'missing argument' error */
	    Rf_errorcall(call, "argument %d is missing", n);
#endif
	}
}

static INLINE void Rif_checkForMissings(SEXP args, SEXP call)
{
    Rboolean found = FALSE;
    for (SEXP a = args; a != R_NilValue; a = CDR(a))
	if (CAR(a) == R_MissingArg) {
	    found = TRUE;
	    break;
	}
    if (found)
	signalMissingArgError(args, call);
}

static INLINE SEXP Rif_markSpecialArgs(SEXP args)
{
    SEXP arg;
    for(arg = args; arg != R_NilValue; arg = CDR(arg))
	MARK_NOT_MUTABLE(CAR(arg));
    return args;
}


// FIXME: can we include the Defn.h??

#define NAMED_BITS 16
#define REFCNTMAX ((1 << NAMED_BITS) - 1)

#if defined(COMPUTE_REFCNT_VALUES)
# define REFCNT(x) ((x)->sxpinfo.named)
# define TRACKREFS(x) (TYPEOF(x) == CLOSXP ? TRUE : ! (x)->sxpinfo.spare)
#else
# define REFCNT(x) 0
# define TRACKREFS(x) FALSE
#endif

#if defined(COMPUTE_REFCNT_VALUES)
# define SET_REFCNT(x,v) (REFCNT(x) = (v))
# if defined(EXTRA_REFCNT_FIELDS)
#  define SET_TRACKREFS(x,v) (TRACKREFS(x) = (v))
# else
#  define SET_TRACKREFS(x,v) ((x)->sxpinfo.spare = ! (v))
# endif
# define DECREMENT_REFCNT(x) do {					\
	SEXP drc__x__ = (x);						\
	if (REFCNT(drc__x__) > 0 && REFCNT(drc__x__) < REFCNTMAX)	\
	    SET_REFCNT(drc__x__, REFCNT(drc__x__) - 1);			\
    } while (0)
# define INCREMENT_REFCNT(x) do {			      \
	SEXP irc__x__ = (x);				      \
	if (REFCNT(irc__x__) < REFCNTMAX)		      \
	    SET_REFCNT(irc__x__, REFCNT(irc__x__) + 1);	      \
    } while (0)
#else
# define SET_REFCNT(x,v) do {} while(0)
# define SET_TRACKREFS(x,v) do {} while(0)
# define DECREMENT_REFCNT(x) do {} while(0)
# define INCREMENT_REFCNT(x) do {} while(0)
#endif

#define ENABLE_REFCNT(x) SET_TRACKREFS(x, TRUE)
#define DISABLE_REFCNT(x) SET_TRACKREFS(x, FALSE)



#endif
