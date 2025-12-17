fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3146477036;
    st engineMatches = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3146477036(regengine, vigengine) {
  (reg regengine:*, reg vigengine:*) -+> V { var regengine:*, var vigengine:*, reg grepl:cls, reg vigengine1:*, reg vigengine2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg sub:cls, reg regengine1:*, reg regengine2:V, reg p1:p(V +), reg r4:V, reg regengine3:*, reg regengine4:V, reg vigengine3:*, reg vigengine4:V, reg r6:V |
    mkenv;
    st regengine = regengine;
    st vigengine = vigengine;
    grepl = ldf grepl;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      vigengine1 = ld vigengine;
      vigengine2 = force? vigengine1;
      checkMissing(vigengine2);
      return vigengine2;
    };
    r1 = dyn grepl("::", p);
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    goto L1();
  L1():
    regengine3 = ld regengine;
    check L8() else D4();
  L4():
    sub = ldf sub;
    check L5() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 15 [regengine3];
  L5():
    p1 = prom<V +>{
      regengine1 = ld regengine;
      regengine2 = force? regengine1;
      checkMissing(regengine2);
      return regengine2;
    };
    r4 = dyn sub("^.*::", "", p1);
    check L6() else D3();
  L8():
    regengine4 = force? regengine3;
    checkMissing(regengine4);
    vigengine3 = ld vigengine;
    check L9() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 16 [regengine4, vigengine3];
  L6():
    st regengine = r4;
    goto L1();
  L9():
    vigengine4 = force? vigengine3;
    checkMissing(vigengine4);
    r6 = `==`(regengine4, vigengine4);
    popenv;
    return r6;
  }
}