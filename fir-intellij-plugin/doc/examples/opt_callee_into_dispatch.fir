fun main() {
  () --> V { reg r:V |
    r = 42 as V;
    # after: f< V --> V >(r);
    f.0(r);
    return r;
  }
}

fun f(`...`) {
  (reg r:V) --> V { |
    return r;
  }
  (reg r:I) --> I { |
    return r;
  }
}