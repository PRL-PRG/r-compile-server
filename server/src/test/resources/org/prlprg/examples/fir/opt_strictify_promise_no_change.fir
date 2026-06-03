fun main() {
  () -+> V { reg rx:p(v1(I) -), reg ry:v1(I), reg rz:V |
    rx = prom<v1(I) ->{
      ry = <int 1>;
      return ry;
    };
    # no change: f< p(v1(I) -) -+> v1(I) > has effects, so the promise is not inlined
    rz = f< p(v1(I) -) -+> v1(I) >(rx);
    return rz;
  }
}

fun f(r) {
  (reg r:*) -+> v1(I) { |
    return <int 42>;
  }
  (reg r:p(v1(I) -)) -+> v1(I) { |
    return <int 42>;
  }
  (reg r:v1(I)) -+> v1(I) { |
    return <int 42>;
  }
}
