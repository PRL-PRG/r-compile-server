fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.stepfun.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg is_stepfun:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg stop:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    is_stepfun = ldf `is.stepfun`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_stepfun(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    stop = ldf stop;
    check L6() else D3();
  L3():
    x3 = ld x;
    check L4() else D2();
  D2():
    deopt 4 [x3];
  D3():
    deopt 7 [];
  L4():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L6():
    r2 = dyn stop("no 'as.stepfun' method available for 'x'");
    check L7() else D4();
  D4():
    deopt 9 [r2];
  L7():
    popenv;
    return r2;
  }
}