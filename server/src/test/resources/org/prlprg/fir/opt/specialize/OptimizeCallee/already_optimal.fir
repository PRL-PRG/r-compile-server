fun main() {
  () --> I { reg r:I |
    r = identity.0(42);
    return r;
  }
}

fun identity(`...`) {
  (reg x:I) --> I { |
    return x;
  }
}