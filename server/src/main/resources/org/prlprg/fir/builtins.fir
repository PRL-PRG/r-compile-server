fun `+`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(I) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(R) { ... }
  @signals (lhs:v1(I), rhs:v1(I)) --> v1(I) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(R) { ... }
  @signals (lhs:I, rhs:I) --> I { ... }
  (lhs:R, rhs:R) --> R { ... }
  (lhs:I, rhs:R) --> R { ... }
  (lhs:R, rhs:I) --> R { ... }
  (unary:v(I), rhs:miss) --> v(I) { ... }
  (unary:v(R), rhs:miss) --> v(R) { ... }
  (unary:v1(I), rhs:miss) --> v1(I) { ... }
  (unary:v1(R), rhs:miss) --> v1(R) { ... }
  (unary:*@!, rhs:miss) -+> V { ... }
  (unary:I, rhs:miss) --> I { ... }
  (unary:R, rhs:miss) --> R { ... }
}

fun `-`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(I) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(R) { ... }
  @signals (lhs:v1(I), rhs:v1(I)) --> v1(I) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(R) { ... }
  (unary:v(I), rhs:miss) --> v(I) { ... }
  (unary:v(R), rhs:miss) --> v(R) { ... }
  (unary:v1(I), rhs:miss) --> v1(I) { ... }
  (unary:v1(R), rhs:miss) --> v1(R) { ... }
  @signals (lhs:I, rhs:I) --> I { ... }
  (lhs:R, rhs:R) --> R { ... }
  (lhs:I, rhs:R) --> R { ... }
  (lhs:R, rhs:I) --> R { ... }
  (unary:*@!, rhs:miss) -+> V { ... }
  (unary:I, rhs:miss) --> I { ... }
  (unary:R, rhs:miss) --> R { ... }
}

fun `*`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(I) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(R) { ... }
  @signals (lhs:v1(I), rhs:v1(I)) --> v1(I) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(R) { ... }
  @signals (lhs:I, rhs:I) --> I { ... }
  (lhs:R, rhs:R) --> R { ... }
  (lhs:I, rhs:R) --> R { ... }
  (lhs:R, rhs:I) --> R { ... }
}

fun `/`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(R) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(R) { ... }
  (lhs:I, rhs:I) --> R { ... }
  (lhs:R, rhs:R) --> R { ... }
  (lhs:I, rhs:R) --> R { ... }
  (lhs:R, rhs:I) --> R { ... }
}

fun `^`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(R) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(R) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(R) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(R) { ... }
  (lhs:I, rhs:I) --> R { ... }
  (lhs:R, rhs:R) --> R { ... }
  (lhs:I, rhs:R) --> R { ... }
  (lhs:R, rhs:I) --> R { ... }
}

fun `<`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(L) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(L) { ... }
  (lhs:I, rhs:I) --> L { ... }
  (lhs:R, rhs:R) --> L { ... }
  (lhs:I, rhs:R) --> L { ... }
  (lhs:R, rhs:I) --> L { ... }
  (lhs:I, rhs:I) --> B { ... }
  (lhs:R, rhs:R) --> B { ... }
  (lhs:I, rhs:R) --> B { ... }
  (lhs:R, rhs:I) --> B { ... }
}

fun `<=`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(L) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(L) { ... }
  (lhs:I, rhs:I) --> L { ... }
  (lhs:R, rhs:R) --> L { ... }
  (lhs:I, rhs:R) --> L { ... }
  (lhs:R, rhs:I) --> L { ... }
  (lhs:I, rhs:I) --> B { ... }
  (lhs:R, rhs:R) --> B { ... }
  (lhs:I, rhs:R) --> B { ... }
  (lhs:R, rhs:I) --> B { ... }
}

fun `>`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(L) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(L) { ... }
  (lhs:I, rhs:I) --> L { ... }
  (lhs:R, rhs:R) --> L { ... }
  (lhs:I, rhs:R) --> L { ... }
  (lhs:R, rhs:I) --> L { ... }
}

fun `>=`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(I), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(I)) --> v(L) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(I)) --> v1(L) { ... }
  (lhs:I, rhs:I) --> L { ... }
  (lhs:R, rhs:R) --> L { ... }
  (lhs:I, rhs:R) --> L { ... }
  (lhs:R, rhs:I) --> L { ... }
}

