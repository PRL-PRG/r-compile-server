fun main() {
  () --> I { reg x:p(v1(I) -), reg f:I, reg g:I, reg g2:I, reg gSum:I, reg res:I |
    x = prom<v1(I) ->{
      return <int 42>;
    };
    f = f< p(v1(I) -)@! --> I >(x);
    g = g< p(v1(I) -)@!,B --> I >(x, FALSE);
    g2 = g< p(v1(I) -)@!,B --> I >(x, TRUE);
    gSum = `+`< I,I --> I >(g, g2);
    res = `+`< I,I --> I >(f, gSum);
    return res;
  }
}

fun f(x) {
  (reg x:p(v1(I) -)@!) --> I { reg r:v1(I), reg ru:I |
    r = force x;
    ru = unbox<v1(I) --> I>(r);
    return ru;
  }
}

fun g(x, cond) {
  (reg x:p(v1(I) -)@!, reg cond:B) --> I { reg r:v1(I), reg ru:I, reg r2:v1(I), reg r2u:I |
    if cond then L1() else L2();
  L1():
    r = force x;
    ru = unbox<v1(I) --> I>(r);
    return ru;
  L2():
    r2 = force x;
    r2u = unbox<v1(I) --> I>(r2);
    return r2u;
  }
}
