fun `+`(...) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg unary:I) --> I { ... }
  (reg unary:R) --> R { ... }
}

fun `-`(...) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
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

fun `[`(x, i, ...) {
  (reg x:*, reg i:*) -+> V { ... }
  (reg x:v(L), reg i:I) --> L { ... }
  (reg x:v(I), reg i:I) --> I { ... }
  (reg x:v(R), reg i:I) --> R { ... }
  (reg x:v(S), reg i:I) --> S { ... }
}

fun `[[`(x, i, ...) {
  (reg x:*, reg i:*) -+> V { ... }
  (reg x:v(L), reg i:I) --> L { ... }
  (reg x:v(I), reg i:I) --> I { ... }
  (reg x:v(R), reg i:I) --> R { ... }
  (reg x:v(S), reg i:I) --> S { ... }
}

fun `[<-`(x, i, ..., u) {
  (reg x:*, reg i:*, reg u:*) -+> V { ... }
  (reg x:v(L), reg i:I, reg u:L) --> v(L) { ... }
  (reg x:v(I), reg i:I, reg u:I) --> v(I) { ... }
  (reg x:v(R), reg i:I, reg u:R) --> v(R) { ... }
  (reg x:v(S), reg i:I, reg u:S) --> v(S) { ... }
}

fun `[[<-`(x, i, ..., u) {
  (reg x:*, reg i:*, reg u:*) -+> V { ... }
  (reg x:v(L), reg i:I, reg u:L) --> v(L) { ... }
  (reg x:v(I), reg i:I, reg u:I) --> v(I) { ... }
  (reg x:v(R), reg i:I, reg u:R) --> v(R) { ... }
  (reg x:v(S), reg i:I, reg u:S) --> v(S) { ... }
}

fun rep(x, ...) {
  (reg x:*, reg times:*) -+> V { ... }
  (reg x:L, reg times:I) --> v(L) { ... }
  (reg x:I, reg times:I) --> v(I) { ... }
  (reg x:R, reg times:I) --> v(R) { ... }
  (reg x:S, reg times:I) --> v(S) { ... }
}

fun sum(
  ...,
  `na.rm` = () --> L { | return FALSE; },
) {
  (reg x:*) -+> V { ... }
  (reg x:v(L)) --> I { ... }
  (reg x:v(I)) --> I { ... }
  (reg x:v(R)) --> R { ... }
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

fun floor(x) {
  (reg x:*) -+> V { ... }
  # Below is correct although unintuitive
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun length(x) {
  (reg x:*) -+> I { ... }
  (reg x:V) --> I { ... }
}

fun `as.logical`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.vector`(
  x,
  mode = () --> S { | return "any"; },
) {
  (reg x:*) -+> L { ... }
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

fun inherits(
  x,
  what,
  which = () --> L { | return FALSE; },
) {
  (reg x:*, reg what:*) -+> L { ... }
  (reg x:V, reg what:V) --> L { ... }
}

fun `is.character`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

fun `is.object`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}

# TODO: Make this have one version which takes a dots list, and modify the interpreter so it
#  calls with the dots list instead of passing variadic arguments directly
fun c(...) {
  () --> V { ... }
  (reg r0:V) --> V { ... }
  (reg r0:V, reg r1:V) --> V { ... }
  (reg r0:V, reg r1:V, reg r2:V) --> V { ... }
  (reg r0:V, reg r1:V, reg r2:V, reg r3:V) --> V { ... }
  (reg r0:V, reg r1:V, reg r2:V, reg r3:V, reg r4:V) --> V { ... }
  (reg r0:V, reg r1:V, reg r2:V, reg r3:V, reg r4:V, reg r5:V) --> V { ... }
  (reg r0:V, reg r1:V, reg r2:V, reg r3:V, reg r4:V, reg r5:V, reg r6:V) --> V { ... }
  (reg r0:V, reg r1:V, reg r2:V, reg r3:V, reg r4:V, reg r5:V, reg r6:V, reg r7:V) --> V { ... }
}