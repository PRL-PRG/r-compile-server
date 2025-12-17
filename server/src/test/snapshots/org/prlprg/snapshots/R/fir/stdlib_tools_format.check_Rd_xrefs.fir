fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_Rd_xrefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg xb:*, reg xb1:V, reg length:cls, reg r4:V, reg c2:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c7:L, reg r6:V, reg xs:*, reg xs1:V, reg length1:cls, reg r7:V, reg c8:L, reg c9:V, reg c11:L, reg r8:cls, reg r9:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg unlist:cls, reg lapply:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg xb2:*, reg xb3:V, reg r14:I, reg p:p(V +), reg _fmtb:*, reg _fmtb1:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg r19:V, reg unlist1:cls, reg lapply1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg xs2:*, reg xs3:V, reg r22:I, reg p3:p(V +), reg _fmts:*, reg _fmts1:V, reg p4:p(V +), reg r25:V, reg p5:p(V +), reg r27:V, reg strwrap:cls, reg gettextf:cls, reg r28:V, reg p6:p(V +), reg r30:V, reg c12:cls, reg r31:V, reg character:cls, reg r32:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L5() else D0();
  D0():
    deopt 0 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L7() else L8(x2);
  L6(dx1):
    st xb = dx1;
    x5 = ld x;
    check L10() else D1();
  L7():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(x4):
    r = `$`(x4, <sym bad>);
    goto L6(r);
  D1():
    deopt 4 [x5];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L12() else L13(x6);
  L11(dx3):
    st xs = dx3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L12():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dr2);
  L13(x8):
    r1 = `$`(x8, <sym suspect>);
    goto L11(r1);
  L0(r3):
    c2 = `as.logical`(r3);
    if c2 then L1(c2) else L19();
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L15():
    xb = ld xb;
    check L17() else D2();
  L16():
    r2 = dyn base(<sym xb>);
    goto L0(r2);
  D2():
    deopt 10 [xb];
  L1(c3):
    c11 = `as.logical`(c3);
    if c11 then L25() else L3();
  L17():
    xb1 = force? xb;
    checkMissing(xb1);
    length = ldf length in base;
    r4 = dyn length(xb1);
    check L18() else D3();
  L19():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D3():
    deopt 13 [r4];
  L2(c7, r6):
    c8 = `as.logical`(r6);
    c9 = `||`(c7, c8);
    goto L1(c9);
  L3():
    character = ldf character;
    check L36() else D13();
  L18():
    goto L0(r4);
  L20():
    xs = ld xs;
    check L22() else D4();
  L21():
    r5 = dyn base1(<sym xs>);
    goto L2(c2, r5);
  L25():
    r8 = clos inner3002224933;
    st `.fmtb` = r8;
    r9 = clos inner3002224933;
    st `.fmts` = r9;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D4():
    deopt 16 [c2, xs];
  D13():
    deopt 44 [];
  L4(r11):
    popenv;
    return r11;
  L22():
    xs1 = force? xs;
    checkMissing(xs1);
    length1 = ldf length in base;
    r7 = dyn length1(xs1);
    check L23() else D5();
  L26():
    unlist = ldf unlist;
    check L28() else D6();
  L27():
    r10 = dyn base2(<lang unlist(lapply(seq_along(xb), .fmtb))>, <lang unlist(lapply(seq_along(xs), .fmts))>, <lang strwrap(gettextf("See section 'Cross-references' in the 'Writing R Extensions' manual."))>);
    goto L4(r10);
  L36():
    r32 = dyn character();
    check L37() else D14();
  D5():
    deopt 19 [c2, r7];
  D6():
    deopt 30 [];
  D14():
    deopt 45 [r32];
  L23():
    goto L2(c2, r7);
  L28():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym3 = ldf seq_along;
        base3 = ldf seq_along in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        xb2 = ld xb;
        xb3 = force? xb2;
        checkMissing(xb3);
        r14 = seq_along(xb3);
        goto L0(r14);
      L2():
        r12 = dyn base3(<sym xb>);
        goto L0(r12);
      };
      p1 = prom<V +>{
        _fmtb = ld `.fmtb`;
        _fmtb1 = force? _fmtb;
        checkMissing(_fmtb1);
        return _fmtb1;
      };
      r17 = dyn lapply(p, p1);
      return r17;
    };
    r19 = dyn unlist(p2);
    check L29() else D7();
  L37():
    popenv;
    return r32;
  D7():
    deopt 32 [r19];
  L29():
    unlist1 = ldf unlist;
    check L30() else D8();
  D8():
    deopt 34 [];
  L30():
    p5 = prom<V +>{
      lapply1 = ldf lapply;
      p3 = prom<V +>{
        sym4 = ldf seq_along;
        base4 = ldf seq_along in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        xs2 = ld xs;
        xs3 = force? xs2;
        checkMissing(xs3);
        r22 = seq_along(xs3);
        goto L0(r22);
      L2():
        r20 = dyn base4(<sym xs>);
        goto L0(r20);
      };
      p4 = prom<V +>{
        _fmts = ld `.fmts`;
        _fmts1 = force? _fmts;
        checkMissing(_fmts1);
        return _fmts1;
      };
      r25 = dyn lapply1(p3, p4);
      return r25;
    };
    r27 = dyn unlist1(p5);
    check L31() else D9();
  D9():
    deopt 36 [r27];
  L31():
    strwrap = ldf strwrap;
    check L32() else D10();
  D10():
    deopt 38 [];
  L32():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      r28 = dyn gettextf("See section 'Cross-references' in the 'Writing R Extensions' manual.");
      return r28;
    };
    r30 = dyn strwrap(p6);
    check L33() else D11();
  D11():
    deopt 40 [r30];
  L33():
    c12 = ldf c in base;
    r31 = dyn c12(r19, r27, r30);
    check L34() else D12();
  D12():
    deopt 42 [r31];
  L34():
    goto L4(r31);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gettextf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg xb:*, reg xb1:V, reg names:cls, reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r7:V, reg p:p(V +), reg r9:V, reg _pretty_format:cls, reg unique:cls, reg xb2:*, reg xb3:V, reg c1:L, reg xb5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg c2:cls, reg r15:V |
    mkenv;
    st i = i;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    gettextf = ldf gettextf;
    check L3() else D0();
  L2():
    r = dyn base(<lang gettextf("Missing link or links in Rd file '%s':", `[`(names(xb), i))>, <lang .pretty_format(unique(`[[`(xb, i)))>, "");
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r3):
      c = `is.object`(r3);
      if c then L4() else L5(r3);
    L2():
      xb = ld xb;
      xb1 = force? xb;
      checkMissing(xb1);
      names = ldf names in base;
      r4 = dyn names(xb1);
      goto L0(r4);
    L3():
      r2 = dyn base1(<sym xb>);
      goto L0(r2);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r6):
      i1 = ld i;
      i2 = force? i1;
      __ = ldf `[` in base;
      r7 = dyn __(r6, i2);
      goto L1(r7);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r9 = dyn gettextf("Missing link or links in Rd file '%s':", p);
    check L4() else D1();
  D1():
    deopt 6 [r9];
  L4():
    _pretty_format = ldf `.pretty_format`;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p2 = prom<V +>{
      unique = ldf unique;
      p1 = prom<V +>{
        xb2 = ld xb;
        xb3 = force? xb2;
        checkMissing(xb3);
        c1 = `is.object`(xb3);
        if c1 then L1() else L2(xb3);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", xb3);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(xb5):
        i3 = ld i;
        i4 = force? i3;
        __1 = ldf `[[` in base;
        r10 = dyn __1(xb5, i4);
        goto L0(r10);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r12 = dyn unique(p1);
      return r12;
    };
    r14 = dyn _pretty_format(p2);
    check L6() else D3();
  D3():
    deopt 10 [r14];
  L6():
    c2 = ldf c in base;
    r15 = dyn c2(r9, r14, "");
    check L7() else D4();
  D4():
    deopt 13 [r15];
  L7():
    goto L0(r15);
  }
}