fun `==`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(L), rhs:v(L)) --> v(L) { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(S), rhs:v(S)) --> v(L) { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(S), rhs:v1(S)) --> v1(L) { ... }
  (lhs:*@!, rhs:*@!) --> L { ... }
  (lhs:*@!, rhs:*@!) --> B { ... }
  (lhs:L, rhs:L) --> L { ... }
  (lhs:I, rhs:I) --> L { ... }
  (lhs:R, rhs:R) --> L { ... }
  (lhs:S, rhs:S) --> L { ... }
  (lhs:L, rhs:L) --> B { ... }
  (lhs:I, rhs:I) --> B { ... }
  (lhs:R, rhs:R) --> B { ... }
  (lhs:S, rhs:S) --> B { ... }
}

fun `!=`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(L), rhs:v(L)) --> v(L) { ... }
  @signals (lhs:v(I), rhs:v(I)) --> v(L) { ... }
  @signals (lhs:v(R), rhs:v(R)) --> v(L) { ... }
  @signals (lhs:v(S), rhs:v(S)) --> v(L) { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:v1(I), rhs:v1(I)) --> v1(L) { ... }
  (lhs:v1(R), rhs:v1(R)) --> v1(L) { ... }
  (lhs:v1(S), rhs:v1(S)) --> v1(L) { ... }
  (lhs:*@!, rhs:*@!) --> L { ... }
  (lhs:*@!, rhs:*@!) --> B { ... }
  (lhs:L, rhs:L) --> L { ... }
  (lhs:I, rhs:I) --> L { ... }
  (lhs:R, rhs:R) --> L { ... }
  (lhs:S, rhs:S) --> L { ... }
  (lhs:L, rhs:L) --> B { ... }
  (lhs:I, rhs:I) --> B { ... }
  (lhs:R, rhs:R) --> B { ... }
  (lhs:S, rhs:S) --> B { ... }
}

fun `&`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(L), rhs:v(L)) --> v(L) { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:B, rhs:B) --> B { ... }
}

fun `&&`(lhs, rhs) {
  (lhs:*@!, rhs:*) -+> V { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:B, rhs:B) --> B { ... }
}

fun `|`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(L), rhs:v(L)) --> v(L) { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:B, rhs:B) --> B { ... }
}

fun `||`(lhs, rhs) {
  (lhs:*@!, rhs:*) -+> V { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:B, rhs:B) --> B { ... }
}

fun xor(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  @signals (lhs:v(L), rhs:v(L)) --> v(L) { ... }
  (lhs:v1(L), rhs:v1(L)) --> v1(L) { ... }
  (lhs:B, rhs:B) --> B { ... }
}

fun bitwNot(a) {
  (a:*@!) -+> V { ... }
  (a:I) --> I { ... }
}

fun bitwAnd(a, b) {
  (a:*@!, b:*@!) -+> V { ... }
  (a:I, b:I) --> I { ... }
}

fun bitwOr(a, b) {
  (a:*@!, b:*@!) -+> V { ... }
  (a:I, b:I) --> I { ... }
}

fun bitwXor(a, b) {
  (a:*@!, b:*@!) -+> V { ... }
  (a:I, b:I) --> I { ... }
}

fun bitwShiftL(a, n) {
  (a:*@!, n:*@!) -+> V { ... }
  (a:I, n:I) --> I { ... }
}

fun bitwShiftR(a, n) {
  (a:*@!, n:*@!) -+> V { ... }
  (a:I, n:I) --> I { ... }
}

fun `!`(x) {
  (x:*@!) -+> V { ... }
  (x:v(L)) --> v(L) { ... }
  (x:v(I)) --> v(L) { ... }
  (x:v(R)) --> v(L) { ... }
  (x:v1(L)) --> v1(L) { ... }
  (x:v1(I)) --> v1(L) { ... }
  (x:v1(R)) --> v1(L) { ... }
  (x:B) --> B { ... }
  (x:I) --> L { ... }
  (x:R) --> L { ... }
}

@signals
fun `:`(lhs, rhs) {
  (lhs:*@!, rhs:*@!) -+> V { ... }
  (lhs:v1(I), rhs:v1(I)) --> v(I) { ... }
  (lhs:v1(I), rhs:v1(R)) --> v(I) { ... }
  (lhs:I, rhs:I) --> v(I) { ... }
  # If `lhs` has no decimals, it coerces to int
  (lhs:I, rhs:R) --> v(I) { ... }
  (lhs:R, rhs:R) --> V { ... }
  (lhs:v(R), rhs:v(R)) --> V { ... }
}

