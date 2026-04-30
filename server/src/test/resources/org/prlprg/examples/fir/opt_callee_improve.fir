fun main() {
  () -+> v1(I) { reg r:I, reg ru:v1(I) |
    r = f< * -+> I >(<int 42>);
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(r) {
  # Reflective so can't inline
  (reg r:*) -+> I { |
    return 42;
  }
  (reg r:v1(I)) -+> I { reg r1:I |
    r1 = unbox<v1(I) --> I>(r);
    return r1;
  }
}