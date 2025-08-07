fun main {
  () --> I { reg r:I |
    r = f(42);
    return r;
  }
}

fun f {
  (reg r:I) --> I { |
    return r;
  }
}
