fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg validUTF8:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg validEnc:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r7:V, reg l:*, reg Encoding__:cls, reg r8:V, reg validEnc1:cls, reg x4:*, reg x5:V, reg p2:p(V +), reg r10:V, reg x6:*, reg x7:V, reg l1:*, reg c1:L, reg r13:S, reg l4:*, reg r14:S, reg l5:*, reg dr:V, reg dc:L, reg dx:V, reg r17:S, reg l7:*, reg r18:S, reg dx1:V, reg validEnc2:cls, reg G:*, reg G1:V, reg p3:p(V +), reg r20:V, reg r21:V, reg __:cls, reg r22:V, reg Encoding__1:cls, reg r23:V, reg c2:L, reg r25:S, reg l9:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg validEnc3:cls, reg G2:*, reg G3:V, reg p4:p(V +), reg r29:V, reg r30:V, reg ___:cls, reg r31:V, reg try:cls, reg substr:cls, reg x8:*, reg x9:V, reg p5:p(V +), reg r33:V, reg p6:p(V +), reg r35:V, reg try1:cls, reg substr1:cls, reg G4:*, reg G5:V, reg p7:p(V +), reg r37:V, reg p8:p(V +), reg r39:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r40:V, reg G6:*, reg G7:V, reg nchar:cls, reg r42:V, reg all_equal:cls, reg validEnc4:cls, reg x10:*, reg x11:V, reg p9:p(V +), reg r44:V, reg p10:p(V +), reg validEnc5:cls, reg G8:*, reg G9:V, reg p11:p(V +), reg r47:V, reg p12:p(V +), reg r49:V |
    mkenv;
    r = clos inner2501545716;
    st validUTF8 = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    st x = r2;
    validUTF8 = ldf validUTF8;
    check L7() else D1();
  L4():
    c = ldf c in base;
    r3 = dyn c("Jetz", "no", "chli", "z\u00fcrit\u00fc\u00fctsch:", "(noch", "ein", "bi\u00dfchen", "Z\u00fc", "deutsch)", "\ufffd\ufffd\ufffd\ufffd\ufffd");
    check L6() else D0();
  L5():
    r1 = dyn base("Jetz", "no", "chli", "z\u00fcrit\u00fc\u00fctsch:", "(noch", "ein", "bi\u00dfchen", "Z\u00fc", "deutsch)", "\ufffd\ufffd\ufffd\ufffd\ufffd");
    goto L0(r1);
  D0():
    deopt 16 [r3];
  D1():
    deopt 19 [];
  L6():
    goto L0(r3);
  L7():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn validUTF8(p);
    check L8() else D2();
  D2():
    deopt 21 [r5];
  L8():
    validEnc = ldf validEnc;
    check L9() else D3();
  D3():
    deopt 23 [];
  L9():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r7 = dyn validEnc(p1);
    check L10() else D4();
  D4():
    deopt 25 [r7];
  L10():
    l = ld x;
    Encoding__ = ldf `Encoding<-`;
    check L11() else D5();
  D5():
    deopt 29 ["UTF-8", l, "UTF-8"];
  L11():
    r8 = dyn Encoding__(l, NULL, "UTF-8");
    check L12() else D6();
  D6():
    deopt 31 ["UTF-8", r8];
  L12():
    st x = r8;
    validEnc1 = ldf validEnc;
    check L13() else D7();
  D7():
    deopt 34 [];
  L13():
    p2 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r10 = dyn validEnc1(p2);
    check L14() else D8();
  D8():
    deopt 36 [r10];
  L14():
    x6 = ld x;
    check L15() else D9();
  D9():
    deopt 37 [x6];
  L15():
    x7 = force? x6;
    checkMissing(x7);
    st G = x7;
    l1 = ld G;
    c1 = `is.object`(l1);
    if c1 then L16() else L17("unknown", l1, "unknown", l1);
  L1(r17, l7, r18, dx1):
    Encoding__1 = ldf `Encoding<-`;
    check L21() else D12();
  L16():
    dr = tryDispatchBuiltin.1("[", l1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17("unknown", l1, "unknown", dr);
  L17(r13, l4, r14, l5):
    validEnc2 = ldf validEnc;
    check L19() else D10();
  D10():
    deopt 45 [r13, l4, r14, l5];
  D12():
    deopt 51 [r17, l7, dx1, r18];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1("unknown", l1, "unknown", dx);
  L19():
    p3 = prom<V +>{
      G = ld G;
      G1 = force? G;
      checkMissing(G1);
      return G1;
    };
    r20 = dyn validEnc2(p3);
    check L20() else D11();
  L21():
    r23 = dyn Encoding__1(dx1, NULL, r18);
    check L22() else D13();
  D11():
    deopt 47 [r13, l4, r14, l5, r20];
  D13():
    deopt 53 [r17, l7, r23];
  L20():
    r21 = `!`(r20);
    __ = ldf `[` in base;
    r22 = dyn __(l5, r21);
    goto L1(r13, l4, r14, r22);
  L22():
    c2 = `is.object`(l7);
    if c2 then L23() else L24(r17, l7);
  L2(dx3):
    st G = dx3;
    try = ldf try;
    check L28() else D16();
  L23():
    dr2 = tryDispatchBuiltin.0("[<-", l7, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(r17, dr2);
  L24(r25, l9):
    validEnc3 = ldf validEnc;
    check L26() else D14();
  D14():
    deopt 55 [r25, l9, r23];
  D16():
    deopt 62 [];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L26():
    p4 = prom<V +>{
      G2 = ld G;
      G3 = force? G2;
      checkMissing(G3);
      return G3;
    };
    r29 = dyn validEnc3(p4);
    check L27() else D15();
  L28():
    p6 = prom<V +>{
      substr = ldf substr;
      p5 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r33 = dyn substr(p5, 1.0, 1.0);
      return r33;
    };
    r35 = dyn try(p6);
    check L29() else D17();
  D15():
    deopt 57 [r25, l9, r23, r29];
  D17():
    deopt 64 [r35];
  L27():
    r30 = `!`(r29);
    ___ = ldf `[<-` in base;
    r31 = dyn ___(l9, r23, r30);
    goto L2(r31);
  L29():
    try1 = ldf try;
    check L30() else D18();
  D18():
    deopt 66 [];
  L30():
    p8 = prom<V +>{
      substr1 = ldf substr;
      p7 = prom<V +>{
        G4 = ld G;
        G5 = force? G4;
        checkMissing(G5);
        return G5;
      };
      r37 = dyn substr1(p7, 1.0, 1.0);
      return r37;
    };
    r39 = dyn try1(p8);
    check L31() else D19();
  D19():
    deopt 68 [r39];
  L31():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L3():
    all_equal = ldf `all.equal`;
    check L36() else D22();
  L32():
    G6 = ld G;
    check L34() else D20();
  L33():
    r40 = dyn base1(<sym G>);
    goto L3();
  D20():
    deopt 71 [G6];
  D22():
    deopt 79 [];
  L34():
    G7 = force? G6;
    checkMissing(G7);
    nchar = ldf nchar in base;
    r42 = dyn nchar(G7, "chars", FALSE, NA_LGL);
    check L35() else D21();
  L36():
    p10 = prom<V +>{
      validEnc4 = ldf validEnc;
      p9 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      r44 = dyn validEnc4(p9);
      return r44;
    };
    p12 = prom<V +>{
      validEnc5 = ldf validEnc;
      p11 = prom<V +>{
        G8 = ld G;
        G9 = force? G8;
        checkMissing(G9);
        return G9;
      };
      r47 = dyn validEnc5(p11);
      return r47;
    };
    r49 = dyn all_equal(p10, p12);
    check L37() else D23();
  D21():
    deopt 77 [r42];
  D23():
    deopt 82 [r49];
  L35():
    goto L3();
  L37():
    popenv;
    return r49;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg validUTF8:cls, reg r2:V |
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
    r = dyn base(<lang validUTF8(x)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    validUTF8 = ldf validUTF8 in base;
    r2 = dyn validUTF8(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}