fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1236783023;
    st makeRegexpSafe = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg gsub:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg gsub1:cls, reg s3:*, reg s4:V, reg p1:p(V +), reg r3:V, reg gsub2:cls, reg s5:*, reg s6:V, reg p2:p(V +), reg r5:V, reg gsub3:cls, reg s7:*, reg s8:V, reg p3:p(V +), reg r7:V, reg gsub4:cls, reg s9:*, reg s10:V, reg p4:p(V +), reg r9:V, reg gsub5:cls, reg s11:*, reg s12:V, reg p5:p(V +), reg r11:V, reg gsub6:cls, reg s13:*, reg s14:V, reg p6:p(V +), reg r13:V, reg gsub7:cls, reg s15:*, reg s16:V, reg p7:p(V +), reg r15:V, reg gsub8:cls, reg s17:*, reg s18:V, reg p8:p(V +), reg r17:V, reg s19:*, reg s20:V |
    mkenv;
    st s = s;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn gsub[, , , fixed]("\\", "\\\\", p, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    st s = r1;
    gsub1 = ldf gsub;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r3 = dyn gsub1[, , , fixed]("(", "\\(", p1, TRUE);
    check L3() else D3();
  D3():
    deopt 16 [r3];
  L3():
    st s = r3;
    gsub2 = ldf gsub;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    p2 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r5 = dyn gsub2[, , , fixed]("*", "\\*", p2, TRUE);
    check L5() else D5();
  D5():
    deopt 25 [r5];
  L5():
    st s = r5;
    gsub3 = ldf gsub;
    check L6() else D6();
  D6():
    deopt 28 [];
  L6():
    p3 = prom<V +>{
      s7 = ld s;
      s8 = force? s7;
      checkMissing(s8);
      return s8;
    };
    r7 = dyn gsub3[, , , fixed]("+", "\\+", p3, TRUE);
    check L7() else D7();
  D7():
    deopt 34 [r7];
  L7():
    st s = r7;
    gsub4 = ldf gsub;
    check L8() else D8();
  D8():
    deopt 37 [];
  L8():
    p4 = prom<V +>{
      s9 = ld s;
      s10 = force? s9;
      checkMissing(s10);
      return s10;
    };
    r9 = dyn gsub4[, , , fixed]("?", "\\?", p4, TRUE);
    check L9() else D9();
  D9():
    deopt 43 [r9];
  L9():
    st s = r9;
    gsub5 = ldf gsub;
    check L10() else D10();
  D10():
    deopt 46 [];
  L10():
    p5 = prom<V +>{
      s11 = ld s;
      s12 = force? s11;
      checkMissing(s12);
      return s12;
    };
    r11 = dyn gsub5[, , , fixed]("[", "\\[", p5, TRUE);
    check L11() else D11();
  D11():
    deopt 52 [r11];
  L11():
    st s = r11;
    gsub6 = ldf gsub;
    check L12() else D12();
  D12():
    deopt 55 [];
  L12():
    p6 = prom<V +>{
      s13 = ld s;
      s14 = force? s13;
      checkMissing(s14);
      return s14;
    };
    r13 = dyn gsub6[, , , fixed]("{", "\\{", p6, TRUE);
    check L13() else D13();
  D13():
    deopt 61 [r13];
  L13():
    st s = r13;
    gsub7 = ldf gsub;
    check L14() else D14();
  D14():
    deopt 64 [];
  L14():
    p7 = prom<V +>{
      s15 = ld s;
      s16 = force? s15;
      checkMissing(s16);
      return s16;
    };
    r15 = dyn gsub7[, , , fixed](".", "\\.", p7, TRUE);
    check L15() else D15();
  D15():
    deopt 70 [r15];
  L15():
    st s = r15;
    gsub8 = ldf gsub;
    check L16() else D16();
  D16():
    deopt 73 [];
  L16():
    p8 = prom<V +>{
      s17 = ld s;
      s18 = force? s17;
      checkMissing(s18);
      return s18;
    };
    r17 = dyn gsub8[, , , fixed]("^", "\\^", p8, TRUE);
    check L17() else D17();
  D17():
    deopt 79 [r17];
  L17():
    st s = r17;
    s19 = ld s;
    check L18() else D18();
  D18():
    deopt 81 [s19];
  L18():
    s20 = force? s19;
    checkMissing(s20);
    popenv;
    return s20;
  }
}