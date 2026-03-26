fun main() {
  # after: () -+> v1(I) { reg r:v1(I) |
  () -+> v1(I) { reg r:v1(I) |
    mkenv;
    # after: r = f< v1(I) --> v1(I) >(<int 42>);
    r = f%< * --> v1(I) >(<int 42>);
    popenv;
    return r;
  }
}

fun f(r) {
  (reg r:*) --> v1(I) { |
    return <int 24>;
  }
  (reg r:v1(I)) --> v1(I) { |
    return r;
  }
}
