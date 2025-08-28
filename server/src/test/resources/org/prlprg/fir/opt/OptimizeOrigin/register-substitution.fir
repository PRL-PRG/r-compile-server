fun test() -> Any {
  r0 = 42
  r1 = r0
  # after: r1 = 42
  r2 = r1
  # after: r2 = 42
  return r2
}