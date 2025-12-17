fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner490449083;
    st `.get_startup_function_calls_in_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner490449083(file, encoding) {
  (reg file:*, reg encoding:*) -+> V { var file:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg _parse_code_file:cls, reg file1:*, reg file2:V, reg p:p(V +), reg encoding1:*, reg encoding2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg list:cls, reg r5:V, reg exprs:*, reg exprs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg i7:I, reg r7:V, reg e:*, reg e1:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg i9:I, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg i12:I, reg c6:L, reg r11:V, reg e2:*, reg e3:V, reg c7:L, reg i14:I, reg c9:L, reg e5:V, reg dr:V, reg dc:L, reg dx:V, reg i16:I, reg c11:L, reg dx1:V, reg __:cls, reg r12:V, reg c12:L, reg c13:L, reg c14:V, reg c16:L, reg i19:I, reg c18:V, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x1:*, reg x2:V, reg as_character:cls, reg r15:V, reg p2:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg c19:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg c20:L, reg c21:V, reg c23:L, reg i22:I, reg c25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg i25:I, reg c28:L, reg r23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg i28:I, reg c31:L, reg r25:V, reg e6:*, reg e7:V, reg c32:L, reg i30:I, reg c34:L, reg e9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i32:I, reg c36:L, reg dx3:V, reg __1:cls, reg r26:V, reg as_character1:cls, reg r27:V, reg length1:cls, reg r28:V, reg r29:V, reg c37:L, reg c38:V, reg c40:L, reg i35:I, reg c42:V, reg _in_1:cls, reg y:*, reg y1:V, reg p4:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg c43:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg c44:L, reg c45:V, reg c47:L, reg i38:I, reg c49:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r36:V, reg i41:I, reg c52:L, reg r37:V, reg e10:*, reg e11:V, reg c53:L, reg i43:I, reg c55:L, reg e13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i45:I, reg c57:L, reg dx5:V, reg __2:cls, reg r38:V, reg is_call:cls, reg r39:V, reg c58:L, reg c59:V, reg c61:L, reg i48:I, reg c63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg i51:I, reg c66:L, reg r41:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r42:V, reg i54:I, reg c69:L, reg r43:V, reg z:*, reg z1:V, reg c70:L, reg i56:I, reg c72:L, reg z3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i58:I, reg c74:L, reg dx7:V, reg __3:cls, reg r44:V, reg as_character2:cls, reg r45:V, reg length2:cls, reg r46:V, reg r47:V, reg c75:L, reg c76:V, reg c78:L, reg i61:I, reg c80:V, reg w:*, reg w1:V, reg r48:V, reg c81:L, reg c82:V, reg c84:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r49:V, reg i67:I, reg r50:V, reg z4:*, reg z5:V, reg list1:cls, reg r51:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r52:V, reg i70:I, reg r53:V, reg y2:*, reg y3:V, reg as_character3:cls, reg r54:V, reg l1:*, reg names__:cls, reg r55:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r56:V, reg i73:I, reg r57:V, reg calls:*, reg calls1:V, reg new:*, reg new1:V, reg c85:cls, reg r58:V, reg i74:I, reg calls2:*, reg calls3:V |
    mkenv;
    st file = file;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0(NA_LGL) else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    _parse_code_file = ldf `.parse_code_file`;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p1 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r2 = dyn _parse_code_file(p, p1);
    check L28() else D1();
  D1():
    deopt 4 [r2];
  L28():
    st exprs = r2;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L1(r4):
    st calls = r4;
    exprs = ld exprs;
    check L32() else D3();
  L29():
    list = ldf list in base;
    r5 = dyn list();
    check L31() else D2();
  L30():
    r3 = dyn base();
    goto L1(r3);
  D2():
    deopt 9 [r5];
  D3():
    deopt 11 [exprs];
  L31():
    goto L1(r5);
  L32():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    s = toForSeq(exprs1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L33() else L26();
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st e = x;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L33():
    calls2 = ld calls;
    check L107() else D29();
  D29():
    deopt 124 [calls2];
  L3(i7, r7):
    r9 = `>`(r7, 2);
    c1 = `as.logical`(r9);
    if c1 then L38() else L4(i7, c1);
  L34():
    e = ld e;
    check L36() else D4();
  L35():
    r6 = dyn base1(<sym e>);
    goto L3(i2, r6);
  L107():
    calls3 = force? calls2;
    checkMissing(calls3);
    popenv;
    return calls3;
  D4():
    deopt 15 [i2, e];
  L4(i9, c3):
    c16 = `as.logical`(c3);
    if c16 then L46() else L7(i9, c16);
  L36():
    e1 = force? e;
    checkMissing(e1);
    length = ldf length in base;
    r8 = dyn length(e1);
    check L37() else D5();
  L38():
    sym2 = ldf `is.name`;
    base2 = ldf `is.name` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D5():
    deopt 18 [i2, r8];
  L5(i12, c6, r11):
    c13 = `as.logical`(r11);
    c14 = `&&`(c6, c13);
    goto L4(i12, c14);
  L7(i19, c18):
    c23 = `as.logical`(c18);
    if c23 then L50() else L8(i19, c23);
  L37():
    goto L3(i2, r8);
  L39():
    e2 = ld e;
    check L41() else D6();
  L40():
    r10 = dyn base2(<lang `<-`(x, `[[`(e, 1))>);
    goto L5(i7, c1, r10);
  L46():
    _in_ = ldf `%in%`;
    check L47() else D7();
  D6():
    deopt 22 [i7, c1, e2];
  D7():
    deopt 31 [i9, c16];
  L8(i22, c25):
    c40 = `as.logical`(c25);
    if c40 then L62() else L12(i22, c40);
  L41():
    e3 = force? e2;
    checkMissing(e3);
    c7 = `is.object`(e3);
    if c7 then L42() else L43(i7, c1, e3);
  L47():
    p2 = prom<V +>{
      sym3 = ldf `as.character`;
      base3 = ldf `as.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      as_character = ldf `as.character` in base;
      r15 = dyn as_character(x2);
      goto L0(r15);
    L2():
      r13 = dyn base3(<sym x>);
      goto L0(r13);
    };
    p3 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c19 = ldf c in base;
      r19 = dyn c19("<-", "=");
      goto L0(r19);
    L2():
      r17 = dyn base4("<-", "=");
      goto L0(r17);
    };
    r21 = dyn _in_(p2, p3);
    check L48() else D8();
  L50():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  D8():
    deopt 34 [i9, c16, r21];
  L6(i16, c11, dx1):
    st x = dx1;
    c12 = `is.symbol`(dx1);
    goto L5(i16, c11, c12);
  L9(i25, c28, r23):
    r29 = `==`(r23, 1);
    c37 = `as.logical`(r29);
    c38 = `&&`(c28, c37);
    goto L8(i25, c38);
  L12(i35, c42):
    c47 = `as.logical`(c42);
    if c47 then L66() else L13(i35, c47);
  L42():
    dr = tryDispatchBuiltin.1("[[", e3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(i7, c1, dr);
  L43(i14, c9, e5):
    __ = ldf `[[` in base;
    r12 = dyn __(e5, 1);
    goto L6(i14, c9, r12);
  L48():
    c20 = `as.logical`(r21);
    c21 = `&&`(c16, c20);
    goto L7(i9, c21);
  L51():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L52():
    r22 = dyn base5(<lang `<-`(y, as.character(`[[`(e, 2)))>);
    goto L9(i19, c23, r22);
  L62():
    _in_1 = ldf `%in%`;
    check L63() else D12();
  D12():
    deopt 54 [i22, c40];
  L10(i28, c31, r25):
    st y = r25;
    length1 = ldf length in base;
    r28 = dyn length1(r25);
    check L60() else D11();
  L13(i38, c49):
    c61 = `as.logical`(c49);
    if c61 then L75() else L16(i38, c61);
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i7, c1, dx);
  L53():
    e6 = ld e;
    check L55() else D9();
  L54():
    r24 = dyn base6(<lang `[[`(e, 2)>);
    goto L10(i19, c23, r24);
  L63():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p5 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      c43 = ldf c in base;
      r33 = dyn c43(".First.lib", ".onAttach", ".onLoad");
      goto L0(r33);
    L2():
      r31 = dyn base7(".First.lib", ".onAttach", ".onLoad");
      goto L0(r31);
    };
    r35 = dyn _in_1(p4, p5);
    check L64() else D13();
  L66():
    sym8 = ldf `is.call`;
    base8 = ldf `is.call` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L67() else L68();
  D9():
    deopt 40 [i19, c23, e6];
  D11():
    deopt 49 [i28, c31, r28];
  D13():
    deopt 57 [i22, c40, r35];
  L14(i41, c52, r37):
    c58 = `as.logical`(r37);
    c59 = `&&`(c52, c58);
    goto L13(i41, c59);
  L16(i48, c63):
    c78 = `as.logical`(c63);
    if c78 then L87() else L20(i48, c78);
  L55():
    e7 = force? e6;
    checkMissing(e7);
    c32 = `is.object`(e7);
    if c32 then L56() else L57(i19, c23, e7);
  L60():
    goto L9(i28, c31, r28);
  L64():
    c44 = `as.logical`(r35);
    c45 = `&&`(c40, c44);
    goto L12(i22, c45);
  L67():
    e10 = ld e;
    check L69() else D14();
  L68():
    r36 = dyn base8(<lang `<-`(z, `[[`(e, 3))>);
    goto L14(i35, c47, r36);
  L75():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L76() else L77();
  D14():
    deopt 61 [i35, c47, e10];
  L11(i32, c36, dx3):
    as_character1 = ldf `as.character` in base;
    r27 = dyn as_character1(dx3);
    check L59() else D10();
  L17(i51, c66, r41):
    r47 = `==`(r41, 1);
    c75 = `as.logical`(r47);
    c76 = `&&`(c66, c75);
    goto L16(i51, c76);
  L20(i61, c80):
    c84 = `as.logical`(c80);
    if c84 then L90() else L21();
  L56():
    dr2 = tryDispatchBuiltin.1("[[", e7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(i19, c23, dr2);
  L57(i30, c34, e9):
    __1 = ldf `[[` in base;
    r26 = dyn __1(e9, 2);
    goto L11(i30, c34, r26);
  L69():
    e11 = force? e10;
    checkMissing(e11);
    c53 = `is.object`(e11);
    if c53 then L70() else L71(i35, c47, e11);
  L76():
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L78() else L79();
  L77():
    r40 = dyn base9(<lang `<-`(w, as.character(`[[`(z, 1)))>);
    goto L17(i38, c61, r40);
  L87():
    w = ld w;
    check L88() else D19();
  D10():
    deopt 46 [i32, c36, r27];
  D19():
    deopt 87 [i48, c78, w];
  L15(i45, c57, dx5):
    st z = dx5;
    is_call = ldf `is.call` in base;
    r39 = dyn is_call(dx5);
    check L73() else D15();
  L18(i54, c69, r43):
    st w = r43;
    length2 = ldf length in base;
    r46 = dyn length2(r43);
    check L85() else D18();
  L21():
    goto L25(i61);
  L25(i74):
    goto L2(i74);
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i19, c23, dx2);
  L59():
    goto L10(i32, c36, r27);
  L70():
    dr4 = tryDispatchBuiltin.1("[[", e11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(i35, c47, dr4);
  L71(i43, c55, e13):
    __2 = ldf `[[` in base;
    r38 = dyn __2(e13, 3);
    goto L15(i43, c55, r38);
  L78():
    z = ld z;
    check L80() else D16();
  L79():
    r42 = dyn base10(<lang `[[`(z, 1)>);
    goto L18(i38, c61, r42);
  L88():
    w1 = force? w;
    checkMissing(w1);
    r48 = `==`(w1, "function");
    c81 = `as.logical`(r48);
    c82 = `&&`(c78, c81);
    goto L20(i48, c82);
  L90():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L91() else L92();
  D15():
    deopt 68 [i45, c57, r39];
  D16():
    deopt 74 [i38, c61, z];
  D18():
    deopt 83 [i54, c69, r46];
  L22(i67, r50):
    st new = r50;
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L95() else L96();
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(i35, c47, dx4);
  L73():
    goto L14(i45, c57, r39);
  L80():
    z1 = force? z;
    checkMissing(z1);
    c70 = `is.object`(z1);
    if c70 then L81() else L82(i38, c61, z1);
  L85():
    goto L17(i54, c69, r46);
  L91():
    z4 = ld z;
    check L93() else D20();
  L92():
    r49 = dyn base11(<sym z>);
    goto L22(i61, r49);
  D20():
    deopt 94 [i61, z4];
  L19(i58, c74, dx7):
    as_character2 = ldf `as.character` in base;
    r45 = dyn as_character2(dx7);
    check L84() else D17();
  L23(i70, r53):
    l1 = ld new;
    names__ = ldf `names<-`;
    check L99() else D24();
  L81():
    dr6 = tryDispatchBuiltin.1("[[", z1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(i38, c61, dr6);
  L82(i56, c72, z3):
    __3 = ldf `[[` in base;
    r44 = dyn __3(z3, 1);
    goto L19(i56, c72, r44);
  L93():
    z5 = force? z4;
    checkMissing(z5);
    list1 = ldf list in base;
    r51 = dyn list1(z5);
    check L94() else D21();
  L95():
    y2 = ld y;
    check L97() else D22();
  L96():
    r52 = dyn base12(<sym y>);
    goto L23(i67, r52);
  D17():
    deopt 80 [i58, c74, r45];
  D21():
    deopt 97 [i61, r51];
  D22():
    deopt 101 [i67, y2];
  D24():
    deopt 106 [i70, r53, l1, r53];
  L83():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(i38, c61, dx6);
  L84():
    goto L18(i58, c74, r45);
  L94():
    goto L22(i61, r51);
  L97():
    y3 = force? y2;
    checkMissing(y3);
    as_character3 = ldf `as.character` in base;
    r54 = dyn as_character3(y3);
    check L98() else D23();
  L99():
    r55 = dyn names__(l1, NULL, r53);
    check L100() else D25();
  D23():
    deopt 104 [i67, r54];
  D25():
    deopt 108 [i70, r53, r55];
  L98():
    goto L23(i67, r54);
  L100():
    st new = r55;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L101() else L102();
  L24(i73, r57):
    st calls = r57;
    goto L25(i73);
  L101():
    calls = ld calls;
    check L103() else D26();
  L102():
    r56 = dyn base13(<sym calls>, <sym new>);
    goto L24(i70, r56);
  D26():
    deopt 112 [i70, calls];
  L103():
    calls1 = force? calls;
    checkMissing(calls1);
    new = ld new;
    check L104() else D27();
  D27():
    deopt 114 [i70, new];
  L104():
    new1 = force? new;
    checkMissing(new1);
    c85 = ldf c in base;
    r58 = dyn c85(calls1, new1);
    check L105() else D28();
  D28():
    deopt 117 [i70, r58];
  L105():
    goto L24(i70, r58);
  }
}