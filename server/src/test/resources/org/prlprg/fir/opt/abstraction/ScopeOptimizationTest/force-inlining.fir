fun test() -> Any {
  r0 = prom<Any ->{
    return 42
  }
  r1 = force r0
  # after: return 42
  return r1
}