fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1090434961;
    st tidy_validate_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1090434961(x, paths, ignore) {
  (reg x:*, reg paths:*, reg ignore:*) -+> V { var x:*, var paths:*, reg paths_isMissing:L, reg paths_orDefault:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg paths1:*, reg paths2:V, reg c:V, reg r4:V, reg c1:L, reg paths3:*, reg paths4:V, reg l:*, reg names__:cls, reg r5:V, reg vapply:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg inherits:*, reg inherits1:V, reg p2:p(V +), reg r8:V, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __:cls, reg r9:V, reg Filter:cls, reg length:*, reg length1:V, reg p3:p(V +), reg x7:*, reg x8:V, reg c3:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:*, reg i3:V, reg r11:V, reg __1:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x11:*, reg x12:V, reg length2:cls, reg r17:V, reg r18:V, reg c4:L, reg c6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg c9:L, reg r20:V, reg e:*, reg e1:V, reg length3:cls, reg r21:V, reg r22:V, reg c10:L, reg c11:V, reg c13:L, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p5:p(V +), reg x13:*, reg x14:V, reg p6:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg y:*, reg y1:V, reg c14:V, reg c15:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg list:cls, reg r32:V, reg cbind:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg x15:*, reg x16:V, reg names:cls, reg r38:V, reg vapply1:cls, reg x17:*, reg x18:V, reg p7:p(V +), reg nrow:*, reg nrow1:V, reg p8:p(V +), reg r41:V, reg rep_int:cls, reg r42:V, reg p9:p(V +), reg y2:*, reg y3:V, reg p10:p(V +), reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg ignore1:*, reg ignore2:V, reg length4:cls, reg r48:V, reg c16:L, reg y4:*, reg y5:V, reg c17:L, reg y7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _notin_:cls, reg y8:*, reg y9:V, reg c18:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r49:V, reg p11:p(V +), reg ignore3:*, reg ignore4:V, reg p12:p(V +), reg r52:V, reg __3:cls, reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg e2:*, reg e3:V, reg length5:cls, reg r56:V, reg c19:L, reg e4:*, reg e5:V, reg l1:*, reg attr__:cls, reg r57:V, reg y12:*, reg y13:V |
    mkenv;
    st x = x;
    paths_isMissing = missing.0(paths);
    if paths_isMissing then L0(NULL) else L0(paths);
  L0(paths_orDefault):
    st paths = paths_orDefault;
    ignore_isMissing = missing.0(ignore);
    if ignore_isMissing then L1() else L2(ignore);
  L1():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L2(p);
  L2(ignore_orDefault):
    st ignore = ignore_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L3(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L25() else L4();
  L22():
    paths1 = ld paths;
    check L24() else D0();
  L23():
    r2 = dyn base(<sym paths>);
    goto L3(r2);
  D0():
    deopt 1 [paths1];
  L4():
    goto L5();
  L5():
    vapply = ldf vapply;
    check L30() else D4();
  L24():
    paths2 = force? paths1;
    checkMissing(paths2);
    c = `==`(paths2, NULL);
    goto L3(c);
  L25():
    paths3 = ld paths;
    check L26() else D1();
  D1():
    deopt 5 [paths3];
  D4():
    deopt 15 [];
  L26():
    paths4 = force? paths3;
    checkMissing(paths4);
    l = ld x;
    names__ = ldf `names<-`;
    check L27() else D2();
  L30():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r8 = dyn vapply(p1, p2, NA_LGL, "error");
    check L31() else D5();
  D2():
    deopt 8 [paths4, l, paths4];
  D5():
    deopt 20 [r8];
  L27():
    r5 = dyn names__(l, NULL, paths4);
    check L28() else D3();
  L31():
    st i = r8;
    x3 = ld x;
    check L32() else D6();
  D3():
    deopt 10 [paths4, r5];
  D6():
    deopt 22 [x3];
  L28():
    st x = r5;
    goto L5();
  L32():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L33() else L34(x4);
  L6(dx1):
    st e = dx1;
    Filter = ldf Filter;
    check L37() else D8();
  L33():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(x6):
    i = ld i;
    check L36() else D7();
  D7():
    deopt 24 [x6, i];
  D8():
    deopt 29 [];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L36():
    i1 = force? i;
    __ = ldf `[` in base;
    r9 = dyn __(x6, i1);
    goto L6(r9);
  L37():
    p3 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c3 = `is.object`(x8);
      if c3 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      r11 = `!`(i3);
      __1 = ldf `[` in base;
      r12 = dyn __1(x10, r11);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r14 = dyn Filter(p3, p4);
    check L38() else D9();
  D9():
    deopt 32 [r14];
  L38():
    st x = r14;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L7(r16):
    r18 = `!`(r16);
    c4 = `as.logical`(r18);
    if c4 then L43() else L8(c4);
  L39():
    x11 = ld x;
    check L41() else D10();
  L40():
    r15 = dyn base1(<sym x>);
    goto L7(r15);
  D10():
    deopt 36 [x11];
  L8(c6):
    c13 = `as.logical`(c6);
    if c13 then L49() else L10();
  L41():
    x12 = force? x11;
    checkMissing(x12);
    length2 = ldf length in base;
    r17 = dyn length2(x12);
    check L42() else D11();
  L43():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  D11():
    deopt 39 [r17];
  L9(c9, r20):
    r22 = `!`(r20);
    c10 = `as.logical`(r22);
    c11 = `&&`(c9, c10);
    goto L8(c11);
  L10():
    do_call = ldf `do.call`;
    check L52() else D14();
  L42():
    goto L7(r17);
  L44():
    e = ld e;
    check L46() else D12();
  L45():
    r19 = dyn base2(<sym e>);
    goto L9(c4, r19);
  L49():
    popenv;
    return NULL;
  D12():
    deopt 43 [c4, e];
  D14():
    deopt 55 [];
  L46():
    e1 = force? e;
    checkMissing(e1);
    length3 = ldf length in base;
    r21 = dyn length3(e1);
    check L47() else D13();
  L52():
    p5 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r27 = dyn do_call(p5, p6);
    check L53() else D15();
  D13():
    deopt 46 [c4, r21];
  D15():
    deopt 58 [r27];
  L47():
    goto L9(c4, r21);
  L53():
    st y = r27;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L12(r29):
    c15 = `as.logical`(r29);
    if c15 then L57() else L13();
  L54():
    y = ld y;
    check L56() else D16();
  L55():
    r28 = dyn base3(<sym y>);
    goto L12(r28);
  D16():
    deopt 61 [y];
  L13():
    cbind = ldf cbind;
    check L62() else D18();
  L15():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L56():
    y1 = force? y;
    checkMissing(y1);
    c14 = `==`(y1, NULL);
    goto L12(c14);
  L57():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D18():
    deopt 70 [];
  L14(r31):
    st y = r31;
    goto L15();
  L19(r55):
    c19 = `as.logical`(r55);
    if c19 then L80() else L20();
  L58():
    list = ldf list in base;
    r32 = dyn list();
    check L60() else D17();
  L59():
    r30 = dyn base4();
    goto L14(r30);
  L62():
    p9 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r35):
      return r35;
    L2():
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r34 = dyn base5(<lang names(x)>, <lang vapply(x, nrow, 0.0)>);
      goto L0(r34);
    L1(r37):
      vapply1 = ldf vapply;
      p7 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      p8 = prom<V +>{
        nrow = ld nrow;
        nrow1 = force? nrow;
        checkMissing(nrow1);
        return nrow1;
      };
      r41 = dyn vapply1(p7, p8, 0.0);
      rep_int = ldf `rep.int` in base;
      r42 = dyn rep_int(r37, r41);
      goto L0(r42);
    L4():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      names = ldf names in base;
      r38 = dyn names(x16);
      goto L1(r38);
    L5():
      r36 = dyn base6(<sym x>);
      goto L1(r36);
    };
    p10 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r45 = dyn cbind[path, ](p9, p10);
    check L63() else D19();
  L76():
    e2 = ld e;
    check L78() else D25();
  L77():
    r54 = dyn base8(<sym e>);
    goto L19(r54);
  D17():
    deopt 67 [r32];
  D19():
    deopt 74 [r45];
  D25():
    deopt 99 [e2];
  L20():
    goto L21();
  L21():
    y12 = ld y;
    check L85() else D30();
  L60():
    goto L14(r32);
  L63():
    st y = r45;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  L78():
    e3 = force? e2;
    checkMissing(e3);
    length5 = ldf length in base;
    r56 = dyn length5(e3);
    check L79() else D26();
  L80():
    e4 = ld e;
    check L81() else D27();
  D26():
    deopt 102 [r56];
  D27():
    deopt 103 [e4];
  D30():
    deopt 113 [y12];
  L16(r47):
    c16 = `as.logical`(r47);
    if c16 then L68() else L17();
  L64():
    ignore1 = ld ignore;
    check L66() else D20();
  L65():
    r46 = dyn base7(<sym ignore>);
    goto L16(r46);
  L79():
    goto L19(r56);
  L81():
    e5 = force? e4;
    checkMissing(e5);
    l1 = ld y;
    attr__ = ldf `attr<-`;
    check L82() else D28();
  L85():
    y13 = force? y12;
    checkMissing(y13);
    popenv;
    return y13;
  D20():
    deopt 78 [ignore1];
  D28():
    deopt 106 [e5, l1, e5];
  L17():
    goto L15();
  L66():
    ignore2 = force? ignore1;
    checkMissing(ignore2);
    length4 = ldf length in base;
    r48 = dyn length4(ignore2);
    check L67() else D21();
  L68():
    y4 = ld y;
    check L69() else D22();
  L82():
    r57 = dyn attr__(l1, NULL, "errors", e5);
    check L83() else D29();
  D21():
    deopt 81 [r48];
  D22():
    deopt 82 [y4];
  D29():
    deopt 109 [e5, r57];
  L67():
    goto L16(r48);
  L69():
    y5 = force? y4;
    checkMissing(y5);
    c17 = `is.object`(y5);
    if c17 then L70() else L71(y5);
  L83():
    st y = r57;
    goto L21();
  L18(dx5):
    st y = dx5;
    goto L15();
  L70():
    dr4 = tryDispatchBuiltin.1("[", y5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(dr4);
  L71(y7):
    _notin_ = ldf `%notin%`;
    check L73() else D23();
  D23():
    deopt 85 [y7];
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L73():
    p11 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      c18 = `is.object`(y9);
      if c18 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", y9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r49 = dyn __2(y9, <missing>, "msg");
      goto L0(r49);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p12 = prom<V +>{
      ignore3 = ld ignore;
      ignore4 = force? ignore3;
      checkMissing(ignore4);
      return ignore4;
    };
    r52 = dyn _notin_(p11, p12);
    check L74() else D24();
  D24():
    deopt 88 [y7, r52];
  L74():
    __3 = ldf `[` in base;
    r53 = dyn __3(y5, r52, <missing>, FALSE);
    goto L18(r53);
  }
}