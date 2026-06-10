fun main() {
  () --> I { reg r:I |
    # after: r = f.1(42);
    r = f.0(42);
    return r;
  }
}

fun f(`...`) {
  (reg r:*) --> I { |
    return 24;
  }
  (reg r:I) --> I { |
    return r;
  }
}