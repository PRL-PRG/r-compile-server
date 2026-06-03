fun `+`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(I) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(I) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(R) { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg unary:v(I), reg rhs:miss) --> v(I) { ... }
  (reg unary:v(R), reg rhs:miss) --> v(R) { ... }
  (reg unary:v1(I), reg rhs:miss) --> v1(I) { ... }
  (reg unary:v1(R), reg rhs:miss) --> v1(R) { ... }
  (reg unary:*@!, reg rhs:miss) -+> V { ... }
  (reg unary:I, reg rhs:miss) --> I { ... }
  (reg unary:R, reg rhs:miss) --> R { ... }
}

fun `-`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(I) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(I) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(R) { ... }
  (reg unary:v(I), reg rhs:miss) --> v(I) { ... }
  (reg unary:v(R), reg rhs:miss) --> v(R) { ... }
  (reg unary:v1(I), reg rhs:miss) --> v1(I) { ... }
  (reg unary:v1(R), reg rhs:miss) --> v1(R) { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg unary:*@!, reg rhs:miss) -+> V { ... }
  (reg unary:I, reg rhs:miss) --> I { ... }
  (reg unary:R, reg rhs:miss) --> R { ... }
}

fun `*`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(I) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(I) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(R) { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
}

fun `/`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(R) { ... }
  (reg lhs:I, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
}

fun `^`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(R) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(R) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(R) { ... }
  (reg lhs:I, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
}

fun `<`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:I, reg rhs:R) --> L { ... }
  (reg lhs:R, reg rhs:I) --> L { ... }
  (reg lhs:I, reg rhs:I) --> B { ... }
  (reg lhs:R, reg rhs:R) --> B { ... }
  (reg lhs:I, reg rhs:R) --> B { ... }
  (reg lhs:R, reg rhs:I) --> B { ... }
}

fun `<=`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:I, reg rhs:R) --> L { ... }
  (reg lhs:R, reg rhs:I) --> L { ... }
  (reg lhs:I, reg rhs:I) --> B { ... }
  (reg lhs:R, reg rhs:R) --> B { ... }
  (reg lhs:I, reg rhs:R) --> B { ... }
  (reg lhs:R, reg rhs:I) --> B { ... }
}

fun `>`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:I, reg rhs:R) --> L { ... }
  (reg lhs:R, reg rhs:I) --> L { ... }
}

fun `>=`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(I), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:I, reg rhs:R) --> L { ... }
  (reg lhs:R, reg rhs:I) --> L { ... }
}

fun `==`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(L), reg rhs:v(L)) --> v(L) { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(S), reg rhs:v(S)) --> v(L) { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(S), reg rhs:v1(S)) --> v1(L) { ... }
  (reg lhs:*@!, reg rhs:*@!) --> L { ... }
  (reg lhs:*@!, reg rhs:*@!) --> B { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:S, reg rhs:S) --> L { ... }
  (reg lhs:L, reg rhs:L) --> B { ... }
  (reg lhs:I, reg rhs:I) --> B { ... }
  (reg lhs:R, reg rhs:R) --> B { ... }
  (reg lhs:S, reg rhs:S) --> B { ... }
}

fun `!=`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(L), reg rhs:v(L)) --> v(L) { ... }
  (reg lhs:v(I), reg rhs:v(I)) --> v(L) { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> v(L) { ... }
  (reg lhs:v(S), reg rhs:v(S)) --> v(L) { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v1(L) { ... }
  (reg lhs:v1(R), reg rhs:v1(R)) --> v1(L) { ... }
  (reg lhs:v1(S), reg rhs:v1(S)) --> v1(L) { ... }
  (reg lhs:*@!, reg rhs:*@!) --> L { ... }
  (reg lhs:*@!, reg rhs:*@!) --> B { ... }
  (reg lhs:L, reg rhs:L) --> L { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
  (reg lhs:R, reg rhs:R) --> L { ... }
  (reg lhs:S, reg rhs:S) --> L { ... }
  (reg lhs:L, reg rhs:L) --> B { ... }
  (reg lhs:I, reg rhs:I) --> B { ... }
  (reg lhs:R, reg rhs:R) --> B { ... }
  (reg lhs:S, reg rhs:S) --> B { ... }
}

fun `&`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(L), reg rhs:v(L)) --> v(L) { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:B, reg rhs:B) --> B { ... }
}

fun `&&`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*) -+> V { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:B, reg rhs:B) --> B { ... }
}

fun `|`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(L), reg rhs:v(L)) --> v(L) { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:B, reg rhs:B) --> B { ... }
}

fun `||`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*) -+> V { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:B, reg rhs:B) --> B { ... }
}

