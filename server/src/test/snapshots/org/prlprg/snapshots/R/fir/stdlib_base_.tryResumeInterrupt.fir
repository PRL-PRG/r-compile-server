fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st `.tryResumeInterrupt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg findRestart:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg r3:*, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg invokeRestart:cls, reg r6:*, reg r7:V, reg p:p(V +), reg r9:V |
    mkenv;
    findRestart = ldf findRestart;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn findRestart("resume");
    check L3() else D1();
  D1():
    deopt 3 [r];
  L3():
    st r = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    r5 = `!`(r2);
    c1 = `as.logical`(r5);
    if c1 then L7() else L1();
  L4():
    r3 = ld r;
    check L6() else D2();
  L5():
    r1 = dyn base(<sym r>);
    goto L0(r1);
  D2():
    deopt 6 [r3];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    r4 = force? r3;
    checkMissing(r4);
    c = `==`(r4, NULL);
    goto L0(c);
  L7():
    invokeRestart = ldf invokeRestart;
    check L8() else D3();
  D3():
    deopt 11 [];
  L8():
    p = prom<V +>{
      r6 = ld r;
      r7 = force? r6;
      checkMissing(r7);
      return r7;
    };
    r9 = dyn invokeRestart(p);
    check L9() else D4();
  D4():
    deopt 13 [r9];
  L9():
    popenv;
    return r9;
  }
}