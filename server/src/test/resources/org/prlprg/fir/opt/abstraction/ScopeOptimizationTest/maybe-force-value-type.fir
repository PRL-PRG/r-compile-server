fun test() -> Any {
  r0 = 42
  r1 = force? r0
  # after: r1 = r0
  return r1
}