fun main() {
  () -+> v1(I) {
    r: I = f< * -+> I >(<int 42>);
    ru: v1(I) = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(r) {
  # Reflective so can't inline
  (reg r:*) -+> I {
    return 42;
  }
  (reg r:v1(I)) -+> I {
    r1: I = unbox< v1(I) --> I >(r);
    return r1;
  }
}
