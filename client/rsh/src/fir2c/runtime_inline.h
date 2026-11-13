#pragma once

// The runtime functions that generated code calls on unboxed values: the scalar builtins and
// intrinsics (arithmetic, comparisons, `box`, `unbox`, `naToFalse`, the `is.*` tests, ...) and the
// subscript reads and writes, and the push and pop of an elided frame. They are `static inline`, so the C compiler inlines them into the
// module instead of calling `runtime.o` or `rsh.so`. C only: `runtime.h` includes this at its end.

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

#define DEFINE_INLINE_INTRINSIC(ret, X, sig, ...)\
  static inline ret Fir_ver_call_ ## X ## _ ## sig(SEXP env, ##__VA_ARGS__)

#define DEFINE_INLINE_BUILTIN(ret, X, sig, ...)\
  static inline ret Fir_ver_call_ ## X ## _ ## sig(SEXP env, ##__VA_ARGS__)

#pragma clang diagnostic pop

#define ASSERT(x, msg, ...) \
  if (!(x)) Rf_error("FIŘ internal assertion failed:\n  `" #x "`\n  " msg, ##__VA_ARGS__)
/// The offset `x[[i]]` reads for the 0-based `index` (`i - 1`, `NA` for `NA`): `index` itself if
/// it's in `vector`, else `Fir_subscript_offset_slow`'s.
static inline R_xlen_t Fir_subscript_offset(SEXP vector, int index) {
  return index >= 0 && (R_xlen_t)index < XLENGTH(vector) ? index
                                                         : Fir_subscript_offset_slow(vector, index);
}

/// `Fir_subscript_offset` for `x[i]`, which is -1 where `x[i]` reads `NA`.
static inline R_xlen_t Fir_subscript_na_offset(SEXP vector, int index) {
  return index >= 0 && (R_xlen_t)index < XLENGTH(vector) ? index
                                                         : Fir_subscript_na_offset_slow(vector, index);
}

static inline int Fir_subscript_read_int(SEXP vector, int index) {
  return INTEGER(vector)[Fir_subscript_offset(vector, index)];
}

static inline double Fir_subscript_read_real(SEXP vector, int index) {
  return REAL(vector)[Fir_subscript_offset(vector, index)];
}

static inline Rboolean Fir_subscript_read_logical(SEXP vector, int index) {
  return (Rboolean)LOGICAL(vector)[Fir_subscript_offset(vector, index)];
}

/// `NULL` is how the generated code spells `NA_STRING`.
static inline char* Fir_subscript_read_string(SEXP vector, int index) {
  SEXP elt = STRING_ELT(vector, Fir_subscript_offset(vector, index));
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
}

/// `Fir_subscript_read_*` but an out-of-range index reads as `NA` instead of failing, which is how
/// R's `[` differs from its `[[`.
static inline int Fir_subscript_read_na_int(SEXP vector, int index) {
  R_xlen_t offset = Fir_subscript_na_offset(vector, index);
  return offset >= 0 ? INTEGER(vector)[offset] : NA_INTEGER;
}

static inline double Fir_subscript_read_na_real(SEXP vector, int index) {
  R_xlen_t offset = Fir_subscript_na_offset(vector, index);
  return offset >= 0 ? REAL(vector)[offset] : NA_REAL;
}

static inline Rboolean Fir_subscript_read_na_logical(SEXP vector, int index) {
  R_xlen_t offset = Fir_subscript_na_offset(vector, index);
  return offset >= 0 ? (Rboolean)LOGICAL(vector)[offset] : (Rboolean)NA_LOGICAL;
}

static inline char* Fir_subscript_read_na_string(SEXP vector, int index) {
  R_xlen_t offset = Fir_subscript_na_offset(vector, index);
  if (offset < 0) return NULL;
  SEXP elt = STRING_ELT(vector, offset);
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
}

/// The 0-based index of the 1-based `i`.
static inline int Fir_zero_based(int i) {
  return i == NA_INTEGER ? NA_INTEGER : i - 1;
}

static inline SEXP Fir_subscript_write_int(SEXP vector, int index, int value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  INTEGER(vector)[index] = value;
  return vector;
}

static inline SEXP Fir_subscript_write_real(SEXP vector, int index, double value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  REAL(vector)[index] = value;
  return vector;
}

static inline SEXP Fir_subscript_write_logical(SEXP vector, int index, Rboolean value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  LOGICAL(vector)[index] = value;
  return vector;
}

static inline SEXP Fir_subscript_write_string(SEXP vector, int index, char* value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  SET_STRING_ELT(vector, index, Rf_mkChar(value));
  return vector;
}

DEFINE_INLINE_INTRINSIC(SEXP, checkFun, value_fx_impure_ret_value, SEXP value) {
  if (TYPEOF(value) != CLOSXP && TYPEOF(value) != BUILTINSXP &&
      TYPEOF(value) != SPECIALSXP) {
    Rf_error("attempt to apply non-function");
  }

  return R_NilValue;
}

// The `checkMissing` intrinsic: raises if the binding of `symbol` (NULL if unknown) is the missing
// argument. `GETVAR` calls it before the force, as GNU-R's `getvar` does: the value of a forced
// promise may be the missing argument.
static inline SEXP Fir_check_missing(SEXP value, SEXP symbol) {
  if (value == R_MissingArg) {
    if (symbol == NULL) Rf_error("argument is missing, with no default");
    Rf_error("argument \"%s\" is missing, with no default", CHAR(PRINTNAME(symbol)));
  }
  return R_NilValue;
}

DEFINE_INLINE_INTRINSIC(SEXP, missing, any_fx_none_ret_vec1_logical, SEXP value) {
  return value == R_MissingArg ? R_TrueValue : R_FalseValue;
}

DEFINE_INLINE_INTRINSIC(bool, missing, any_fx_none_ret_bool, SEXP value) {
  return value == R_MissingArg;
}

/// GNU-R's `STARTFOR`: a factor loops over its labels, and the loop reads the length and elements
/// of another object without dispatch.
DEFINE_INLINE_INTRINSIC(SEXP, toForSeq, value_fx_none_ret_value, SEXP value) {
  if (!Rf_isVector(value) && !Rf_isList(value)) Rf_error("invalid for() loop sequence");
  if (!OBJECT(value)) return value;
  if (Rf_inherits(value, "factor")) return Rf_asCharacterFactor(value);
  SEXP seq = Rf_shallow_duplicate(value);
  CLEAR_ATTRIB(seq);
  return seq;
}

DEFINE_INLINE_INTRINSIC(SEXP, toForSeq, vec_logical_fx_none_ret_vec_logical, SEXP value) {
  return value;
}

DEFINE_INLINE_INTRINSIC(SEXP, toForSeq, vec_int_fx_none_ret_vec_int, SEXP value) {
  return value;
}

DEFINE_INLINE_INTRINSIC(SEXP, toForSeq, vec_real_fx_none_ret_vec_real, SEXP value) {
  return value;
}

DEFINE_INLINE_INTRINSIC(SEXP, toForSeq, vec_string_fx_none_ret_vec_string, SEXP value) {
  return value;
}

DEFINE_INLINE_INTRINSIC(SEXP, setInvisible, fx_none_ret_value) {
  R_Visible = FALSE;
  return R_NilValue;
}

DEFINE_INLINE_INTRINSIC(SEXP, setVisible, fx_none_ret_value) {
  R_Visible = TRUE;
  return R_NilValue;
}

DEFINE_INLINE_INTRINSIC(bool, naToFalse, vec1_logical_fx_none_ret_bool, SEXP value) {
  // Compare the element, not the pointer: a `v1(L)` doesn't have to be one of R's
  // `R_TrueValue`/`R_FalseValue`/`R_LogicalNAValue` singletons (e.g. a generic builtin call
  // allocates a fresh `logical(1)`).
  return LOGICAL(value)[0] == TRUE;
}

DEFINE_INLINE_INTRINSIC(bool, naToFalse, scalar_logical_fx_none_ret_bool, Rboolean value) {
  return value == TRUE;
}

// The `int64_t` form lets the C compiler fold a loop that does nothing.
static inline int Fir_for_index(int index) {
  if (index == NA_INTEGER) return NA_INTEGER;
  int64_t next = (int64_t) index + 1;
  return next > INT_MAX ? NA_INTEGER : (int) next;
}

DEFINE_INLINE_INTRINSIC(int, forIndex, scalar_int_fx_none_ret_scalar_int, int index) {
  return Fir_for_index(index);
}

DEFINE_INLINE_INTRINSIC(SEXP, forIndex, vec1_int_fx_none_ret_vec1_int, SEXP index) {
  return Rf_ScalarInteger(Fir_for_index(INTEGER(index)[0]));
}

// `int64_t`, so a call that the C compiler moves out of bounds has no undefined behavior.
DEFINE_INLINE_INTRINSIC(int, rangeElement, scalar_int_scalar_int_scalar_int_fx_none_ret_scalar_int,
                        int from, int k, int step) {
  return (int) ((int64_t) from + ((int64_t) k - 1) * step);
}

// An operand of `&&` or `||`, with the checks of GNU-R's `do_logic3`.
static inline int Fir_logical_operand(SEXP value, const char* arg, const char* op) {
  if (TYPEOF(value) == LGLSXP && XLENGTH(value) == 1 && ATTRIB(value) == R_NilValue)
    return LOGICAL(value)[0];
  if (!Rf_isNumber(value)) Rf_error("invalid %s type in 'x %s y'", arg, op);
  if (XLENGTH(value) > 1)
    Rf_error("'length = %lld' in coercion to 'logical(1)'", (long long) XLENGTH(value));
  return Rf_asLogical(value);
}

DEFINE_INLINE_INTRINSIC(Rboolean, logicalOperand,
                        value_scalar_string_scalar_string_fx_none_ret_scalar_logical,
                        SEXP value, char* arg, char* op) {
  return (Rboolean) Fir_logical_operand(value, arg, op);
}

DEFINE_INLINE_INTRINSIC(SEXP, logicalOperand,
                        value_scalar_string_scalar_string_fx_none_ret_vec1_logical,
                        SEXP value, char* arg, char* op) {
  int result = Fir_logical_operand(value, arg, op);
  return result == NA_LOGICAL ? R_LogicalNAValue : result ? R_TrueValue : R_FalseValue;
}

DEFINE_INLINE_INTRINSIC(SEXP, logicalOperand,
                        vec1_logical_scalar_string_scalar_string_fx_none_ret_vec1_logical,
                        SEXP value, char* arg, char* op) {
  return value;
}

DEFINE_INLINE_INTRINSIC(Rboolean, logicalOperand,
                        scalar_logical_scalar_string_scalar_string_fx_none_ret_scalar_logical,
                        Rboolean value, char* arg, char* op) {
  return value;
}

// `&&` short-circuits on `FALSE` only, so its guard sends `NA` the other way.
DEFINE_INLINE_INTRINSIC(bool, naToTrue, vec1_logical_fx_none_ret_bool, SEXP value) {
  // Compare the element, not the pointer, for the same reason as `naToFalse`.
  return LOGICAL(value)[0] != FALSE;
}

DEFINE_INLINE_INTRINSIC(bool, naToTrue, scalar_logical_fx_none_ret_bool, Rboolean value) {
  return value != FALSE;
}

// === box ===
DEFINE_INLINE_INTRINSIC(SEXP, box, scalar_logical_fx_none_ret_vec1_logical, Rboolean value) {
  return Rf_ScalarLogical(value);
}

DEFINE_INLINE_INTRINSIC(SEXP, box, scalar_int_fx_none_ret_vec1_int, int value) {
  return Rf_ScalarInteger(value);
}

DEFINE_INLINE_INTRINSIC(SEXP, box, scalar_real_fx_none_ret_vec1_real, double value) {
  return Rf_ScalarReal(value);
}

DEFINE_INLINE_INTRINSIC(SEXP, box, scalar_string_fx_none_ret_vec1_string, char* value) {
  return Rf_ScalarString(value == NULL ? NA_STRING : Rf_mkChar(value));
}

// === unbox ===
DEFINE_INLINE_INTRINSIC(Rboolean, unbox, vec1_logical_borrowed_fx_none_ret_scalar_logical, SEXP value) {
  return LOGICAL(value)[0];
}

DEFINE_INLINE_INTRINSIC(int, unbox, vec1_int_borrowed_fx_none_ret_scalar_int, SEXP value) {
  return INTEGER(value)[0];
}

DEFINE_INLINE_INTRINSIC(double, unbox, vec1_real_borrowed_fx_none_ret_scalar_real, SEXP value) {
  return REAL(value)[0];
}

DEFINE_INLINE_INTRINSIC(char*, unbox, vec1_string_borrowed_fx_none_ret_scalar_string, SEXP value) {
  return STRING_ELT(value, 0) == NA_STRING ? NULL : (char*)CHAR(STRING_ELT(value, 0));
}

// === Vector operation helpers ===

// The scalar helpers follow GNU-R's `NA` rules (`arithmetic.c`, `relop.c`): an integer `NA` is
// `NA_INTEGER`, and integer overflow gives `NA` with a warning.

static inline double Fir_i2r(int a) {
  return a == NA_INTEGER ? NA_REAL : (double)a;
}

static inline int Fir_int_result(int64_t result) {
  if (result > INT_MAX || result <= INT_MIN) {
    Rf_warning("NAs produced by integer overflow");
    return NA_INTEGER;
  }
  return (int)result;
}

static inline int Fir_int_arith(int a, int b, char op) {
  if (a == NA_INTEGER || b == NA_INTEGER) return NA_INTEGER;
  int64_t x = a, y = b;
  return Fir_int_result(op == '+' ? x + y : op == '-' ? x - y : x * y);
}

#define FIR_CMP_INT(a, op, b) \
  ((a) == NA_INTEGER || (b) == NA_INTEGER ? NA_LOGICAL : (Rboolean)((a) op (b)))
#define FIR_CMP_REAL(a, op, b) \
  (ISNAN(a) || ISNAN(b) ? NA_LOGICAL : (Rboolean)((a) op (b)))
#define FIR_CMP_LGL(a, op, b) \
  ((a) == NA_LOGICAL || (b) == NA_LOGICAL ? NA_LOGICAL : (Rboolean)((a) op (b)))
// `NULL` is how the generated code spells `NA_STRING`. Compare contents, not pointers: the
// generated code passes string literals, which aren't the `CHARSXP` cache's strings.
#define FIR_CMP_STR(a, op, b) \
  ((a) == NULL || (b) == NULL ? NA_LOGICAL : (Rboolean)(strcmp((a), (b)) op 0))
#define FIR_STR_EQ(a, b) ((a) == (b) || ((a) != NULL && (b) != NULL && strcmp((a), (b)) == 0))

// === + ===
// I+I→I
DEFINE_INLINE_BUILTIN(int, _u2b, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return Fir_int_arith(a, b, '+');
}
// R+R→R
DEFINE_INLINE_BUILTIN(double, _u2b, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a + b;
}
// I+R→R
DEFINE_INLINE_BUILTIN(double, _u2b, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) + b;
}
// R+I→R
DEFINE_INLINE_BUILTIN(double, _u2b, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a + Fir_i2r(b);
}
// +I→I (unary; `b` is the missing second argument)
DEFINE_INLINE_BUILTIN(int, _u2b, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b) {
  return a;
}
// +R→R (unary)
DEFINE_INLINE_BUILTIN(double, _u2b, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b) {
  return a;
}

