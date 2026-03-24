fun main() {
  () -+> v1(I) { reg ra:v1(I), reg rb:v1(I), reg rc:v1(I), reg rx:p(v1(I) -), reg ry:p(v1(I) +), reg rz:v1(I) |
    ra = <int 1>;
    rb = <int 2>;
    rx = prom<v1(I) ->{
      rc = `+`< v1(I),v1(I) --> v1(I) >(ra, rb);
      return rc;
    };
    ry = prom<v1(I) +>{
      return <int 5>;
    };
    # after: rz = f%< v1(I),p(v1(I) +) --> v1(I) >(rc, ry);
    rz = f%< p(v1(I) -),p(v1(I) +) --> v1(I) >(rx, ry);
    return rz;
  }
}

fun f(r1, r2) {
  (reg r1:*, reg r2:*) -+> V { reg r3:V |
    r3 = force? r1;
    return r3;
  }
  (reg r1:p(v1(I) -), reg r2:p(v1(I) +)) --> v1(I) { reg r3:v1(I) |
    r3 = force r1;
    return r3;
  }
  (reg r1:v1(I), reg r2:p(v1(I) +)) --> v1(I) { |
    return r1;
  }
}
