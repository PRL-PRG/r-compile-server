fun main() {
  # after: () -+> V { reg r:I |
  () -+> V { reg r:V |
    mkenv;
        # after: r = f.1(42);
    r = f(42);
    return r;
  }
}

fun f(...) {
  (reg r:*) --> I { |
    return 24;
  }
  (reg r:I) --> I { |
    return r;
  }
}