// === - ===
// I-I→I
DEFINE_INLINE_BUILTIN(int, _u2d, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return Fir_int_arith(a, b, '-');
}
// R-R→R
DEFINE_INLINE_BUILTIN(double, _u2d, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a - b;
}
// I-R→R
DEFINE_INLINE_BUILTIN(double, _u2d, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) - b;
}
// R-I→R
DEFINE_INLINE_BUILTIN(double, _u2d, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a - Fir_i2r(b);
}
// -I→I (unary; `b` is the missing second argument)
DEFINE_INLINE_BUILTIN(int, _u2d, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b) {
  return a == NA_INTEGER ? NA_INTEGER : -a;
}
// -R→R (unary)
DEFINE_INLINE_BUILTIN(double, _u2d, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b) {
  return -a;
}

// === * ===
// I*I→I
DEFINE_INLINE_BUILTIN(int, _u2a, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return Fir_int_arith(a, b, '*');
}
// R*R→R
DEFINE_INLINE_BUILTIN(double, _u2a, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a * b;
}
// I*R→R
DEFINE_INLINE_BUILTIN(double, _u2a, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) * b;
}
// R*I→R
DEFINE_INLINE_BUILTIN(double, _u2a, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a * Fir_i2r(b);
}

// === / ===
// I/I→R
DEFINE_INLINE_BUILTIN(double, _u2f, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b) {
  return Fir_i2r(a) / Fir_i2r(b);
}
// R/R→R
DEFINE_INLINE_BUILTIN(double, _u2f, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a / b;
}
// I/R→R
DEFINE_INLINE_BUILTIN(double, _u2f, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) / b;
}
// R/I→R
DEFINE_INLINE_BUILTIN(double, _u2f, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a / Fir_i2r(b);
}

