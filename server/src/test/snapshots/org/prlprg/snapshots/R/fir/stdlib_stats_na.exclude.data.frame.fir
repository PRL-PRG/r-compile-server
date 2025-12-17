fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `na.exclude.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg length:cls, reg r2:V, reg logical:cls, reg nrow:cls, reg object3:*, reg object4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg n:*, reg n1:V, reg r9:I, reg vars:*, reg vars1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg object5:*, reg object6:V, reg c1:L, reg i6:I, reg object8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg i11:I, reg r12:V, reg x1:*, reg x2:V, reg is_atomic:cls, reg r13:V, reg r14:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg i18:I, reg r17:V, reg x3:*, reg x4:V, reg is_na:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg i21:I, reg r20:V, reg x5:*, reg x6:V, reg dim:cls, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg i24:I, reg r23:V, reg d:*, reg d1:V, reg c3:V, reg c4:L, reg i25:I, reg c5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg i29:I, reg c9:L, reg r25:V, reg d2:*, reg d3:V, reg length1:cls, reg r26:V, reg r27:V, reg c10:L, reg c11:V, reg c13:L, reg omit:*, reg omit1:V, reg x7:*, reg x8:V, reg r28:V, reg i33:I, reg d4:*, reg d5:V, reg c14:L, reg i35:I, reg r31:I, reg d7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i37:I, reg r33:I, reg dx3:V, reg __1:cls, reg r34:V, reg r35:V, reg s1:V, reg l1:I, reg i38:I, reg i39:I, reg i40:I, reg i41:I, reg c15:L, reg x9:V, reg omit2:*, reg omit3:V, reg x10:*, reg x11:V, reg c16:L, reg i48:I, reg i49:I, reg omit5:V, reg x13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i52:I, reg i53:I, reg omit7:V, reg dx5:V, reg ii:*, reg ii1:V, reg __2:cls, reg r36:V, reg r37:V, reg object9:*, reg object10:V, reg c17:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg omit8:*, reg omit9:V, reg r38:V, reg __3:cls, reg r39:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg omit10:*, reg omit11:V, reg r42:V, reg any:cls, reg r43:V, reg c18:L, reg setNames:cls, reg seq:cls, reg omit12:*, reg omit13:V, reg p2:p(V +), reg r45:V, reg c19:L, reg r47:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg omit14:*, reg omit15:V, reg __4:cls, reg r48:V, reg p3:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:V, reg object13:*, reg object14:V, reg attr:cls, reg r52:V, reg c20:L, reg r54:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg omit16:*, reg omit17:V, reg __5:cls, reg r55:V, reg p4:p(V +), reg r57:V, reg l2:*, reg attr__:cls, reg r58:V, reg temp:*, reg temp1:V, reg l3:*, reg attr__1:cls, reg r59:V, reg xx:*, reg xx1:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    st n = r1;
    logical = ldf logical;
    check L27() else D2();
  L23():
    object1 = ld object;
    check L25() else D0();
  L24():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  D2():
    deopt 8 [];
  L25():
    object2 = force? object1;
    checkMissing(object2);
    length = ldf length in base;
    r2 = dyn length(object2);
    check L26() else D1();
  L27():
    p1 = prom<V +>{
      nrow = ldf nrow;
      p = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      r4 = dyn nrow(p);
      return r4;
    };
    r6 = dyn logical(p1);
    check L28() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r6];
  L26():
    goto L0(r2);
  L28():
    st omit = r6;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L1(r8):
    st vars = r8;
    vars = ld vars;
    check L32() else D5();
  L29():
    n = ld n;
    check L31() else D4();
  L30():
    r7 = dyn base1(<sym n>);
    goto L1(r7);
  D4():
    deopt 13 [n];
  D5():
    deopt 17 [vars];
  L31():
    n1 = force? n;
    checkMissing(n1);
    r9 = seq_len(n1);
    goto L1(r9);
  L32():
    vars1 = force? vars;
    checkMissing(vars1);
    s = toForSeq(vars1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L33() else L18();
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    object5 = ld object;
    check L34() else D6();
  L33():
    object9 = ld object;
    check L78() else D23();
  D6():
    deopt 19 [i2, object5];
  D23():
    deopt 91 [object9];
  L34():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L35() else L36(i2, object6);
  L78():
    object10 = force? object9;
    checkMissing(object10);
    c17 = `is.object`(object10);
    if c17 then L79() else L80(object10);
  L3(i8, dx1):
    st x = dx1;
    sym2 = ldf `is.atomic`;
    base2 = ldf `is.atomic` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L19(dx7):
    st xx = dx7;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L35():
    dr = tryDispatchBuiltin.1("[[", object6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(i2, dr);
  L36(i6, object8):
    j = ld j;
    check L38() else D7();
  L79():
    dr6 = tryDispatchBuiltin.1("[", object10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L81() else L80(dr6);
  L80(object12):
    omit8 = ld omit;
    check L82() else D24();
  D7():
    deopt 21 [i6, object8, j];
  D24():
    deopt 93 [object12, omit8];
  L4(i11, r12):
    r14 = `!`(r12);
    c2 = `as.logical`(r14);
    if c2 then L43() else L5();
  L20(r41):
    c18 = `as.logical`(r41);
    if c18 then L87() else L21();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L38():
    j1 = force? j;
    __ = ldf `[[` in base;
    r10 = dyn __(object8, j1);
    goto L3(i6, r10);
  L39():
    x1 = ld x;
    check L41() else D8();
  L40():
    r11 = dyn base2(<sym x>);
    goto L4(i8, r11);
  L81():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(dx6);
  L82():
    omit9 = force? omit8;
    checkMissing(omit9);
    r38 = `!`(omit9);
    __3 = ldf `[` in base;
    r39 = dyn __3(object10, r38, <missing>, FALSE);
    goto L19(r39);
  L83():
    omit10 = ld omit;
    check L85() else D25();
  L84():
    r40 = dyn base7(<lang `>`(omit, 0)>);
    goto L20(r40);
  D8():
    deopt 27 [i8, x1];
  D25():
    deopt 104 [omit10];
  L5():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L21():
    goto L22();
  L22():
    xx = ld xx;
    check L96() else D34();
  L41():
    x2 = force? x1;
    checkMissing(x2);
    is_atomic = ldf `is.atomic` in base;
    r13 = dyn is_atomic(x2);
    check L42() else D9();
  L43():
    goto L2(i11);
  L85():
    omit11 = force? omit10;
    checkMissing(omit11);
    r42 = `>`(omit11, 0);
    any = ldf any in base;
    r43 = dyn any(r42);
    check L86() else D26();
  L87():
    setNames = ldf setNames;
    check L88() else D27();
  D9():
    deopt 30 [i8, r13];
  D26():
    deopt 109 [r43];
  D27():
    deopt 111 [];
  D34():
    deopt 134 [xx];
  L7(i18, r17):
    st x = r17;
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L42():
    goto L4(i8, r13);
  L46():
    x3 = ld x;
    check L48() else D10();
  L47():
    r16 = dyn base3(<sym x>);
    goto L7(i11, r16);
  L86():
    goto L20(r43);
  L88():
    p3 = prom<V +>{
      seq = ldf seq;
      p2 = prom<V +>{
        omit12 = ld omit;
        omit13 = force? omit12;
        checkMissing(omit13);
        return omit13;
      };
      r45 = dyn seq(p2);
      c19 = `is.object`(r45);
      if c19 then L1() else L2(r45);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", r45);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(r47):
      omit14 = ld omit;
      omit15 = force? omit14;
      __4 = ldf `[` in base;
      r48 = dyn __4(r47, omit15);
      goto L0(r48);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p4 = prom<V +>{
      sym8 = ldf attr;
      base8 = ldf attr in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r51):
      c20 = `is.object`(r51);
      if c20 then L4() else L5(r51);
    L2():
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      attr = ldf attr in base;
      r52 = dyn attr(object14, "row.names");
      goto L0(r52);
    L3():
      r50 = dyn base8(<sym object>, "row.names");
      goto L0(r50);
    L1(dx11):
      return dx11;
    L4():
      dr10 = tryDispatchBuiltin.1("[", r51);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5(dr10);
    L5(r54):
      omit16 = ld omit;
      omit17 = force? omit16;
      __5 = ldf `[` in base;
      r55 = dyn __5(r54, omit17);
      goto L1(r55);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    };
    r57 = dyn setNames(p3, p4);
    check L89() else D28();
  L96():
    xx1 = force? xx;
    checkMissing(xx1);
    popenv;
    return xx1;
  D10():
    deopt 38 [i11, x3];
  D28():
    deopt 114 [r57];
  L8(i21, r20):
    st d = r20;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L48():
    x4 = force? x3;
    checkMissing(x4);
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(x4);
    check L49() else D11();
  L50():
    x5 = ld x;
    check L52() else D12();
  L51():
    r19 = dyn base4(<sym x>);
    goto L8(i18, r19);
  L89():
    st temp = r57;
    l2 = ld temp;
    attr__ = ldf `attr<-`;
    check L90() else D29();
  D11():
    deopt 41 [i11, r18];
  D12():
    deopt 45 [i18, x5];
  D29():
    deopt 119 ["exclude", l2, "exclude"];
  L9(i24, r23):
    c4 = `as.logical`(r23);
    if c4 then L10(i24, c4) else L57();
  L49():
    goto L7(i11, r18);
  L52():
    x6 = force? x5;
    checkMissing(x6);
    dim = ldf dim in base;
    r21 = dyn dim(x6);
    check L53() else D13();
  L54():
    d = ld d;
    check L56() else D14();
  L55():
    r22 = dyn base5(<sym d>);
    goto L9(i21, r22);
  L90():
    r58 = dyn attr__(l2, NULL, "class", "exclude");
    check L91() else D30();
  D13():
    deopt 48 [i18, r21];
  D14():
    deopt 51 [i21, d];
  D30():
    deopt 122 ["exclude", r58];
  L10(i25, c5):
    c13 = `as.logical`(c5);
    if c13 then L63() else L12();
  L53():
    goto L8(i18, r21);
  L56():
    d1 = force? d;
    checkMissing(d1);
    c3 = `==`(d1, NULL);
    goto L9(i21, c3);
  L57():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L91():
    st temp = r58;
    temp = ld temp;
    check L92() else D31();
  D31():
    deopt 124 [temp];
  L11(i29, c9, r25):
    r27 = `!=`(r25, 2);
    c10 = `as.logical`(r27);
    c11 = `||`(c9, c10);
    goto L10(i29, c11);
  L12():
    d4 = ld d;
    check L67() else D19();
  L13(i33):
    goto L2(i33);
  L58():
    d2 = ld d;
    check L60() else D15();
  L59():
    r24 = dyn base6(<sym d>);
    goto L11(i24, c4, r24);
  L63():
    omit = ld omit;
    check L64() else D17();
  L92():
    temp1 = force? temp;
    checkMissing(temp1);
    l3 = ld xx;
    attr__1 = ldf `attr<-`;
    check L93() else D32();
  D15():
    deopt 56 [i24, c4, d2];
  D17():
    deopt 63 [i25, omit];
  D19():
    deopt 69 [i25, 1, d4];
  D32():
    deopt 127 [temp1, l3, temp1];
  L60():
    d3 = force? d2;
    checkMissing(d3);
    length1 = ldf length in base;
    r26 = dyn length1(d3);
    check L61() else D16();
  L64():
    omit1 = force? omit;
    checkMissing(omit1);
    x7 = ld x;
    check L65() else D18();
  L67():
    d5 = force? d4;
    checkMissing(d5);
    c14 = `is.object`(d5);
    if c14 then L68() else L69(i25, 1, d5);
  L93():
    r59 = dyn attr__1(l3, NULL, "na.action", temp1);
    check L94() else D33();
  D16():
    deopt 59 [i24, c4, r26];
  D18():
    deopt 64 [i25, omit1, x7];
  D33():
    deopt 130 [temp1, r59];
  L14(i37, r33, dx3):
    r35 = `:`(r33, dx3);
    s1 = toForSeq(r35);
    l1 = length(s1);
    i38 = 0;
    goto L15(i37, i38);
  L61():
    goto L11(i24, c4, r26);
  L65():
    x8 = force? x7;
    checkMissing(x8);
    r28 = `||`(omit1, x8);
    st omit = r28;
    goto L13(i25);
  L68():
    dr2 = tryDispatchBuiltin.1("[", d5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(i25, 1, dr2);
  L69(i35, r31, d7):
    __1 = ldf `[` in base;
    r34 = dyn __1(d7, 2);
    goto L14(i35, r31, r34);
  L94():
    st xx = r59;
    goto L22();
  L15(i39, i40):
    i41 = `+`.1(i40, 1);
    c15 = `<`.1(l1, i41);
    if c15 then L71() else L17();
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(i25, 1, dx2);
  L17():
    x9 = `[[`(s1, i41, NULL, TRUE);
    st ii = x9;
    omit2 = ld omit;
    check L72() else D20();
  L71():
    goto L13(i39);
  D20():
    deopt 75 [i39, i41, omit2];
  L72():
    omit3 = force? omit2;
    checkMissing(omit3);
    x10 = ld x;
    check L73() else D21();
  D21():
    deopt 76 [i39, i41, omit3, x10];
  L73():
    x11 = force? x10;
    checkMissing(x11);
    c16 = `is.object`(x11);
    if c16 then L74() else L75(i39, i41, omit3, x11);
  L16(i52, i53, omit7, dx5):
    r37 = `||`(omit7, dx5);
    st omit = r37;
    goto L15(i52, i53);
  L74():
    dr4 = tryDispatchBuiltin.1("[", x11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L76() else L75(i39, i41, omit3, dr4);
  L75(i48, i49, omit5, x13):
    ii = ld ii;
    check L77() else D22();
  D22():
    deopt 79 [i48, i49, omit5, x13, ii];
  L76():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(i39, i41, omit3, dx4);
  L77():
    ii1 = force? ii;
    __2 = ldf `[` in base;
    r36 = dyn __2(x11, <missing>, ii1);
    goto L16(i48, i49, omit5, r36);
  }
}