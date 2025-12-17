fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2985125836;
    st `anyNA.POSIXlt` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2985125836(x, recursive) {
  (reg x:*, reg recursive:*) -+> V { var x:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg anyNA:cls, reg r4:V |
    mkenv;
    st x = x;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    as_POSIXct = ldf `as.POSIXct`;
    check L4() else D0();
  L3():
    r = dyn base(<lang as.POSIXct(x)>);
    goto L1(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn as_POSIXct(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    anyNA = ldf anyNA in base;
    r4 = dyn anyNA(r3);
    check L6() else D2();
  D2():
    deopt 7 [r4];
  L6():
    goto L1(r4);
  }
}