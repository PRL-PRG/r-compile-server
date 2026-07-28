fun main() {
  () -+> v1(I) {
    mkenv;
    f< I --> I >(42);
    popenv;
    return <int 42>;
  }
}

fun f(r0) {
  (reg r0:I) --> I {
    return r0;
  }
}