fun xor(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v(L), reg rhs:v(L)) --> v(L) { ... }
  (reg lhs:v1(L), reg rhs:v1(L)) --> v1(L) { ... }
  (reg lhs:B, reg rhs:B) --> B { ... }
}

fun bitwNot(a) {
  (reg a:*@!) -+> V { ... }
  (reg a:I) --> I { ... }
}

fun bitwAnd(a, b) {
  (reg a:*@!, reg b:*@!) -+> V { ... }
  (reg a:I, reg b:I) --> I { ... }
}

fun bitwOr(a, b) {
  (reg a:*@!, reg b:*@!) -+> V { ... }
  (reg a:I, reg b:I) --> I { ... }
}

fun bitwXor(a, b) {
  (reg a:*@!, reg b:*@!) -+> V { ... }
  (reg a:I, reg b:I) --> I { ... }
}

fun bitwShiftL(a, n) {
  (reg a:*@!, reg n:*@!) -+> V { ... }
  (reg a:I, reg n:I) --> I { ... }
}

fun bitwShiftR(a, n) {
  (reg a:*@!, reg n:*@!) -+> V { ... }
  (reg a:I, reg n:I) --> I { ... }
}

fun `!`(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(L)) --> v(L) { ... }
  (reg x:v(I)) --> v(L) { ... }
  (reg x:v(R)) --> v(L) { ... }
  (reg x:v1(L)) --> v1(L) { ... }
  (reg x:v1(I)) --> v1(L) { ... }
  (reg x:v1(R)) --> v1(L) { ... }
  (reg x:B) --> B { ... }
  (reg x:I) --> L { ... }
  (reg x:R) --> L { ... }
}

fun `:`(lhs, rhs) {
  (reg lhs:*@!, reg rhs:*@!) -+> V { ... }
  (reg lhs:v1(I), reg rhs:v1(I)) --> v(I) { ... }
  (reg lhs:v1(I), reg rhs:v1(R)) --> v(I) { ... }
  (reg lhs:I, reg rhs:I) --> v(I) { ... }
  # If `lhs` has no decimals, it coerces to int
  (reg lhs:I, reg rhs:R) --> v(I) { ... }
  (reg lhs:R, reg rhs:R) --> V { ... }
  (reg lhs:v(R), reg rhs:v(R)) --> V { ... }
}

fun `[`(x, i, `...`, drop) {
  (reg x:*@!, reg i:*, reg ddd:dots, reg drop:*@!) -+> V { ... }
  (reg x:v(L), reg i:v(I), reg ddd:miss, reg drop:miss) --> v(L) { ... }
  (reg x:v(I), reg i:v(I), reg ddd:miss, reg drop:miss) --> v(I) { ... }
  (reg x:v(R), reg i:v(I), reg ddd:miss, reg drop:miss) --> v(R) { ... }
  (reg x:v(S), reg i:v(I), reg ddd:miss, reg drop:miss) --> v(S) { ... }
  (reg x:v(L), reg i:v1(I), reg ddd:miss, reg drop:miss) --> v1(L) { ... }
  (reg x:v(I), reg i:v1(I), reg ddd:miss, reg drop:miss) --> v1(I) { ... }
  (reg x:v(R), reg i:v1(I), reg ddd:miss, reg drop:miss) --> v1(R) { ... }
  (reg x:v(S), reg i:v1(I), reg ddd:miss, reg drop:miss) --> v1(S) { ... }
  (reg x:v(L), reg i:I, reg ddd:miss, reg drop:miss) --> L { ... }
  (reg x:v(I), reg i:I, reg ddd:miss, reg drop:miss) --> I { ... }
  (reg x:v(R), reg i:I, reg ddd:miss, reg drop:miss) --> R { ... }
  (reg x:v(S), reg i:I, reg ddd:miss, reg drop:miss) --> S { ... }
}

