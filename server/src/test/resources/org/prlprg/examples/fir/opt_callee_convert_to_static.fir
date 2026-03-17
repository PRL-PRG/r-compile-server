fun main() {
  # after: () -+> V { reg r:I |
  () -+> V { reg r:V |
    mkenv;
    # after: r = f< I --> I >(42);
    r = f?< * --> I >(42);
    popenv;
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
