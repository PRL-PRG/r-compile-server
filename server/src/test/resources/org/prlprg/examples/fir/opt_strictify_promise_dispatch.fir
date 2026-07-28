fun main() {
  () -+> v1(I) {
    rx: p(v1(I) -) = prom<v1(I) ->{
      rc: v1(I) = `+`< v1(I),v1(I) --> v1(I) >(<int 1>, <int 2>);
      return rc;
    };
    ry: p(v1(I) +) = prom<v1(I) +>{
      return <int 5>;
    };
    rz: v1(I) = f%< p(v1(I) -),p(v1(I) +) --> v1(I) >(rx, ry);
    return rz;
  }
}

fun f(r1, r2) {
  (reg r1:*, reg r2:*) -+> V {
    r3: V = force? r1;
    return r3;
  }
  (reg r1:p(v1(I) -), reg r2:p(v1(I) +)) --> v1(I) {
    r3: v1(I) = force r1;
    return r3;
  }
  (reg r1:v1(I), reg r2:p(v1(I) +)) --> v1(I) {
    return r1;
  }
}
