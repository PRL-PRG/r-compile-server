fun main() {
  () --> v1(I) {
    x: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    f: I = f< p(v1(I) -)@! --> I >(x);
    g: I = g< p(v1(I) -)@!,B --> I >(x, FALSE);
    g2: I = g< p(v1(I) -)@!,B --> I >(x, TRUE);
    gSum: I = `+`< I,I --> I >(g, g2);
    res: I = `+`< I,I --> I >(f, gSum);
    resu: v1(I) = box< I --> v1(I) >(res);
    return resu;
  }
}

fun f(x) {
  (reg x:p(v1(I) -)@!) --> I {
    r: v1(I) = force x;
    ru: I = unbox< v1(I) --> I >(r);
    return ru;
  }
}

fun g(x, cond) {
  (reg x:p(v1(I) -)@!, reg cond:B) --> I {
    if cond then L1() else L2();
  L1():
    r: v1(I) = force x;
    ru: I = unbox< v1(I) --> I >(r);
    return ru;
  L2():
    r2: v1(I) = force x;
    r2u: I = unbox< v1(I) --> I >(r2);
    return r2u;
  }
}
