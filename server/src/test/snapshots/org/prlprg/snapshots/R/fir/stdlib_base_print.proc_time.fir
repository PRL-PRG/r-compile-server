fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.proc_time` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg print:cls, reg summary:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg invisible:cls, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    print = ldf print;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      summary = ldf summary;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      ddd1 = ld `...`;
      r1 = dyn summary[, `...`](p, ddd1);
      return r1;
    };
    r3 = dyn print(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r5):
    popenv;
    return r5;
  L3():
    x3 = ld x;
    check L5() else D2();
  L4():
    r4 = dyn base(<sym x>);
    goto L0(r4);
  D2():
    deopt 6 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r6 = dyn invisible(x4);
    check L6() else D3();
  D3():
    deopt 9 [r6];
  L6():
    goto L0(r6);
  }
}