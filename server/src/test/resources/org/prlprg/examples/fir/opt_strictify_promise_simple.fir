fun main() {
  () --> I { reg rx:p(I -), reg ry:I, reg rz:I |
    rx = prom<I ->{
      ry = 1;
      return ry;
    };
    # after: rz = force_.2(ry);
    rz = force_.1(rx);
    return rz;
  }
}

fun force_(r) {
  (reg r:*) -+> V { reg r1:V |
    r1 = force? r;
    return r1;
  }
  (reg r:p(I -)) --> I { reg r1:I |
    r1 = force r;
    return r1;
  }
  (reg r:I) --> I { |
    return r;
  }
}
