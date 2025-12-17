fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.table.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg rev:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg attr:cls, reg r8:V, reg p:p(V +), reg r10:V, reg rev1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg attr1:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg array:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg x7:*, reg x8:V, reg c1:cls, reg r18:V, reg p2:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg lengths:cls, reg xrv:*, reg xrv1:V, reg p3:p(V +), reg r23:V, reg lengths1:cls, reg xcv:*, reg xcv1:V, reg p4:p(V +), reg r25:V, reg c2:cls, reg r26:V, reg p5:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg xrv2:*, reg xrv3:V, reg xcv2:*, reg xcv3:V, reg c3:cls, reg r30:V, reg p6:p(V +), reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg xrv4:*, reg xrv5:V, reg length:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg xcv4:*, reg xcv5:V, reg length1:cls, reg r38:V, reg aperm:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg rev2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg nrv:*, reg nrv1:V, reg r44:I, reg p8:p(V +), reg r46:V, reg rev3:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg r48:V, reg ncv:*, reg ncv1:V, reg r49:I, reg nrv2:*, reg nrv3:V, reg r50:V, reg p9:p(V +), reg r52:V, reg c4:cls, reg r53:V, reg p10:p(V +), reg r55:V, reg l:*, reg class__:cls, reg r56:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>, "ftable");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    rev = ldf rev;
    check L13() else D4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "ftable", FALSE);
    check L8() else D1();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L8():
    goto L0(r2);
  L10():
    r4 = dyn stop("'x' must be an \"ftable\" object");
    check L11() else D3();
  L13():
    p = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r8 = dyn attr(x4, "row.vars");
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym x>, "row.vars");
      goto L0(r6);
    };
    r10 = dyn rev(p);
    check L14() else D5();
  D3():
    deopt 12 [r4];
  D5():
    deopt 18 [r10];
  L11():
    goto L2();
  L14():
    st xrv = r10;
    rev1 = ldf rev;
    check L15() else D6();
  D6():
    deopt 21 [];
  L15():
    p1 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr1 = ldf attr in base;
      r13 = dyn attr1(x6, "col.vars");
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym x>, "col.vars");
      goto L0(r11);
    };
    r15 = dyn rev1(p1);
    check L16() else D7();
  D7():
    deopt 23 [r15];
  L16():
    st xcv = r15;
    array = ldf array;
    check L17() else D8();
  D8():
    deopt 26 [];
  L17():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c1 = ldf c in base;
      r18 = dyn c1(x8);
      goto L0(r18);
    L2():
      r16 = dyn base3(<sym x>);
      goto L0(r16);
    };
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      lengths = ldf lengths;
      p3 = prom<V +>{
        xrv = ld xrv;
        xrv1 = force? xrv;
        checkMissing(xrv1);
        return xrv1;
      };
      r23 = dyn lengths(p3);
      lengths1 = ldf lengths;
      p4 = prom<V +>{
        xcv = ld xcv;
        xcv1 = force? xcv;
        checkMissing(xcv1);
        return xcv1;
      };
      r25 = dyn lengths1(p4);
      c2 = ldf c in base;
      r26 = dyn c2(r23, r25);
      goto L0(r26);
    L2():
      r20 = dyn base4(<lang lengths(xrv)>, <lang lengths(xcv)>);
      goto L0(r20);
    };
    p6 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      xrv2 = ld xrv;
      xrv3 = force? xrv2;
      checkMissing(xrv3);
      xcv2 = ld xcv;
      xcv3 = force? xcv2;
      checkMissing(xcv3);
      c3 = ldf c in base;
      r30 = dyn c3(xrv3, xcv3);
      goto L0(r30);
    L2():
      r28 = dyn base5(<sym xrv>, <sym xcv>);
      goto L0(r28);
    };
    r32 = dyn array[data, dim, dimnames](p2, p5, p6);
    check L18() else D9();
  D9():
    deopt 33 [r32];
  L18():
    st x = r32;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L19() else L20();
  L3(r34):
    st nrv = r34;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L23() else L24();
  L19():
    xrv4 = ld xrv;
    check L21() else D10();
  L20():
    r33 = dyn base6(<sym xrv>);
    goto L3(r33);
  D10():
    deopt 37 [xrv4];
  L4(r37):
    st ncv = r37;
    aperm = ldf aperm;
    check L27() else D14();
  L21():
    xrv5 = force? xrv4;
    checkMissing(xrv5);
    length = ldf length in base;
    r35 = dyn length(xrv5);
    check L22() else D11();
  L23():
    xcv4 = ld xcv;
    check L25() else D12();
  L24():
    r36 = dyn base7(<sym xcv>);
    goto L4(r36);
  D11():
    deopt 40 [r35];
  D12():
    deopt 44 [xcv4];
  D14():
    deopt 50 [];
  L22():
    goto L3(r35);
  L25():
    xcv5 = force? xcv4;
    checkMissing(xcv5);
    length1 = ldf length in base;
    r38 = dyn length1(xcv5);
    check L26() else D13();
  L27():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p10 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      rev2 = ldf rev;
      p8 = prom<V +>{
        sym9 = ldf seq_len;
        base9 = ldf seq_len in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r43):
        return r43;
      L1():
        nrv = ld nrv;
        nrv1 = force? nrv;
        checkMissing(nrv1);
        r44 = seq_len(nrv1);
        goto L0(r44);
      L2():
        r42 = dyn base9(<sym nrv>);
        goto L0(r42);
      };
      r46 = dyn rev2(p8);
      rev3 = ldf rev;
      p9 = prom<V +>{
        sym10 = ldf seq_len;
        base10 = ldf seq_len in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r48):
        nrv2 = ld nrv;
        nrv3 = force? nrv2;
        checkMissing(nrv3);
        r50 = `+`(r48, nrv3);
        return r50;
      L1():
        ncv = ld ncv;
        ncv1 = force? ncv;
        checkMissing(ncv1);
        r49 = seq_len(ncv1);
        goto L0(r49);
      L2():
        r47 = dyn base10(<sym ncv>);
        goto L0(r47);
      };
      r52 = dyn rev3(p9);
      c4 = ldf c in base;
      r53 = dyn c4(r46, r52);
      goto L0(r53);
    L2():
      r40 = dyn base8(<lang rev(seq_len(nrv))>, <lang rev(`+`(seq_len(ncv), nrv))>);
      goto L0(r40);
    };
    r55 = dyn aperm(p7, p10);
    check L28() else D15();
  D13():
    deopt 47 [r38];
  D15():
    deopt 53 [r55];
  L26():
    goto L4(r38);
  L28():
    st x = r55;
    l = ld x;
    class__ = ldf `class<-`;
    check L29() else D16();
  D16():
    deopt 58 ["table", l, "table"];
  L29():
    r56 = dyn class__(l, NULL, "table");
    check L30() else D17();
  D17():
    deopt 60 ["table", r56];
  L30():
    st x = r56;
    x11 = ld x;
    check L31() else D18();
  D18():
    deopt 62 [x11];
  L31():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  }
}