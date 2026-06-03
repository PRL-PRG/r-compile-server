fun main() {
  () -~> v1(I) { var x:v1(I)?, reg stored:v1(I)?, reg stored0:v1(I), reg stored0u:I, reg prom:p(v1(I) -), reg forced:v1(I), reg ret:I, reg retu:v1(I) |
    mkenv;
    prom = prom<v1(I) ->{ return <int 37>; };
    forced = force prom;
    st x = forced;
    stored = ld x;
    stored0 = stored as v1(I);
    stored0u = unbox<v1(I) --> I>(stored0);
    popenv;
    ret = `+`< I,I --> I >(stored0u, 5);
    retu = box< I --> v1(I) >(ret);
    return retu;
  }
}
