fun main() {
  () -+> V { reg r:V, reg r1:V |
    r = 42 as V;
    r1 = 4.2 as V;
    # after: f%< V --> V >(r);
    f%< V --> V >(r);
    # after: f< I --> I >(24);
    f%< V --> V >(24);
    # after: f< V --> V >(r1);
    f%< V --> V >(r1);
    # after: f< V --> V >(24.0);
    f%< V --> V >(24.0);
    return r;
  }
}

fun f(r) {
  (reg r:V) --> V { |
    return r;
  }
  (reg r:I) --> I { |
    return r;
  }
}