fun `+` {
  (r:Is!, r1:Is!):Is!- { | ...; }
}

fun `<` {
  (r:Is!, r1:Is!):Ls!- { | ...; }
}

fun length {
  # TODO: Add "forSeq" type, and change the parameter to it. Currently it's unsound.
  (r:Vs!):Is!- { | ...; }
}