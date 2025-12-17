fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_format_title` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg gsub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg gsub1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg gsub2:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r5:V, reg gsub3:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r7:V, reg gsub4:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r9:V, reg trimws:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r11:V |
    mkenv;
    st x = x;
    gsub = ldf gsub;
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
    r1 = dyn gsub("(``|'')", "\"", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st x = r1;
    gsub1 = ldf gsub;
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
    r3 = dyn gsub1[, , , fixed]("`", "'", p1, TRUE);
    check L3() else D3();
  D3():
    deopt 14 [r3];
  L3():
    st x = r3;
    gsub2 = ldf gsub;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn gsub2("([[:alnum:]])--([[:alnum:]])", "\\1-\\2", p2);
    check L5() else D5();
  D5():
    deopt 21 [r5];
  L5():
    st x = r5;
    gsub3 = ldf gsub;
    check L6() else D6();
  D6():
    deopt 24 [];
  L6():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn gsub3[, , , fixed]("\\&", "&", p3, TRUE);
    check L7() else D7();
  D7():
    deopt 30 [r7];
  L7():
    st x = r7;
    gsub4 = ldf gsub;
    check L8() else D8();
  D8():
    deopt 33 [];
  L8():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn gsub4[, , , fixed]("---", "--", p4, TRUE);
    check L9() else D9();
  D9():
    deopt 39 [r9];
  L9():
    st x = r9;
    trimws = ldf trimws;
    check L10() else D10();
  D10():
    deopt 42 [];
  L10():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r11 = dyn trimws(p5);
    check L11() else D11();
  D11():
    deopt 44 [r11];
  L11():
    popenv;
    return r11;
  }
}