# `x` is borrowed in the non-generic versions: they only read it.
#
# Effects follow GNU-R: `x[i]` with a length-1 index can't fail (out-of-range and `NA` both read as
# `NA`), so those are pure (the scalar ones deopt where `x[i]` isn't one element, for an `i` below 1); with a longer index it can ("only 0's may be mixed with negative
# subscripts"), and every `[[` fails out of range, so those are impure. The optimizer replaces the
# pure ones with `x[i]` and the `[[` ones with `x[[i]]`, which behave the same way (see
# `org.prlprg.fir.ir.expression.SubscriptRead`).
@liteSpecial
fun `[`(x, i, `...`, drop) {
  (x:*@!, i:*, ddd:dots, drop:*@!) -+> V { ... }

  # Fallbacks with no implementation of their own: a primitive-vector `x` can neither dispatch to a
  # method nor reflect, and the strict `i` is what makes the optimizer force a promise subscript at
  # the call site. Both backends route them to the baseline, the interpreter because it registers
  # its generic implementation for every version that signature covers, `fir2c` because
  # `Function#guessWorst` lands on the baseline and it emits a GNU-R builtin call.
  (x:v(L), i:*@!, ddd:dots, drop:*@!) -~> V { ... }
  (x:v(I), i:*@!, ddd:dots, drop:*@!) -~> V { ... }
  (x:v(R), i:*@!, ddd:dots, drop:*@!) -~> V { ... }
  (x:v(S), i:*@!, ddd:dots, drop:*@!) -~> V { ... }
  (x:v(L)b, i:v(I), ddd:miss, drop:miss) -~> v(L) { ... }
  (x:v(I)b, i:v(I), ddd:miss, drop:miss) -~> v(I) { ... }
  (x:v(R)b, i:v(I), ddd:miss, drop:miss) -~> v(R) { ... }
  (x:v(S)b, i:v(I), ddd:miss, drop:miss) -~> v(S) { ... }
  (x:v(L)b, i:v1(I), ddd:miss, drop:miss) --> v1(L) { ... }
  (x:v(I)b, i:v1(I), ddd:miss, drop:miss) --> v1(I) { ... }
  (x:v(R)b, i:v1(I), ddd:miss, drop:miss) --> v1(R) { ... }
  (x:v(S)b, i:v1(I), ddd:miss, drop:miss) --> v1(S) { ... }
  (x:v(L)b, i:I, ddd:miss, drop:miss) --> L { ... }
  (x:v(I)b, i:I, ddd:miss, drop:miss) --> I { ... }
  (x:v(R)b, i:I, ddd:miss, drop:miss) --> R { ... }
  (x:v(S)b, i:I, ddd:miss, drop:miss) --> S { ... }

  # Real indices: coerce to integer and forward to the version above.
  (x:v(L)b, i:v(R), ddd:miss, drop:miss) -~> v(L) { ... }
  (x:v(I)b, i:v(R), ddd:miss, drop:miss) -~> v(I) { ... }
  (x:v(R)b, i:v(R), ddd:miss, drop:miss) -~> v(R) { ... }
  (x:v(S)b, i:v(R), ddd:miss, drop:miss) -~> v(S) { ... }
  (x:v(L)b, i:v1(R), ddd:miss, drop:miss) --> v1(L) { ... }
  (x:v(I)b, i:v1(R), ddd:miss, drop:miss) --> v1(I) { ... }
  (x:v(R)b, i:v1(R), ddd:miss, drop:miss) --> v1(R) { ... }
  (x:v(S)b, i:v1(R), ddd:miss, drop:miss) --> v1(S) { ... }
  (x:v(L)b, i:R, ddd:miss, drop:miss) --> L { ... }
  (x:v(I)b, i:R, ddd:miss, drop:miss) --> I { ... }
  (x:v(R)b, i:R, ddd:miss, drop:miss) --> R { ... }
  (x:v(S)b, i:R, ddd:miss, drop:miss) --> S { ... }
}

