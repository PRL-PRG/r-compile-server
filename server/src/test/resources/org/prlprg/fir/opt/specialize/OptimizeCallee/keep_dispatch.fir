fun main(...) {
  () -+> V { reg r:V, reg r1:V |
    r = 42 as V;
    r1 = 4.2 as V;
    # after: f< V --> V >(r);
    f(r);
    # after: f.1(24);
    f(24);
    # after: f.0(r1);
    f(r1);
    # after: f.0(24.0);
    f(24.0);
    return r;
  }
}

fun f(...) {
  (reg r:V) --> V { |
    return r;
  }
  (reg r:I) --> I { |
    return r;
  }
}