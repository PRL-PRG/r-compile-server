fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `row.names.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg rownames:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L9() else L2();
  L3():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang dim(x)>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    invisible.0();
    popenv;
    return NULL;
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L9():
    rownames = ldf rownames;
    check L10() else D2();
  D0():
    deopt 3 [x1];
  D2():
    deopt 10 [];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L8() else D1();
  L10():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn rownames(p);
    check L11() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 12 [r7];
  L8():
    goto L1(r4);
  L11():
    popenv;
    return r7;
  }
}