@liteSpecial
fun `[[`(x, i, `...`, exact) {
  (x:*@!, i:*, ddd:dots, exact:*@!) -+> V { ... }

  # Fallbacks with no implementation of their own: a primitive-vector `x` can neither dispatch to a
  # method nor reflect, and the strict `i` is what makes the optimizer force a promise subscript at
  # the call site. Both backends route them to the baseline, the interpreter because it registers
  # its generic implementation for every version that signature covers, `fir2c` because
  # `Function#guessWorst` lands on the baseline and it emits a GNU-R builtin call.
  (x:v(L), i:*@!, ddd:dots, exact:*@!) -~> V { ... }
  (x:v(I), i:*@!, ddd:dots, exact:*@!) -~> V { ... }
  (x:v(R), i:*@!, ddd:dots, exact:*@!) -~> V { ... }
  (x:v(S), i:*@!, ddd:dots, exact:*@!) -~> V { ... }
  (x:v(L)b, i:v(I), ddd:miss, exact:miss) -~> v(L) { ... }
  (x:v(I)b, i:v(I), ddd:miss, exact:miss) -~> v(I) { ... }
  (x:v(R)b, i:v(I), ddd:miss, exact:miss) -~> v(R) { ... }
  (x:v(S)b, i:v(I), ddd:miss, exact:miss) -~> v(S) { ... }
  (x:v(L)b, i:v1(I), ddd:miss, exact:miss) -~> v1(L) { ... }
  (x:v(I)b, i:v1(I), ddd:miss, exact:miss) -~> v1(I) { ... }
  (x:v(R)b, i:v1(I), ddd:miss, exact:miss) -~> v1(R) { ... }
  (x:v(S)b, i:v1(I), ddd:miss, exact:miss) -~> v1(S) { ... }
  (x:v(L)b, i:I, ddd:miss, exact:miss) -~> L { ... }
  (x:v(I)b, i:I, ddd:miss, exact:miss) -~> I { ... }
  (x:v(R)b, i:I, ddd:miss, exact:miss) -~> R { ... }
  (x:v(S)b, i:I, ddd:miss, exact:miss) -~> S { ... }

  # Real indices: coerce to integer and forward to the version above.
  (x:v(L)b, i:v(R), ddd:miss, exact:miss) -~> v(L) { ... }
  (x:v(I)b, i:v(R), ddd:miss, exact:miss) -~> v(I) { ... }
  (x:v(R)b, i:v(R), ddd:miss, exact:miss) -~> v(R) { ... }
  (x:v(S)b, i:v(R), ddd:miss, exact:miss) -~> v(S) { ... }
  (x:v(L)b, i:v1(R), ddd:miss, exact:miss) -~> v1(L) { ... }
  (x:v(I)b, i:v1(R), ddd:miss, exact:miss) -~> v1(I) { ... }
  (x:v(R)b, i:v1(R), ddd:miss, exact:miss) -~> v1(R) { ... }
  (x:v(S)b, i:v1(R), ddd:miss, exact:miss) -~> v1(S) { ... }
  (x:v(L)b, i:R, ddd:miss, exact:miss) -~> L { ... }
  (x:v(I)b, i:R, ddd:miss, exact:miss) -~> I { ... }
  (x:v(R)b, i:R, ddd:miss, exact:miss) -~> R { ... }
  (x:v(S)b, i:R, ddd:miss, exact:miss) -~> S { ... }
}