fun `[[`(x, i, `...`, exact) {
  (reg x:*@!, reg i:*, reg ddd:dots, reg exact:*@!) -+> V { ... }
  (reg x:v(L), reg i:v(I), reg ddd:miss, reg exact:miss) --> v(L) { ... }
  (reg x:v(I), reg i:v(I), reg ddd:miss, reg exact:miss) --> v(I) { ... }
  (reg x:v(R), reg i:v(I), reg ddd:miss, reg exact:miss) --> v(R) { ... }
  (reg x:v(S), reg i:v(I), reg ddd:miss, reg exact:miss) --> v(S) { ... }
  (reg x:v(L), reg i:v1(I), reg ddd:miss, reg exact:miss) --> v1(L) { ... }
  (reg x:v(I), reg i:v1(I), reg ddd:miss, reg exact:miss) --> v1(I) { ... }
  (reg x:v(R), reg i:v1(I), reg ddd:miss, reg exact:miss) --> v1(R) { ... }
  (reg x:v(S), reg i:v1(I), reg ddd:miss, reg exact:miss) --> v1(S) { ... }
  (reg x:v(L), reg i:I, reg ddd:miss, reg exact:miss) --> L { ... }
  (reg x:v(I), reg i:I, reg ddd:miss, reg exact:miss) --> I { ... }
  (reg x:v(R), reg i:I, reg ddd:miss, reg exact:miss) --> R { ... }
  (reg x:v(S), reg i:I, reg ddd:miss, reg exact:miss) --> S { ... }
}

fun `[<-`(x, i, value, `...`) {
  (reg x:*@!, reg i:*, reg value:*, reg ddd:dots) -+> V { ... }
  (reg x:v(L), reg i:v(I), reg value:v(L), reg ddd:miss) --> v(L) { ... }
  (reg x:v(I), reg i:v(I), reg value:v(I), reg ddd:miss) --> v(I) { ... }
  (reg x:v(R), reg i:v(I), reg value:v(R), reg ddd:miss) --> v(R) { ... }
  (reg x:v(S), reg i:v(I), reg value:v(S), reg ddd:miss) --> v(S) { ... }
  (reg x:v(L), reg i:I, reg value:L, reg ddd:miss) --> v(L) { ... }
  (reg x:v(I), reg i:I, reg value:I, reg ddd:miss) --> v(I) { ... }
  (reg x:v(R), reg i:I, reg value:R, reg ddd:miss) --> v(R) { ... }
  (reg x:v(S), reg i:I, reg value:S, reg ddd:miss) --> v(S) { ... }
}

fun `[[<-`(x, i, value) {
  (reg x:*@!, reg i:*, reg value:*) -+> V { ... }
  (reg x:v(L), reg i:v(I), reg value:v(L)) --> v(L) { ... }
  (reg x:v(I), reg i:v(I), reg value:v(I)) --> v(I) { ... }
  (reg x:v(R), reg i:v(I), reg value:v(R)) --> v(R) { ... }
  (reg x:v(S), reg i:v(I), reg value:v(S)) --> v(S) { ... }
  (reg x:v(L), reg i:I, reg value:L) --> v(L) { ... }
  (reg x:v(I), reg i:I, reg value:I) --> v(I) { ... }
  (reg x:v(R), reg i:I, reg value:R) --> v(R) { ... }
  (reg x:v(S), reg i:I, reg value:S) --> v(S) { ... }
}

fun `$`(x, name) {
  (reg x:*@!, reg name:*) -+> V { ... }
  (reg x:V, reg name:V) --> V { ... }
}

fun `$<-`(x, name, value) {
  (reg x:*@!, reg name:*, reg value:*) -+> V { ... }
  (reg x:V, reg name:V, reg value:V) --> V { ... }
}

fun rep(x, `...`) {
  (reg x:*@!, reg ddd:dots) -+> V { ... }
  (reg x:v1(L), reg times:v1(I)) --> v(L) { ... }
  (reg x:v1(I), reg times:v1(I)) --> v(I) { ... }
  (reg x:v1(R), reg times:v1(I)) --> v(R) { ... }
  (reg x:v1(S), reg times:v1(I)) --> v(S) { ... }
  (reg x:L, reg times:I) --> v(L) { ... }
  (reg x:I, reg times:I) --> v(I) { ... }
  (reg x:R, reg times:I) --> v(R) { ... }
  (reg x:S, reg times:I) --> v(S) { ... }
}

fun sum(`...`, `na.rm`) {
  (reg ddd:dots, reg naRm:*@!) -+> V { ... }
  (reg x:v(L), reg naRm:miss) --> I { ... }
  (reg x:v(I), reg naRm:miss) --> I { ... }
  (reg x:v(R), reg naRm:miss) --> R { ... }
}

fun `.Call`(`.NAME`, `...`, PACKAGE) {
  (reg name:*@!, reg ddd:dots, reg package:*@!) -+> V { ... }
}

fun `.External`(`.NAME`, `...`, PACKAGE) {
  (reg name:*@!, reg ddd:dots, reg package:*@!) -+> V { ... }
}

fun missing(x) {
  (reg x:*@!) --> v(L) { ... }
  (reg x:*@!) --> B { ... }
}

fun seq_along(`along.with`) {
  (reg alongWith:*@!) -+> v(I) { ... }
  (reg alongWith:V) --> I { ... }
}

