fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner603374895;
    st `[.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner603374895(x, i, j, drop) {
  (reg x:*, reg i:*, reg j:*, reg drop:*) -+> V { var x:*, var i:*, var j:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg _bibentry_seq_along:cls, reg x1:*, reg x2:V, reg p:p(V +), reg i1:*, reg i2:V, reg p1:p(V +), reg r2:V, reg s:*, reg s1:V, reg c:L, reg s3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg unclass:cls, reg r6:V, reg c1:L, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __1:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg lengths:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r13:V, reg r14:V, reg all:cls, reg r15:V, reg r16:V, reg c2:L, reg warning:cls, reg gettext:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg y2:*, reg y3:V, reg c3:L, reg y5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok:*, reg ok1:V, reg __2:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg missing:cls, reg r23:V, reg c4:L, reg drop1:*, reg drop2:V, reg r24:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg x5:*, reg x6:V, reg attributes:cls, reg r27:V, reg c6:L, reg r29:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg bibentry_list_attribute_names:*, reg bibentry_list_attribute_names1:V, reg __3:cls, reg r30:V, reg l:*, reg attributes__:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg x7:*, reg x8:V, reg class:cls, reg r34:V, reg l1:*, reg class__:cls, reg r35:V, reg stopifnot:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg j1:*, reg j2:V, reg c7:L, reg p4:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg j3:*, reg j4:V, reg length:cls, reg r42:V, reg r43:V, reg p5:p(V +), reg r45:V, reg _in_:cls, reg j5:*, reg j6:V, reg p6:p(V +), reg bibentry_attribute_names:*, reg bibentry_attribute_names1:V, reg p7:p(V +), reg r48:V, reg c8:L, reg lapply:cls, reg y6:*, reg y7:V, reg p8:p(V +), reg attr:*, reg attr1:V, reg p9:p(V +), reg j7:*, reg j8:V, reg p10:p(V +), reg r52:V, reg r53:V, reg lapply1:cls, reg y8:*, reg y9:V, reg p11:p(V +), reg __4:*, reg __5:V, reg p12:p(V +), reg tolower:cls, reg j9:*, reg j10:V, reg p13:p(V +), reg r57:V, reg p14:p(V +), reg r59:V, reg y10:*, reg y11:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    _bibentry_seq_along = ldf `.bibentry_seq_along`;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      return i2;
    };
    r2 = dyn _bibentry_seq_along(p, p1);
    check L19() else D1();
  D1():
    deopt 4 [r2];
  L19():
    st s = r2;
    s = ld s;
    check L20() else D2();
  D2():
    deopt 6 [s];
  L20():
    s1 = force? s;
    checkMissing(s1);
    c = `is.object`(s1);
    if c then L21() else L22(s1);
  L1(dx1):
    st i = dx1;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L21():
    dr = tryDispatchBuiltin.1("[", s1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(s3):
    i3 = ld i;
    check L24() else D3();
  D3():
    deopt 8 [s3, i3];
  L2(r5):
    c1 = `is.object`(r5);
    if c1 then L29() else L30(r5);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L24():
    i4 = force? i3;
    __ = ldf `[` in base;
    r3 = dyn __(s3, i4);
    goto L1(r3);
  L25():
    x3 = ld x;
    check L27() else D4();
  L26():
    r4 = dyn base(<sym x>);
    goto L2(r4);
  D4():
    deopt 14 [x3];
  L3(dx3):
    st y = dx3;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L27():
    x4 = force? x3;
    checkMissing(x4);
    unclass = ldf unclass in base;
    r6 = dyn unclass(x4);
    check L28() else D5();
  L29():
    dr2 = tryDispatchBuiltin.1("[", r5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(r8):
    i5 = ld i;
    check L32() else D6();
  D5():
    deopt 17 [r6];
  D6():
    deopt 18 [r8, i5];
  L4(r11):
    r16 = `!`(r11);
    c2 = `as.logical`(r16);
    if c2 then L38() else L5();
  L28():
    goto L2(r6);
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L32():
    i6 = force? i5;
    __1 = ldf `[` in base;
    r9 = dyn __1(r8, i6);
    goto L3(r9);
  L33():
    lengths = ldf lengths;
    check L35() else D7();
  L34():
    r10 = dyn base1(<lang `<-`(ok, `>`(lengths(y), 0))>);
    goto L4(r10);
  D7():
    deopt 25 [];
  L5():
    goto L7();
  L7():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L35():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r13 = dyn lengths(p2);
    check L36() else D8();
  L38():
    warning = ldf warning;
    check L39() else D10();
  D8():
    deopt 27 [r13];
  D10():
    deopt 35 [];
  L8(r22):
    c4 = `as.logical`(r22);
    if c4 then L49() else L9();
  L36():
    r14 = `>`(r13, 0);
    st ok = r14;
    all = ldf all in base;
    r15 = dyn all(r14);
    check L37() else D9();
  L39():
    p3 = prom<V +>{
      gettext = ldf gettext;
      r17 = dyn gettext("subscript out of bounds");
      return r17;
    };
    r19 = dyn warning[, domain](p3, NA_LGL);
    check L40() else D11();
  L47():
    missing = ldf missing in base;
    r23 = dyn missing(<sym j>);
    goto L8(r23);
  L48():
    r21 = dyn base2(<sym j>);
    goto L8(r21);
  D9():
    deopt 32 [r15];
  D11():
    deopt 39 [r19];
  L9():
    stopifnot = ldf stopifnot;
    check L70() else D24();
  L15():
    y10 = ld y;
    check L80() else D32();
  L37():
    goto L4(r15);
  L40():
    y2 = ld y;
    check L41() else D12();
  L49():
    drop1 = ld drop;
    check L50() else D14();
  D12():
    deopt 40 [y2];
  D14():
    deopt 51 [drop1];
  D24():
    deopt 82 [];
  D32():
    deopt 104 [y10];
  L41():
    y3 = force? y2;
    checkMissing(y3);
    c3 = `is.object`(y3);
    if c3 then L42() else L43(y3);
  L50():
    drop2 = force? drop1;
    checkMissing(drop2);
    r24 = `!`(drop2);
    c5 = `as.logical`(r24);
    if c5 then L51() else L10();
  L70():
    p4 = prom<V +>{
      sym5 = ldf `is.character`;
      base5 = ldf `is.character` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      c7 = `is.character`(j2);
      goto L0(c7);
    L2():
      r37 = dyn base5(<sym j>);
      goto L0(r37);
    };
    p5 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r41):
      r43 = `==`(r41, 1);
      return r43;
    L1():
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      length = ldf length in base;
      r42 = dyn length(j4);
      goto L0(r42);
    L2():
      r40 = dyn base6(<sym j>);
      goto L0(r40);
    };
    r45 = dyn stopifnot(p4, p5);
    check L71() else D25();
  L80():
    y11 = force? y10;
    checkMissing(y11);
    popenv;
    return y11;
  D25():
    deopt 85 [r45];
  L6(dx5):
    st y = dx5;
    goto L7();
  L10():
    goto L13();
  L13():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L42():
    dr4 = tryDispatchBuiltin.1("[", y3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(y5):
    ok = ld ok;
    check L45() else D13();
  L51():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L71():
    _in_ = ldf `%in%`;
    check L72() else D26();
  D13():
    deopt 42 [y5, ok];
  D26():
    deopt 87 [];
  L11(r26):
    c6 = `is.object`(r26);
    if c6 then L56() else L57(r26);
  L14(r33):
    l1 = ld y;
    class__ = ldf `class<-`;
    check L67() else D22();
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L45():
    ok1 = force? ok;
    __2 = ldf `[` in base;
    r20 = dyn __2(y5, ok1);
    goto L6(r20);
  L52():
    x5 = ld x;
    check L54() else D15();
  L53():
    r25 = dyn base3(<sym x>);
    goto L11(r25);
  L63():
    x7 = ld x;
    check L65() else D20();
  L64():
    r32 = dyn base4(<sym x>);
    goto L14(r32);
  L72():
    p6 = prom<V +>{
      j5 = ld j;
      j6 = force? j5;
      checkMissing(j6);
      return j6;
    };
    p7 = prom<V +>{
      bibentry_attribute_names = ld bibentry_attribute_names;
      bibentry_attribute_names1 = force? bibentry_attribute_names;
      checkMissing(bibentry_attribute_names1);
      return bibentry_attribute_names1;
    };
    r48 = dyn _in_(p6, p7);
    check L73() else D27();
  D15():
    deopt 56 [x5];
  D20():
    deopt 72 [x7];
  D22():
    deopt 77 [r33, l1, r33];
  D27():
    deopt 90 [r48];
  L12(dx8):
    l = ld y;
    attributes__ = ldf `attributes<-`;
    check L60() else D18();
  L54():
    x6 = force? x5;
    checkMissing(x6);
    attributes = ldf attributes in base;
    r27 = dyn attributes(x6);
    check L55() else D16();
  L56():
    dr6 = tryDispatchBuiltin.1("[", r26);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(dr6);
  L57(r29):
    bibentry_list_attribute_names = ld bibentry_list_attribute_names;
    check L59() else D17();
  L65():
    x8 = force? x7;
    checkMissing(x8);
    class = ldf class in base;
    r34 = dyn class(x8);
    check L66() else D21();
  L67():
    r35 = dyn class__(l1, NULL, r33);
    check L68() else D23();
  L73():
    c8 = `as.logical`(r48);
    if c8 then L74() else L16();
  D16():
    deopt 59 [r27];
  D17():
    deopt 60 [r29, bibentry_list_attribute_names];
  D18():
    deopt 64 [dx8, l, dx8];
  D21():
    deopt 75 [r34];
  D23():
    deopt 79 [r33, r35];
  L16():
    lapply1 = ldf lapply;
    check L78() else D30();
  L17(r53):
    st y = r53;
    goto L15();
  L55():
    goto L11(r27);
  L58():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx7);
  L59():
    bibentry_list_attribute_names1 = force? bibentry_list_attribute_names;
    __3 = ldf `[` in base;
    r30 = dyn __3(r29, bibentry_list_attribute_names1);
    goto L12(r30);
  L60():
    r31 = dyn attributes__(l, NULL, dx8);
    check L61() else D19();
  L66():
    goto L14(r34);
  L68():
    st y = r35;
    goto L15();
  L74():
    lapply = ldf lapply;
    check L75() else D28();
  D19():
    deopt 66 [dx8, r31];
  D28():
    deopt 92 [];
  D30():
    deopt 98 [];
  L61():
    st y = r31;
    goto L13();
  L75():
    p8 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p9 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    p10 = prom<V +>{
      j7 = ld j;
      j8 = force? j7;
      checkMissing(j8);
      return j8;
    };
    r52 = dyn lapply(p8, p9, p10);
    check L76() else D29();
  L78():
    p11 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    p12 = prom<V +>{
      __4 = ld `[[`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    p14 = prom<V +>{
      tolower = ldf tolower;
      p13 = prom<V +>{
        j9 = ld j;
        j10 = force? j9;
        checkMissing(j10);
        return j10;
      };
      r57 = dyn tolower(p13);
      return r57;
    };
    r59 = dyn lapply1(p11, p12, p14);
    check L79() else D31();
  D29():
    deopt 96 [r52];
  D31():
    deopt 102 [r59];
  L76():
    goto L17(r52);
  L79():
    goto L17(r59);
  }
}