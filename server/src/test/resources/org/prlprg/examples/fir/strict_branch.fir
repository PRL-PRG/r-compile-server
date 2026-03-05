fun main() {
  () --> I { reg x:p(I -), reg f:I, reg g:I, reg g2:I, reg gSum:I, reg res:I |
    x = prom<I ->{
      return 42;
    };
    f = f(x);
    g = g(x, FALSE);
    g2 = g(x, TRUE);
    gSum = `+`.1(g, g2);
    res = `+`.1(f, gSum);
    return res;
  }
}

fun f(x) {
  (reg x:p(I -)@!) --> I { reg r:I |
    r = force x;
    return r;
  }
}

fun g(x, cond) {
  (reg x:p(I -)@!, reg cond:L) --> I { reg r:I, reg r2:I |
    if cond then L1() else L2();
  L1():
    r = force x;
    return r;
  L2():
    r2 = force x;
    return r2;
  }
}