# Every non-generic version returns a fresh vector. The ones where `x` is borrowed copy it; the ones
# where it's owned mutate it in place and return it (see `Builtins#registerSubAssign` and `fir2c`'s
# `_u5b_u3c_u2d`/`_u5b_u5b_u3c_u2d` overrides).
#
# All of them are impure: they only write *within* the vector, so an out-of-range index is an error,
# where GNU-R grows the vector instead.
@liteSpecial
fun `[<-`(x, i, value, `...`) {
  (x:*@!, i:*, value:*, ddd:dots) -+> V { ... }

  # Fallbacks with no implementation of their own: a primitive-vector `x` can neither dispatch to a
  # method nor reflect, and the strict `i` is what makes the optimizer force a promise subscript at
  # the call site. Both backends route them to the baseline, the interpreter because it registers
  # its generic implementation for every version that signature covers, `fir2c` because
  # `Function#guessWorst` lands on the baseline and it emits a GNU-R builtin call.
  (x:v(L), i:*@!, value:*, ddd:dots) -~> V { ... }
  (x:v(I), i:*@!, value:*, ddd:dots) -~> V { ... }
  (x:v(R), i:*@!, value:*, ddd:dots) -~> V { ... }
  (x:v(S), i:*@!, value:*, ddd:dots) -~> V { ... }
  (x:v(L)b, i:v(I), value:v(L), ddd:miss) -~> v(L)f { ... }
  (x:v(I)b, i:v(I), value:v(I), ddd:miss) -~> v(I)f { ... }
  (x:v(R)b, i:v(I), value:v(R), ddd:miss) -~> v(R)f { ... }
  (x:v(S)b, i:v(I), value:v(S), ddd:miss) -~> v(S)f { ... }
  (x:v(L)b, i:I, value:L, ddd:miss) -~> v(L)f { ... }
  (x:v(I)b, i:I, value:I, ddd:miss) -~> v(I)f { ... }
  (x:v(R)b, i:I, value:R, ddd:miss) -~> v(R)f { ... }
  (x:v(S)b, i:I, value:S, ddd:miss) -~> v(S)f { ... }
  (x:v(L)o, i:v(I), value:v(L), ddd:miss) -~> v(L)f { ... }
  (x:v(I)o, i:v(I), value:v(I), ddd:miss) -~> v(I)f { ... }
  (x:v(R)o, i:v(I), value:v(R), ddd:miss) -~> v(R)f { ... }
  (x:v(S)o, i:v(I), value:v(S), ddd:miss) -~> v(S)f { ... }
  (x:v(L)o, i:I, value:L, ddd:miss) -~> v(L)f { ... }
  (x:v(I)o, i:I, value:I, ddd:miss) -~> v(I)f { ... }
  (x:v(R)o, i:I, value:R, ddd:miss) -~> v(R)f { ... }
  (x:v(S)o, i:I, value:S, ddd:miss) -~> v(S)f { ... }

  # Real indices: coerce to integer and forward to the version above.
  (x:v(L)b, i:v(R), value:v(L), ddd:miss) -~> v(L)f { ... }
  (x:v(I)b, i:v(R), value:v(I), ddd:miss) -~> v(I)f { ... }
  (x:v(R)b, i:v(R), value:v(R), ddd:miss) -~> v(R)f { ... }
  (x:v(S)b, i:v(R), value:v(S), ddd:miss) -~> v(S)f { ... }
  (x:v(L)b, i:R, value:L, ddd:miss) -~> v(L)f { ... }
  (x:v(I)b, i:R, value:I, ddd:miss) -~> v(I)f { ... }
  (x:v(R)b, i:R, value:R, ddd:miss) -~> v(R)f { ... }
  (x:v(S)b, i:R, value:S, ddd:miss) -~> v(S)f { ... }
  (x:v(L)o, i:v(R), value:v(L), ddd:miss) -~> v(L)f { ... }
  (x:v(I)o, i:v(R), value:v(I), ddd:miss) -~> v(I)f { ... }
  (x:v(R)o, i:v(R), value:v(R), ddd:miss) -~> v(R)f { ... }
  (x:v(S)o, i:v(R), value:v(S), ddd:miss) -~> v(S)f { ... }
  (x:v(L)o, i:R, value:L, ddd:miss) -~> v(L)f { ... }
  (x:v(I)o, i:R, value:I, ddd:miss) -~> v(I)f { ... }
  (x:v(R)o, i:R, value:R, ddd:miss) -~> v(R)f { ... }
  (x:v(S)o, i:R, value:S, ddd:miss) -~> v(S)f { ... }
}

