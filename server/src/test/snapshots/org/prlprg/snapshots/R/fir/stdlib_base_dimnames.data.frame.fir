fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `dimnames.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg row_names:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg names:cls, reg r6:V, reg list:cls, reg r7:V |
    mkenv;
    st x = x;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    row_names = ldf `row.names`;
    check L4() else D0();
  L3():
    r = dyn base(<lang row.names(x)>, <lang names(x)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn row_names(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r5):
    list = ldf list in base;
    r7 = dyn list(r3, r5);
    check L10() else D4();
  L6():
    x3 = ld x;
    check L8() else D2();
  L7():
    r4 = dyn base1(<sym x>);
    goto L1(r4);
  D2():
    deopt 8 [x3];
  D4():
    deopt 13 [r7];
  L8():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r6 = dyn names(x4);
    check L9() else D3();
  L10():
    goto L0(r7);
  D3():
    deopt 11 [r6];
  L9():
    goto L1(r6);
  }
}