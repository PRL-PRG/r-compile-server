fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg bquote:cls, reg a:*, reg a1:V, reg a2:*, reg a3:V, reg r5:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg quote:cls, reg r10:V, reg bquote1:cls, reg a4:*, reg a5:V, reg __:cls, reg a6:*, reg a7:V, reg p2:p(V +), reg r12:V, reg r13:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg substitute:cls, reg r18:V, reg plot:cls, reg p4:p(V +), reg a8:*, reg a9:V, reg r20:V, reg p5:p(V +), reg bquote2:cls, reg a10:*, reg a11:V, reg __1:cls, reg a12:*, reg a13:V, reg p6:p(V +), reg r23:V, reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg bquote3:cls, reg r29:cls, reg p9:p(V +), reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg expression:cls, reg r34:V, reg bquote4:cls, reg r35:cls, reg p10:p(V +), reg r37:V |
    mkenv;
    r = clos inner2350075967;
    st bquote = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    st a = 2.0;
    bquote = ldf bquote;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 12 [];
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    p1 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      r5 = `==`(a1, a3);
      return r5;
    };
    r7 = dyn bquote(p1);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r7];
  L7():
    goto L0();
  L9():
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1():
    bquote1 = ldf bquote;
    check L12() else D4();
  L10():
    quote = ldf quote in base;
    r10 = dyn quote(<lang `==`(a, a)>);
    goto L1();
  L11():
    r8 = dyn base1(<lang `==`(a, a)>);
    goto L1();
  D4():
    deopt 19 [];
  L12():
    p3 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      __ = ldf `.`;
      p2 = prom<V +>{
        a6 = ld a;
        a7 = force? a6;
        checkMissing(a7);
        return a7;
      };
      r12 = dyn __(p2);
      r13 = `==`(a5, r12);
      return r13;
    };
    r15 = dyn bquote1(p3);
    check L13() else D5();
  D5():
    deopt 21 [r15];
  L13():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L2():
    plot = ldf plot;
    check L16() else D6();
  L14():
    substitute = ldf substitute in base;
    r18 = dyn substitute(<lang `==`(a, A)>, <lang list(A=a)>);
    goto L2();
  L15():
    r16 = dyn base2(<lang `==`(a, A)>, <lang list(A=a)>);
    goto L2();
  D6():
    deopt 26 [];
  L16():
    p4 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p5 = prom<V +>{
      a8 = ld a;
      a9 = force? a8;
      checkMissing(a9);
      r20 = `*`(a9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
      return r20;
    };
    p8 = prom<V +>{
      bquote2 = ldf bquote;
      p7 = prom<V +>{
        a10 = ld a;
        a11 = force? a10;
        checkMissing(a11);
        __1 = ldf `.`;
        p6 = prom<V +>{
          a12 = ld a;
          a13 = force? a12;
          checkMissing(a13);
          return a13;
        };
        r23 = dyn __1(p6);
        r24 = `==`(a11, r23);
        return r24;
      };
      r26 = dyn bquote2(p7);
      return r26;
    };
    r28 = dyn plot[, , main](p4, p5, p8);
    check L17() else D7();
  D7():
    deopt 31 [r28];
  L17():
    st default = 1.0;
    bquote3 = ldf bquote;
    check L18() else D8();
  D8():
    deopt 36 [];
  L18():
    p9 = prom<V +>{
      r29 = clos inner19256846;
      return r29;
    };
    r31 = dyn bquote3(p9);
    check L19() else D9();
  D9():
    deopt 38 [r31];
  L19():
    sym3 = ldf expression;
    base3 = ldf expression in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L3(r33):
    st exprs = r33;
    bquote4 = ldf bquote;
    check L22() else D10();
  L20():
    expression = ldf expression in base;
    r34 = dyn expression(<lang `<-`(x, 1.0)>, <lang `<-`(y, 2.0)>, <lang `+`(x, y)>);
    goto L3(r34);
  L21():
    r32 = dyn base3(<lang `<-`(x, 1.0)>, <lang `<-`(y, 2.0)>, <lang `+`(x, y)>);
    goto L3(r32);
  D10():
    deopt 44 [];
  L22():
    p10 = prom<V +>{
      r35 = clos inner2708337952;
      return r35;
    };
    r37 = dyn bquote4[, splice](p10, TRUE);
    check L23() else D11();
  D11():
    deopt 48 [r37];
  L23():
    popenv;
    return r37;
  }
}
fun inner2350075967(expr, where, splice) {
  (reg expr:*, reg where:*, reg splice:*) -+> V { var expr:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var splice:*, reg splice_isMissing:L, reg splice_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg where1:*, reg where2:V, reg is_environment:cls, reg r4:V, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg where3:*, reg where4:V, reg as_environment:cls, reg r8:V, reg r10:cls, reg r11:cls, reg r12:cls, reg unquote:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg substitute:cls, reg r15:V, reg p1:p(V +), reg r17:V |
    mkenv;
    st expr = expr;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(where_orDefault):
    st where = where_orDefault;
    splice_isMissing = missing.0(splice);
    if splice_isMissing then L2(FALSE) else L2(splice);
  L2(splice_orDefault):
    st splice = splice_orDefault;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L11() else L4();
  L7():
    where1 = ld where;
    check L9() else D0();
  L8():
    r2 = dyn base(<sym where>);
    goto L3(r2);
  D0():
    deopt 2 [where1];
  L4():
    goto L6();
  L6():
    r10 = clos inner3708401697;
    st unquote = r10;
    r11 = clos inner3708401697;
    st `is.splice.macro` = r11;
    r12 = clos inner3708401697;
    st `unquote.list` = r12;
    unquote = ldf unquote;
    check L17() else D4();
  L9():
    where2 = force? where1;
    checkMissing(where2);
    is_environment = ldf `is.environment` in base;
    r4 = dyn is_environment(where2);
    check L10() else D1();
  L11():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r4];
  D4():
    deopt 26 [];
  L5(r7):
    st where = r7;
    goto L6();
  L10():
    goto L3(r4);
  L12():
    where3 = ld where;
    check L14() else D2();
  L13():
    r6 = dyn base1(<sym where>);
    goto L5(r6);
  L17():
    p1 = prom<V +>{
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      substitute = ldf substitute in base;
      r15 = dyn substitute(<sym expr>);
      goto L0(r15);
    L2():
      r13 = dyn base2(<sym expr>);
      goto L0(r13);
    };
    r17 = dyn unquote(p1);
    check L18() else D5();
  D2():
    deopt 9 [where3];
  D5():
    deopt 28 [r17];
  L14():
    where4 = force? where3;
    checkMissing(where4);
    as_environment = ldf `as.environment` in base;
    r8 = dyn as_environment(where4);
    check L15() else D3();
  L18():
    popenv;
    return r17;
  D3():
    deopt 12 [r8];
  L15():
    goto L5(r8);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_pairlist:cls, reg r2:V, reg c:L, reg as_pairlist:cls, reg lapply:cls, reg e3:*, reg e4:V, reg p:p(V +), reg unquote:*, reg unquote1:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg e5:*, reg e6:V, reg is_call:cls, reg r10:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg e7:*, reg e8:V, reg c2:L, reg e10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg c3:L, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c9:L, reg r15:V, reg e11:*, reg e12:V, reg c10:L, reg c12:L, reg e14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c14:L, reg dx3:V, reg __1:cls, reg r16:V, reg as_character:cls, reg r17:V, reg r18:V, reg c15:L, reg c16:V, reg c18:L, reg eval:cls, reg e15:*, reg e16:V, reg c19:L, reg e18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r19:V, reg p3:p(V +), reg where:*, reg where1:V, reg p4:p(V +), reg r22:V, reg splice:*, reg splice1:V, reg c20:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg e19:*, reg e20:V, reg c21:L, reg e22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r25:V, reg c22:L, reg c23:L, reg c25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg c28:L, reg r27:V, reg e23:*, reg e24:V, reg c29:L, reg c31:L, reg e26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c33:L, reg dx9:V, reg __4:cls, reg r28:V, reg as_character1:cls, reg r29:V, reg r30:V, reg c34:L, reg c35:V, reg c37:L, reg stop:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg unquote_list:cls, reg e27:*, reg e28:V, reg p5:p(V +), reg r35:V, reg as_call:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg lapply1:cls, reg e29:*, reg e30:V, reg p6:p(V +), reg unquote2:*, reg unquote3:V, reg p7:p(V +), reg r41:V, reg as_call1:cls, reg r42:V, reg e31:*, reg e32:V |
    mkenv;
    st e = e;
    sym = ldf `is.pairlist`;
    base = ldf `is.pairlist` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    c = `as.logical`(r1);
    if c then L23() else L1();
  L19():
    e1 = ld e;
    check L21() else D0();
  L20():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1():
    sym1 = ldf `is.call`;
    base1 = ldf `is.call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L21():
    e2 = force? e1;
    checkMissing(e2);
    is_pairlist = ldf `is.pairlist` in base;
    r2 = dyn is_pairlist(e2);
    check L22() else D1();
  L23():
    as_pairlist = ldf `as.pairlist`;
    check L24() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L2(r9):
    c1 = `as.logical`(r9);
    if c1 then L31() else L3();
  L22():
    goto L0(r2);
  L24():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        return e4;
      };
      p1 = prom<V +>{
        unquote = ld unquote;
        unquote1 = force? unquote;
        checkMissing(unquote1);
        return unquote1;
      };
      r5 = dyn lapply(p, p1);
      return r5;
    };
    r7 = dyn as_pairlist(p2);
    check L25() else D3();
  L27():
    e5 = ld e;
    check L29() else D4();
  L28():
    r8 = dyn base1(<sym e>);
    goto L2(r8);
  D3():
    deopt 9 [r7];
  D4():
    deopt 12 [e5];
  L3():
    e31 = ld e;
    check L84() else D23();
  L25():
    popenv;
    return r7;
  L29():
    e6 = force? e5;
    checkMissing(e6);
    is_call = ldf `is.call` in base;
    r10 = dyn is_call(e6);
    check L30() else D5();
  L31():
    sym2 = ldf `is.name`;
    base2 = ldf `is.name` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  D5():
    deopt 15 [r10];
  D23():
    deopt 84 [e31];
  L4(r12):
    c4 = `as.logical`(r12);
    if c4 then L38() else L6(c4);
  L30():
    goto L2(r10);
  L32():
    e7 = ld e;
    check L34() else D6();
  L33():
    r11 = dyn base2(<lang `[[`(e, 1)>);
    goto L4(r11);
  L84():
    e32 = force? e31;
    checkMissing(e32);
    popenv;
    return e32;
  D6():
    deopt 17 [e7];
  L6(c6):
    c18 = `as.logical`(c6);
    if c18 then L47() else L9();
  L34():
    e8 = force? e7;
    checkMissing(e8);
    c2 = `is.object`(e8);
    if c2 then L35() else L36(e8);
  L38():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L5(dx1):
    c3 = `is.symbol`(dx1);
    goto L4(c3);
  L7(c9, r15):
    r18 = `==`(r15, ".");
    c15 = `as.logical`(r18);
    c16 = `&&`(c9, c15);
    goto L6(c16);
  L9():
    splice = ld splice;
    check L51() else D11();
  L35():
    dr = tryDispatchBuiltin.1("[[", e8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(e10):
    __ = ldf `[[` in base;
    r13 = dyn __(e10, 1);
    goto L5(r13);
  L39():
    e11 = ld e;
    check L41() else D7();
  L40():
    r14 = dyn base3(<lang `[[`(e, 1.0)>);
    goto L7(c4, r14);
  L47():
    eval = ldf eval;
    check L48() else D9();
  D7():
    deopt 25 [c4, e11];
  D9():
    deopt 36 [];
  D11():
    deopt 40 [splice];
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L41():
    e12 = force? e11;
    checkMissing(e12);
    c10 = `is.object`(e12);
    if c10 then L42() else L43(c4, e12);
  L48():
    p3 = prom<V +>{
      e15 = ld e;
      e16 = force? e15;
      checkMissing(e16);
      c19 = `is.object`(e16);
      if c19 then L1() else L2(e16);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", e16);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(e18):
      __2 = ldf `[[` in base;
      r19 = dyn __2(e18, 2);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r22 = dyn eval(p3, p4);
    check L49() else D10();
  L51():
    splice1 = force? splice;
    checkMissing(splice1);
    c20 = `as.logical`(splice1);
    if c20 then L52() else L10();
  D10():
    deopt 39 [r22];
  L8(c14, dx3):
    as_character = ldf `as.character` in base;
    r17 = dyn as_character(dx3);
    check L45() else D8();
  L10():
    sym7 = ldf `as.call`;
    base7 = ldf `as.call` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L42():
    dr2 = tryDispatchBuiltin.1("[[", e12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(c4, dr2);
  L43(c12, e14):
    __1 = ldf `[[` in base;
    r16 = dyn __1(e14, 1.0);
    goto L8(c12, r16);
  L49():
    popenv;
    return r22;
  L52():
    sym4 = ldf `is.name`;
    base4 = ldf `is.name` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  D8():
    deopt 31 [c14, r17];
  L11(r24):
    c23 = `as.logical`(r24);
    if c23 then L59() else L13(c23);
  L18(r38):
    popenv;
    return r38;
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(c4, dx2);
  L45():
    goto L7(c14, r17);
  L53():
    e19 = ld e;
    check L55() else D12();
  L54():
    r23 = dyn base4(<lang `[[`(e, 1)>);
    goto L11(r23);
  L78():
    lapply1 = ldf lapply;
    check L80() else D20();
  L79():
    r37 = dyn base7(<lang lapply(e, unquote)>);
    goto L18(r37);
  D12():
    deopt 43 [e19];
  D20():
    deopt 78 [];
  L13(c25):
    c37 = `as.logical`(c25);
    if c37 then L68() else L16();
  L55():
    e20 = force? e19;
    checkMissing(e20);
    c21 = `is.object`(e20);
    if c21 then L56() else L57(e20);
  L59():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L80():
    p6 = prom<V +>{
      e29 = ld e;
      e30 = force? e29;
      checkMissing(e30);
      return e30;
    };
    p7 = prom<V +>{
      unquote2 = ld unquote;
      unquote3 = force? unquote2;
      checkMissing(unquote3);
      return unquote3;
    };
    r41 = dyn lapply1(p6, p7);
    check L81() else D21();
  D21():
    deopt 81 [r41];
  L12(dx7):
    c22 = `is.symbol`(dx7);
    goto L11(c22);
  L14(c28, r27):
    r30 = `==`(r27, "..");
    c34 = `as.logical`(r30);
    c35 = `&&`(c28, c34);
    goto L13(c35);
  L16():
    sym6 = ldf `as.call`;
    base6 = ldf `as.call` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L56():
    dr6 = tryDispatchBuiltin.1("[[", e20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(dr6);
  L57(e22):
    __3 = ldf `[[` in base;
    r25 = dyn __3(e22, 1);
    goto L12(r25);
  L60():
    e23 = ld e;
    check L62() else D13();
  L61():
    r26 = dyn base5(<lang `[[`(e, 1)>);
    goto L14(c23, r26);
  L68():
    stop = ldf stop;
    check L69() else D15();
  L81():
    as_call1 = ldf `as.call` in base;
    r42 = dyn as_call1(r41);
    check L82() else D22();
  D13():
    deopt 51 [c23, e23];
  D15():
    deopt 62 [];
  D22():
    deopt 83 [r42];
  L17(r33):
    popenv;
    return r33;
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L62():
    e24 = force? e23;
    checkMissing(e24);
    c29 = `is.object`(e24);
    if c29 then L63() else L64(c23, e24);
  L69():
    r31 = dyn stop[, `call.`]("can only splice inside a call", FALSE);
    check L70() else D16();
  L72():
    unquote_list = ldf `unquote.list`;
    check L74() else D17();
  L73():
    r32 = dyn base6(<lang unquote.list(e)>);
    goto L17(r32);
  L82():
    goto L18(r42);
  D16():
    deopt 66 [r31];
  D17():
    deopt 70 [];
  L15(c33, dx9):
    as_character1 = ldf `as.character` in base;
    r29 = dyn as_character1(dx9);
    check L66() else D14();
  L63():
    dr8 = tryDispatchBuiltin.1("[[", e24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(c23, dr8);
  L64(c31, e26):
    __4 = ldf `[[` in base;
    r28 = dyn __4(e26, 1);
    goto L15(c31, r28);
  L70():
    popenv;
    return r31;
  L74():
    p5 = prom<V +>{
      e27 = ld e;
      e28 = force? e27;
      checkMissing(e28);
      return e28;
    };
    r35 = dyn unquote_list(p5);
    check L75() else D18();
  D14():
    deopt 57 [c33, r29];
  D18():
    deopt 72 [r35];
  L65():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L15(c23, dx8);
  L66():
    goto L14(c33, r29);
  L75():
    as_call = ldf `as.call` in base;
    r36 = dyn as_call(r35);
    check L76() else D19();
  D19():
    deopt 74 [r36];
  L76():
    goto L17(r36);
  }
}
fun inner19256846(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, reg __:cls, reg default:*, reg default1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg r3:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0() else L1(y);
  L0():
    p1 = prom<V +>{
      __ = ldf `.`;
      p = prom<V +>{
        default = ld default;
        default1 = force? default;
        checkMissing(default1);
        return default1;
      };
      r1 = dyn __(p);
      return r1;
    };
    goto L1(p1);
  L1(y_orDefault):
    st y = y_orDefault;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L3() else D1();
  D1():
    deopt 1 [x2, y1];
  L3():
    y2 = force? y1;
    checkMissing(y2);
    r3 = `+`(x2, y2);
    popenv;
    return r3;
  }
}
fun inner2708337952() {
  () -+> V { reg __:cls, reg exprs:*, reg exprs1:V, reg p:p(V +), reg r1:V |
    mkenv;
    __ = ldf `..`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      exprs = ld exprs;
      exprs1 = force? exprs;
      checkMissing(exprs1);
      return exprs1;
    };
    r1 = dyn __(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}