fun `+` {
  (reg r:I, reg r1:I)-->I { | ...; }
}

fun `<` {
  (reg r:I, reg r1:I)-->L { | ...; }
}

fun length {
  # TODO: Add "forSeq" type, and change the parameter to it. Currently it's unsound.
  (reg r:V)-->I { | ...; }
}