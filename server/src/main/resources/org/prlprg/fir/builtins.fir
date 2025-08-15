fun `+` {
  (reg lhs:I, reg rhs:I) --> I { | ...; }
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