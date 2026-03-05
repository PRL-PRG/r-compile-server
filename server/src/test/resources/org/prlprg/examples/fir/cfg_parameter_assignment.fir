fun main() {
  () --> I { reg r:I |
    r = f(43);
    return r;
  }
}

fun f(x) {
  (reg x:I) --> I { |
    # cfg-error: Parameter reg x:I can't be assigned
    x = 42;
    return x;
  }
}