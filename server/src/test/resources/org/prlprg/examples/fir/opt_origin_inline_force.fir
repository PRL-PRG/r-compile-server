fun main() {
  () -+> I { |
    mkenv;
    f%< I --> I >(42);
    popenv;
    return 42;
  }
}

fun f(r0) {
  # after: (reg r0:I) --> I { |
  (reg r0:I) --> I { reg r0b:v1(I), reg r1:p(v1(I) -), reg r2:v1(I), reg r2u:I |
    # after:
    r0b = box<I --> v1(I)>(r0);
    r1 = prom<v1(I) ->{ return r0b; };
    # after:
    r2 = force r1;
    r2u = unbox<v1(I) --> I>(r2);
    # after: return r0;
    return r2u;
  }
}
