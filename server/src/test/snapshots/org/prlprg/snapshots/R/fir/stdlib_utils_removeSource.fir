fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg r2:cls, reg fn:*, reg fn1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg fn2:*, reg fn3:V, reg attributes:cls, reg r7:V, reg names:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg body:cls, reg fn4:*, reg fn5:V, reg p:p(V +), reg r14:V, reg attributes1:cls, reg r15:V, reg names1:cls, reg r16:V, reg removeSource:cls, reg fn6:*, reg fn7:V, reg p1:p(V +), reg r18:V, reg f2:*, reg f3:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg fn8:*, reg fn9:V, reg attributes2:cls, reg r23:V, reg length:cls, reg r24:V, reg r25:V, reg p2:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg f4:*, reg f5:V, reg attributes3:cls, reg r31:V, reg c:V, reg p3:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg r34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r35:V, reg r36:V, reg body1:cls, reg f6:*, reg f7:V, reg p4:p(V +), reg r38:V, reg attributes4:cls, reg r39:V, reg c1:V, reg p5:p(V +), reg r41:V, reg parse:cls, reg r42:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r45:V, reg r46:V, reg E:*, reg E1:V, reg attributes5:cls, reg r47:V, reg names2:cls, reg r48:V, reg removeSource1:cls, reg E2:*, reg E3:V, reg p6:p(V +), reg r50:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r53:V, reg r54:V, reg E_:*, reg E_1:V, reg attributes6:cls, reg r55:V, reg names3:cls, reg r56:V, reg stopifnot1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r57:V, reg r58:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r59:V, reg r60:V, reg E4:*, reg E5:V, reg attributes7:cls, reg r61:V, reg length1:cls, reg r62:V, reg r63:V, reg p7:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r65:V, reg r66:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r67:V, reg r68:V, reg E_2:*, reg E_3:V, reg attributes8:cls, reg r69:V, reg c2:V, reg p8:p(V +), reg r71:V, reg options1:cls, reg op:*, reg op1:V, reg p9:p(V +), reg r73:V |
    mkenv;
    r = clos inner1878806376;
    st removeSource = r;
    options = ldf options;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    r1 = dyn options[`keep.source`](TRUE);
    check L9() else D1();
  D1():
    deopt 7 [r1];
  L9():
    st op = r1;
    r2 = clos inner2501545716;
    st fn = r2;
    fn = ld fn;
    check L10() else D2();
  D2():
    deopt 12 [fn];
  L10():
    fn1 = force? fn;
    checkMissing(fn1);
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L11():
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r3 = dyn base(<lang attributes(fn)>);
    goto L0();
  L1(r6):
    names = ldf names in base;
    r8 = dyn names(r6);
    check L17() else D5();
  L2():
    removeSource = ldf removeSource;
    check L26() else D10();
  L13():
    fn2 = ld fn;
    check L15() else D3();
  L14():
    r5 = dyn base1(<sym fn>);
    goto L1(r5);
  L18():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L19():
    r9 = dyn base2(<lang attributes(body(fn))>);
    goto L2();
  D3():
    deopt 18 [fn2];
  D5():
    deopt 23 [r8];
  D10():
    deopt 37 [];
  L3(r12):
    names1 = ldf names in base;
    r16 = dyn names1(r12);
    check L25() else D9();
  L15():
    fn3 = force? fn2;
    checkMissing(fn3);
    attributes = ldf attributes in base;
    r7 = dyn attributes(fn3);
    check L16() else D4();
  L17():
    goto L0();
  L20():
    body = ldf body;
    check L22() else D6();
  L21():
    r11 = dyn base3(<lang body(fn)>);
    goto L3(r11);
  L26():
    p1 = prom<V +>{
      fn6 = ld fn;
      fn7 = force? fn6;
      checkMissing(fn7);
      return fn7;
    };
    r18 = dyn removeSource(p1);
    check L27() else D11();
  D4():
    deopt 21 [r7];
  D6():
    deopt 29 [];
  D9():
    deopt 35 [r16];
  D11():
    deopt 39 [r18];
  L16():
    goto L1(r7);
  L22():
    p = prom<V +>{
      fn4 = ld fn;
      fn5 = force? fn4;
      checkMissing(fn5);
      return fn5;
    };
    r14 = dyn body(p);
    check L23() else D7();
  L25():
    goto L2();
  L27():
    st f2 = r18;
    f2 = ld f2;
    check L28() else D12();
  D7():
    deopt 31 [r14];
  D12():
    deopt 41 [f2];
  L23():
    attributes1 = ldf attributes in base;
    r15 = dyn attributes1(r14);
    check L24() else D8();
  L28():
    f3 = force? f2;
    checkMissing(f3);
    stopifnot = ldf stopifnot;
    check L29() else D13();
  D8():
    deopt 33 [r15];
  D13():
    deopt 44 [];
  L24():
    goto L3(r15);
  L29():
    p2 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r20):
      r25 = `>`(r20, 0.0);
      return r25;
    L2():
      sym5 = ldf attributes;
      base5 = ldf attributes in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r19 = dyn base4(<lang attributes(fn)>);
      goto L0(r19);
    L1(r22):
      length = ldf length in base;
      r24 = dyn length(r22);
      goto L0(r24);
    L4():
      fn8 = ld fn;
      fn9 = force? fn8;
      checkMissing(fn9);
      attributes2 = ldf attributes in base;
      r23 = dyn attributes2(fn9);
      goto L1(r23);
    L5():
      r21 = dyn base5(<sym fn>);
      goto L1(r21);
    };
    p3 = prom<V +>{
      sym6 = ldf `is.null`;
      base6 = ldf `is.null` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r28):
      return r28;
    L2():
      sym7 = ldf attributes;
      base7 = ldf attributes in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r27 = dyn base6(<lang attributes(f2)>);
      goto L0(r27);
    L1(r30):
      c = `==`(r30, NULL);
      goto L0(c);
    L4():
      f4 = ld f2;
      f5 = force? f4;
      checkMissing(f5);
      attributes3 = ldf attributes in base;
      r31 = dyn attributes3(f5);
      goto L1(r31);
    L5():
      r29 = dyn base7(<sym f2>);
      goto L1(r29);
    };
    p5 = prom<V +>{
      sym8 = ldf `is.null`;
      base8 = ldf `is.null` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r34):
      return r34;
    L2():
      sym9 = ldf attributes;
      base9 = ldf attributes in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r33 = dyn base8(<lang attributes(body(f2))>);
      goto L0(r33);
    L1(r36):
      c1 = `==`(r36, NULL);
      goto L0(c1);
    L4():
      body1 = ldf body;
      p4 = prom<V +>{
        f6 = ld f2;
        f7 = force? f6;
        checkMissing(f7);
        return f7;
      };
      r38 = dyn body1(p4);
      attributes4 = ldf attributes in base;
      r39 = dyn attributes4(r38);
      goto L1(r39);
    L5():
      r35 = dyn base9(<lang body(f2)>);
      goto L1(r35);
    };
    r41 = dyn stopifnot(p2, p3, p5);
    check L30() else D14();
  D14():
    deopt 48 [r41];
  L30():
    parse = ldf parse;
    check L31() else D15();
  D15():
    deopt 50 [];
  L31():
    r42 = dyn parse[text]("a <- x^y  # power");
    check L32() else D16();
  D16():
    deopt 53 [r42];
  L32():
    st E = r42;
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L33() else L34();
  L4():
    removeSource1 = ldf removeSource;
    check L40() else D20();
  L33():
    sym11 = ldf attributes;
    base11 = ldf attributes in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L35() else L36();
  L34():
    r43 = dyn base10(<lang attributes(E)>);
    goto L4();
  D20():
    deopt 66 [];
  L5(r46):
    names2 = ldf names in base;
    r48 = dyn names2(r46);
    check L39() else D19();
  L35():
    E = ld E;
    check L37() else D17();
  L36():
    r45 = dyn base11(<sym E>);
    goto L5(r45);
  L40():
    p6 = prom<V +>{
      E2 = ld E;
      E3 = force? E2;
      checkMissing(E3);
      return E3;
    };
    r50 = dyn removeSource1(p6);
    check L41() else D21();
  D17():
    deopt 59 [E];
  D19():
    deopt 64 [r48];
  D21():
    deopt 68 [r50];
  L37():
    E1 = force? E;
    checkMissing(E1);
    attributes5 = ldf attributes in base;
    r47 = dyn attributes5(E1);
    check L38() else D18();
  L39():
    goto L4();
  L41():
    st `E.` = r50;
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L42() else L43();
  D18():
    deopt 62 [r47];
  L6():
    stopifnot1 = ldf stopifnot;
    check L49() else D25();
  L38():
    goto L5(r47);
  L42():
    sym13 = ldf attributes;
    base13 = ldf attributes in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L44() else L45();
  L43():
    r51 = dyn base12(<lang attributes(E.)>);
    goto L6();
  D25():
    deopt 81 [];
  L7(r54):
    names3 = ldf names in base;
    r56 = dyn names3(r54);
    check L48() else D24();
  L44():
    E_ = ld `E.`;
    check L46() else D22();
  L45():
    r53 = dyn base13(<sym E.>);
    goto L7(r53);
  L49():
    p7 = prom<V +>{
      sym14 = ldf length;
      base14 = ldf length in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r58):
      r63 = `>`(r58, 0.0);
      return r63;
    L2():
      sym15 = ldf attributes;
      base15 = ldf attributes in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L4() else L5();
    L3():
      r57 = dyn base14(<lang attributes(E)>);
      goto L0(r57);
    L1(r60):
      length1 = ldf length in base;
      r62 = dyn length1(r60);
      goto L0(r62);
    L4():
      E4 = ld E;
      E5 = force? E4;
      checkMissing(E5);
      attributes7 = ldf attributes in base;
      r61 = dyn attributes7(E5);
      goto L1(r61);
    L5():
      r59 = dyn base15(<sym E>);
      goto L1(r59);
    };
    p8 = prom<V +>{
      sym16 = ldf `is.null`;
      base16 = ldf `is.null` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L2() else L3();
    L0(r66):
      return r66;
    L2():
      sym17 = ldf attributes;
      base17 = ldf attributes in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L4() else L5();
    L3():
      r65 = dyn base16(<lang attributes(E.)>);
      goto L0(r65);
    L1(r68):
      c2 = `==`(r68, NULL);
      goto L0(c2);
    L4():
      E_2 = ld `E.`;
      E_3 = force? E_2;
      checkMissing(E_3);
      attributes8 = ldf attributes in base;
      r69 = dyn attributes8(E_3);
      goto L1(r69);
    L5():
      r67 = dyn base17(<sym E.>);
      goto L1(r67);
    };
    r71 = dyn stopifnot1(p7, p8);
    check L50() else D26();
  D22():
    deopt 74 [E_];
  D24():
    deopt 79 [r56];
  D26():
    deopt 84 [r71];
  L46():
    E_1 = force? E_;
    checkMissing(E_1);
    attributes6 = ldf attributes in base;
    r55 = dyn attributes6(E_1);
    check L47() else D23();
  L48():
    goto L6();
  L50():
    options1 = ldf options;
    check L51() else D27();
  D23():
    deopt 77 [r55];
  D27():
    deopt 86 [];
  L47():
    goto L7(r55);
  L51():
    p9 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r73 = dyn options1(p9);
    check L52() else D28();
  D28():
    deopt 88 [r73];
  L52():
    popenv;
    return r73;
  }
}
fun inner1878806376(fn) {
  (reg fn:*) -+> V { var fn:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg fn1:*, reg fn2:V, reg is_function:cls, reg r3:V, reg c:L, reg is_primitive:cls, reg fn3:*, reg fn4:V, reg p:p(V +), reg r5:V, reg r6:V, reg c1:L, reg l:*, reg attr__:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg fn5:*, reg fn6:V, reg attributes:cls, reg r10:V, reg recurse:cls, reg formals:cls, reg fn7:*, reg fn8:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg l1:*, reg formals__:cls, reg r15:V, reg l2:*, reg body:cls, reg r16:V, reg attr__1:cls, reg r17:V, reg body__:cls, reg r18:V, reg l3:*, reg body1:cls, reg r19:V, reg attr__2:cls, reg r20:V, reg body__1:cls, reg r21:V, reg recurse1:cls, reg body2:cls, reg fn9:*, reg fn10:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg r25:V, reg l4:*, reg body__2:cls, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg at:*, reg at1:V, reg c2:V, reg r29:V, reg c3:L, reg at2:*, reg at3:V, reg l5:*, reg attributes__:cls, reg r30:V, reg at4:V, reg fn11:*, reg fn12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg fn13:*, reg fn14:V, reg is_language:cls, reg r33:V, reg c4:L, reg recurse2:cls, reg fn15:*, reg fn16:V, reg p5:p(V +), reg r35:V, reg stop:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg fn17:*, reg fn18:V, reg typeof:cls, reg r38:V, reg p6:p(V +), reg r40:V |
    mkenv;
    st fn = fn;
    r = clos inner3244121811;
    st recurse = r;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r2):
    c = `as.logical`(r2);
    if c then L14() else L1();
  L10():
    fn1 = ld fn;
    check L12() else D0();
  L11():
    r1 = dyn base(<sym fn>);
    goto L0(r1);
  D0():
    deopt 5 [fn1];
  L1():
    sym3 = ldf `is.language`;
    base3 = ldf `is.language` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L12():
    fn2 = force? fn1;
    checkMissing(fn2);
    is_function = ldf `is.function` in base;
    r3 = dyn is_function(fn2);
    check L13() else D1();
  L14():
    is_primitive = ldf `is.primitive`;
    check L15() else D2();
  D1():
    deopt 8 [r3];
  D2():
    deopt 10 [];
  L8(r32):
    c4 = `as.logical`(r32);
    if c4 then L59() else L9();
  L13():
    goto L0(r3);
  L15():
    p = prom<V +>{
      fn3 = ld fn;
      fn4 = force? fn3;
      checkMissing(fn4);
      return fn4;
    };
    r5 = dyn is_primitive(p);
    check L16() else D3();
  L55():
    fn13 = ld fn;
    check L57() else D33();
  L56():
    r31 = dyn base3(<sym fn>);
    goto L8(r31);
  D3():
    deopt 12 [r5];
  D33():
    deopt 97 [fn13];
  L9():
    stop = ldf stop;
    check L63() else D37();
  L16():
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L17() else L2();
  L57():
    fn14 = force? fn13;
    checkMissing(fn14);
    is_language = ldf `is.language` in base;
    r33 = dyn is_language(fn14);
    check L58() else D34();
  L59():
    recurse2 = ldf recurse;
    check L60() else D35();
  D34():
    deopt 100 [r33];
  D35():
    deopt 102 [];
  D37():
    deopt 106 [];
  L2():
    goto L7();
  L7():
    fn11 = ld fn;
    check L53() else D32();
  L17():
    l = ld fn;
    attr__ = ldf `attr<-`;
    check L18() else D4();
  L58():
    goto L8(r33);
  L60():
    p5 = prom<V +>{
      fn15 = ld fn;
      fn16 = force? fn15;
      checkMissing(fn16);
      return fn16;
    };
    r35 = dyn recurse2(p5);
    check L61() else D36();
  L63():
    p6 = prom<V +>{
      sym4 = ldf typeof;
      base4 = ldf typeof in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      fn17 = ld fn;
      fn18 = force? fn17;
      checkMissing(fn18);
      typeof = ldf typeof in base;
      r38 = dyn typeof(fn18);
      goto L0(r38);
    L2():
      r36 = dyn base4(<sym fn>);
      goto L0(r36);
    };
    r40 = dyn stop("argument is not a function or language object:", p6);
    check L64() else D38();
  D4():
    deopt 17 [NULL, l, NULL];
  D32():
    deopt 93 [fn11];
  D36():
    deopt 104 [r35];
  D38():
    deopt 109 [r40];
  L18():
    r7 = dyn attr__(l, NULL, "srcref", NULL);
    check L19() else D5();
  L53():
    fn12 = force? fn11;
    checkMissing(fn12);
    popenv;
    return fn12;
  L61():
    popenv;
    return r35;
  L64():
    popenv;
    return r40;
  D5():
    deopt 20 [NULL, r7];
  L19():
    st fn = r7;
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(r9):
    st at = r9;
    recurse = ldf recurse;
    check L24() else D8();
  L20():
    fn5 = ld fn;
    check L22() else D6();
  L21():
    r8 = dyn base1(<sym fn>);
    goto L3(r8);
  D6():
    deopt 24 [fn5];
  D8():
    deopt 30 [];
  L22():
    fn6 = force? fn5;
    checkMissing(fn6);
    attributes = ldf attributes in base;
    r10 = dyn attributes(fn6);
    check L23() else D7();
  L24():
    p2 = prom<V +>{
      formals = ldf formals;
      p1 = prom<V +>{
        fn7 = ld fn;
        fn8 = force? fn7;
        checkMissing(fn8);
        return fn8;
      };
      r12 = dyn formals(p1);
      return r12;
    };
    r14 = dyn recurse(p2);
    check L25() else D9();
  D7():
    deopt 27 [r10];
  D9():
    deopt 32 [r14];
  L23():
    goto L3(r10);
  L25():
    l1 = ld fn;
    formals__ = ldf `formals<-`;
    check L26() else D10();
  D10():
    deopt 34 [r14, l1, r14];
  L26():
    r15 = dyn formals__(l1, NULL, r14);
    check L27() else D11();
  D11():
    deopt 36 [r14, r15];
  L27():
    st fn = r15;
    l2 = ld fn;
    body = ldf body;
    check L28() else D12();
  D12():
    deopt 41 [NULL, l2, NULL];
  L28():
    r16 = dyn body(NULL, NULL);
    check L29() else D13();
  D13():
    deopt 43 [NULL, l2, NULL, r16];
  L29():
    attr__1 = ldf `attr<-`;
    check L30() else D14();
  D14():
    deopt 45 [NULL, l2, r16, NULL];
  L30():
    r17 = dyn attr__1(r16, NULL, "wholeSrcref", NULL);
    check L31() else D15();
  D15():
    deopt 48 [NULL, l2, r17];
  L31():
    body__ = ldf `body<-`;
    check L32() else D16();
  D16():
    deopt 49 [NULL, l2, r17];
  L32():
    r18 = dyn body__(l2, NULL, r17);
    check L33() else D17();
  D17():
    deopt 51 [NULL, r18];
  L33():
    st fn = r18;
    l3 = ld fn;
    body1 = ldf body;
    check L34() else D18();
  D18():
    deopt 56 [NULL, l3, NULL];
  L34():
    r19 = dyn body1(NULL, NULL);
    check L35() else D19();
  D19():
    deopt 58 [NULL, l3, NULL, r19];
  L35():
    attr__2 = ldf `attr<-`;
    check L36() else D20();
  D20():
    deopt 60 [NULL, l3, r19, NULL];
  L36():
    r20 = dyn attr__2(r19, NULL, "srcfile", NULL);
    check L37() else D21();
  D21():
    deopt 63 [NULL, l3, r20];
  L37():
    body__1 = ldf `body<-`;
    check L38() else D22();
  D22():
    deopt 64 [NULL, l3, r20];
  L38():
    r21 = dyn body__1(l3, NULL, r20);
    check L39() else D23();
  D23():
    deopt 66 [NULL, r21];
  L39():
    st fn = r21;
    recurse1 = ldf recurse;
    check L40() else D24();
  D24():
    deopt 69 [];
  L40():
    p4 = prom<V +>{
      body2 = ldf body;
      p3 = prom<V +>{
        fn9 = ld fn;
        fn10 = force? fn9;
        checkMissing(fn10);
        return fn10;
      };
      r23 = dyn body2(p3);
      return r23;
    };
    r25 = dyn recurse1(p4);
    check L41() else D25();
  D25():
    deopt 71 [r25];
  L41():
    l4 = ld fn;
    body__2 = ldf `body<-`;
    check L42() else D26();
  D26():
    deopt 73 [r25, l4, r25];
  L42():
    r26 = dyn body__2(l4, NULL, r25);
    check L43() else D27();
  D27():
    deopt 75 [r25, r26];
  L43():
    st fn = r26;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L4(r28):
    r29 = `!`(r28);
    c3 = `as.logical`(r29);
    if c3 then L47() else L5();
  L44():
    at = ld at;
    check L46() else D28();
  L45():
    r27 = dyn base2(<sym at>);
    goto L4(r27);
  D28():
    deopt 78 [at];
  L5():
    goto L6(NULL);
  L6(at4):
    goto L7();
  L46():
    at1 = force? at;
    checkMissing(at1);
    c2 = `==`(at1, NULL);
    goto L4(c2);
  L47():
    at2 = ld at;
    check L48() else D29();
  D29():
    deopt 82 [at2];
  L48():
    at3 = force? at2;
    checkMissing(at3);
    l5 = ld fn;
    attributes__ = ldf `attributes<-`;
    check L49() else D30();
  D30():
    deopt 85 [at3, l5, at3];
  L49():
    r30 = dyn attributes__(l5, NULL, at3);
    check L50() else D31();
  D31():
    deopt 87 [at3, r30];
  L50():
    st fn = r30;
    goto L6(at3);
  }
}
fun inner3244121811(part) {
  (reg part:*) -+> V { var part:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg part1:*, reg part2:V, reg c:L, reg c1:L, reg part3:*, reg part4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg part5:*, reg part6:V, reg inherits:cls, reg r6:V, reg c2:L, reg l:*, reg attr__:cls, reg r9:V, reg l1:*, reg attr__1:cls, reg r10:V, reg l2:*, reg attr__2:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg part7:*, reg part8:V, reg is_pairlist:cls, reg r14:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg part9:*, reg part10:V, reg r17:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg i7:I, reg r19:V, reg recurse:cls, reg part11:*, reg part12:V, reg c5:L, reg part14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i8:*, reg i9:V, reg __:cls, reg r20:V, reg p:p(V +), reg r22:V, reg list:cls, reg r23:V, reg l4:*, reg c6:L, reg i11:I, reg r25:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i13:I, reg dx3:V, reg i14:*, reg i15:V, reg ___:cls, reg r28:V, reg as_pairlist:cls, reg part15:*, reg part16:V, reg p1:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg part17:*, reg part18:V, reg is_language:cls, reg r35:V, reg c7:L, reg c9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg c12:L, reg r37:V, reg part19:*, reg part20:V, reg is_recursive:cls, reg r38:V, reg c13:L, reg c14:V, reg c16:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg part21:*, reg part22:V, reg r41:I, reg s1:V, reg l7:I, reg i16:I, reg i17:I, reg i18:I, reg c17:L, reg x1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg i23:I, reg r43:V, reg recurse1:cls, reg part23:*, reg part24:V, reg c18:L, reg part26:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i24:*, reg i25:V, reg __1:cls, reg r44:V, reg p2:p(V +), reg r46:V, reg list1:cls, reg r47:V, reg l8:*, reg c19:L, reg i27:I, reg r49:V, reg l10:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i29:I, reg dx7:V, reg i30:*, reg i31:V, reg ___1:cls, reg r52:V, reg part27:*, reg part28:V |
    mkenv;
    st part = part;
    sym = ldf `is.name`;
    base = ldf `is.name` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L27() else L1();
  L24():
    part1 = ld part;
    check L26() else D0();
  L25():
    r = dyn base(<sym part>);
    goto L0(r);
  D0():
    deopt 1 [part1];
  L1():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L26():
    part2 = force? part1;
    checkMissing(part2);
    c = `is.symbol`(part2);
    goto L0(c);
  L27():
    part3 = ld part;
    check L28() else D1();
  D1():
    deopt 4 [part3];
  L3(r5):
    c2 = `as.logical`(r5);
    if c2 then L35() else L4();
  L28():
    part4 = force? part3;
    checkMissing(part4);
    popenv;
    return part4;
  L31():
    part5 = ld part;
    check L33() else D2();
  L32():
    r4 = dyn base1(<sym part>, "srcref");
    goto L3(r4);
  D2():
    deopt 11 [part5];
  L4():
    l = ld part;
    attr__ = ldf `attr<-`;
    check L38() else D4();
  L33():
    part6 = force? part5;
    checkMissing(part6);
    inherits = ldf inherits in base;
    r6 = dyn inherits(part6, "srcref", FALSE);
    check L34() else D3();
  L35():
    popenv;
    return NULL;
  D3():
    deopt 16 [r6];
  D4():
    deopt 25 [NULL, l, NULL];
  L34():
    goto L3(r6);
  L38():
    r9 = dyn attr__(l, NULL, "srcref", NULL);
    check L39() else D5();
  D5():
    deopt 28 [NULL, r9];
  L39():
    st part = r9;
    l1 = ld part;
    attr__1 = ldf `attr<-`;
    check L40() else D6();
  D6():
    deopt 33 [NULL, l1, NULL];
  L40():
    r10 = dyn attr__1(l1, NULL, "wholeSrcref", NULL);
    check L41() else D7();
  D7():
    deopt 36 [NULL, r10];
  L41():
    st part = r10;
    l2 = ld part;
    attr__2 = ldf `attr<-`;
    check L42() else D8();
  D8():
    deopt 41 [NULL, l2, NULL];
  L42():
    r11 = dyn attr__2(l2, NULL, "srcfile", NULL);
    check L43() else D9();
  D9():
    deopt 44 [NULL, r11];
  L43():
    st part = r11;
    sym2 = ldf `is.pairlist`;
    base2 = ldf `is.pairlist` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L6(r13):
    c3 = `as.logical`(r13);
    if c3 then L48() else L7();
  L44():
    part7 = ld part;
    check L46() else D10();
  L45():
    r12 = dyn base2(<sym part>);
    goto L6(r12);
  D10():
    deopt 48 [part7];
  L7():
    sym5 = ldf `is.language`;
    base5 = ldf `is.language` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L46():
    part8 = force? part7;
    checkMissing(part8);
    is_pairlist = ldf `is.pairlist` in base;
    r14 = dyn is_pairlist(part8);
    check L47() else D11();
  L48():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  D11():
    deopt 51 [r14];
  L8(r16):
    s = toForSeq(r16);
    l3 = length(s);
    i = 0;
    goto L9(i);
  L14(r34):
    c7 = `as.logical`(r34);
    if c7 then L70() else L15(c7);
  L47():
    goto L6(r14);
  L49():
    part9 = ld part;
    check L51() else D12();
  L50():
    r15 = dyn base3(<sym part>);
    goto L8(r15);
  L66():
    part17 = ld part;
    check L68() else D19();
  L67():
    r33 = dyn base5(<sym part>);
    goto L14(r33);
  D12():
    deopt 53 [part9];
  D19():
    deopt 81 [part17];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l3, i2);
    if c4 then L52() else L12();
  L15(c9):
    c16 = `as.logical`(c9);
    if c16 then L76() else L17();
  L51():
    part10 = force? part9;
    checkMissing(part10);
    r17 = seq_along(part10);
    goto L8(r17);
  L68():
    part18 = force? part17;
    checkMissing(part18);
    is_language = ldf `is.language` in base;
    r35 = dyn is_language(part18);
    check L69() else D20();
  L70():
    sym6 = ldf `is.recursive`;
    base6 = ldf `is.recursive` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  D20():
    deopt 84 [r35];
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L16(c12, r37):
    c13 = `as.logical`(r37);
    c14 = `&&`(c12, c13);
    goto L15(c14);
  L17():
    goto L23();
  L23():
    part27 = ld part;
    check L91() else D28();
  L52():
    as_pairlist = ldf `as.pairlist`;
    check L62() else D17();
  L69():
    goto L14(r35);
  L71():
    part19 = ld part;
    check L73() else D21();
  L72():
    r36 = dyn base6(<sym part>);
    goto L16(c7, r36);
  L76():
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  D17():
    deopt 73 [];
  D21():
    deopt 87 [c7, part19];
  D28():
    deopt 114 [part27];
  L10(i7, r19):
    l4 = ld part;
    c6 = `is.object`(l4);
    if c6 then L58() else L59(i7, r19, l4);
  L18(r40):
    s1 = toForSeq(r40);
    l7 = length(s1);
    i16 = 0;
    goto L19(i16);
  L53():
    recurse = ldf recurse;
    check L55() else D13();
  L54():
    r18 = dyn base4(<lang recurse(`[[`(part, i))>);
    goto L10(i2, r18);
  L62():
    p1 = prom<V +>{
      part15 = ld part;
      part16 = force? part15;
      checkMissing(part16);
      return part16;
    };
    r30 = dyn as_pairlist(p1);
    check L63() else D18();
  L73():
    part20 = force? part19;
    checkMissing(part20);
    is_recursive = ldf `is.recursive` in base;
    r38 = dyn is_recursive(part20);
    check L74() else D22();
  L77():
    part21 = ld part;
    check L79() else D23();
  L78():
    r39 = dyn base7(<sym part>);
    goto L18(r39);
  L91():
    part28 = force? part27;
    checkMissing(part28);
    popenv;
    return part28;
  D13():
    deopt 59 [i2];
  D18():
    deopt 75 [r30];
  D22():
    deopt 90 [c7, r38];
  D23():
    deopt 93 [part21];
  L11(i13, dx3):
    st part = dx3;
    goto L9(i13);
  L19(i17):
    i18 = `+`.1(i17, 1);
    c17 = `<`.1(l7, i18);
    if c17 then L80() else L22();
  L55():
    p = prom<V +>{
      part11 = ld part;
      part12 = force? part11;
      checkMissing(part12);
      c5 = `is.object`(part12);
      if c5 then L1() else L2(part12);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", part12);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(part14):
      i8 = ld i;
      i9 = force? i8;
      __ = ldf `[[` in base;
      r20 = dyn __(part14, i9);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r22 = dyn recurse(p);
    check L56() else D14();
  L58():
    dr2 = tryDispatchBuiltin.0("[<-", l4, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(i7, r19, dr2);
  L59(i11, r25, l6):
    i14 = ld i;
    check L61() else D16();
  L63():
    popenv;
    return r30;
  L74():
    goto L16(c7, r38);
  L79():
    part22 = force? part21;
    checkMissing(part22);
    r41 = seq_along(part22);
    goto L18(r41);
  D14():
    deopt 61 [i2, r22];
  D16():
    deopt 65 [i11, r25, l6, r19, i14];
  L22():
    x1 = `[[`(s1, i18, NULL, TRUE);
    st i = x1;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L56():
    list = ldf list in base;
    r23 = dyn list(r22);
    check L57() else D15();
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i7, dx2);
  L61():
    i15 = force? i14;
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l6, r19, i15);
    goto L11(i11, r28);
  L80():
    goto L23();
  D15():
    deopt 63 [i2, r23];
  L20(i23, r43):
    l8 = ld part;
    c19 = `is.object`(l8);
    if c19 then L86() else L87(i23, r43, l8);
  L57():
    goto L10(i2, r23);
  L81():
    recurse1 = ldf recurse;
    check L83() else D24();
  L82():
    r42 = dyn base8(<lang recurse(`[[`(part, i))>);
    goto L20(i18, r42);
  D24():
    deopt 99 [i18];
  L21(i29, dx7):
    st part = dx7;
    goto L19(i29);
  L83():
    p2 = prom<V +>{
      part23 = ld part;
      part24 = force? part23;
      checkMissing(part24);
      c18 = `is.object`(part24);
      if c18 then L1() else L2(part24);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", part24);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(part26):
      i24 = ld i;
      i25 = force? i24;
      __1 = ldf `[[` in base;
      r44 = dyn __1(part26, i25);
      goto L0(r44);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r46 = dyn recurse1(p2);
    check L84() else D25();
  L86():
    dr6 = tryDispatchBuiltin.0("[<-", l8, r43);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L88() else L87(i23, r43, dr6);
  L87(i27, r49, l10):
    i30 = ld i;
    check L89() else D27();
  D25():
    deopt 101 [i18, r46];
  D27():
    deopt 105 [i27, r49, l10, r43, i30];
  L84():
    list1 = ldf list in base;
    r47 = dyn list1(r46);
    check L85() else D26();
  L88():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(i23, dx6);
  L89():
    i31 = force? i30;
    ___1 = ldf `[<-` in base;
    r52 = dyn ___1(l10, r43, i31);
    goto L21(i27, r52);
  D26():
    deopt 103 [i18, r47];
  L85():
    goto L20(i18, r47);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `+`(x2, 1.0);
    popenv;
    return r;
  }
}