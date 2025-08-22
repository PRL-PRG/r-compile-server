fun `+` {
  (reg lhs:I, reg rhs:I) --> I { | ...; }
  (reg lhs:I, reg rhs:R) --> R { | ...; }
  (reg lhs:R, reg rhs:I) --> R { | ...; }
  (reg lhs:R, reg rhs:R) --> R { | ...; }
}

fun `<` {
  (reg lhs:I, reg rhs:I) --> L { | ...; }
}

fun `==` {
  (reg lhs:I, reg rhs:I) --> L { | ...; }
  (reg lhs:R, reg rhs:R) --> L { | ...; }
  (reg lhs:S, reg rhs:S) --> L { | ...; }
  (reg lhs:cls, reg rhs:cls) --> L { | ...; }
}

fun `!=` {
  (reg lhs:I, reg rhs:I) --> L { | ...; }
  (reg lhs:R, reg rhs:R) --> L { | ...; }
  (reg lhs:S, reg rhs:S) --> L { | ...; }
  (reg lhs:cls, reg rhs:cls) --> L { | ...; }
}

fun abs {
  (reg x:I) --> I { | ...; }
  (reg x:R) --> R { | ...; }
}

fun sqrt {
  (reg x:I) --> R { | ...; }
  (reg x:R) --> R { | ...; }
}

fun floor {
  # Below is correct although unintuitive
  (reg x:I) --> R { | ...; }
  (reg x:R) --> R { | ...; }
}

fun `as.logical` { --> L }

fun `is.vector` { --> L }
fun `is.numeric` { --> L }
fun `is.integer` { --> L }
fun `is.double` { --> L }
fun `is.logical` { --> L }
fun `is.complex` { --> L }
fun `is.raw` { --> L }
fun `is.function` { --> L }
fun `is.environment` { --> L }
fun `is.list` { --> L }
fun inherits { --> L }
fun `is.character` { --> L }
fun `is.object` { --> L }