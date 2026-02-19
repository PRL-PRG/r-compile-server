fun main() {
  () --> I { reg rx:p(I -), reg ry:I, reg rz:I |
    rx = prom<I ->{
      ry = 1;
      return ry;
    };
    # after: rz = f.2(ry);
    rz = f.1(rx);
    return rz;
  }
}

fun f(`...`) {
  (reg r:V) -+> V { ... }
  (reg r:p(I -)) --> I { ... }
  (reg r:I) --> I { |
    return r;
  }
}
