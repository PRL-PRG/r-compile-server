fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1432497010;
    st RdTags = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1432497010(Rd) {
  (reg Rd:*) -+> V { var Rd:*, reg lapply:cls, reg Rd1:*, reg Rd2:V, reg p:p(V +), reg attr:*, reg attr1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg res:*, reg res1:V, reg length:cls, reg r5:V, reg c:L, reg simplify2array:cls, reg res2:*, reg res3:V, reg p2:p(V +), reg r7:V, reg character:cls, reg r8:V |
    mkenv;
    st Rd = Rd;
    lapply = ldf lapply;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      Rd1 = ld Rd;
      Rd2 = force? Rd1;
      checkMissing(Rd2);
      return Rd2;
    };
    p1 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r2 = dyn lapply(p, p1, "Rd_tag");
    check L3() else D1();
  D1():
    deopt 5 [r2];
  L3():
    st res = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r4):
    c = `as.logical`(r4);
    if c then L8() else L1();
  L4():
    res = ld res;
    check L6() else D2();
  L5():
    r3 = dyn base(<sym res>);
    goto L0(r3);
  D2():
    deopt 9 [res];
  L1():
    character = ldf character;
    check L12() else D6();
  L6():
    res1 = force? res;
    checkMissing(res1);
    length = ldf length in base;
    r5 = dyn length(res1);
    check L7() else D3();
  L8():
    simplify2array = ldf simplify2array;
    check L9() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 14 [];
  D6():
    deopt 19 [];
  L7():
    goto L0(r5);
  L9():
    p2 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    r7 = dyn simplify2array(p2, FALSE);
    check L10() else D5();
  L12():
    r8 = dyn character();
    check L13() else D7();
  D5():
    deopt 17 [r7];
  D7():
    deopt 20 [r8];
  L10():
    popenv;
    return r7;
  L13():
    popenv;
    return r8;
  }
}