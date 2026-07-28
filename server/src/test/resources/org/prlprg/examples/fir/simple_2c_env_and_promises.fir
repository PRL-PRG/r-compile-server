fun main() {
  () -~> v1(I) {
    mkenv;
    prom: p(v1(I) -) = prom<v1(I) ->{
      return <int 37>;
    };
    forced: v1(I) = force prom;
    st x = forced;
    stored: * = ld x;
    stored0: v1(I) = stored as v1(I);
    stored0u: I = unbox< v1(I) --> I >(stored0);
    popenv;
    ret: I = `+`< I,I --> I >(stored0u, 5);
    retu: v1(I) = box< I --> v1(I) >(ret);
    return retu;
  }
}
