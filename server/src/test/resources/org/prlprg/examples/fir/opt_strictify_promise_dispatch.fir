fun main() {
  () -+> I { reg ra:I, reg rb:I, reg rc:I, reg rx:p(I -), reg ry:p(I +), reg rz:I |
    ra = 1;
    rb = 2;
    rx = prom<I ->{
      rc = `+`.1(ra, rb);
      return rc;
    };
    ry = prom<I +>{
      return 5;
    };
    # after: rz = f< I,p(I +) --> I >(rc, ry);
    rz = f< p(I -),p(I +) --> I >(rx, ry);
    return rz;
  }
}

fun f(r1, r2) {
  (reg r1:*, reg r2:*) -+> V { ... }
  (reg r1:p(I -), reg r2:p(I +)) --> I { ... }
  (reg r1:I, reg r2:p(I +)) --> I { ... }
}