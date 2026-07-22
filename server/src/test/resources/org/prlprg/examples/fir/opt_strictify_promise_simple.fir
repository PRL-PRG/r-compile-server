fun main() {
  () --> v1(I) {
    rx: p(v1(I) -) = prom<v1(I) ->{
      return <int 1>;
    };
    rz: v1(I) = force_< p(v1(I) -) --> v1(I) >(rx);
    return rz;
  }
}

fun force_(r) {
  (reg r:*) -+> V {
    r1: V = force? r;
    return r1;
  }
  (reg r:p(v1(I) -)) --> v1(I) {
    r1: v1(I) = force r;
    return r1;
  }
  (reg r:v1(I)) --> v1(I) {
    return r;
  }
}
