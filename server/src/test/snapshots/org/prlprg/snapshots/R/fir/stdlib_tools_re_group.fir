fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1236783023;
    st re_group = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg length:cls, reg r2:V, reg c:L, reg paste0:cls, reg s3:*, reg s4:V, reg p:p(V +), reg r4:V, reg character:cls, reg r5:V |
    mkenv;
    st s = s;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    s1 = ld s;
    check L4() else D0();
  L3():
    r = dyn base(<sym s>);
    goto L0(r);
  D0():
    deopt 2 [s1];
  L1():
    character = ldf character;
    check L10() else D4();
  L4():
    s2 = force? s1;
    checkMissing(s2);
    length = ldf length in base;
    r2 = dyn length(s2);
    check L5() else D1();
  L6():
    paste0 = ldf paste0;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r4 = dyn paste0("(", p, ")");
    check L8() else D3();
  L10():
    r5 = dyn character();
    check L11() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 14 [r5];
  L8():
    popenv;
    return r4;
  L11():
    popenv;
    return r5;
  }
}