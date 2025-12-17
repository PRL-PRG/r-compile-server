fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.trim_common_leading_whitespace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg y:*, reg y1:V, reg nchar:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg n:*, reg n1:V, reg r7:V, reg any:cls, reg r8:V, reg c:L, reg x3:*, reg x4:V, reg grep:cls, reg y2:*, reg y3:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg i:*, reg i1:V, reg length:cls, reg r15:V, reg c1:L, reg vapply:cls, reg strsplit:cls, reg y4:*, reg y5:V, reg c2:L, reg y7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg __:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:cls, reg p4:p(V +), reg r22:V, reg paste0:cls, reg strrep:cls, reg wids:*, reg wids1:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg substring:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i4:*, reg i5:V, reg __1:cls, reg r26:V, reg p7:p(V +), reg n2:*, reg n3:V, reg c4:L, reg n5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i6:*, reg i7:V, reg __2:cls, reg r28:V, reg r29:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg l:*, reg c5:L, reg r35:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i8:*, reg i9:V, reg ___:cls, reg r38:V, reg wids2:*, reg wids3:V, reg l3:*, reg c6:L, reg wids5:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg wids7:V, reg dx9:V, reg i10:*, reg i11:V, reg ___1:cls, reg r39:V, reg substring1:cls, reg x9:*, reg x10:V, reg p10:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg n6:*, reg n7:V, reg min:cls, reg r43:V, reg r44:V, reg p11:p(V +), reg r46:V |
    mkenv;
    st x = x;
    sub = ldf sub;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn sub("^([ \t]*).*", "\\1", p);
    check L10() else D1();
  D1():
    deopt 5 [r1];
  L10():
    st y = r1;
    sym = ldf nchar;
    base = ldf nchar in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r3):
    st n = r3;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L11():
    y = ld y;
    check L13() else D2();
  L12():
    r2 = dyn base(<sym y>);
    goto L0(r2);
  D2():
    deopt 9 [y];
  L1(r6):
    c = `as.logical`(r6);
    if c then L19() else L2();
  L13():
    y1 = force? y;
    checkMissing(y1);
    nchar = ldf nchar in base;
    r4 = dyn nchar(y1, "chars", FALSE, NA_LGL);
    check L14() else D3();
  L15():
    n = ld n;
    check L17() else D4();
  L16():
    r5 = dyn base1(<lang `==`(n, 0.0)>);
    goto L1(r5);
  D3():
    deopt 15 [r4];
  D4():
    deopt 19 [n];
  L2():
    grep = ldf grep;
    check L23() else D7();
  L14():
    goto L0(r4);
  L17():
    n1 = force? n;
    checkMissing(n1);
    r7 = `==`(n1, 0.0);
    any = ldf any in base;
    r8 = dyn any(r7);
    check L18() else D5();
  L19():
    x3 = ld x;
    check L20() else D6();
  D5():
    deopt 24 [r8];
  D6():
    deopt 25 [x3];
  D7():
    deopt 31 [];
  L18():
    goto L1(r8);
  L20():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L23():
    p1 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r12 = dyn grep[, , fixed]("\t", p1, TRUE);
    check L24() else D8();
  D8():
    deopt 36 [r12];
  L24():
    st i = r12;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L4(r14):
    c1 = `as.logical`(r14);
    if c1 then L29() else L5();
  L25():
    i = ld i;
    check L27() else D9();
  L26():
    r13 = dyn base2(<sym i>);
    goto L4(r13);
  D9():
    deopt 40 [i];
  L5():
    goto L8();
  L8():
    substring1 = ldf substring;
    check L44() else D18();
  L27():
    i1 = force? i;
    checkMissing(i1);
    length = ldf length in base;
    r15 = dyn length(i1);
    check L28() else D10();
  L29():
    vapply = ldf vapply;
    check L30() else D11();
  D10():
    deopt 43 [r15];
  D11():
    deopt 45 [];
  D18():
    deopt 71 [];
  L28():
    goto L4(r15);
  L30():
    p3 = prom<V +>{
      strsplit = ldf strsplit;
      p2 = prom<V +>{
        y4 = ld y;
        y5 = force? y4;
        checkMissing(y5);
        c2 = `is.object`(y5);
        if c2 then L1() else L2(y5);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", y5);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(y7):
        i2 = ld i;
        i3 = force? i2;
        __ = ldf `[` in base;
        r16 = dyn __(y7, i3);
        goto L0(r16);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r18 = dyn strsplit(p2, "");
      return r18;
    };
    p4 = prom<V +>{
      r20 = clos inner3708401697;
      return r20;
    };
    r22 = dyn vapply(p3, p4, 0.0);
    check L31() else D12();
  L44():
    p10 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p11 = prom<V +>{
      sym3 = ldf min;
      base3 = ldf min in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r42):
      r44 = `+`(r42, 1);
      return r44;
    L1():
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      min = ldf min in base;
      r43 = dyn min(n7);
      goto L0(r43);
    L2():
      r41 = dyn base3(<sym n>);
      goto L0(r41);
    };
    r46 = dyn substring1(p10, p11);
    check L45() else D19();
  D12():
    deopt 49 [r22];
  D19():
    deopt 74 [r46];
  L31():
    st wids = r22;
    paste0 = ldf paste0;
    check L32() else D13();
  L45():
    popenv;
    return r46;
  D13():
    deopt 52 [];
  L32():
    p6 = prom<V +>{
      strrep = ldf strrep;
      p5 = prom<V +>{
        wids = ld wids;
        wids1 = force? wids;
        checkMissing(wids1);
        return wids1;
      };
      r24 = dyn strrep(" ", p5);
      return r24;
    };
    p9 = prom<V +>{
      substring = ldf substring;
      p7 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c3 = `is.object`(x6);
        if c3 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        i4 = ld i;
        i5 = force? i4;
        __1 = ldf `[` in base;
        r26 = dyn __1(x8, i5);
        goto L0(r26);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p8 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        c4 = `is.object`(n3);
        if c4 then L1() else L2(n3);
      L0(dx5):
        r29 = `+`(dx5, 1);
        return r29;
      L1():
        dr4 = tryDispatchBuiltin.1("[", n3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(n5):
        i6 = ld i;
        i7 = force? i6;
        __2 = ldf `[` in base;
        r28 = dyn __2(n5, i7);
        goto L0(r28);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r31 = dyn substring(p7, p8);
      return r31;
    };
    r33 = dyn paste0(p6, p9);
    check L33() else D14();
  D14():
    deopt 55 [r33];
  L33():
    l = ld x;
    c5 = `is.object`(l);
    if c5 then L34() else L35(r33, l);
  L6(dx7):
    st x = dx7;
    wids2 = ld wids;
    check L38() else D16();
  L34():
    dr6 = tryDispatchBuiltin.0("[<-", l, r33);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L36() else L35(r33, dr6);
  L35(r35, l2):
    i8 = ld i;
    check L37() else D15();
  D15():
    deopt 57 [r35, l2, r33, i8];
  D16():
    deopt 61 [wids2];
  L36():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L37():
    i9 = force? i8;
    ___ = ldf `[<-` in base;
    r38 = dyn ___(l2, r33, i9);
    goto L6(r38);
  L38():
    wids3 = force? wids2;
    checkMissing(wids3);
    l3 = ld n;
    c6 = `is.object`(l3);
    if c6 then L39() else L40(wids3, l3);
  L7(wids7, dx9):
    st n = dx9;
    goto L8();
  L39():
    dr8 = tryDispatchBuiltin.0("[<-", l3, wids3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L41() else L40(wids3, dr8);
  L40(wids5, l5):
    i10 = ld i;
    check L42() else D17();
  D17():
    deopt 64 [wids5, l5, wids3, i10];
  L41():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(wids3, dx8);
  L42():
    i11 = force? i10;
    ___1 = ldf `[<-` in base;
    r39 = dyn ___1(l5, wids3, i11);
    goto L7(wids5, r39);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg which:cls, reg e1:*, reg e2:V, reg r:V, reg p:p(V +), reg r2:V, reg diff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg p1:*, reg p2:V, reg c:cls, reg r5:V, reg p3:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg d:*, reg d1:V, reg r10:V, reg d2:*, reg d3:V, reg __:cls, reg r11:V, reg r12:V, reg sum:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg r18:V, reg e3:*, reg e4:V, reg length:cls, reg r19:V, reg r20:V, reg p4:*, reg p5:V, reg c1:L, reg r22:V, reg p7:V, reg dr:V, reg dc:L, reg dx:V, reg r24:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg p10:V, reg r29:V, reg p11:*, reg p12:V, reg length1:cls, reg r30:V, reg __1:cls, reg r31:V, reg r32:V |
    mkenv;
    st e = e;
    which = ldf which;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      r = `==`(e2, "\t");
      return r;
    };
    r2 = dyn which(p);
    check L5() else D1();
  D1():
    deopt 3 [r2];
  L5():
    st p = r2;
    diff = ldf diff;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      c = ldf c in base;
      r5 = dyn c(0.0, p2);
      goto L0(r5);
    L2():
      r3 = dyn base(0.0, <sym p>);
      goto L0(r3);
    };
    r7 = dyn diff(p3);
    check L7() else D3();
  D3():
    deopt 8 [r7];
  L7():
    st d = r7;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L0(r9):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L8():
    d = ld d;
    check L10() else D4();
  L9():
    r8 = dyn base1(<lang `-`(`+`(d, 8.0), `(`(`%%`(d, 8.0)))>);
    goto L0(r8);
  D4():
    deopt 12 [d];
  L1(r17, r18):
    r20 = `+`(r17, r18);
    p4 = ld p;
    check L18() else D10();
  L10():
    d1 = force? d;
    checkMissing(d1);
    r10 = `+`(d1, 8.0);
    d2 = ld d;
    check L11() else D5();
  L14():
    e3 = ld e;
    check L16() else D8();
  L15():
    r16 = dyn base2(<sym e>);
    goto L1(r9, r16);
  D5():
    deopt 16 [r10, d2];
  D8():
    deopt 25 [r9, e3];
  D10():
    deopt 29 [r20, p4];
  L11():
    d3 = force? d2;
    checkMissing(d3);
    __ = ldf `%%` in base;
    r11 = dyn __(d3, 8.0);
    check L12() else D6();
  L16():
    e4 = force? e3;
    checkMissing(e4);
    length = ldf length in base;
    r19 = dyn length(e4);
    check L17() else D9();
  L18():
    p5 = force? p4;
    checkMissing(p5);
    c1 = `is.object`(p5);
    if c1 then L19() else L20(r20, p5);
  D6():
    deopt 20 [r10, r11];
  D9():
    deopt 28 [r9, r19];
  L2(r24, dx1):
    r32 = `-`(r24, dx1);
    popenv;
    return r32;
  L12():
    r12 = `-`(r10, r11);
    sum = ldf sum in base;
    r13 = dyn sum(r12);
    check L13() else D7();
  L17():
    goto L1(r9, r19);
  L19():
    dr = tryDispatchBuiltin.1("[", p5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(r20, dr);
  L20(r22, p7):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  D7():
    deopt 23 [r13];
  L3(r28, p10, r29):
    __1 = ldf `[` in base;
    r31 = dyn __1(p10, r29);
    goto L2(r28, r31);
  L13():
    goto L0(r13);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(r20, dx);
  L22():
    p11 = ld p;
    check L24() else D11();
  L23():
    r27 = dyn base3(<sym p>);
    goto L3(r22, p7, r27);
  D11():
    deopt 33 [r22, p7, p11];
  L24():
    p12 = force? p11;
    checkMissing(p12);
    length1 = ldf length in base;
    r30 = dyn length1(p12);
    check L25() else D12();
  D12():
    deopt 36 [r22, p7, r30];
  L25():
    goto L3(r22, p7, r30);
  }
}