// === < ===
// I<I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, <, b);
}
// R<R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, <, b);
}
// I<R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), <, b);
}
// R<I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, <, Fir_i2r(b));
}

// I<I→B
DEFINE_INLINE_BUILTIN(bool, _u3c, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a < b;
}
// R<R→B
DEFINE_INLINE_BUILTIN(bool, _u3c, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a < b;
}
// I<R→B
DEFINE_INLINE_BUILTIN(bool, _u3c, scalar_int_scalar_real_fx_none_ret_bool, int a, double b) {
  return (double)a < b;
}
// R<I→B
DEFINE_INLINE_BUILTIN(bool, _u3c, scalar_real_scalar_int_fx_none_ret_bool, double a, int b) {
  return a < (double)b;
}

// === <= ===
// I<=I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, <=, b);
}
// R<=R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, <=, b);
}
// I<=R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), <=, b);
}
// R<=I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, <=, Fir_i2r(b));
}

// I<=I→B
DEFINE_INLINE_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a <= b;
}
// R<=R→B
DEFINE_INLINE_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a <= b;
}
// I<=R→B
DEFINE_INLINE_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_bool, int a, double b) {
  return (double)a <= b;
}
// R<=I→B
DEFINE_INLINE_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_bool, double a, int b) {
  return a <= (double)b;
}

