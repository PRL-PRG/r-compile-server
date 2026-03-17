fun main() {
  () --> I { reg r:I |
    r = f< I --> I >(42);
    return r;
  }
}

fun f(r) {
  (reg r:I) --> I { |
    return r;
  }
}