@liteSpecial
fun `[[<-`(x, i, value) {
  (x:*@!, i:*, value:*) -+> V { ... }

  # Fallbacks with no implementation of their own: a primitive-vector `x` can neither dispatch to a
  # method nor reflect, and the strict `i` is what makes the optimizer force a promise subscript at
  # the call site. Both backends route them to the baseline, the interpreter because it registers
  # its generic implementation for every version that signature covers, `fir2c` because
  # `Function#guessWorst` lands on the baseline and it emits a GNU-R builtin call.
  (x:v(L), i:*@!, value:*) -~> V { ... }
  (x:v(I), i:*@!, value:*) -~> V { ... }
  (x:v(R), i:*@!, value:*) -~> V { ... }
  (x:v(S), i:*@!, value:*) -~> V { ... }
  (x:v(L)b, i:v(I), value:v(L)) -~> v(L)f { ... }
  (x:v(I)b, i:v(I), value:v(I)) -~> v(I)f { ... }
  (x:v(R)b, i:v(I), value:v(R)) -~> v(R)f { ... }
  (x:v(S)b, i:v(I), value:v(S)) -~> v(S)f { ... }
  (x:v(L)b, i:I, value:L) -~> v(L)f { ... }
  (x:v(I)b, i:I, value:I) -~> v(I)f { ... }
  (x:v(R)b, i:I, value:R) -~> v(R)f { ... }
  (x:v(S)b, i:I, value:S) -~> v(S)f { ... }
  (x:v(L)o, i:v(I), value:v(L)) -~> v(L)f { ... }
  (x:v(I)o, i:v(I), value:v(I)) -~> v(I)f { ... }
  (x:v(R)o, i:v(I), value:v(R)) -~> v(R)f { ... }
  (x:v(S)o, i:v(I), value:v(S)) -~> v(S)f { ... }
  (x:v(L)o, i:I, value:L) -~> v(L)f { ... }
  (x:v(I)o, i:I, value:I) -~> v(I)f { ... }
  (x:v(R)o, i:I, value:R) -~> v(R)f { ... }
  (x:v(S)o, i:I, value:S) -~> v(S)f { ... }

  # Real indices: coerce to integer and forward to the version above.
  (x:v(L)b, i:v(R), value:v(L)) -~> v(L)f { ... }
  (x:v(I)b, i:v(R), value:v(I)) -~> v(I)f { ... }
  (x:v(R)b, i:v(R), value:v(R)) -~> v(R)f { ... }
  (x:v(S)b, i:v(R), value:v(S)) -~> v(S)f { ... }
  (x:v(L)b, i:R, value:L) -~> v(L)f { ... }
  (x:v(I)b, i:R, value:I) -~> v(I)f { ... }
  (x:v(R)b, i:R, value:R) -~> v(R)f { ... }
  (x:v(S)b, i:R, value:S) -~> v(S)f { ... }
  (x:v(L)o, i:v(R), value:v(L)) -~> v(L)f { ... }
  (x:v(I)o, i:v(R), value:v(I)) -~> v(I)f { ... }
  (x:v(R)o, i:v(R), value:v(R)) -~> v(R)f { ... }
  (x:v(S)o, i:v(R), value:v(S)) -~> v(S)f { ... }
  (x:v(L)o, i:R, value:L) -~> v(L)f { ... }
  (x:v(I)o, i:R, value:I) -~> v(I)f { ... }
  (x:v(R)o, i:R, value:R) -~> v(R)f { ... }
  (x:v(S)o, i:R, value:S) -~> v(S)f { ... }
}

@signals
fun `$`(x, name) {
  (x:*@!, name:*) -+> V { ... }
  (x:V, name:V) --> V { ... }
}

@signals
fun `$<-`(x, name, value) {
  (x:*@!, name:*, value:*) -+> V { ... }
  (x:V, name:V, value:V) --> V { ... }
}

@signals
@liteSpecial
fun rep(x, `...`) {
  (x:*@!, ddd:dots) -+> V { ... }
  (x:v1(L), times:v1(I)) --> v(L) { ... }
  (x:v1(I), times:v1(I)) --> v(I) { ... }
  (x:v1(R), times:v1(I)) --> v(R) { ... }
  (x:v1(S), times:v1(I)) --> v(S) { ... }
  (x:L, times:I) --> v(L) { ... }
  (x:I, times:I) --> v(I) { ... }
  (x:R, times:I) --> v(R) { ... }
  (x:S, times:I) --> v(S) { ... }
}

fun sum(`...`, `na.rm`) {
  (ddd:dots, naRm:*@!) -+> V { ... }
  (x:v(L), naRm:miss) --> I { ... }
  (x:v(I), naRm:miss) --> I { ... }
  (x:v(R), naRm:miss) --> R { ... }
}

fun `.Call`(`.NAME`, `...`, PACKAGE) {
  (name:*@!, ddd:dots, package:*@!) -+> V { ... }
}