// === == ===
// *,*→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3d_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b) {
  return a == b;
}
// L,L→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return FIR_CMP_LGL(a, ==, b);
}
// I,I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, ==, b);
}
// R,R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, ==, b);
}
// S,S→L
DEFINE_INLINE_BUILTIN(Rboolean, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b) {
  return FIR_CMP_STR(a, ==, b);
}
// *,*→B
DEFINE_INLINE_BUILTIN(bool, _u3d_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b) {
  return a == b;
}
// L,L→B
DEFINE_INLINE_BUILTIN(bool, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b) {
  return a == b;
}
// I,I→B
DEFINE_INLINE_BUILTIN(bool, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a == b;
}
// R,R→B
DEFINE_INLINE_BUILTIN(bool, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a == b;
}
// S,S→B
DEFINE_INLINE_BUILTIN(bool, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b) {
  return FIR_STR_EQ(a, b);
}

// === log ===
// I,R→R
DEFINE_INLINE_BUILTIN(double, log, scalar_int_scalar_real_fx_none_ret_scalar_real, int value, double base) {
  return R_logbase(Fir_i2r(value), base);
}
// R,R→R
DEFINE_INLINE_BUILTIN(double, log, scalar_real_scalar_real_fx_none_ret_scalar_real, double value, double base) {
  return R_logbase(value, base);
}
// I,miss→R
DEFINE_INLINE_BUILTIN(double, log, scalar_int_missing_fx_none_ret_scalar_real, int value, SEXP base) {
  return R_log(Fir_i2r(value));
}
// R,miss→R
DEFINE_INLINE_BUILTIN(double, log, scalar_real_missing_fx_none_ret_scalar_real, double value, SEXP base) {
  return R_log(value);
}

