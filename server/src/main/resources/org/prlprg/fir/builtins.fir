fun `+`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg unary:*) -+> V { ... }
  (reg unary:I) --> I { ... }
  (reg unary:R) --> R { ... }
}

fun `-`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg unary:*) -+> V { ... }
  (reg unary:I) --> I { ... }
  (reg unary:R) --> R { ... }
}

fun `*`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
}

fun `/`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
}

fun `^`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
}

fun `<`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
}

fun `<=`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
}

fun `>`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
}

fun `>=`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
}

fun `==`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:S, reg rhs:S) --> L { ... }
  (reg lhs:cls, reg rhs:cls) --> L { ... }
  (reg lhs:V, reg rhs:I) --> L { ... }
  (reg lhs:V, reg rhs:S) --> L { ... }
}

fun `!=`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:S, reg rhs:S) --> L { ... }
  (reg lhs:cls, reg rhs:cls) --> L { ... }
  (reg lhs:V, reg rhs:I) --> L { ... }
  (reg lhs:V, reg rhs:S) --> L { ... }
}

fun `&`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
}

fun `&&`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
}

fun `|`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
}

fun `||`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
}

fun xor(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
}

fun `!`(lhs, rhs) {
  (reg x:*) -+> V { ... }
  (reg x:L) --> L { ... }
  (reg x:I) --> L { ... }
  (reg x:R) --> L { ... }
}

fun `:`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> v(I) { ... }
  (reg lhs:R, reg rhs:R) --> v(R) { ... }
}

fun `[`(x, i, `...`, drop) {
  (reg x:*, reg i:*, reg ddd:dots, reg drop:*) -+> V { ... }
  (reg x:v(L), reg i:I) --> L { ... }
  (reg x:v(I), reg i:I) --> I { ... }
  (reg x:v(R), reg i:I) --> R { ... }
  (reg x:v(S), reg i:I) --> S { ... }
}

fun `[[`(x, i, `...`, exact) {
  (reg x:*, reg i:*, reg ddd:dots, reg exact:*) -+> V { ... }
  (reg x:v(L), reg i:I) --> L { ... }
  (reg x:v(I), reg i:I) --> I { ... }
  (reg x:v(R), reg i:I) --> R { ... }
  (reg x:v(S), reg i:I) --> S { ... }
}

fun `[<-`(x, i, value, `...`) {
  (reg x:*, reg i:*, reg value:*, reg ddd:dots) -+> V { ... }
  (reg x:v(L), reg i:I, reg value:L) --> v(L) { ... }
  (reg x:v(I), reg i:I, reg value:I) --> v(I) { ... }
  (reg x:v(R), reg i:I, reg value:R) --> v(R) { ... }
  (reg x:v(S), reg i:I, reg value:S) --> v(S) { ... }
}

fun `[[<-`(x, i, value) {
  (reg x:*, reg i:*, reg value:*) -+> V { ... }
  (reg x:v(L), reg i:I, reg value:L) --> v(L) { ... }
  (reg x:v(I), reg i:I, reg value:I) --> v(I) { ... }
  (reg x:v(R), reg i:I, reg value:R) --> v(R) { ... }
  (reg x:v(S), reg i:I, reg value:S) --> v(S) { ... }
}

fun `$`(x, name) {
  (reg x:*, reg name:*) -+> V { ... }
  (reg x:V, reg name:V) --> V { ... }
}

fun `$<-`(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { ... }
  (reg x:V, reg name:V, reg value:V) --> V { ... }
}

fun rep(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { ... }
  (reg x:L, reg times:I) --> v(L) { ... }
  (reg x:I, reg times:I) --> v(I) { ... }
  (reg x:R, reg times:I) --> v(R) { ... }
  (reg x:S, reg times:I) --> v(S) { ... }
}

fun sum(`...`, `na.rm`) {
  (reg ddd:dots, reg naRm:*) -+> V { ... }
  (reg x:v(L)) --> I { ... }
  (reg x:v(I)) --> I { ... }
  (reg x:v(R)) --> R { ... }
}

fun `.Call`(name, `...`, PACKAGE) {
  (reg name:*, reg ddd:dots, reg package:*) -+> V { ... }
}

fun `.External`(name, `...`, PACKAGE) {
  (reg name:*, reg ddd:dots, reg package:*) -+> V { ... }
}

fun missing(x) {
  (reg x:*) --> L { ... }
}

fun seq_along(`along.with`) {
  (reg alongWith:*) -+> I { ... }
  (reg alongWith:V) --> I { ... }
}

fun seq_len(`length.out`) {
  (reg lengthOut:*) -+> I { ... }
  (reg lengthOut:I) --> I { ... }
}

fun abs(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> I { ... }
  (reg x:R) --> R { ... }
}

fun sqrt(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun exp(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun log(x, base) {
  (reg x:*, reg base:*) -+> V { ... }
  (reg x:I, reg base:R) --> R { ... }
  (reg x:R, reg base:R) --> R { ... }
}

# === MATH1_FUNS ===
fun floor(x) {
  (reg x:*) -+> V { ... }
  # Below is correct although unintuitive
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun ceiling(x) {
  (reg x:*) -+> V { ... }
  # Below is correct although unintuitive
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sign(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun expm1(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun log1p(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun cos(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sin(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun tan(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun acos(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun asin(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun atan(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun cosh(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sinh(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun tanh(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun acosh(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun asinh(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun atanh(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun lgamma(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun gamma(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun digamma(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun trigamma(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun cospi(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sinpi(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun tanpi(x) {
  (reg x:*) -+> V { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}
# ---

fun length(x) {
  (reg x:*) -+> I { ... }
  (reg x:V) --> I { ... }
}

fun `as.logical`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `as.character`(x) {
  (reg x:*) -+> S { ... }
  (reg x:V) --> S { ... }
}

fun stop(`...`, `call.`, domain) {
  (reg ddd:dots, reg call:*, reg domain:*) -+> V { ... }
}

fun warning(`...`, `call.`, `immediate.`, `noBreaks.`, domain) {
  (reg ddd:dots, reg call:*, reg immediate:*, reg noBreaks:*, reg domain:*) -+> V { ... }
}

fun unclass(x) {
  (reg x:*) -+> V { ... }
  (reg x:V) --> V { ... }
}

fun `is.vector`(x, mode) {
  (reg x:*, reg mode:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.numeric`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.integer`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.double`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.logical`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.complex`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.raw`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.function`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.environment`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.list`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun inherits(x, what, which) {
  (reg x:*, reg what:*, reg which:*) -+> L { ... }
  (reg x:V, reg what:V) --> L { ... }
}

fun attr(x, which, exact, value) {
  (reg x:*, reg which:*, reg exact:*, reg value:*) -+> V { ... }
  (reg x:V, reg which:S) --> V { ... }
}

fun `is.character`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.object`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.symbol`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun c(`...`) {
  (reg ddd:dots) --> V { ... }
}