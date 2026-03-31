fun main() {
  () --> v1(I) { reg rx:p(v1(I) -), reg rz:v1(I) |
    rx = prom<v1(I) ->{
      return <int 1>;
    };
    rz = force_< p(v1(I) -) --> v1(I) >(rx);
    return rz;
  }
}

fun force_(r) {
  (reg r:*) -+> V { reg r1:V |
    r1 = force? r;
    return r1;
  }
  (reg r:p(v1(I) -)) --> v1(I) { reg r1:v1(I) |
    r1 = force r;
    return r1;
  }
  (reg r:v1(I)) --> v1(I) { |
    return r;
  }
}