// === abs ===
// I→I
DEFINE_INLINE_BUILTIN(int, abs, scalar_int_fx_none_ret_scalar_int, int value) {
  return value == NA_INTEGER ? NA_INTEGER : value < 0 ? -value : value;
}
// R→R
DEFINE_INLINE_BUILTIN(double, abs, scalar_real_fx_none_ret_scalar_real, double value) {
  return fabs(value);
}

static inline double Fir_sign(double value) {
  if (ISNAN(value)) {
    return value;
  } else if (value > 0) {
    return 1.0;
  } else if (value < 0) {
    return -1.0;
  } else {
    return 0.0;
  }
}

// Like GNU-R's `math1`, warn when a number becomes NaN.
static inline double Fir_math1_result(double value, double result) {
  if (ISNAN(result) && !ISNAN(value)) {
    Rf_warning("NaNs produced");
  }
  return result;
}

// math1: v1=I→R, v2=R→R
#define V(name, func) \
  DEFINE_INLINE_BUILTIN(double, name, scalar_int_fx_none_ret_scalar_real, int value) {\
    double real = Fir_i2r(value);\
    return Fir_math1_result(real, func(real));\
  }\
  \
  DEFINE_INLINE_BUILTIN(double, name, scalar_real_fx_none_ret_scalar_real, double value) {\
    return Fir_math1_result(value, func(value));\
  }
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_INLINE_BUILTIN(int, length, value_fx_none_ret_scalar_int, SEXP value) {
  // `length` of an object dispatches (e.g. `length.foo`), which this version has no effects for.
  if (OBJECT(value)) Rf_error("FIŘ deoptimization triggered: length(x) of an object (unsupported)");
  // `Rf_length`, unlike `LENGTH`, handles environments, pairlists, and closures.
  return Rf_length(value);
}

// as.integer
DEFINE_INLINE_BUILTIN(int, as_u2einteger, value_missing_fx_none_ret_scalar_int, SEXP value, SEXP missing) {
  return Rf_asInteger(value);
}

// `&&` and `||` on two logical scalars, with R's NA rules (`NA_LOGICAL` is not 0, so not C's).
DEFINE_INLINE_BUILTIN(Rboolean, _u26_u26, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return a == FALSE || b == FALSE ? FALSE : a == TRUE && b == TRUE ? TRUE : NA_LOGICAL;
}
DEFINE_INLINE_BUILTIN(Rboolean, _u7c_u7c, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return a == TRUE || b == TRUE ? TRUE : a == FALSE && b == FALSE ? FALSE : NA_LOGICAL;
}

// as.logical
// V,miss→L: deopts where `as.logical(x)` isn't one logical (or dispatches), since a version that
// returns `v1(L)` calls this without a check.
DEFINE_INLINE_BUILTIN(Rboolean, as_u2elogical, value_missing_fx_none_ret_scalar_logical, SEXP value, SEXP missing) {
  if (OBJECT(value) || !Rf_isVectorAtomic(value) || XLENGTH(value) != 1)
    Rf_error("FIŘ deoptimization triggered: as.logical(x) isn't one logical (unsupported)");
  return Rf_asLogical(value);
}
// V,miss→B
// The condition of `if` and `while`: GNU-R's `asLogicalNoNA` (`eval.c`).
DEFINE_INLINE_BUILTIN(bool, as_u2elogical, value_missing_fx_none_ret_bool, SEXP value, SEXP missing) {
  R_xlen_t length = Rf_xlength(value);
  if (length > 1) Rf_error("the condition has length > 1");
  int cond = NA_LOGICAL;
  if (length > 0) {
    switch (TYPEOF(value)) {
    case LGLSXP: cond = LOGICAL(value)[0]; break;
    case INTSXP: cond = INTEGER(value)[0]; break;
    default: cond = Rf_asLogical(value);
    }
  }
  if (cond == NA_LOGICAL) {
    Rf_error(length == 0 ? "argument is of length zero"
             : Rf_isLogical(value) ? "missing value where TRUE/FALSE needed"
             : "argument is not interpretable as logical");
  }
  return cond;
}
// L,miss→L
DEFINE_INLINE_BUILTIN(Rboolean, as_u2elogical, scalar_logical_missing_fx_none_ret_scalar_logical, Rboolean value, SEXP missing) {
  return value;
}
// L,miss→B
DEFINE_INLINE_BUILTIN(bool, as_u2elogical, scalar_logical_missing_fx_none_ret_bool, Rboolean value, SEXP missing) {
  if (value == NA_LOGICAL) Rf_error("missing value where TRUE/FALSE needed");
  return value;
}

