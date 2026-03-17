fun main() {
  () --> I { reg r:I |
    r = identity< I --> I >(42);
    return r;
  }
}

fun identity(x) {
  (reg x:I) --> I { |
    return x;
  }
}