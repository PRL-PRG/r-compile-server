fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner837642189;
    st `anyNA.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner837642189(x, recursive) {
  (reg x:*, reg recursive:*) -+> V { var x:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg anyNA:*, reg anyNA1:V, reg p1:p(V +), reg r4:V, reg any:cls, reg r5:V |
    mkenv;
    st x = x;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    vapply = ldf vapply;
    check L4() else D0();
  L3():
    r = dyn base(<lang vapply(x, anyNA, NA_LGL, USE.NAMES=FALSE)>);
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
    p1 = prom<V +>{
      anyNA = ld anyNA;
      anyNA1 = force? anyNA;
      checkMissing(anyNA1);
      return anyNA1;
    };
    r4 = dyn vapply[, , , `USE.NAMES`](p, p1, NA_LGL, FALSE);
    check L5() else D1();
  D1():
    deopt 9 [r4];
  L5():
    any = ldf any in base;
    r5 = dyn any(r4);
    check L6() else D2();
  D2():
    deopt 11 [r5];
  L6():
    goto L1(r5);
  }
}