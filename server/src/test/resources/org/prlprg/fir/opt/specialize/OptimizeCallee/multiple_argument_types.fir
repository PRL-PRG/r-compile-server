fun main(...) {
  # after: () -+> V { reg r:I |
  () -+> V { reg r:V |
    mkenv;
        # after: f.2(1, 2.0);
    f(1, 2.0);
    # after: r = f.1(3, 4);
    r = f(3, 4);
    return r;
  }
}

fun f(...) {
  (reg a:*, reg b:*) --> V { |
    return 42;
  }
  (reg a:I, reg b:I) --> I { |
    return a;
  }
  (reg a:I, reg b:R) --> I { |
    return a;
  }
}