fun seq_len(`length.out`) {
  (reg lengthOut:*@!) -+> v(I) { ... }
  (reg lengthOut:v(I)) --> v(I) { ... }
  (reg lengthOut:I) --> I { ... }
}

fun abs(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(I) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(I) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> I { ... }
  (reg x:R) --> R { ... }
}

fun sqrt(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun exp(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun log(x, base) {
  (reg x:*@!, reg base:*@!) -+> V { ... }
  (reg x:v(I), reg base:v(R)) --> v(R) { ... }
  (reg x:v(R), reg base:v(R)) --> v(R) { ... }
  (reg x:I, reg base:R) --> R { ... }
  (reg x:R, reg base:R) --> R { ... }
}

# === MATH1_FUNS ===
fun floor(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  # Below is correct although unintuitive
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun ceiling(x) {
  (reg x:*@!) -+> V { ... }
  # Below is correct although unintuitive
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sign(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun expm1(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun log1p(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun cos(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sin(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun tan(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun acos(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun asin(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun atan(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun cosh(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sinh(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun tanh(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun acosh(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun asinh(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun atanh(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun lgamma(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun gamma(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun digamma(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun trigamma(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun cospi(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun sinpi(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}

fun tanpi(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:v(I)) --> v(R) { ... }
  (reg x:v(R)) --> v(R) { ... }
  (reg x:v1(I)) --> v1(R) { ... }
  (reg x:v1(R)) --> v1(R) { ... }
  (reg x:I) --> R { ... }
  (reg x:R) --> R { ... }
}
# ---

fun length(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:V) --> v1(I) { ... }
  (reg x:V) --> I { ... }
}

fun `as.integer`(x, `...`) {
  (reg x:*@!, reg ddd:dots) -+> v(I) { ... }
  (reg x:V, reg ddd:miss) --> I { ... }
}

fun `as.logical`(x, `...`) {
  (reg x:*@!, reg ddd:dots) -+> v(L) { ... }
  (reg x:V, reg ddd:miss) --> v(L) { ... }
  (reg x:V, reg ddd:miss) --> v1(L) { ... }
  (reg x:V, reg ddd:miss) --> L { ... }
  (reg x:V, reg ddd:miss) --> B { ... }
  (reg x:L, reg ddd:miss) --> B { ... }
}

fun `as.character`(x, `...`) {
  (reg x:*@!, reg ddd:dots) -+> v(S) { ... }
  (reg x:V, reg ddd:miss) --> S { ... }
}

fun stop(`...`, `call.`, domain) {
  (reg ddd:dots, reg call:*@!, reg domain:*@!) -+> V { ... }
}

fun warning(`...`, `call.`, `immediate.`, `noBreaks.`, domain) {
  (reg ddd:dots, reg call:*@!, reg immediate:*@!, reg noBreaks:*@!, reg domain:*@!) -+> V { ... }
}

fun stopifnot(`...`, exprs, exprObject, local) {
  (reg ddd:dots, reg exprs:*@!, reg exprObject:*@!, reg local:*@!) -+> V { ... }
}

fun print(x, `...`) {
  (reg x:*@!, reg ddd:dots) -+> V { ... }
  (reg x:v(L), reg ddd:miss) --> v(L) { ... }
  (reg x:v(I), reg ddd:miss) --> v(I) { ... }
  (reg x:v(R), reg ddd:miss) --> v(R) { ... }
  (reg x:v(S), reg ddd:miss) --> v(S) { ... }
}

fun unclass(x) {
  (reg x:*@!) -+> V { ... }
  (reg x:V) --> V { ... }
}

fun `is.vector`(x, mode) {
  (reg x:*@!, reg mode:*@!) -+> v1(L) { ... }
  (reg x:V, reg mode:miss) --> v1(L) { ... }
}

fun `is.numeric`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.integer`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.double`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.logical`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.complex`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.raw`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.function`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.environment`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.list`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun inherits(x, what, which) {
  (reg x:*@!, reg what:*@!, reg which:*@!) -+> v1(L) { ... }
  (reg x:V, reg what:S, reg which:B) --> B { ... }
}

fun attr(x, which, exact, value) {
  (reg x:*@!, reg which:*@!, reg exact:*@!, reg value:*@!) -+> V { ... }
  (reg x:V, reg which:S, reg exact:miss, reg value:miss) --> V { ... }
}

fun `is.character`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.object`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun `is.symbol`(x) {
  (reg x:*@!) -+> v1(L) { ... }
  (reg x:V) --> B { ... }
}

fun c(`...`) {
  (reg ddd:dots) --> V { ... }
}
