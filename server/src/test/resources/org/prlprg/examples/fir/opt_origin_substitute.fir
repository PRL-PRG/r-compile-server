fun main() {
  () -+> v1(I) { |
    mkenv;
    f< I --> I >(42);
    popenv;
    return <int 42>;
  }
}

fun f(r0) {
  (reg r0:I) --> I { reg r1:I, reg r2:I |
    r1 = r0;
    r2 = r1;
    return r2;
  }
}
