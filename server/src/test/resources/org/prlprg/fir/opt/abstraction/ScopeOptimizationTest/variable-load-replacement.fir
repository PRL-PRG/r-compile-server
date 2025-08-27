fun test() -> Any {
  r0 = 42
  st x = r0
  r1 = ld x
  # after: r1 = 42
  return r1
}