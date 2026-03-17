fun main() {
  () -+> V { reg rx:p(I -), reg ry:I, reg rz:V |
    rx = prom<I ->{
      ry = 1;
      return ry;
    };
    # no change: f< p(I -) -+> I > has effects, so the promise is not inlined
    rz = f< p(I -) -+> I >(rx);
    return rz;
  }
}

fun f(r) {
  (reg r:*) -+> I { |
    return 42;
  }
  (reg r:p(I -)) -+> I { |
    return 42;
  }
  (reg r:I) -+> I { |
    return 42;
  }
}
