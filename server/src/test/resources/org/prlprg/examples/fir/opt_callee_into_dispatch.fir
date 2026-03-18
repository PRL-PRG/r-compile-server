fun main() {
  () --> V { reg r:V |
    r = 42 as V;
    # after: f%< V --> V >(r);
    f< V --> V >(r);
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