// as.character
DEFINE_INLINE_BUILTIN(char*, as_u2echaracter, value_missing_fx_none_ret_scalar_string, SEXP value, SEXP missing) {
  return (char*)CHAR(Rf_asChar(value));
}

// inherits(x, what, which): V,S,B→B
// The scalar-bool return is only used when `which` is FALSE, so the result is
// simply whether `x` inherits from the single class named by `what`.
DEFINE_INLINE_BUILTIN(bool, inherits, value_scalar_string_bool_fx_none_ret_bool, SEXP value, char* what, bool which) {
  (void)which;
  return (bool)Rf_inherits(value, what);
}

// === ^ ===
// I^I→R
DEFINE_INLINE_BUILTIN(double, _u5e, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b) {
  return R_pow(Fir_i2r(a), Fir_i2r(b));
}
// R^R→R
DEFINE_INLINE_BUILTIN(double, _u5e, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return R_pow(a, b);
}
// I^R→R
DEFINE_INLINE_BUILTIN(double, _u5e, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return R_pow(Fir_i2r(a), b);
}
// R^I→R
DEFINE_INLINE_BUILTIN(double, _u5e, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return R_pow(a, Fir_i2r(b));
}

// === > ===
DEFINE_INLINE_BUILTIN(Rboolean, _u3e, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, >, b);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u3e, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, >, b);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u3e, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), >, b);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u3e, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, >, Fir_i2r(b));
}

// === >= ===
DEFINE_INLINE_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, >=, b);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, >=, b);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), >=, b);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, >=, Fir_i2r(b));
}

// === != ===
// *,*→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b) {
  return a != b;
}
// L,L→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return FIR_CMP_LGL(a, !=, b);
}
// I,I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, !=, b);
}
// R,R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, !=, b);
}
// S,S→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b) {
  return FIR_CMP_STR(a, !=, b);
}
// *,*→B
DEFINE_INLINE_BUILTIN(bool, _u21_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b) {
  return a != b;
}
// L,L→B
DEFINE_INLINE_BUILTIN(bool, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b) {
  return a != b;
}
// I,I→B
DEFINE_INLINE_BUILTIN(bool, _u21_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a != b;
}
// R,R→B
DEFINE_INLINE_BUILTIN(bool, _u21_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a != b;
}
// S,S→B
DEFINE_INLINE_BUILTIN(bool, _u21_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b) {
  return !FIR_STR_EQ(a, b);
}

// === & === (bit-and on booleans)
DEFINE_INLINE_BUILTIN(bool, _u26, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a && b;
}
// === && ===
DEFINE_INLINE_BUILTIN(bool, _u26_u26, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a && b;
}
// === | ===
DEFINE_INLINE_BUILTIN(bool, _u7c, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a || b;
}
// === || ===
DEFINE_INLINE_BUILTIN(bool, _u7c_u7c, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a || b;
}
// === xor ===
DEFINE_INLINE_BUILTIN(bool, xor, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a != b;
}

// === ! ===
// B→B
DEFINE_INLINE_BUILTIN(bool, _u21, bool_fx_none_ret_bool, bool a) {
  return !a;
}
// I→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21, scalar_int_fx_none_ret_scalar_logical, int a) {
  if (a == NA_INTEGER) return NA_LOGICAL;
  return a == 0;
}
// R→L
DEFINE_INLINE_BUILTIN(Rboolean, _u21, scalar_real_fx_none_ret_scalar_logical, double a) {
  if (ISNAN(a)) return NA_LOGICAL;
  return a == 0.0;
}

