fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner631850843;
    st `.assignActions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner631850843(actions, anames, where) {
  (reg actions:*, reg anames:*, reg where:*) -+> V { var actions:*, var anames:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg actions1:*, reg actions2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg actions3:*, reg actions4:V, reg c1:L, reg i6:I, reg actions6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r3:V, reg anames1:*, reg anames2:V, reg c2:L, reg i12:I, reg anames4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg __1:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg i19:I, reg r6:V, reg f:*, reg f1:V, reg is_function:cls, reg r7:V, reg r8:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg fname:*, reg fname1:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg i22:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg i25:I, reg r17:V, reg formals:cls, reg f2:*, reg f3:V, reg p3:p(V +), reg r19:V, reg length:cls, reg r20:V, reg r21:V, reg c4:L, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg fname2:*, reg fname3:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg i28:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg actions7:*, reg actions8:V, reg r31:I, reg s1:V, reg l1:I, reg i29:I, reg i30:I, reg i31:I, reg c5:L, reg x1:V, reg assign:cls, reg _actionMetaName:cls, reg anames5:*, reg anames6:V, reg c6:L, reg anames8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i34:*, reg i35:V, reg __2:cls, reg r32:V, reg p7:p(V +), reg r34:V, reg p8:p(V +), reg actions9:*, reg actions10:V, reg c7:L, reg actions12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i36:*, reg i37:V, reg __3:cls, reg r36:V, reg p9:p(V +), reg where1:*, reg where2:V, reg p10:p(V +), reg r39:V |
    mkenv;
    st actions = actions;
    st anames = anames;
    st where = where;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L14():
    actions1 = ld actions;
    check L16() else D0();
  L15():
    r = dyn base(<sym actions>);
    goto L0(r);
  D0():
    deopt 1 [actions1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L17() else L10();
  L16():
    actions2 = force? actions1;
    checkMissing(actions2);
    r2 = seq_along(actions2);
    goto L0(r2);
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    actions3 = ld actions;
    check L18() else D1();
  L17():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  D1():
    deopt 4 [i2, actions3];
  L11(r30):
    s1 = toForSeq(r30);
    l1 = length(s1);
    i29 = 0;
    goto L12(i29);
  L18():
    actions4 = force? actions3;
    checkMissing(actions4);
    c1 = `is.object`(actions4);
    if c1 then L19() else L20(i2, actions4);
  L45():
    actions7 = ld actions;
    check L47() else D14();
  L46():
    r29 = dyn base3(<sym actions>);
    goto L11(r29);
  D14():
    deopt 53 [actions7];
  L2(i8, dx1):
    st f = dx1;
    anames1 = ld anames;
    check L23() else D3();
  L12(i30):
    i31 = `+`.1(i30, 1);
    c5 = `<`.1(l1, i31);
    if c5 then L48() else L13();
  L19():
    dr = tryDispatchBuiltin.1("[[", actions4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(i2, dr);
  L20(i6, actions6):
    i9 = ld i;
    check L22() else D2();
  L47():
    actions8 = force? actions7;
    checkMissing(actions8);
    r31 = seq_along(actions8);
    goto L11(r31);
  D2():
    deopt 6 [i6, actions6, i9];
  D3():
    deopt 10 [i8, anames1];
  L13():
    x1 = `[[`(s1, i31, NULL, TRUE);
    st i = x1;
    assign = ldf assign;
    check L49() else D15();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L22():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r3 = dyn __(actions6, i10);
    goto L2(i6, r3);
  L23():
    anames2 = force? anames1;
    checkMissing(anames2);
    c2 = `is.object`(anames2);
    if c2 then L24() else L25(i8, anames2);
  L48():
    invisible.0();
    popenv;
    return i31;
  D15():
    deopt 57 [i31];
  L3(i14, dx3):
    st fname = dx3;
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L24():
    dr2 = tryDispatchBuiltin.1("[[", anames2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(i8, dr2);
  L25(i12, anames4):
    i15 = ld i;
    check L27() else D4();
  L49():
    p8 = prom<V +>{
      _actionMetaName = ldf `.actionMetaName`;
      p7 = prom<V +>{
        anames5 = ld anames;
        anames6 = force? anames5;
        checkMissing(anames6);
        c6 = `is.object`(anames6);
        if c6 then L1() else L2(anames6);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", anames6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(anames8):
        i34 = ld i;
        i35 = force? i34;
        __2 = ldf `[[` in base;
        r32 = dyn __2(anames8, i35);
        goto L0(r32);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r34 = dyn _actionMetaName(p7);
      return r34;
    };
    p9 = prom<V +>{
      actions9 = ld actions;
      actions10 = force? actions9;
      checkMissing(actions10);
      c7 = `is.object`(actions10);
      if c7 then L1() else L2(actions10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", actions10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(actions12):
      i36 = ld i;
      i37 = force? i36;
      __3 = ldf `[[` in base;
      r36 = dyn __3(actions12, i37);
      goto L0(r36);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p10 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r39 = dyn assign[, , envir](p8, p9, p10);
    check L50() else D16();
  D4():
    deopt 12 [i12, anames4, i15];
  D16():
    deopt 62 [i31, r39];
  L4(i19, r6):
    r8 = `!`(r6);
    c3 = `as.logical`(r8);
    if c3 then L32() else L5();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i8, dx2);
  L27():
    i16 = force? i15;
    __1 = ldf `[[` in base;
    r4 = dyn __1(anames4, i16);
    goto L3(i12, r4);
  L28():
    f = ld f;
    check L30() else D5();
  L29():
    r5 = dyn base1(<sym f>);
    goto L4(i14, r5);
  L50():
    goto L12(i31);
  D5():
    deopt 18 [i14, f];
  L5():
    goto L6(i19);
  L6(i22):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L30():
    f1 = force? f;
    checkMissing(f1);
    is_function = ldf `is.function` in base;
    r7 = dyn is_function(f1);
    check L31() else D6();
  L32():
    stop = ldf stop;
    check L33() else D7();
  D6():
    deopt 21 [i14, r7];
  D7():
    deopt 24 [i19];
  L7(i25, r17):
    r21 = `==`(r17, 0.0);
    c4 = `as.logical`(r21);
    if c4 then L41() else L8();
  L31():
    goto L4(i14, r7);
  L33():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          fname = ld fname;
          fname1 = force? fname;
          checkMissing(fname1);
          return fname1;
        };
        r10 = dyn sQuote(p);
        return r10;
      };
      r12 = dyn gettextf("non-function action: %s", p1);
      return r12;
    };
    r14 = dyn stop[, domain](p2, NA_LGL);
    check L34() else D8();
  L36():
    formals = ldf formals;
    check L38() else D9();
  L37():
    r16 = dyn base2(<lang formals(f)>);
    goto L7(i22, r16);
  D8():
    deopt 28 [i19, r14];
  D9():
    deopt 34 [i22];
  L8():
    goto L9(i25);
  L9(i28):
    goto L1(i28);
  L34():
    goto L6(i19);
  L38():
    p3 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r19 = dyn formals(p3);
    check L39() else D10();
  L41():
    stop1 = ldf stop;
    check L42() else D12();
  D10():
    deopt 36 [i22, r19];
  D12():
    deopt 42 [i25];
  L39():
    length = ldf length in base;
    r20 = dyn length(r19);
    check L40() else D11();
  L42():
    p6 = prom<V +>{
      gettextf1 = ldf gettextf;
      p5 = prom<V +>{
        sQuote1 = ldf sQuote;
        p4 = prom<V +>{
          fname2 = ld fname;
          fname3 = force? fname2;
          checkMissing(fname3);
          return fname3;
        };
        r23 = dyn sQuote1(p4);
        return r23;
      };
      r25 = dyn gettextf1("action function %s has no arguments, should have at least 1", p5);
      return r25;
    };
    r27 = dyn stop1[, domain](p6, NA_LGL);
    check L43() else D13();
  D11():
    deopt 38 [i22, r20];
  D13():
    deopt 46 [i25, r27];
  L40():
    goto L7(i22, r20);
  L43():
    goto L9(i25);
  }
}