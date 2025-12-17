fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1772720164;
    st `.Diag` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1772720164(nms, sparse) {
  (reg nms:*, reg sparse:*) -+> V { var nms:*, var sparse:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg nms1:*, reg nms2:V, reg length:cls, reg r4:V, reg as_integer:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg n:*, reg n1:V, reg n2:*, reg n3:V, reg c:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg nms3:*, reg nms4:V, reg nms5:*, reg nms6:V, reg list:cls, reg r11:V, reg sparse1:*, reg sparse2:V, reg c1:L, reg suppressPackageStartupMessages:cls, reg requireNamespace:cls, reg r12:V, reg p:p(V +), reg r14:V, reg r15:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg __:cls, reg r20:V, reg r21:cls, reg d:*, reg d1:V, reg p2:p(V +), reg dn:*, reg dn1:V, reg p3:p(V +), reg r24:V, reg array:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg numeric:cls, reg n4:*, reg n5:V, reg p4:p(V +), reg r32:V, reg c3:cls, reg r33:V, reg n6:*, reg n7:V, reg r34:V, reg rep_int:cls, reg r35:V, reg c4:cls, reg r36:V, reg p5:p(V +), reg d2:*, reg d3:V, reg p6:p(V +), reg dn2:*, reg dn3:V, reg p7:p(V +), reg r40:V |
    mkenv;
    st nms = nms;
    st sparse = sparse;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st n = r1;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L7():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L8():
    r = dyn base(<lang length(nms)>);
    goto L0(r);
  L1(r3):
    as_integer = ldf `as.integer` in base;
    r5 = dyn as_integer(r3);
    check L13() else D2();
  L2(r7):
    st d = r7;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L9():
    nms1 = ld nms;
    check L11() else D0();
  L10():
    r2 = dyn base1(<sym nms>);
    goto L1(r2);
  L14():
    n = ld n;
    check L16() else D3();
  L15():
    r6 = dyn base2(<sym n>, <sym n>);
    goto L2(r6);
  D0():
    deopt 4 [nms1];
  D2():
    deopt 9 [r5];
  D3():
    deopt 13 [n];
  L3(r10):
    st dn = r10;
    sparse1 = ld sparse;
    check L24() else D9();
  L11():
    nms2 = force? nms1;
    checkMissing(nms2);
    length = ldf length in base;
    r4 = dyn length(nms2);
    check L12() else D1();
  L13():
    goto L0(r5);
  L16():
    n1 = force? n;
    checkMissing(n1);
    n2 = ld n;
    check L17() else D4();
  L19():
    nms3 = ld nms;
    check L21() else D6();
  L20():
    r9 = dyn base3(<sym nms>, <sym nms>);
    goto L3(r9);
  D1():
    deopt 7 [r4];
  D4():
    deopt 15 [n2];
  D6():
    deopt 22 [nms3];
  D9():
    deopt 29 [sparse1];
  L12():
    goto L1(r4);
  L17():
    n3 = force? n2;
    checkMissing(n3);
    c = ldf c in base;
    r8 = dyn c(n1, n3);
    check L18() else D5();
  L21():
    nms4 = force? nms3;
    checkMissing(nms4);
    nms5 = ld nms;
    check L22() else D7();
  L24():
    sparse2 = force? sparse1;
    checkMissing(sparse2);
    c1 = `as.logical`(sparse2);
    if c1 then L25() else L4();
  D5():
    deopt 18 [r8];
  D7():
    deopt 24 [nms5];
  L4():
    array = ldf array;
    check L36() else D17();
  L18():
    goto L2(r8);
  L22():
    nms6 = force? nms5;
    checkMissing(nms6);
    list = ldf list in base;
    r11 = dyn list(nms4, nms6);
    check L23() else D8();
  L25():
    suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
    check L26() else D10();
  D8():
    deopt 27 [r11];
  D10():
    deopt 32 [];
  D17():
    deopt 59 [];
  L23():
    goto L3(r11);
  L26():
    p = prom<V +>{
      requireNamespace = ldf requireNamespace;
      r12 = dyn requireNamespace("Matrix");
      return r12;
    };
    r14 = dyn suppressPackageStartupMessages(p);
    check L27() else D11();
  L36():
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r26):
      return r26;
    L3():
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L4():
      r25 = dyn base4(<lang rep.int(c(1.0, numeric(n)), `-`(n, 1))>, 1.0);
      goto L0(r25);
    L1(r28):
      c4 = ldf c in base;
      r36 = dyn c4(r28, 1.0);
      goto L0(r36);
    L5():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L7() else L8();
    L6():
      r27 = dyn base5(<lang c(1.0, numeric(n))>, <lang `-`(n, 1)>);
      goto L1(r27);
    L2(r30):
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r34 = `-`(n7, 1);
      rep_int = ldf `rep.int` in base;
      r35 = dyn rep_int(r30, r34);
      goto L1(r35);
    L7():
      numeric = ldf numeric;
      p4 = prom<V +>{
        n4 = ld n;
        n5 = force? n4;
        checkMissing(n5);
        return n5;
      };
      r32 = dyn numeric(p4);
      c3 = ldf c in base;
      r33 = dyn c3(1.0, r32);
      goto L2(r33);
    L8():
      r29 = dyn base6(1.0, <lang numeric(n)>);
      goto L2(r29);
    };
    p6 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    p7 = prom<V +>{
      dn2 = ld dn;
      dn3 = force? dn2;
      checkMissing(dn3);
      return dn3;
    };
    r40 = dyn array(p5, p6, p7);
    check L37() else D18();
  D11():
    deopt 34 [r14];
  D18():
    deopt 63 [r40];
  L27():
    r15 = `!`(r14);
    c2 = `as.logical`(r15);
    if c2 then L28() else L5();
  L37():
    popenv;
    return r40;
  L5():
    goto L6();
  L6():
    __ = ldf `::`;
    check L32() else D14();
  L28():
    stop = ldf stop;
    check L29() else D12();
  D12():
    deopt 37 [];
  D14():
    deopt 45 [];
  L29():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      r16 = dyn gettextf("%s needs package 'Matrix' correctly installed", "contr*(.., sparse=TRUE)");
      return r16;
    };
    r18 = dyn stop[, domain](p1, NA_LGL);
    check L30() else D13();
  L32():
    r20 = dyn __("methods", "new");
    check L33() else D15();
  D13():
    deopt 41 [r18];
  D15():
    deopt 48 [r20];
  L30():
    goto L6();
  L33():
    checkFun.0(r20);
    r21 = r20 as cls;
    p2 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p3 = prom<V +>{
      dn = ld dn;
      dn1 = force? dn;
      checkMissing(dn1);
      return dn1;
    };
    r24 = dyn r21[, diag, Dim, Dimnames]("ddiMatrix", "U", p2, p3);
    check L34() else D16();
  D16():
    deopt 57 [r24];
  L34():
    popenv;
    return r24;
  }
}