fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1063216011`;
    st Map = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1063216011`(f, `...`) {
  (reg f:*, reg ddd:dots) -+> V { var f:*, var `...`:dots?, reg match_fun:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg mapply:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st f = f;
    st `...` = ddd;
    match_fun = ldf `match.fun`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn match_fun(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st f = r1;
    mapply = ldf mapply;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    ddd1 = ld `...`;
    r3 = dyn mapply[FUN, `...`, SIMPLIFY](p1, ddd1, FALSE);
    check L3() else D3();
  D3():
    deopt 12 [r3];
  L3():
    popenv;
    return r3;
  }
}