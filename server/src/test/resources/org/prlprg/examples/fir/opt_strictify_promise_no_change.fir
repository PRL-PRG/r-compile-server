fun main() {
  () -+> V {
    rx: p(v1(I) -) = prom<v1(I) ->{
      return <int 1>;
    };
    # no change: f< p(v1(I) -) -+> v1(I) > has effects, so the promise is not inlined
    rz: V = f< p(v1(I) -) -+> v1(I) >(rx);
    return rz;
  }
}

fun f(r) {
  (r:*) -+> v1(I) {
    return <int 42>;
  }
  (r:p(v1(I) -)) -+> v1(I) {
    return <int 42>;
  }
  (r:v1(I)) -+> v1(I) {
    return <int 42>;
  }
}