// === bitwNot, bitwAnd, bitwOr, bitwXor, bitwShiftL, bitwShiftR ===
DEFINE_INLINE_BUILTIN(int, bitwNot, scalar_int_fx_none_ret_scalar_int, int a) {
  return a == NA_INTEGER ? NA_INTEGER : ~a;
}
DEFINE_INLINE_BUILTIN(int, bitwAnd, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a == NA_INTEGER || b == NA_INTEGER ? NA_INTEGER : a & b;
}
DEFINE_INLINE_BUILTIN(int, bitwOr, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a == NA_INTEGER || b == NA_INTEGER ? NA_INTEGER : a | b;
}
DEFINE_INLINE_BUILTIN(int, bitwXor, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a == NA_INTEGER || b == NA_INTEGER ? NA_INTEGER : a ^ b;
}
// Shifts treat the value as unsigned; an out-of-range shift count yields NA.
DEFINE_INLINE_BUILTIN(int, bitwShiftL, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n) {
  return a == NA_INTEGER || n == NA_INTEGER || n < 0 || n > 31
      ? NA_INTEGER
      : (int)((unsigned int)a << n);
}
DEFINE_INLINE_BUILTIN(int, bitwShiftR, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n) {
  return a == NA_INTEGER || n == NA_INTEGER || n < 0 || n > 31
      ? NA_INTEGER
      : (int)((unsigned int)a >> n);
}

// === [ (scalar index read, 1-based) ===
DEFINE_INLINE_BUILTIN(Rboolean, _u5b, vec_logical_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  return Fir_subscript_read_na_logical(x, Fir_zero_based(i));
}
DEFINE_INLINE_BUILTIN(int, _u5b, vec_int_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  return Fir_subscript_read_na_int(x, Fir_zero_based(i));
}
DEFINE_INLINE_BUILTIN(double, _u5b, vec_real_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  return Fir_subscript_read_na_real(x, Fir_zero_based(i));
}
DEFINE_INLINE_BUILTIN(char*, _u5b, vec_string_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  return Fir_subscript_read_na_string(x, Fir_zero_based(i));
}

// === [[ (scalar index read, 1-based) ===
DEFINE_INLINE_BUILTIN(Rboolean, _u5b_u5b, vec_logical_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  return Fir_subscript_read_logical(x, Fir_zero_based(i));
}
DEFINE_INLINE_BUILTIN(int, _u5b_u5b, vec_int_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  return Fir_subscript_read_int(x, Fir_zero_based(i));
}
DEFINE_INLINE_BUILTIN(double, _u5b_u5b, vec_real_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  return Fir_subscript_read_real(x, Fir_zero_based(i));
}
DEFINE_INLINE_BUILTIN(char*, _u5b_u5b, vec_string_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  return Fir_subscript_read_string(x, Fir_zero_based(i));
}

/// GNU-R's real-to-integer subscript coercion: truncate toward zero, and anything that doesn't fit
/// (including `NA`/`NaN`) becomes `NA`, which then reads as `NA` or fails like any out-of-range one.
static inline int Fir_index_from_real(double index) {
  return ISNAN(index) || index <= (double)INT_MIN || index >= (double)INT_MAX + 1.
      ? NA_INTEGER
      : (int)index;
}

/// Whether `as.integer` of `x` warns (GNU-R's `IntegerFromReal`).
static inline bool Fir_real_out_of_int_range(double x) {
  return !ISNAN(x) && Fir_index_from_real(x) == NA_INTEGER;
}

// === realToIndex ===
DEFINE_INLINE_INTRINSIC(int, realToIndex, scalar_real_fx_none_ret_scalar_int, double value) {
  return Fir_index_from_real(value);
}

DEFINE_INLINE_INTRINSIC(SEXP, realToIndex, vec1_real_fx_none_ret_vec1_int, SEXP value) {
  return Rf_ScalarInteger(Fir_index_from_real(REAL(value)[0]));
}

DEFINE_INLINE_INTRINSIC(SEXP, realToIndex, vec_real_fx_none_ret_vec_int, SEXP value) {
  R_xlen_t count = XLENGTH(value);
  SEXP res = Rf_allocVector(INTSXP, count);
  for (R_xlen_t k = 0; k < count; k++) INTEGER(res)[k] = Fir_index_from_real(REAL(value)[k]);
  return res;
}

