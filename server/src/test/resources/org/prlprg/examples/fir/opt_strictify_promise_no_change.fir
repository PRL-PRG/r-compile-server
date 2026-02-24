fun main() {
  () -+> V { reg rx:p(I -), reg ry:I, reg rz:V |
    rx = prom<I ->{
      ry = 1;
      return ry;
    };
    # no change: f.0 has effects, so the promise is not inlined
    rz = f.0(rx);
    return rz;
  }
}

fun f(r) {
  (reg r:*) -+> V { reg r1:V |
    r1 = force? r;
    return r1;
  }
}
