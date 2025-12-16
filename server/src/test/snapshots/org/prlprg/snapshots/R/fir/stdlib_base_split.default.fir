fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2007475110;
    st `split.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2007475110(x, f, drop, sep, `lex.order`, `...`) {
  (reg x:*, reg f:*, reg drop:*, reg sep:*, reg lex_order:*, reg ddd:dots) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var `lex.order`:*, reg lex_order_isMissing:L, reg lex_order_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg _NotYetUsed:cls, reg deparse:cls, reg ddd1:dots?, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg f1:*, reg f2:V, reg is_list:cls, reg r10:V, reg c1:L, reg interaction:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg drop1:*, reg drop2:V, reg p2:p(V +), reg sep1:*, reg sep2:V, reg p3:p(V +), reg lex_order1:*, reg lex_order2:V, reg p4:p(V +), reg r15:V, reg is_factor:cls, reg f5:*, reg f6:V, reg p5:p(V +), reg r18:V, reg r19:V, reg c2:L, reg as_factor:cls, reg f7:*, reg f8:V, reg p6:p(V +), reg r21:V, reg drop3:*, reg drop4:V, reg c3:L, reg factor:cls, reg f9:*, reg f10:V, reg p7:p(V +), reg r23:V, reg l:*, reg storage_mode__:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg x1:*, reg x2:V, reg attr:cls, reg r29:V, reg c4:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg x3:*, reg x4:V, reg f11:*, reg f12:V, reg split:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg x5:*, reg x6:V, reg r39:I, reg f13:*, reg f14:V, reg split1:cls, reg r40:V, reg lapply:cls, reg ind:*, reg ind1:V, reg p8:p(V +), reg r42:cls, reg p9:p(V +), reg r44:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L1(".") else L1(sep);
  L1(sep_orDefault):
    st sep = sep_orDefault;
    lex_order_isMissing = missing.0(lex_order);
    if lex_order_isMissing then L2(FALSE) else L2(lex_order);
  L2(lex_order_orDefault):
    st `lex.order` = lex_order_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L20() else L4();
  L18():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ...>);
    goto L3(r2);
  L19():
    r = dyn base(<sym ...>);
    goto L3(r);
  L4():
    goto L5();
  L5():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L21() else D0();
  D0():
    deopt 5 [];
  L6(r9):
    c1 = `as.logical`(r9);
    if c1 then L28() else L7();
  L21():
    p = prom<V +>{
      deparse = ldf deparse;
      ddd1 = ld `...`;
      r4 = dyn deparse[`...`](ddd1);
      return r4;
    };
    r6 = dyn _NotYetUsed[, error](p, FALSE);
    check L22() else D1();
  L24():
    f1 = ld f;
    check L26() else D2();
  L25():
    r8 = dyn base1(<sym f>);
    goto L6(r8);
  D1():
    deopt 9 [r6];
  D2():
    deopt 14 [f1];
  L7():
    is_factor = ldf `is.factor`;
    check L32() else D6();
  L8():
    l = ld f;
    storage_mode__ = ldf `storage.mode<-`;
    check L43() else D13();
  L22():
    goto L5();
  L26():
    f2 = force? f1;
    checkMissing(f2);
    is_list = ldf `is.list` in base;
    r10 = dyn is_list(f2);
    check L27() else D3();
  L28():
    interaction = ldf interaction;
    check L29() else D4();
  D3():
    deopt 17 [r10];
  D4():
    deopt 19 [];
  D6():
    deopt 30 [];
  D13():
    deopt 51 ["integer", l, "integer"];
  L27():
    goto L6(r10);
  L29():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p2 = prom<V +>{
      drop1 = ld drop;
      drop2 = force? drop1;
      checkMissing(drop2);
      return drop2;
    };
    p3 = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    p4 = prom<V +>{
      lex_order1 = ld `lex.order`;
      lex_order2 = force? lex_order1;
      checkMissing(lex_order2);
      return lex_order2;
    };
    r15 = dyn interaction[, drop, sep, `lex.order`](p1, p2, p3, p4);
    check L30() else D5();
  L32():
    p5 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r18 = dyn is_factor(p5);
    check L33() else D7();
  L43():
    r24 = dyn storage_mode__(l, NULL, "integer");
    check L44() else D14();
  D5():
    deopt 27 [r15];
  D7():
    deopt 32 [r18];
  D14():
    deopt 53 ["integer", r24];
  L30():
    st f = r15;
    goto L8();
  L33():
    r19 = `!`(r18);
    c2 = `as.logical`(r19);
    if c2 then L34() else L9();
  L44():
    st f = r24;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L9():
    drop3 = ld drop;
    check L38() else D10();
  L11(r26):
    c5 = `as.logical`(r26);
    if c5 then L51() else L13();
  L34():
    as_factor = ldf `as.factor`;
    check L35() else D8();
  L45():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L46():
    r25 = dyn base2(<lang attr(x, "class")>);
    goto L11(r25);
  D8():
    deopt 35 [];
  D10():
    deopt 39 [drop3];
  L12(r28):
    c4 = `==`(r28, NULL);
    goto L11(c4);
  L13():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L35():
    p6 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r21 = dyn as_factor(p6);
    check L36() else D9();
  L38():
    drop4 = force? drop3;
    checkMissing(drop4);
    c3 = `as.logical`(drop4);
    if c3 then L39() else L10();
  L47():
    x1 = ld x;
    check L49() else D15();
  L48():
    r27 = dyn base3(<sym x>, "class");
    goto L12(r27);
  L51():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D9():
    deopt 37 [r21];
  D15():
    deopt 58 [x1];
  L10():
    goto L8();
  L14(r31):
    popenv;
    return r31;
  L16(r36):
    st ind = r36;
    lapply = ldf lapply;
    check L66() else D23();
  L36():
    st f = r21;
    goto L8();
  L39():
    factor = ldf factor;
    check L40() else D11();
  L49():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r29 = dyn attr(x2, "class");
    check L50() else D16();
  L52():
    x3 = ld x;
    check L54() else D17();
  L53():
    r30 = dyn base4(<lang split(x, f)>);
    goto L14(r30);
  L59():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L60():
    r35 = dyn base5(<lang split(seq_along(x), f)>);
    goto L16(r35);
  D11():
    deopt 42 [];
  D16():
    deopt 62 [r29];
  D17():
    deopt 66 [x3];
  D23():
    deopt 87 [];
  L17(r38):
    f13 = ld f;
    check L64() else D21();
  L40():
    p7 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r23 = dyn factor(p7);
    check L41() else D12();
  L50():
    goto L12(r29);
  L54():
    x4 = force? x3;
    checkMissing(x4);
    f11 = ld f;
    check L55() else D18();
  L61():
    x5 = ld x;
    check L63() else D20();
  L62():
    r37 = dyn base6(<sym x>);
    goto L17(r37);
  L66():
    p8 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    p9 = prom<V +>{
      r42 = clos inner854741286;
      return r42;
    };
    r44 = dyn lapply(p8, p9);
    check L67() else D24();
  D12():
    deopt 44 [r23];
  D18():
    deopt 68 [f11];
  D20():
    deopt 78 [x5];
  D21():
    deopt 81 [f13];
  D24():
    deopt 90 [r44];
  L41():
    st f = r23;
    goto L8();
  L55():
    f12 = force? f11;
    checkMissing(f12);
    split = ldf split in base;
    r32 = dyn split(x4, f12);
    check L56() else D19();
  L63():
    x6 = force? x5;
    checkMissing(x6);
    r39 = seq_along(x6);
    goto L17(r39);
  L64():
    f14 = force? f13;
    checkMissing(f14);
    split1 = ldf split in base;
    r40 = dyn split1(r38, f14);
    check L65() else D22();
  L67():
    popenv;
    return r44;
  D19():
    deopt 71 [r32];
  D22():
    deopt 84 [r40];
  L56():
    goto L14(r32);
  L65():
    goto L16(r40);
  }
}
fun inner854741286(i) {
  (reg i:*) -+> V { var i:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V |
    mkenv;
    st i = i;
    x = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x];
  L1():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L2() else L3(x1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x3):
    i1 = ld i;
    check L5() else D1();
  D1():
    deopt 2 [x3, i1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(x3, i2);
    goto L0(r);
  }
}