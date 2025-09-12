fun `+`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> I { ... }
  (reg lhs:I, reg rhs:R) --> R { ... }
  (reg lhs:R, reg rhs:I) --> R { ... }
  (reg lhs:R, reg rhs:R) --> R { ... }
}

fun `<`(lhs, rhs) {
  (reg lhs:*, reg rhs:*) -+> V { ... }
  (reg lhs:I, reg rhs:I) --> L { ... }
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

fun `is.vector`(x) {
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
fun inherits(x, class) {
  (reg x:*, reg class:*) -+> L { ... }
  (reg x:V, reg class:V) --> L { ... }
}
fun `is.character`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}
fun `is.object`(x) {
  (reg x:*) -+> L { ... }
  (reg x:V) --> L { ... }
}