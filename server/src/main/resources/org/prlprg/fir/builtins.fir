fun `+` {
  (reg lhs:I, reg rhs:I) --> I { | ...; }
}

fun `<` {
  (reg lhs:I, reg rhs:I) --> L { | ...; }
}

fun length {
  # TODO: Add "forSeq" type, and change the parameter to it. Currently it's unsound.
  (reg v:V) --> I { | ...; }
}

fun `[[<-` {
  (reg lhs:V, reg rhs:I) --> V { | ...; }
}