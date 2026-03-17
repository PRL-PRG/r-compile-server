fun main() {
  () --> I { reg r:I |
    # after: r = f< I --> I >(42);
    r = f< * --> I >(42);
    return r;
  }
}

fun f(r) {
  (reg r:*) --> I { |
    return 24;
  }
  (reg r:I) --> I { |
    return r;
  }
}