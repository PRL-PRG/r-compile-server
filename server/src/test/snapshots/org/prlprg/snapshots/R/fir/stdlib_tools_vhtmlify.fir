fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2495544567;
    st vhtmlify = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2495544567(x, inEqn) {
  (reg x:*, reg inEqn:*) -+> V { var x:*, var inEqn:*, reg inEqn_isMissing:L, reg inEqn_orDefault:*, reg fsub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg fsub1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg fsub2:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r5:V, reg fsub3:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r7:V, reg inEqn1:*, reg inEqn2:V, reg c:L, reg psub:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r9:V, reg psub1:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r11:V, reg fsub4:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r13:V, reg fsub5:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r15:V, reg x17:*, reg x18:V |
    mkenv;
    st x = x;
    inEqn_isMissing = missing.0(inEqn);
    if inEqn_isMissing then L0(FALSE) else L0(inEqn);
  L0(inEqn_orDefault):
    st inEqn = inEqn_orDefault;
    fsub = ldf fsub;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn fsub("&", "&amp;", p);
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st x = r1;
    fsub1 = ldf fsub;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn fsub1("<", "&lt;", p1);
    check L6() else D3();
  D3():
    deopt 12 [r3];
  L6():
    st x = r3;
    fsub2 = ldf fsub;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn fsub2(">", "&gt;", p2);
    check L8() else D5();
  D5():
    deopt 19 [r5];
  L8():
    st x = r5;
    fsub3 = ldf fsub;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn fsub3("\"\\{\"", "\"{\"", p3);
    check L10() else D7();
  D7():
    deopt 26 [r7];
  L10():
    st x = r7;
    inEqn1 = ld inEqn;
    check L11() else D8();
  D8():
    deopt 28 [inEqn1];
  L11():
    inEqn2 = force? inEqn1;
    checkMissing(inEqn2);
    c = `as.logical`(inEqn2);
    if c then L12() else L1();
  L1():
    goto L2();
  L2():
    x17 = ld x;
    check L22() else D17();
  L12():
    psub = ldf psub;
    check L13() else D9();
  D9():
    deopt 31 [];
  D17():
    deopt 60 [x17];
  L13():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn psub("\\\\(Alpha|Beta|Gamma|Delta|Epsilon|Zeta|Eta|Theta|Iota|Kappa|Lambda|Mu|Nu|Xi|Omicron|Pi|Rho|Sigma|Tau|Upsilon|Phi|Chi|Psi|Omega|alpha|beta|gamma|delta|epsilon|zeta|eta|theta|iota|kappa|lambda|mu|nu|xi|omicron|pi|rho|sigma|tau|upsilon|phi|chi|psi|omega|le|ge|sum|prod)", "&\\1;", p4);
    check L14() else D10();
  L22():
    x18 = force? x17;
    checkMissing(x18);
    popenv;
    return x18;
  D10():
    deopt 35 [r9];
  L14():
    st x = r9;
    psub1 = ldf psub;
    check L15() else D11();
  D11():
    deopt 38 [];
  L15():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r11 = dyn psub1("\\\\(dots|ldots)", "&hellip;", p5);
    check L16() else D12();
  D12():
    deopt 42 [r11];
  L16():
    st x = r11;
    fsub4 = ldf fsub;
    check L17() else D13();
  D13():
    deopt 45 [];
  L17():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r13 = dyn fsub4("\\infty", "&infin;", p6);
    check L18() else D14();
  D14():
    deopt 49 [r13];
  L18():
    st x = r13;
    fsub5 = ldf fsub;
    check L19() else D15();
  D15():
    deopt 52 [];
  L19():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r15 = dyn fsub5("\\sqrt", "&radic;", p7);
    check L20() else D16();
  D16():
    deopt 56 [r15];
  L20():
    st x = r15;
    goto L2();
  }
}