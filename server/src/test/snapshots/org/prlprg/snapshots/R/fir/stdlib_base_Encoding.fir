fun main() {
  () -+> V { reg r:cls, reg Encoding:cls, reg x_:*, reg x_1:V, reg p:p(V +), reg r2:V, reg l:*, reg Encoding__:cls, reg r3:V, reg x:*, reg x1:V, reg iconv:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r5:V, reg Encoding1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x_2:*, reg x_3:V, reg x4:*, reg x5:V, reg xx:*, reg xx1:V, reg c:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg x6:*, reg x7:V, reg xx2:*, reg xx3:V, reg c1:cls, reg r13:V, reg xx4:*, reg xx5:V, reg l1:*, reg Encoding__1:cls, reg r14:V, reg xb:*, reg xb1:V, reg cat:cls, reg x8:*, reg x9:V, reg p3:p(V +), reg xx6:*, reg xx7:V, reg p4:p(V +), reg xb2:*, reg xb3:V, reg p5:p(V +), reg r18:V, reg Encoding2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x_4:*, reg x_5:V, reg x10:*, reg x11:V, reg xx8:*, reg xx9:V, reg xb4:*, reg xb5:V, reg c2:cls, reg r21:V, reg p6:p(V +), reg r23:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg Ex:*, reg Ex1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg Encoding3:cls, reg x_6:*, reg x_7:V, reg p7:p(V +), reg r29:V, reg Encoding4:cls, reg x12:*, reg x13:V, reg p8:p(V +), reg r31:V, reg Encoding5:cls, reg xx10:*, reg xx11:V, reg p9:p(V +), reg r33:V, reg Encoding6:cls, reg xb6:*, reg xb7:V, reg p10:p(V +), reg r35:V, reg c3:cls, reg r36:V, reg identical:cls, reg r37:V, reg p11:p(V +), reg r39:V |
    mkenv;
    r = clos inner2501545716;
    st Encoding = r;
    st x = "fran\ufffdais";
    st `x.` = "fran\ufffdais";
    Encoding = ldf Encoding;
    check L1() else D0();
  D0():
    deopt 8 [];
  L1():
    p = prom<V +>{
      x_ = ld `x.`;
      x_1 = force? x_;
      checkMissing(x_1);
      return x_1;
    };
    r2 = dyn Encoding(p);
    check L2() else D1();
  D1():
    deopt 10 [r2];
  L2():
    l = ld x;
    Encoding__ = ldf `Encoding<-`;
    check L3() else D2();
  D2():
    deopt 14 ["latin1", l, "latin1"];
  L3():
    r3 = dyn Encoding__(l, NULL, "latin1");
    check L4() else D3();
  D3():
    deopt 16 ["latin1", r3];
  L4():
    st x = r3;
    x = ld x;
    check L5() else D4();
  D4():
    deopt 18 [x];
  L5():
    x1 = force? x;
    checkMissing(x1);
    iconv = ldf iconv;
    check L6() else D5();
  D5():
    deopt 21 [];
  L6():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r5 = dyn iconv(p1, "latin1", "UTF-8");
    check L7() else D6();
  D6():
    deopt 25 [r5];
  L7():
    st xx = r5;
    Encoding1 = ldf Encoding;
    check L8() else D7();
  D7():
    deopt 28 [];
  L8():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x_2 = ld `x.`;
      x_3 = force? x_2;
      checkMissing(x_3);
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      c = ldf c in base;
      r8 = dyn c(x_3, x5, xx1);
      goto L0(r8);
    L2():
      r6 = dyn base(<sym x.>, <sym x>, <sym xx>);
      goto L0(r6);
    };
    r10 = dyn Encoding1(p2);
    check L9() else D8();
  D8():
    deopt 30 [r10];
  L9():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L0():
    xx4 = ld xx;
    check L15() else D12();
  L10():
    x6 = ld x;
    check L12() else D9();
  L11():
    r11 = dyn base1(<sym x>, <sym xx>);
    goto L0();
  D9():
    deopt 33 [x6];
  D12():
    deopt 39 [xx4];
  L12():
    x7 = force? x6;
    checkMissing(x7);
    xx2 = ld xx;
    check L13() else D10();
  L15():
    xx5 = force? xx4;
    checkMissing(xx5);
    st xb = xx5;
    l1 = ld xb;
    Encoding__1 = ldf `Encoding<-`;
    check L16() else D13();
  D10():
    deopt 35 [xx2];
  D13():
    deopt 45 ["bytes", l1, "bytes"];
  L13():
    xx3 = force? xx2;
    checkMissing(xx3);
    c1 = ldf c in base;
    r13 = dyn c1(x7, xx3);
    check L14() else D11();
  L16():
    r14 = dyn Encoding__1(l1, NULL, "bytes");
    check L17() else D14();
  D11():
    deopt 38 [r13];
  D14():
    deopt 47 ["bytes", r14];
  L14():
    goto L0();
  L17():
    st xb = r14;
    xb = ld xb;
    check L18() else D15();
  D15():
    deopt 49 [xb];
  L18():
    xb1 = force? xb;
    checkMissing(xb1);
    cat = ldf cat;
    check L19() else D16();
  D16():
    deopt 52 [];
  L19():
    p3 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    p4 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    p5 = prom<V +>{
      xb2 = ld xb;
      xb3 = force? xb2;
      checkMissing(xb3);
      return xb3;
    };
    r18 = dyn cat[, , , , , , , sep]("x = ", p3, ", xx = ", p4, ", xb = ", p5, "\n", "");
    check L20() else D17();
  D17():
    deopt 62 [r18];
  L20():
    Encoding2 = ldf Encoding;
    check L21() else D18();
  D18():
    deopt 64 [];
  L21():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      x_4 = ld `x.`;
      x_5 = force? x_4;
      checkMissing(x_5);
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      xb4 = ld xb;
      xb5 = force? xb4;
      checkMissing(xb5);
      c2 = ldf c in base;
      r21 = dyn c2(x_5, x11, xx9, xb5);
      goto L0(r21);
    L2():
      r19 = dyn base2(<sym x.>, <sym x>, <sym xx>, <sym xb>);
      goto L0(r19);
    };
    r23 = dyn Encoding2(p6);
    check L22() else D19();
  D19():
    deopt 66 [r23];
  L22():
    st Ex = r23;
    stopifnot = ldf stopifnot;
    check L23() else D20();
  D20():
    deopt 69 [];
  L23():
    p11 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r25):
      return r25;
    L2():
      Ex = ld Ex;
      Ex1 = force? Ex;
      checkMissing(Ex1);
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r24 = dyn base3(<sym Ex>, <lang c(Encoding(x.), Encoding(x), Encoding(xx), Encoding(xb))>);
      goto L0(r24);
    L1(r27):
      identical = ldf identical in base;
      r37 = dyn identical(Ex1, r27, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r37);
    L4():
      Encoding3 = ldf Encoding;
      p7 = prom<V +>{
        x_6 = ld `x.`;
        x_7 = force? x_6;
        checkMissing(x_7);
        return x_7;
      };
      r29 = dyn Encoding3(p7);
      Encoding4 = ldf Encoding;
      p8 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        return x13;
      };
      r31 = dyn Encoding4(p8);
      Encoding5 = ldf Encoding;
      p9 = prom<V +>{
        xx10 = ld xx;
        xx11 = force? xx10;
        checkMissing(xx11);
        return xx11;
      };
      r33 = dyn Encoding5(p9);
      Encoding6 = ldf Encoding;
      p10 = prom<V +>{
        xb6 = ld xb;
        xb7 = force? xb6;
        checkMissing(xb7);
        return xb7;
      };
      r35 = dyn Encoding6(p10);
      c3 = ldf c in base;
      r36 = dyn c3(r29, r31, r33, r35);
      goto L1(r36);
    L5():
      r26 = dyn base4(<lang Encoding(x.)>, <lang Encoding(x)>, <lang Encoding(xx)>, <lang Encoding(xb)>);
      goto L1(r26);
    };
    r39 = dyn stopifnot(p11);
    check L24() else D21();
  D21():
    deopt 71 [r39];
  L24():
    popenv;
    return r39;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg Encoding:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang Encoding(x)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    Encoding = ldf Encoding in base;
    r2 = dyn Encoding(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}