fun `.External`(`.NAME`, `...`, PACKAGE) {
  (name:*@!, ddd:dots, package:*@!) -+> V { ... }
}

# `@readsPromise`: reads the promise bound to its argument symbol in the caller's frame. A closure
# that calls one gets `@needsPromises` (see `BC2FirClosureCompiler`).
@readsPromise
fun missing(x) {
  (x:*@!) --> v(L) { ... }
  (x:*@!) --> B { ... }
}

@readsPromise
fun substitute(`...`) {
  (ddd:dots) -+> V { ... }
}

fun seq_along(`along.with`) {
  (alongWith:*@!) -+> v(I) { ... }
}

fun seq_len(`length.out`) {
  (lengthOut:*@!) -+> v(I) { ... }
  # Impure: GNU-R errors on a negative or `NA` length.
  (lengthOut:v1(I)) -~> v(I) { ... }
}

fun abs(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(I) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(I) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> I { ... }
  (x:R) --> R { ... }
}

@signals
fun sqrt(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun exp(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun log(x, base) {
  (x:*@!, base:*@!) -+> V { ... }
  (x:v(I), base:v(R)) --> v(R) { ... }
  (x:v(R), base:v(R)) --> v(R) { ... }
  (x:I, base:R) --> R { ... }
  (x:R, base:R) --> R { ... }
  (x:v(I), base:miss) --> v(R) { ... }
  (x:v(R), base:miss) --> v(R) { ... }
  (x:I, base:miss) --> R { ... }
  (x:R, base:miss) --> R { ... }
}

# === MATH1_FUNS ===
fun floor(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  # Below is correct although unintuitive
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun ceiling(x) {
  (x:*@!) -+> V { ... }
  # Below is correct although unintuitive
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun sign(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun expm1(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun log1p(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun cos(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun sin(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun tan(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun acos(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun asin(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun atan(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun cosh(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun sinh(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun tanh(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun acosh(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun asinh(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

@signals
fun atanh(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

fun lgamma(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
  (x:I) --> R { ... }
  (x:R) --> R { ... }
}

# `gamma` to `tanpi` have no unboxed versions: the `fir2c` runtime has no helper for them (see
# `DEFINE_MATH1_BUILTINS`).
@signals
fun gamma(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
}

@signals
fun digamma(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
}

fun trigamma(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
}

@signals
fun cospi(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
}

@signals
fun sinpi(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
}

@signals
fun tanpi(x) {
  (x:*@!) -+> V { ... }
  (x:v(I)) --> v(R) { ... }
  (x:v(R)) --> v(R) { ... }
  (x:v1(I)) --> v1(R) { ... }
  (x:v1(R)) --> v1(R) { ... }
}
# ---

fun length(x) {
  (x:*@!) -+> V { ... }
  (x:V) --> v1(I) { ... }
  (x:V) --> I { ... }
}

# The real overloads truncate toward zero and map `NaN` and out-of-range to `NA`, with a warning
# for out-of-range. (A real subscript is coerced by the silent `realToIndex` intrinsic.)
@signals
fun `as.integer`(x, `...`) {
  (x:*@!, ddd:dots) -+> v(I) { ... }
  (x:V, ddd:miss) --> I { ... }
  (x:R, ddd:miss) --> I { ... }
  (x:v1(R), ddd:miss) --> v1(I) { ... }
  (x:v(R), ddd:miss) --> v(I) { ... }
}

@signals
fun `as.logical`(x, `...`) {
  (x:*@!, ddd:dots) -+> v(L) { ... }
  (x:V, ddd:miss) --> v(L) { ... }
  (x:V, ddd:miss) --> v1(L) { ... }
  (x:V, ddd:miss) --> L { ... }
  (x:V, ddd:miss) --> B { ... }
  (x:L, ddd:miss) --> B { ... }
}

@signals
fun `as.character`(x, `...`) {
  (x:*@!, ddd:dots) -+> v(S) { ... }
  (x:V, ddd:miss) --> S { ... }
}

fun stop(`...`, `call.`, domain) {
  (ddd:dots, call:*@!, domain:*@!) -+> V { ... }
}

fun warning(`...`, `call.`, `immediate.`, `noBreaks.`, domain) {
  (ddd:dots, call:*@!, immediate:*@!, noBreaks:*@!, domain:*@!) -+> V { ... }
}

fun stopifnot(`...`, exprs, exprObject, local) {
  (ddd:dots, exprs:*@!, exprObject:*@!, local:*@!) -+> V { ... }
}

# Writes output, and dispatches on the implicit class too (a `print.integer` method), which can run
# any R code and return anything.
fun print(x, `...`) {
  (x:*@!, ddd:dots) -+> V { ... }
  (x:v(L), ddd:miss) -+> V { ... }
  (x:v(I), ddd:miss) -+> V { ... }
  (x:v(R), ddd:miss) -+> V { ... }
  (x:v(S), ddd:miss) -+> V { ... }
}

fun unclass(x) {
  (x:*@!) -+> V { ... }
  (x:V) --> V { ... }
}

fun `is.vector`(x, mode) {
  (x:*@!, mode:*@!) -+> v1(L) { ... }
  (x:V, mode:miss) --> v1(L) { ... }
}

fun `is.numeric`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.integer`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.double`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.logical`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.null`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.complex`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.raw`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.function`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.environment`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.list`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun inherits(x, what, which) {
  (x:*@!, what:*@!, which:*@!) -+> v1(L) { ... }
  (x:V, what:S, which:B) --> B { ... }
}

fun attr(x, which, exact, value) {
  (x:*@!, which:*@!, exact:*@!, value:*@!) -+> V { ... }
  (x:V, which:v1(S), exact:miss, value:miss) --> V { ... }
}

fun `is.character`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.object`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun `is.symbol`(x) {
  (x:*@!) -+> v1(L) { ... }
  (x:V) --> B { ... }
}

fun c(`...`) {
  (ddd:dots) --> V { ... }
}

# Functions that read the closure context of their caller (`R_GlobalContext`): a closure that
# calls one gets `@needsContext` (see `BC2FirClosureCompiler`). The parameters aren't strict,
# because e.g. `match.arg` reads its argument's expression. `eval`, `evalq`, `local`, and
# `environment` also read it, but only return a wrong frame without it.

@readsContext
fun UseMethod(generic, object) {
  (generic:*, object:*) -+> V { ... }
}

@readsContext
fun NextMethod(generic, object, `...`) {
  (generic:*, object:*, ddd:dots) -+> V { ... }
}

@readsContext
fun standardGeneric(f, fdef) {
  (f:*, fdef:*) -+> V { ... }
}

@readsContext
fun Recall(`...`) {
  (ddd:dots) -+> V { ... }
}

@readsContext
fun Tailcall(FUN, `...`) {
  (FUN:*, ddd:dots) -+> V { ... }
}

@readsContext
fun Exec(expr, envir) {
  (expr:*, envir:*) -+> V { ... }
}

@readsContext
fun `sys.call`(which) {
  (which:*) -+> V { ... }
}

@readsContext
fun `sys.function`(which) {
  (which:*) -+> V { ... }
}

@readsContext
fun `sys.frame`(which) {
  (which:*) -+> V { ... }
}

@readsContext
fun `sys.nframe`() {
  () -+> V { ... }
}

@readsContext
fun `sys.calls`() {
  () -+> V { ... }
}

@readsContext
fun `sys.frames`() {
  () -+> V { ... }
}

@readsContext
fun `sys.parents`() {
  () -+> V { ... }
}

@readsContext
fun `sys.parent`(n) {
  (n:*) -+> V { ... }
}

@readsContext
fun `sys.on.exit`() {
  () -+> V { ... }
}

@readsContext
fun `sys.status`() {
  () -+> V { ... }
}

@readsContext
fun `parent.frame`(n) {
  (n:*) -+> V { ... }
}

@readsContext
fun nargs() {
  () -+> V { ... }
}

@readsContext
fun `on.exit`(expr, add, after) {
  (expr:*, add:*, after:*) -+> V { ... }
}

@readsContext
fun `match.arg`(arg, choices, `several.ok`) {
  (arg:*, choices:*, severalOk:*) -+> V { ... }
}

@readsContext
fun `match.call`(definition, call, `expand.dots`, envir) {
  (definition:*, call:*, expandDots:*, envir:*) -+> V { ... }
}

@readsContext
fun dynGet(x, ifnotfound, minframe, inherits) {
  (x:*, ifnotfound:*, minframe:*, inherits:*) -+> V { ... }
}
