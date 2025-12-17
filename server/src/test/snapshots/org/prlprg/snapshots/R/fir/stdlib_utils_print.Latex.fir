fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2016089623;
    st `print.Latex` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2016089623(x, prefix, `...`) {
  (reg x:*, reg prefix:*, reg ddd:dots) -+> V { var x:*, var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var `...`:dots?, reg writeLines:cls, reg paste0:cls, reg prefix1:*, reg prefix2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg unclass:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg ddd1:dots?, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg invisible:cls, reg r10:V |
    mkenv;
    st x = x;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L0("") else L0(prefix);
  L0(prefix_orDefault):
    st prefix = prefix_orDefault;
    st `...` = ddd;
    writeLines = ldf writeLines;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        prefix1 = ld prefix;
        prefix2 = force? prefix1;
        checkMissing(prefix2);
        return prefix2;
      };
      p1 = prom<V +>{
        sym = ldf unclass;
        base = ldf unclass in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        unclass = ldf unclass in base;
        r3 = dyn unclass(x2);
        goto L0(r3);
      L2():
        r1 = dyn base(<sym x>);
        goto L0(r1);
      };
      r5 = dyn paste0(p, p1);
      return r5;
    };
    ddd1 = ld `...`;
    r7 = dyn writeLines[, `...`](p2, ddd1);
    check L3() else D1();
  D1():
    deopt 4 [r7];
  L3():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L1(r9):
    popenv;
    return r9;
  L4():
    x3 = ld x;
    check L6() else D2();
  L5():
    r8 = dyn base1(<sym x>);
    goto L1(r8);
  D2():
    deopt 7 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r10 = dyn invisible(x4);
    check L7() else D3();
  D3():
    deopt 10 [r10];
  L7():
    goto L1(r10);
  }
}