// === real subscripts (coerce and forward) ===
DEFINE_INLINE_BUILTIN(Rboolean, _u5b, vec_logical_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_logical, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_logical_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_logical(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_INLINE_BUILTIN(int, _u5b, vec_int_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_int, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_int_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_int(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_INLINE_BUILTIN(double, _u5b, vec_real_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_real, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_real_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_real(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_INLINE_BUILTIN(char*, _u5b, vec_string_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_string, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_string_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_string(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_INLINE_BUILTIN(Rboolean, _u5b_u5b, vec_logical_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_logical, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_logical_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_logical(env, x, Fir_index_from_real(i), ddd, exact);
}
DEFINE_INLINE_BUILTIN(int, _u5b_u5b, vec_int_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_int, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_int_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_int(env, x, Fir_index_from_real(i), ddd, exact);
}
DEFINE_INLINE_BUILTIN(double, _u5b_u5b, vec_real_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_real, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_real_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_real(env, x, Fir_index_from_real(i), ddd, exact);
}
DEFINE_INLINE_BUILTIN(char*, _u5b_u5b, vec_string_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_string, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_string_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_string(env, x, Fir_index_from_real(i), ddd, exact);
}
// === as.integer(x) (real overloads) ===
DEFINE_INLINE_BUILTIN(int, as_u2einteger, scalar_real_missing_fx_none_ret_scalar_int, double x, SEXP ddd) {
  (void)ddd;
  if (Fir_real_out_of_int_range(x)) Rf_warning("NAs introduced by coercion to integer range");
  return Fir_index_from_real(x);
}
// === is.X(x): V→B ===
DEFINE_INLINE_BUILTIN(bool, is_u2enumeric, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == REALSXP
      || (TYPEOF(value) == INTSXP && !Rf_inherits(value, "factor"));
}
DEFINE_INLINE_BUILTIN(bool, is_u2einteger, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == INTSXP && !Rf_inherits(value, "factor");
}
DEFINE_INLINE_BUILTIN(bool, is_u2edouble, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == REALSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2elogical, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == LGLSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2enull, value_fx_none_ret_bool, SEXP value) {
  return value == R_NilValue;
}
DEFINE_INLINE_BUILTIN(bool, is_u2ecomplex, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == CPLXSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2eraw, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == RAWSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2efunction, value_fx_none_ret_bool, SEXP value) {
  SEXPTYPE t = TYPEOF(value);
  return t == CLOSXP || t == BUILTINSXP || t == SPECIALSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2eenvironment, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == ENVSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2elist, value_fx_none_ret_bool, SEXP value) {
  SEXPTYPE t = TYPEOF(value);
  return t == VECSXP || t == LISTSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2echaracter, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == STRSXP;
}
DEFINE_INLINE_BUILTIN(bool, is_u2eobject, value_fx_none_ret_bool, SEXP value) {
  return OBJECT(value) != 0;
}
DEFINE_INLINE_BUILTIN(bool, is_u2esymbol, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == SYMSXP;
}

// `Fir_push_env` for `FIR_MKENV_ELIDED`. It doesn't `REPROTECT` the env: its protect slot keeps the
// env of the push, which the singleton's parent then is, and the singleton is a root. It
// `REPROTECT`s `*saved` in `saved_idx` only if the push replaces the parent, else the env slot or a
// root (the singleton, `R_NilValue`) keeps it.
static ALWAYS_INLINE bool Fir_push_env_elided(SEXP *env, SEXP *saved, PROTECT_INDEX saved_idx) {
  if (Fir_env_pushed_from_r == *env && !Fir_env_push_suppressed) {
    Fir_env_push_suppressed = true;
    *saved = R_NilValue;
    return false;
  }
  Fir_push_frame(Rsh_ElidedEnv);
  if (*env == Rsh_ElidedEnv) {
    *saved = Rsh_ElidedEnv;
    return true;
  }
  SEXP parent = ENCLOS(Rsh_ElidedEnv);
  *saved = parent;
  if (parent != *env) {
    SET_ENCLOS(Rsh_ElidedEnv, *env);
    REPROTECT(parent, saved_idx);
  }
  *env = Rsh_ElidedEnv;
  Rsh_ElidedDepth++;
  return true;
}

// `Fir_pop_env`, with the pop of an elided frame inline.
static ALWAYS_INLINE void Fir_pop_env_inline(SEXP *env, bool pushed, SEXP saved) {
  if (!pushed || *env != Rsh_ElidedEnv) {
    Fir_pop_env(env, pushed, saved);
    return;
  }
  Rsh_FrameCount--;
  if (saved != Rsh_ElidedEnv) {
    *env = ENCLOS(Rsh_ElidedEnv);
    SEXP parent = --Rsh_ElidedDepth == 0 || saved == R_NilValue ? R_EmptyEnv : saved;
    if (*env != parent) {
      SET_ENCLOS(Rsh_ElidedEnv, parent);
    }
  }
}

// Inline, because `Fir_assume_function` guards each call of a known closure.
static ALWAYS_INLINE bool Fir_is_compiled_closure(SEXP value, Fir_FunctionData **data) {
  if (TYPEOF(value) != CLOSXP) {
    return false;
  }
  SEXP body = BODY(value);
  if (!IS_RSH_CODE(body)) {
    return false;
  }
  SEXP cp = EXTPTR_PROT(body);
  ASSERT(Fir_const(cp, 0) != R_NilValue, "Closure data not set");
  *data = (Fir_FunctionData *)STDVEC_DATAPTR(Fir_const(cp, 0));
  return true;
}

/// `origin` is as for `Fir_is_bytecode_closure_of`, or NULL.
static ALWAYS_INLINE bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch, SEXP origin) {
  Fir_FunctionData *data;
  if (Fir_is_compiled_closure(value, &data)) {
    return data->dispatch == dispatch;
  }
  return origin != NULL && Fir_is_bytecode_closure_of(value, origin);
}
