fun main() {
  # after: () -+> V { reg r:I |
  () -+> V { reg r:V |
    mkenv;
    # after: f< I,R --> I >(1, 2.0);
    f?< *,* --> V >(1, 2.0);
    # after: r = f< I,I --> I >(3, 4);
    r = f?< *,* --> V >(3, 4);
    popenv;
    return r;
  }
}

fun f(a, b) {
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
