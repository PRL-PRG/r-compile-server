fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2891763239;
    st `confint.profile.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2891763239(object, parm, level, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg ddd:dots) -+> V { var object:*, var parm:*, reg parm_isMissing:L, reg parm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pnames:*, reg pnames1:V, reg r2:I, reg p:p(V +), var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object1:*, reg object2:V, reg names:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg coef:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg object3:*, reg object4:V, reg attr:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg length:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg object5:*, reg object6:V, reg attr1:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg parm1:*, reg parm2:V, reg is_numeric:cls, reg r20:V, reg c:L, reg pnames2:*, reg pnames3:V, reg c1:L, reg pnames5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg parm3:*, reg parm4:V, reg __:cls, reg r21:V, reg parm5:*, reg parm6:V, reg c2:L, reg parm8:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg _in_:cls, reg parm9:*, reg parm10:V, reg p2:p(V +), reg pnames6:*, reg pnames7:V, reg p3:p(V +), reg r24:V, reg __1:cls, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg fitted:cls, reg of:*, reg of1:V, reg p4:p(V +), reg r29:V, reg length1:cls, reg r30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg r35:V, reg of2:*, reg of3:V, reg c3:L, reg r37:V, reg of5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg r39:V, reg dx6:V, reg r40:V, reg c4:L, reg r42:V, reg dx8:V, reg dr6:V, reg dc3:L, reg dx9:V, reg r44:V, reg dx10:V, reg r45:V, reg dx11:cls, reg r46:V, reg length2:cls, reg r47:V, reg r48:V, reg level1:*, reg level2:V, reg r49:V, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg a:*, reg a1:V, reg a2:*, reg a3:V, reg r53:V, reg c5:cls, reg r54:V, reg paste:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg round:cls, reg r57:V, reg p5:p(V +), reg r59:V, reg array:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg r61:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r62:V, reg r63:V, reg parm11:*, reg parm12:V, reg length3:cls, reg r64:V, reg c6:cls, reg r65:V, reg p6:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg parm13:*, reg parm14:V, reg pct:*, reg pct1:V, reg list:cls, reg r69:V, reg p7:p(V +), reg r71:V, reg qt:cls, reg a4:*, reg a5:V, reg p8:p(V +), reg n:*, reg n1:V, reg p9:p(V +), reg r74:V, reg parm15:*, reg parm16:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg object7:*, reg object8:V, reg c8:L, reg i6:I, reg object10:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i8:I, reg dx13:V, reg pm:*, reg pm1:V, reg __2:cls, reg r75:V, reg ncoefs:*, reg ncoefs1:V, reg r76:V, reg c9:L, reg spline:cls, reg pro:*, reg pro1:V, reg c10:L, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r77:V, reg c11:L, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg pm2:*, reg pm3:V, reg __4:cls, reg r78:V, reg p10:p(V +), reg pro4:*, reg pro5:V, reg c12:L, reg pro7:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r80:V, reg p11:p(V +), reg r82:V, reg i11:I, reg r83:V, reg spline1:cls, reg pro8:*, reg pro9:V, reg c13:L, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg __5:cls, reg r84:V, reg p12:p(V +), reg pro12:*, reg pro13:V, reg c14:L, reg pro15:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r86:V, reg p13:p(V +), reg r88:V, reg approx:cls, reg sp:*, reg sp1:V, reg c15:L, reg sp3:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg r89:V, reg p14:p(V +), reg sp4:*, reg sp5:V, reg c16:L, reg sp7:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r91:V, reg p15:p(V +), reg cutoff:*, reg cutoff1:V, reg p16:p(V +), reg r94:V, reg c17:L, reg i13:I, reg r96:V, reg dr24:V, reg dc12:L, reg dx30:V, reg i15:I, reg dx31:V, reg r97:V, reg l1:*, reg c18:L, reg i17:I, reg dx33:V, reg l3:*, reg dr26:V, reg dc13:L, reg dx35:V, reg i19:I, reg dx37:V, reg pm4:*, reg pm5:V, reg ___:cls, reg r98:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r99:V, reg r100:V, reg ci:*, reg ci1:V, reg drop:cls, reg r101:V |
    mkenv;
    st object = object;
    parm_isMissing = missing.0(parm);
    if parm_isMissing then L0() else L1(parm);
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      pnames = ld pnames;
      pnames1 = force? pnames;
      checkMissing(pnames1);
      r2 = seq_along(pnames1);
      goto L0(r2);
    L2():
      r = dyn base(<sym pnames>);
      goto L0(r);
    };
    goto L1(p);
  L1(parm_orDefault):
    st parm = parm_orDefault;
    level_isMissing = missing.0(level);
    if level_isMissing then L2(0.95) else L2(level);
  L2(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r5):
    st pnames = r5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L21():
    object1 = ld object;
    check L23() else D0();
  L22():
    r4 = dyn base1(<sym object>);
    goto L3(r4);
  D0():
    deopt 2 [object1];
  L4(r8):
    st ncoefs = r8;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L23():
    object2 = force? object1;
    checkMissing(object2);
    names = ldf names in base;
    r6 = dyn names(object2);
    check L24() else D1();
  L25():
    coef = ldf coef;
    check L27() else D2();
  L26():
    r7 = dyn base2(<lang coef(attr(object, "original.fit"))>);
    goto L4(r7);
  D1():
    deopt 5 [r6];
  D2():
    deopt 10 [];
  L5(r16):
    st of = r16;
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L24():
    goto L3(r6);
  L27():
    p1 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      attr = ldf attr in base;
      r11 = dyn attr(object4, "original.fit");
      goto L0(r11);
    L2():
      r9 = dyn base3(<sym object>, "original.fit");
      goto L0(r9);
    };
    r13 = dyn coef(p1);
    check L28() else D3();
  L30():
    object5 = ld object;
    check L32() else D5();
  L31():
    r15 = dyn base4(<sym object>, "original.fit");
    goto L5(r15);
  D3():
    deopt 12 [r13];
  D5():
    deopt 18 [object5];
  L6(r19):
    c = `as.logical`(r19);
    if c then L38() else L7();
  L28():
    length = ldf length in base;
    r14 = dyn length(r13);
    check L29() else D4();
  L32():
    object6 = force? object5;
    checkMissing(object6);
    attr1 = ldf attr in base;
    r17 = dyn attr1(object6, "original.fit");
    check L33() else D6();
  L34():
    parm1 = ld parm;
    check L36() else D7();
  L35():
    r18 = dyn base5(<sym parm>);
    goto L6(r18);
  D4():
    deopt 14 [r14];
  D6():
    deopt 22 [r17];
  D7():
    deopt 26 [parm1];
  L7():
    goto L9();
  L9():
    parm5 = ld parm;
    check L45() else D11();
  L29():
    goto L4(r14);
  L33():
    goto L5(r17);
  L36():
    parm2 = force? parm1;
    checkMissing(parm2);
    is_numeric = ldf `is.numeric` in base;
    r20 = dyn is_numeric(parm2);
    check L37() else D8();
  L38():
    pnames2 = ld pnames;
    check L39() else D9();
  D8():
    deopt 29 [r20];
  D9():
    deopt 30 [pnames2];
  D11():
    deopt 38 [parm5];
  L37():
    goto L6(r20);
  L39():
    pnames3 = force? pnames2;
    checkMissing(pnames3);
    c1 = `is.object`(pnames3);
    if c1 then L40() else L41(pnames3);
  L45():
    parm6 = force? parm5;
    checkMissing(parm6);
    c2 = `is.object`(parm6);
    if c2 then L46() else L47(parm6);
  L8(dx1):
    st parm = dx1;
    goto L9();
  L10(dx4):
    st parm = dx4;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L51() else L52();
  L40():
    dr = tryDispatchBuiltin.1("[", pnames3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(pnames5):
    parm3 = ld parm;
    check L43() else D10();
  L46():
    dr2 = tryDispatchBuiltin.1("[", parm6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(dr2);
  L47(parm8):
    _in_ = ldf `%in%`;
    check L49() else D12();
  D10():
    deopt 32 [pnames5, parm3];
  D12():
    deopt 41 [parm8];
  L11(r27):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L56() else L57();
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L43():
    parm4 = force? parm3;
    __ = ldf `[` in base;
    r21 = dyn __(pnames5, parm4);
    goto L8(r21);
  L48():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx3);
  L49():
    p2 = prom<V +>{
      parm9 = ld parm;
      parm10 = force? parm9;
      checkMissing(parm10);
      return parm10;
    };
    p3 = prom<V +>{
      pnames6 = ld pnames;
      pnames7 = force? pnames6;
      checkMissing(pnames7);
      return pnames7;
    };
    r24 = dyn _in_(p2, p3);
    check L50() else D13();
  L51():
    fitted = ldf fitted;
    check L53() else D14();
  L52():
    r26 = dyn base6(<lang fitted(of)>);
    goto L11(r26);
  D13():
    deopt 44 [parm8, r24];
  D14():
    deopt 50 [];
  L12(r34, r35):
    r48 = `-`(r34, r35);
    st n = r48;
    level1 = ld level;
    check L69() else D20();
  L50():
    __1 = ldf `[` in base;
    r25 = dyn __1(parm8, r24);
    goto L10(r25);
  L53():
    p4 = prom<V +>{
      of = ld of;
      of1 = force? of;
      checkMissing(of1);
      return of1;
    };
    r29 = dyn fitted(p4);
    check L54() else D15();
  L56():
    of2 = ld of;
    check L58() else D17();
  L57():
    r33 = dyn base7(<lang `$`(`$`(of, m), getPars)()>);
    goto L12(r27, r33);
  D15():
    deopt 52 [r29];
  D17():
    deopt 56 [r27, of2];
  D20():
    deopt 67 [1.0, level1];
  L54():
    length1 = ldf length in base;
    r30 = dyn length1(r29);
    check L55() else D16();
  L58():
    of3 = force? of2;
    checkMissing(of3);
    c3 = `is.object`(of3);
    if c3 then L60() else L61(r27, of3);
  L69():
    level2 = force? level1;
    checkMissing(level2);
    r49 = `-`(1.0, level2);
    r50 = `/`(r49, 2.0);
    st a = r50;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L70() else L71();
  D16():
    deopt 54 [r30];
  L13(r52):
    st a = r52;
    paste = ldf paste;
    check L75() else D24();
  L55():
    goto L11(r30);
  L59(r39, dx6):
    c4 = `is.object`(dx6);
    if c4 then L64() else L65(r39, dx6);
  L60():
    dr4 = tryDispatchBuiltin.1("$", of3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(r27, dr4);
  L61(r37, of5):
    r40 = `$`(of5, <sym m>);
    goto L59(r37, r40);
  L70():
    a = ld a;
    check L72() else D21();
  L71():
    r51 = dyn base8(<sym a>, <lang `-`(1.0, a)>);
    goto L13(r51);
  D21():
    deopt 75 [a];
  D24():
    deopt 85 [];
  L62():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L59(r27, dx5);
  L63(r44, dx10):
    checkFun.0(dx10);
    dx11 = dx10 as cls;
    r46 = dyn dx11();
    check L67() else D18();
  L64():
    dr6 = tryDispatchBuiltin.1("$", dx6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(r39, dr6);
  L65(r42, dx8):
    r45 = `$`(dx8, <sym getPars>);
    goto L63(r42, r45);
  L72():
    a1 = force? a;
    checkMissing(a1);
    a2 = ld a;
    check L73() else D22();
  L75():
    p5 = prom<V +>{
      sym9 = ldf round;
      base9 = ldf round in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      round = ldf round in base;
      r57 = dyn round(<lang `*`(100.0, a)>, 1.0);
      goto L0(r57);
    L2():
      r55 = dyn base9(<lang `*`(100.0, a)>, 1.0);
      goto L0(r55);
    };
    r59 = dyn paste[, , sep](p5, "%", "");
    check L76() else D25();
  D18():
    deopt 61 [r44, r46];
  D22():
    deopt 78 [1.0, a2];
  D25():
    deopt 90 [r59];
  L66():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L63(r39, dx9);
  L67():
    length2 = ldf length in base;
    r47 = dyn length2(r46);
    check L68() else D19();
  L73():
    a3 = force? a2;
    checkMissing(a3);
    r53 = `-`(1.0, a3);
    c5 = ldf c in base;
    r54 = dyn c5(a1, r53);
    check L74() else D23();
  L76():
    st pct = r59;
    array = ldf array;
    check L77() else D26();
  D19():
    deopt 63 [r44, r47];
  D23():
    deopt 82 [r54];
  D26():
    deopt 93 [];
  L68():
    goto L12(r44, r47);
  L74():
    goto L13(r54);
  L77():
    p6 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r61):
      return r61;
    L2():
      sym11 = ldf length;
      base11 = ldf length in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r60 = dyn base10(<lang length(parm)>, 2);
      goto L0(r60);
    L1(r63):
      c6 = ldf c in base;
      r65 = dyn c6(r63, 2);
      goto L0(r65);
    L4():
      parm11 = ld parm;
      parm12 = force? parm11;
      checkMissing(parm12);
      length3 = ldf length in base;
      r64 = dyn length3(parm12);
      goto L1(r64);
    L5():
      r62 = dyn base11(<sym parm>);
      goto L1(r62);
    };
    p7 = prom<V +>{
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      parm13 = ld parm;
      parm14 = force? parm13;
      checkMissing(parm14);
      pct = ld pct;
      pct1 = force? pct;
      checkMissing(pct1);
      list = ldf list in base;
      r69 = dyn list(parm14, pct1);
      goto L0(r69);
    L2():
      r67 = dyn base12(<sym parm>, <sym pct>);
      goto L0(r67);
    };
    r71 = dyn array[, dim, dimnames](NA_LGL, p6, p7);
    check L78() else D27();
  D27():
    deopt 99 [r71];
  L78():
    st ci = r71;
    qt = ldf qt;
    check L79() else D28();
  D28():
    deopt 102 [];
  L79():
    p8 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    p9 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r74 = dyn qt(p8, p9);
    check L80() else D29();
  D29():
    deopt 105 [r74];
  L80():
    st cutoff = r74;
    parm15 = ld parm;
    check L81() else D30();
  D30():
    deopt 107 [parm15];
  L81():
    parm16 = force? parm15;
    checkMissing(parm16);
    s = toForSeq(parm16);
    l = length(s);
    i = 0;
    goto L14(i);
  L14(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L82() else L19();
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st pm = x;
    object7 = ld object;
    check L83() else D31();
  L82():
    sym13 = ldf drop;
    base13 = ldf drop in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L105() else L106();
  D31():
    deopt 109 [i2, object7];
  L20(r100):
    popenv;
    return r100;
  L83():
    object8 = force? object7;
    checkMissing(object8);
    c8 = `is.object`(object8);
    if c8 then L84() else L85(i2, object8);
  L105():
    ci = ld ci;
    check L107() else D41();
  L106():
    r99 = dyn base13(<sym ci>);
    goto L20(r99);
  D41():
    deopt 154 [ci];
  L15(i8, dx13):
    st pro = dx13;
    ncoefs = ld ncoefs;
    check L88() else D33();
  L84():
    dr8 = tryDispatchBuiltin.1("[[", object8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(i2, dr8);
  L85(i6, object10):
    pm = ld pm;
    check L87() else D32();
  L107():
    ci1 = force? ci;
    checkMissing(ci1);
    drop = ldf drop in base;
    r101 = dyn drop(ci1);
    check L108() else D42();
  D32():
    deopt 111 [i6, object10, pm];
  D33():
    deopt 115 [i8, ncoefs];
  D42():
    deopt 157 [r101];
  L86():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L15(i2, dx12);
  L87():
    pm1 = force? pm;
    __2 = ldf `[[` in base;
    r75 = dyn __2(object10, pm1);
    goto L15(i6, r75);
  L88():
    ncoefs1 = force? ncoefs;
    checkMissing(ncoefs1);
    r76 = `>`(ncoefs1, 1.0);
    c9 = `as.logical`(r76);
    if c9 then L89() else L16();
  L108():
    goto L20(r101);
  L16():
    spline1 = ldf spline;
    check L93() else D36();
  L17(i11, r83):
    st sp = r83;
    approx = ldf approx;
    check L95() else D38();
  L89():
    spline = ldf spline;
    check L90() else D34();
  D34():
    deopt 120 [i8];
  D36():
    deopt 127 [i8];
  D38():
    deopt 135 [i11];
  L90():
    p10 = prom<V +>{
      pro = ld pro;
      pro1 = force? pro;
      checkMissing(pro1);
      c10 = `is.object`(pro1);
      if c10 then L2() else L3();
    L0(dx15):
      c11 = `is.object`(dx15);
      if c11 then L5() else L6();
    L2():
      dr10 = tryDispatchBuiltin.1("[", pro1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3();
    L3():
      __3 = ldf `[` in base;
      r77 = dyn __3(pro1, <missing>, "par.vals");
      goto L0(r77);
    L1(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6();
    L6():
      pm2 = ld pm;
      pm3 = force? pm2;
      __4 = ldf `[` in base;
      r78 = dyn __4(dx15, <missing>, pm3);
      goto L1(r78);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx18);
    };
    p11 = prom<V +>{
      pro4 = ld pro;
      pro5 = force? pro4;
      checkMissing(pro5);
      c12 = `is.object`(pro5);
      if c12 then L1() else L2(pro5);
    L0(dx21):
      return dx21;
    L1():
      dr14 = tryDispatchBuiltin.1("$", pro5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(pro7):
      r80 = `$`(pro7, <sym tau>);
      goto L0(r80);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx20);
    };
    r82 = dyn spline[x, y](p10, p11);
    check L91() else D35();
  L93():
    p12 = prom<V +>{
      pro8 = ld pro;
      pro9 = force? pro8;
      checkMissing(pro9);
      c13 = `is.object`(pro9);
      if c13 then L1() else L2();
    L0(dx23):
      return dx23;
    L1():
      dr16 = tryDispatchBuiltin.1("[", pro9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r84 = dyn __5(pro9, <missing>, "par.vals");
      goto L0(r84);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx22);
    };
    p13 = prom<V +>{
      pro12 = ld pro;
      pro13 = force? pro12;
      checkMissing(pro13);
      c14 = `is.object`(pro13);
      if c14 then L1() else L2(pro13);
    L0(dx25):
      return dx25;
    L1():
      dr18 = tryDispatchBuiltin.1("$", pro13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(pro15):
      r86 = `$`(pro15, <sym tau>);
      goto L0(r86);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    r88 = dyn spline1[x, y](p12, p13);
    check L94() else D37();
  L95():
    p14 = prom<V +>{
      sp = ld sp;
      sp1 = force? sp;
      checkMissing(sp1);
      c15 = `is.object`(sp1);
      if c15 then L1() else L2(sp1);
    L0(dx27):
      return dx27;
    L1():
      dr20 = tryDispatchBuiltin.1("$", sp1);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(sp3):
      r89 = `$`(sp3, <sym y>);
      goto L0(r89);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx26);
    };
    p15 = prom<V +>{
      sp4 = ld sp;
      sp5 = force? sp4;
      checkMissing(sp5);
      c16 = `is.object`(sp5);
      if c16 then L1() else L2(sp5);
    L0(dx29):
      return dx29;
    L1():
      dr22 = tryDispatchBuiltin.1("$", sp5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(sp7):
      r91 = `$`(sp7, <sym x>);
      goto L0(r91);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx28);
    };
    p16 = prom<V +>{
      cutoff = ld cutoff;
      cutoff1 = force? cutoff;
      checkMissing(cutoff1);
      return cutoff1;
    };
    r94 = dyn approx[, , xout](p14, p15, p16);
    check L96() else D39();
  D35():
    deopt 125 [i8, r82];
  D37():
    deopt 132 [i8, r88];
  D39():
    deopt 140 [i11, r94];
  L91():
    goto L17(i8, r82);
  L94():
    goto L17(i8, r88);
  L96():
    c17 = `is.object`(r94);
    if c17 then L98() else L99(i11, r94);
  L97(i15, dx31):
    l1 = ld ci;
    c18 = `is.object`(l1);
    if c18 then L101() else L102(i15, dx31, l1);
  L98():
    dr24 = tryDispatchBuiltin.1("$", r94);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L100() else L99(i11, dr24);
  L99(i13, r96):
    r97 = `$`(r96, <sym y>);
    goto L97(i13, r97);
  L18(i19, dx37):
    st ci = dx37;
    goto L14(i19);
  L100():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L97(i11, dx30);
  L101():
    dr26 = tryDispatchBuiltin.0("[<-", l1, dx31);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L103() else L102(i15, dx31, dr26);
  L102(i17, dx33, l3):
    pm4 = ld pm;
    check L104() else D40();
  D40():
    deopt 143 [i17, dx33, l3, dx31, pm4];
  L103():
    dx35 = getTryDispatchBuiltinValue(dr26);
    goto L18(i15, dx35);
  L104():
    pm5 = force? pm4;
    ___ = ldf `[<-` in base;
    r98 = dyn ___(l1, pm5, <missing>, dx31);
    goto L18(i17, r98);
  }
}