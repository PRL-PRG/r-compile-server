fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st htmlify = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg fsub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg fsub1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg fsub2:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r5:V, reg fsub3:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r7:V, reg fsub4:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r9:V, reg psub:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r11:V, reg fsub5:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r13:V, reg fsub6:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r15:V, reg fsub7:cls, reg x17:*, reg x18:V, reg p8:p(V +), reg r17:V, reg fsub8:cls, reg x19:*, reg x20:V, reg p9:p(V +), reg r19:V, reg fsub9:cls, reg x21:*, reg x22:V, reg p10:p(V +), reg r21:V, reg x23:*, reg x24:V |
    mkenv;
    st x = x;
    fsub = ldf fsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn fsub("&", "&amp;", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st x = r1;
    fsub1 = ldf fsub;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn fsub1("---", "&mdash;", p1);
    check L3() else D3();
  D3():
    deopt 12 [r3];
  L3():
    st x = r3;
    fsub2 = ldf fsub;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn fsub2("--", "&ndash;", p2);
    check L5() else D5();
  D5():
    deopt 19 [r5];
  L5():
    st x = r5;
    fsub3 = ldf fsub;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn fsub3("``", "&ldquo;", p3);
    check L7() else D7();
  D7():
    deopt 26 [r7];
  L7():
    st x = r7;
    fsub4 = ldf fsub;
    check L8() else D8();
  D8():
    deopt 29 [];
  L8():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn fsub4("''", "&rdquo;", p4);
    check L9() else D9();
  D9():
    deopt 33 [r9];
  L9():
    st x = r9;
    psub = ldf psub;
    check L10() else D10();
  D10():
    deopt 36 [];
  L10():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r11 = dyn psub("`([^']+)'", "&lsquo;\\1&rsquo;", p5);
    check L11() else D11();
  D11():
    deopt 40 [r11];
  L11():
    st x = r11;
    fsub5 = ldf fsub;
    check L12() else D12();
  D12():
    deopt 43 [];
  L12():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r13 = dyn fsub5("`", "'", p6);
    check L13() else D13();
  D13():
    deopt 47 [r13];
  L13():
    st x = r13;
    fsub6 = ldf fsub;
    check L14() else D14();
  D14():
    deopt 50 [];
  L14():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r15 = dyn fsub6("<", "&lt;", p7);
    check L15() else D15();
  D15():
    deopt 54 [r15];
  L15():
    st x = r15;
    fsub7 = ldf fsub;
    check L16() else D16();
  D16():
    deopt 57 [];
  L16():
    p8 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r17 = dyn fsub7(">", "&gt;", p8);
    check L17() else D17();
  D17():
    deopt 61 [r17];
  L17():
    st x = r17;
    fsub8 = ldf fsub;
    check L18() else D18();
  D18():
    deopt 64 [];
  L18():
    p9 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r19 = dyn fsub8("\"\\{\"", "\"{\"", p9);
    check L19() else D19();
  D19():
    deopt 68 [r19];
  L19():
    st x = r19;
    fsub9 = ldf fsub;
    check L20() else D20();
  D20():
    deopt 71 [];
  L20():
    p10 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r21 = dyn fsub9("\"", "&quot;", p10);
    check L21() else D21();
  D21():
    deopt 75 [r21];
  L21():
    st x = r21;
    x23 = ld x;
    check L22() else D22();
  D22():
    deopt 77 [x23];
  L22():
    x24 = force? x23;
    checkMissing(x24);
    popenv;
    return x24;
  }
}