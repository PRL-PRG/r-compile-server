fun main() {
  () -+> V { reg r:cls, reg classesToAM:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg show:*, reg show1:V, reg class:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg getMethod:cls, reg show2:*, reg show3:V, reg p:p(V +), reg r9:V, reg class1:cls, reg r10:V, reg list:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg am:*, reg am1:V |
    mkenv;
    r = clos inner2132960016;
    st classesToAM = r;
    classesToAM = ldf classesToAM;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r2):
      return r2;
    L3():
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r1 = dyn base(<lang class(show)>, <lang class(getMethod(show))>);
      goto L0(r1);
    L1(r4):
      sym2 = ldf class;
      base2 = ldf class in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L5():
      show = ld show;
      show1 = force? show;
      checkMissing(show1);
      class = ldf class in base;
      r5 = dyn class(show1);
      goto L1(r5);
    L6():
      r3 = dyn base1(<sym show>);
      goto L1(r3);
    L2(r7):
      list = ldf list in base;
      r11 = dyn list(r4, r7);
      goto L0(r11);
    L7():
      getMethod = ldf getMethod;
      p = prom<V +>{
        show2 = ld show;
        show3 = force? show2;
        checkMissing(show3);
        return show3;
      };
      r9 = dyn getMethod(p);
      class1 = ldf class in base;
      r10 = dyn class1(r9);
      goto L2(r10);
    L8():
      r6 = dyn base2(<lang getMethod(show)>);
      goto L2(r6);
    };
    r13 = dyn classesToAM(p1, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r13];
  L1():
    st am = r13;
    am = ld am;
    check L2() else D2();
  D2():
    deopt 9 [am];
  L2():
    am1 = force? am;
    checkMissing(am1);
    popenv;
    return am1;
  }
}
fun inner2132960016(classes, includeSubclasses, abbreviate) {
  (reg classes:*, reg includeSubclasses:*, reg abbreviate:*) -+> V { var classes:*, var includeSubclasses:*, reg includeSubclasses_isMissing:L, reg includeSubclasses_orDefault:*, var abbreviate:*, reg abbreviate_isMissing:L, reg abbreviate_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg includeSubclasses1:*, reg includeSubclasses2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg includeSubclasses3:*, reg includeSubclasses4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg classes1:*, reg classes2:V, reg length1:cls, reg r9:V, reg rep_int:cls, reg r10:V, reg is:cls, reg includeSubclasses5:*, reg includeSubclasses6:V, reg p:p(V +), reg r13:V, reg r14:V, reg c1:L, reg c2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c6:L, reg r16:V, reg includeSubclasses7:*, reg includeSubclasses8:V, reg length2:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg c9:L, reg r21:V, reg r22:V, reg classes3:*, reg classes4:V, reg length3:cls, reg r23:V, reg r24:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r25:V, reg matrix:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg classes5:*, reg classes6:V, reg r30:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x:V, reg classes7:*, reg classes8:V, reg c15:L, reg i6:I, reg classes10:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r31:V, reg getClass:cls, reg class:*, reg class1:V, reg p1:p(V +), reg r33:V, reg _mergeMatrices:cls, reg value:*, reg value1:V, reg p2:p(V +), reg _oneClassToAM:cls, reg classDef:*, reg classDef1:V, reg p3:p(V +), reg includeSubclasses9:*, reg includeSubclasses10:V, reg c16:L, reg includeSubclasses12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __1:cls, reg r36:V, reg p4:p(V +), reg r38:V, reg p5:p(V +), reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg abbreviate1:*, reg abbreviate2:V, reg as_integer:cls, reg r45:V, reg match:cls, reg r46:V, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg abbr:*, reg abbr1:V, reg length4:cls, reg r50:V, reg r51:V, reg c17:L, reg c18:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg c22:L, reg r53:V, reg abbr2:*, reg abbr3:V, reg is_na:cls, reg r54:V, reg c23:L, reg c24:V, reg c26:L, reg stop1:cls, reg r55:V, reg abbr4:*, reg abbr5:V, reg __2:cls, reg r57:V, reg c27:L, reg abbreviate3:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg r59:V, reg value2:*, reg value3:V, reg dimnames:cls, reg r60:V, reg c28:L, reg r62:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r63:V, reg p6:p(V +), reg r65:V, reg l1:*, reg dimnames1:cls, reg r66:V, reg c29:L, reg r69:V, reg l3:*, reg r70:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r72:V, reg l5:*, reg dx7:V, reg ____:cls, reg r73:V, reg dimnames__:cls, reg r74:V, reg abbr6:*, reg abbr7:V, reg ___:cls, reg r76:V, reg c30:L, reg abbreviate4:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r77:V, reg r78:V, reg value4:*, reg value5:V, reg dimnames2:cls, reg r79:V, reg c31:L, reg r81:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r82:V, reg p7:p(V +), reg r84:V, reg l6:*, reg dimnames3:cls, reg r85:V, reg c32:L, reg r88:V, reg l8:*, reg r89:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r91:V, reg l10:*, reg dx11:V, reg ____1:cls, reg r92:V, reg dimnames__1:cls, reg r93:V, reg value6:*, reg value7:V |
    mkenv;
    st classes = classes;
    includeSubclasses_isMissing = missing.0(includeSubclasses);
    if includeSubclasses_isMissing then L0(FALSE) else L0(includeSubclasses);
  L0(includeSubclasses_orDefault):
    st includeSubclasses = includeSubclasses_orDefault;
    abbreviate_isMissing = missing.0(abbreviate);
    if abbreviate_isMissing then L1(2.0) else L1(abbreviate);
  L1(abbreviate_orDefault):
    st abbreviate = abbreviate_orDefault;
    r = clos inner1014511133;
    st `.mergeMatrices` = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L2(r2):
    r4 = `==`(r2, 1.0);
    c = `as.logical`(r4);
    if c then L33() else L3();
  L29():
    includeSubclasses1 = ld includeSubclasses;
    check L31() else D0();
  L30():
    r1 = dyn base(<sym includeSubclasses>);
    goto L2(r1);
  D0():
    deopt 5 [includeSubclasses1];
  L3():
    goto L6();
  L6():
    is = ldf is;
    check L43() else D6();
  L31():
    includeSubclasses2 = force? includeSubclasses1;
    checkMissing(includeSubclasses2);
    length = ldf length in base;
    r3 = dyn length(includeSubclasses2);
    check L32() else D1();
  L33():
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  D1():
    deopt 8 [r3];
  D6():
    deopt 27 [];
  L4(r6):
    st includeSubclasses = r6;
    goto L6();
  L32():
    goto L2(r3);
  L34():
    includeSubclasses3 = ld includeSubclasses;
    check L36() else D2();
  L35():
    r5 = dyn base1(<sym includeSubclasses>, <lang length(classes)>);
    goto L4(r5);
  L43():
    p = prom<V +>{
      includeSubclasses5 = ld includeSubclasses;
      includeSubclasses6 = force? includeSubclasses5;
      checkMissing(includeSubclasses6);
      return includeSubclasses6;
    };
    r13 = dyn is(p, "logical");
    check L44() else D7();
  D2():
    deopt 13 [includeSubclasses3];
  D7():
    deopt 30 [r13];
  L36():
    includeSubclasses4 = force? includeSubclasses3;
    checkMissing(includeSubclasses4);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L44():
    r14 = `!`(r13);
    c1 = `as.logical`(r14);
    if c1 then L7(c1) else L45();
  L5(r8):
    rep_int = ldf `rep.int` in base;
    r10 = dyn rep_int(includeSubclasses4, r8);
    check L41() else D5();
  L7(c2):
    c13 = `as.logical`(c2);
    if c13 then L55() else L10();
  L37():
    classes1 = ld classes;
    check L39() else D3();
  L38():
    r7 = dyn base2(<sym classes>);
    goto L5(r7);
  L45():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  D3():
    deopt 17 [classes1];
  D5():
    deopt 22 [r10];
  L8(c6, r16):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L10():
    goto L11();
  L11():
    matrix = ldf matrix;
    check L59() else D14();
  L39():
    classes2 = force? classes1;
    checkMissing(classes2);
    length1 = ldf length in base;
    r9 = dyn length1(classes2);
    check L40() else D4();
  L41():
    goto L4(r10);
  L46():
    includeSubclasses7 = ld includeSubclasses;
    check L48() else D8();
  L47():
    r15 = dyn base3(<sym includeSubclasses>);
    goto L8(c1, r15);
  L55():
    stop = ldf stop;
    check L56() else D12();
  D4():
    deopt 20 [r9];
  D8():
    deopt 34 [c1, includeSubclasses7];
  D12():
    deopt 46 [];
  D14():
    deopt 52 [];
  L9(c9, r21, r22):
    r24 = `!=`(r21, r22);
    c10 = `as.logical`(r24);
    c11 = `||`(c9, c10);
    goto L7(c11);
  L40():
    goto L5(r9);
  L48():
    includeSubclasses8 = force? includeSubclasses7;
    checkMissing(includeSubclasses8);
    length2 = ldf length in base;
    r17 = dyn length2(includeSubclasses8);
    check L49() else D9();
  L50():
    classes3 = ld classes;
    check L52() else D10();
  L51():
    r20 = dyn base4(<sym classes>);
    goto L9(c6, r16, r20);
  L56():
    r25 = dyn stop("argument 'includeSubclasses' must be a logical, either one value or a vector of the same length as argument 'classes'");
    check L57() else D13();
  L59():
    r27 = dyn matrix(0.0, 0.0, 0.0);
    check L60() else D15();
  D9():
    deopt 37 [c1, r17];
  D10():
    deopt 39 [c6, r16, classes3];
  D13():
    deopt 48 [r25];
  D15():
    deopt 56 [r27];
  L49():
    goto L8(c1, r17);
  L52():
    classes4 = force? classes3;
    checkMissing(classes4);
    length3 = ldf length in base;
    r23 = dyn length3(classes4);
    check L53() else D11();
  L57():
    goto L11();
  L60():
    st value = r27;
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  D11():
    deopt 42 [c6, r16, r23];
  L12(r29):
    s = toForSeq(r29);
    l = length(s);
    i = 0;
    goto L13(i);
  L53():
    goto L9(c6, r16, r23);
  L61():
    classes5 = ld classes;
    check L63() else D16();
  L62():
    r28 = dyn base5(<sym classes>);
    goto L12(r28);
  D16():
    deopt 59 [classes5];
  L13(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l, i2);
    if c14 then L64() else L15();
  L63():
    classes6 = force? classes5;
    checkMissing(classes6);
    r30 = seq_along(classes6);
    goto L12(r30);
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    classes7 = ld classes;
    check L65() else D17();
  L64():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  D17():
    deopt 62 [i2, classes7];
  L16(r42):
    r47 = `-`(r42, 1.0);
    st abbr = r47;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L65():
    classes8 = force? classes7;
    checkMissing(classes8);
    c15 = `is.object`(classes8);
    if c15 then L66() else L67(i2, classes8);
  L74():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L75():
    r41 = dyn base6(<lang as.integer(abbreviate)>, <lang `:`(0.0, 3.0)>);
    goto L16(r41);
  L14(i8, dx1):
    st class = dx1;
    getClass = ldf getClass;
    check L70() else D19();
  L17(r44):
    match = ldf match in base;
    r46 = dyn match(r44, <int 0, 1, 2, 3>, NA_INT, NULL);
    check L80() else D25();
  L18(r49):
    r51 = `!=`(r49, 1.0);
    c17 = `as.logical`(r51);
    if c17 then L19(c17) else L85();
  L66():
    dr = tryDispatchBuiltin.1("[[", classes8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(i2, dr);
  L67(i6, classes10):
    i9 = ld i;
    check L69() else D18();
  L76():
    abbreviate1 = ld abbreviate;
    check L78() else D23();
  L77():
    r43 = dyn base7(<sym abbreviate>);
    goto L17(r43);
  L81():
    abbr = ld abbr;
    check L83() else D26();
  L82():
    r48 = dyn base8(<sym abbr>);
    goto L18(r48);
  D18():
    deopt 64 [i6, classes10, i9];
  D19():
    deopt 69 [i8];
  D23():
    deopt 86 [abbreviate1];
  D25():
    deopt 95 [r46];
  D26():
    deopt 101 [abbr];
  L19(c18):
    c26 = `as.logical`(c18);
    if c26 then L91() else L21();
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(i2, dx);
  L69():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r31 = dyn __(classes10, i10);
    goto L14(i6, r31);
  L70():
    p1 = prom<V +>{
      class = ld class;
      class1 = force? class;
      checkMissing(class1);
      return class1;
    };
    r33 = dyn getClass(p1);
    check L71() else D20();
  L78():
    abbreviate2 = force? abbreviate1;
    checkMissing(abbreviate2);
    as_integer = ldf `as.integer` in base;
    r45 = dyn as_integer(abbreviate2);
    check L79() else D24();
  L80():
    goto L16(r46);
  L83():
    abbr1 = force? abbr;
    checkMissing(abbr1);
    length4 = ldf length in base;
    r50 = dyn length4(abbr1);
    check L84() else D27();
  L85():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  D20():
    deopt 71 [i8, r33];
  D24():
    deopt 89 [r45];
  D27():
    deopt 104 [r50];
  L20(c22, r53):
    c23 = `as.logical`(r53);
    c24 = `||`(c22, c23);
    goto L19(c24);
  L21():
    goto L22();
  L22():
    abbr4 = ld abbr;
    check L95() else D32();
  L71():
    st classDef = r33;
    _mergeMatrices = ldf `.mergeMatrices`;
    check L72() else D21();
  L79():
    goto L17(r45);
  L84():
    goto L18(r50);
  L86():
    abbr2 = ld abbr;
    check L88() else D28();
  L87():
    r52 = dyn base9(<sym abbr>);
    goto L20(c17, r52);
  L91():
    stop1 = ldf stop;
    check L92() else D30();
  D21():
    deopt 74 [i8];
  D28():
    deopt 109 [c17, abbr2];
  D30():
    deopt 115 [];
  D32():
    deopt 121 [abbr4];
  L72():
    p2 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    p5 = prom<V +>{
      _oneClassToAM = ldf `.oneClassToAM`;
      p3 = prom<V +>{
        classDef = ld classDef;
        classDef1 = force? classDef;
        checkMissing(classDef1);
        return classDef1;
      };
      p4 = prom<V +>{
        includeSubclasses9 = ld includeSubclasses;
        includeSubclasses10 = force? includeSubclasses9;
        checkMissing(includeSubclasses10);
        c16 = `is.object`(includeSubclasses10);
        if c16 then L1() else L2(includeSubclasses10);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", includeSubclasses10);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(includeSubclasses12):
        i11 = ld i;
        i12 = force? i11;
        __1 = ldf `[[` in base;
        r36 = dyn __1(includeSubclasses12, i12);
        goto L0(r36);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r38 = dyn _oneClassToAM(p3, p4);
      return r38;
    };
    r40 = dyn _mergeMatrices(p2, p5);
    check L73() else D22();
  L88():
    abbr3 = force? abbr2;
    checkMissing(abbr3);
    is_na = ldf `is.na` in base;
    r54 = dyn is_na(abbr3);
    check L89() else D29();
  L92():
    r55 = dyn stop1("argument 'abbreviate' must be 0, 1, 2, or 3");
    check L93() else D31();
  L95():
    abbr5 = force? abbr4;
    checkMissing(abbr5);
    __2 = ldf `%%` in base;
    r57 = dyn __2(abbr5, 2.0);
    check L96() else D33();
  D22():
    deopt 77 [i8, r40];
  D29():
    deopt 112 [c17, r54];
  D31():
    deopt 117 [r55];
  D33():
    deopt 125 [r57];
  L73():
    st value = r40;
    goto L13(i8);
  L89():
    goto L20(c17, r54);
  L93():
    goto L22();
  L96():
    c27 = `as.logical`(r57);
    if c27 then L97() else L23();
  L23():
    goto L25();
  L25():
    abbr6 = ld abbr;
    check L108() else D40();
  L97():
    abbreviate3 = ldf abbreviate;
    check L98() else D34();
  D34():
    deopt 127 [];
  D40():
    deopt 145 [abbr6];
  L98():
    p6 = prom<V +>{
      sym10 = ldf dimnames;
      base10 = ldf dimnames in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r59):
      c28 = `is.object`(r59);
      if c28 then L4() else L5(r59);
    L2():
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      dimnames = ldf dimnames in base;
      r60 = dyn dimnames(value3);
      goto L0(r60);
    L3():
      r58 = dyn base10(<sym value>);
      goto L0(r58);
    L1(dx5):
      return dx5;
    L4():
      dr4 = tryDispatchBuiltin.1("[[", r59);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(r62):
      __3 = ldf `[[` in base;
      r63 = dyn __3(r62, 1.0);
      goto L1(r63);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    r65 = dyn abbreviate3(p6);
    check L99() else D35();
  L108():
    abbr7 = force? abbr6;
    checkMissing(abbr7);
    ___ = ldf `%/%` in base;
    r76 = dyn ___(abbr7, 2.0);
    check L109() else D41();
  D35():
    deopt 129 [r65];
  D41():
    deopt 149 [r76];
  L99():
    l1 = ld value;
    dimnames1 = ldf dimnames;
    check L100() else D36();
  L109():
    c30 = `as.logical`(r76);
    if c30 then L110() else L26();
  D36():
    deopt 131 [r65, l1, r65];
  L26():
    goto L28();
  L28():
    value6 = ld value;
    check L121() else D48();
  L100():
    r66 = dyn dimnames1(r65, NULL);
    check L101() else D37();
  L110():
    abbreviate4 = ldf abbreviate;
    check L111() else D42();
  D37():
    deopt 133 [r65, l1, r65, r66];
  D42():
    deopt 151 [];
  D48():
    deopt 168 [value6];
  L101():
    c29 = `is.object`(r66);
    if c29 then L102() else L103(r65, l1, r66);
  L111():
    p7 = prom<V +>{
      sym11 = ldf dimnames;
      base11 = ldf dimnames in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r78):
      c31 = `is.object`(r78);
      if c31 then L4() else L5(r78);
    L2():
      value4 = ld value;
      value5 = force? value4;
      checkMissing(value5);
      dimnames2 = ldf dimnames in base;
      r79 = dyn dimnames2(value5);
      goto L0(r79);
    L3():
      r77 = dyn base11(<sym value>);
      goto L0(r77);
    L1(dx9):
      return dx9;
    L4():
      dr8 = tryDispatchBuiltin.1("[[", r78);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(r81):
      __4 = ldf `[[` in base;
      r82 = dyn __4(r81, 2.0);
      goto L1(r82);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r84 = dyn abbreviate4(p7);
    check L112() else D43();
  L121():
    value7 = force? value6;
    checkMissing(value7);
    popenv;
    return value7;
  D43():
    deopt 153 [r84];
  L24(r72, l5, dx7):
    dimnames__ = ldf `dimnames<-`;
    check L105() else D38();
  L102():
    dr6 = tryDispatchBuiltin.0("[[<-", r66, r65);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L104() else L103(r65, l1, dr6);
  L103(r69, l3, r70):
    ____ = ldf `[[<-` in base;
    r73 = dyn ____(r70, r65, 1.0);
    goto L24(r69, l3, r73);
  L112():
    l6 = ld value;
    dimnames3 = ldf dimnames;
    check L113() else D44();
  D38():
    deopt 138 [r72, l5, dx7];
  D44():
    deopt 155 [r84, l6, r84];
  L104():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L24(r65, l1, dx6);
  L105():
    r74 = dyn dimnames__(l5, NULL, dx7);
    check L106() else D39();
  L113():
    r85 = dyn dimnames3(r84, NULL);
    check L114() else D45();
  D39():
    deopt 140 [r72, r74];
  D45():
    deopt 157 [r84, l6, r84, r85];
  L106():
    st value = r74;
    goto L25();
  L114():
    c32 = `is.object`(r85);
    if c32 then L115() else L116(r84, l6, r85);
  L27(r91, l10, dx11):
    dimnames__1 = ldf `dimnames<-`;
    check L118() else D46();
  L115():
    dr10 = tryDispatchBuiltin.0("[[<-", r85, r84);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L117() else L116(r84, l6, dr10);
  L116(r88, l8, r89):
    ____1 = ldf `[[<-` in base;
    r92 = dyn ____1(r89, r84, 2.0);
    goto L27(r88, l8, r92);
  D46():
    deopt 162 [r91, l10, dx11];
  L117():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L27(r84, l6, dx10);
  L118():
    r93 = dyn dimnames__1(l10, NULL, dx11);
    check L119() else D47();
  D47():
    deopt 164 [r91, r93];
  L119():
    st value = r93;
    goto L28();
  }
}
fun inner1014511133(m1, m2) {
  (reg m1:*, reg m2:*) -+> V { var m1:*, var m2:*, reg nrow:cls, reg m3:*, reg m4:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg m5:*, reg m6:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg m7:*, reg m8:V, reg dimnames:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg m9:*, reg m10:V, reg dimnames1:cls, reg r10:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg dn1:*, reg dn2:V, reg c1:L, reg dn4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg dn5:*, reg dn6:V, reg c2:L, reg dn8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg c3:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg unique1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg dn9:*, reg dn10:V, reg c4:L, reg dn12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r20:V, reg dn13:*, reg dn14:V, reg c5:L, reg dn16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r21:V, reg c6:cls, reg r22:V, reg p2:p(V +), reg r24:V, reg matrix:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg rows:*, reg rows1:V, reg length:cls, reg r27:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg columns:*, reg columns1:V, reg length1:cls, reg r31:V, reg p4:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg rows2:*, reg rows3:V, reg columns2:*, reg columns3:V, reg list:cls, reg r35:V, reg p5:p(V +), reg r37:V, reg m11:*, reg m12:V, reg l:*, reg c7:L, reg m14:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg dn17:*, reg dn18:V, reg c8:L, reg m19:V, reg l4:*, reg m20:V, reg dn20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg m23:V, reg l6:*, reg m24:V, reg dx11:V, reg __4:cls, reg r38:V, reg dn21:*, reg dn22:V, reg c9:L, reg m27:V, reg l8:*, reg m28:V, reg dx13:V, reg dn24:V, reg dr12:V, reg dc6:L, reg dx15:V, reg m31:V, reg l10:*, reg m32:V, reg dx16:V, reg dx17:V, reg __5:cls, reg r39:V, reg ___:cls, reg r40:V, reg m33:*, reg m34:V, reg l11:*, reg c10:L, reg m36:V, reg l13:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg dn25:*, reg dn26:V, reg c11:L, reg m41:V, reg l15:*, reg m42:V, reg dn28:V, reg dr16:V, reg dc8:L, reg dx20:V, reg m45:V, reg l17:*, reg m46:V, reg dx21:V, reg __6:cls, reg r41:V, reg dn29:*, reg dn30:V, reg c12:L, reg m49:V, reg l19:*, reg m50:V, reg dx23:V, reg dn32:V, reg dr18:V, reg dc9:L, reg dx25:V, reg m53:V, reg l21:*, reg m54:V, reg dx26:V, reg dx27:V, reg __7:cls, reg r42:V, reg ___1:cls, reg r43:V, reg value:*, reg value1:V |
    mkenv;
    st m1 = m1;
    st m2 = m2;
    nrow = ldf nrow;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      m3 = ld m1;
      m4 = force? m3;
      checkMissing(m4);
      return m4;
    };
    r1 = dyn nrow(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    r2 = `==`(r1, 0.0);
    c = `as.logical`(r2);
    if c then L12() else L0();
  L0():
    sym = ldf dimnames;
    base = ldf dimnames in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L12():
    m5 = ld m2;
    check L13() else D2();
  D2():
    deopt 6 [m5];
  L2(r6):
    st dn1 = r6;
    sym1 = ldf dimnames;
    base1 = ldf dimnames in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L13():
    m6 = force? m5;
    checkMissing(m6);
    popenv;
    return m6;
  L16():
    m7 = ld m1;
    check L18() else D3();
  L17():
    r5 = dyn base(<sym m1>);
    goto L2(r5);
  D3():
    deopt 13 [m7];
  L3(r9):
    st dn2 = r9;
    unique = ldf unique;
    check L24() else D7();
  L18():
    m8 = force? m7;
    checkMissing(m8);
    dimnames = ldf dimnames in base;
    r7 = dyn dimnames(m8);
    check L19() else D4();
  L20():
    m9 = ld m2;
    check L22() else D5();
  L21():
    r8 = dyn base1(<sym m2>);
    goto L3(r8);
  D4():
    deopt 16 [r7];
  D5():
    deopt 20 [m9];
  D7():
    deopt 26 [];
  L19():
    goto L2(r7);
  L22():
    m10 = force? m9;
    checkMissing(m10);
    dimnames1 = ldf dimnames in base;
    r10 = dyn dimnames1(m10);
    check L23() else D6();
  L24():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r12):
      return r12;
    L3():
      dn1 = ld dn1;
      dn2 = force? dn1;
      checkMissing(dn2);
      c1 = `is.object`(dn2);
      if c1 then L5() else L6(dn2);
    L4():
      r11 = dyn base2(<lang `[[`(dn1, 1.0)>, <lang `[[`(dn2, 1.0)>);
      goto L0(r11);
    L1(dx1):
      dn5 = ld dn2;
      dn6 = force? dn5;
      checkMissing(dn6);
      c2 = `is.object`(dn6);
      if c2 then L8() else L9(dn6);
    L5():
      dr = tryDispatchBuiltin.1("[[", dn2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(dn4):
      __ = ldf `[[` in base;
      r13 = dyn __(dn4, 1.0);
      goto L1(r13);
    L2(dx3):
      c3 = ldf c in base;
      r15 = dyn c3(dx1, dx3);
      goto L0(r15);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      dr2 = tryDispatchBuiltin.1("[[", dn6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(dn8):
      __1 = ldf `[[` in base;
      r14 = dyn __1(dn8, 1.0);
      goto L2(r14);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    r17 = dyn unique(p1);
    check L25() else D8();
  D6():
    deopt 23 [r10];
  D8():
    deopt 28 [r17];
  L23():
    goto L3(r10);
  L25():
    st rows = r17;
    unique1 = ldf unique;
    check L26() else D9();
  D9():
    deopt 31 [];
  L26():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r19):
      return r19;
    L3():
      dn9 = ld dn1;
      dn10 = force? dn9;
      checkMissing(dn10);
      c4 = `is.object`(dn10);
      if c4 then L5() else L6(dn10);
    L4():
      r18 = dyn base3(<lang `[[`(dn1, 2.0)>, <lang `[[`(dn2, 2.0)>);
      goto L0(r18);
    L1(dx5):
      dn13 = ld dn2;
      dn14 = force? dn13;
      checkMissing(dn14);
      c5 = `is.object`(dn14);
      if c5 then L8() else L9(dn14);
    L5():
      dr4 = tryDispatchBuiltin.1("[[", dn10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dn12):
      __2 = ldf `[[` in base;
      r20 = dyn __2(dn12, 2.0);
      goto L1(r20);
    L2(dx7):
      c6 = ldf c in base;
      r22 = dyn c6(dx5, dx7);
      goto L0(r22);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L8():
      dr6 = tryDispatchBuiltin.1("[[", dn14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(dr6);
    L9(dn16):
      __3 = ldf `[[` in base;
      r21 = dyn __3(dn16, 2.0);
      goto L2(r21);
    L10():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    };
    r24 = dyn unique1(p2);
    check L27() else D10();
  D10():
    deopt 33 [r24];
  L27():
    st columns = r24;
    matrix = ldf matrix;
    check L28() else D11();
  D11():
    deopt 36 [];
  L28():
    p3 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      rows = ld rows;
      rows1 = force? rows;
      checkMissing(rows1);
      length = ldf length in base;
      r27 = dyn length(rows1);
      goto L0(r27);
    L2():
      r25 = dyn base4(<sym rows>);
      goto L0(r25);
    };
    p4 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      columns = ld columns;
      columns1 = force? columns;
      checkMissing(columns1);
      length1 = ldf length in base;
      r31 = dyn length1(columns1);
      goto L0(r31);
    L2():
      r29 = dyn base5(<sym columns>);
      goto L0(r29);
    };
    p5 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      rows2 = ld rows;
      rows3 = force? rows2;
      checkMissing(rows3);
      columns2 = ld columns;
      columns3 = force? columns2;
      checkMissing(columns3);
      list = ldf list in base;
      r35 = dyn list(rows3, columns3);
      goto L0(r35);
    L2():
      r33 = dyn base6(<sym rows>, <sym columns>);
      goto L0(r33);
    };
    r37 = dyn matrix[, , , dimnames](0.0, p3, p4, p5);
    check L29() else D12();
  D12():
    deopt 42 [r37];
  L29():
    st value = r37;
    m11 = ld m1;
    check L30() else D13();
  D13():
    deopt 44 [m11];
  L30():
    m12 = force? m11;
    checkMissing(m12);
    l = ld value;
    c7 = `is.object`(l);
    if c7 then L31() else L32(m12, l);
  L4(dx9):
    st value = dx9;
    m33 = ld m2;
    check L42() else D16();
  L31():
    dr8 = tryDispatchBuiltin.0("[<-", l, m12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L33() else L32(m12, dr8);
  L32(m14, l2):
    dn17 = ld dn1;
    check L34() else D14();
  D14():
    deopt 47 [m14, l2, m12, dn17];
  D16():
    deopt 58 [m33];
  L33():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx8);
  L34():
    dn18 = force? dn17;
    checkMissing(dn18);
    c8 = `is.object`(dn18);
    if c8 then L35() else L36(m14, l2, m12, dn18);
  L42():
    m34 = force? m33;
    checkMissing(m34);
    l11 = ld value;
    c10 = `is.object`(l11);
    if c10 then L43() else L44(m34, l11);
  L5(m23, l6, m24, dx11):
    dn21 = ld dn1;
    check L38() else D15();
  L7(dx19):
    st value = dx19;
    value = ld value;
    check L54() else D19();
  L35():
    dr10 = tryDispatchBuiltin.1("[[", dn18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L37() else L36(m14, l2, m12, dr10);
  L36(m19, l4, m20, dn20):
    __4 = ldf `[[` in base;
    r38 = dyn __4(dn20, 1.0);
    goto L5(m19, l4, m20, r38);
  L43():
    dr14 = tryDispatchBuiltin.0("[<-", l11, m34);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L45() else L44(m34, dr14);
  L44(m36, l13):
    dn25 = ld dn2;
    check L46() else D17();
  D15():
    deopt 51 [m23, l6, m24, dx11, dn21];
  D17():
    deopt 61 [m36, l13, m34, dn25];
  D19():
    deopt 72 [value];
  L37():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L5(m14, l2, m12, dx10);
  L38():
    dn22 = force? dn21;
    checkMissing(dn22);
    c9 = `is.object`(dn22);
    if c9 then L39() else L40(m23, l6, m24, dx11, dn22);
  L45():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L7(dx18);
  L46():
    dn26 = force? dn25;
    checkMissing(dn26);
    c11 = `is.object`(dn26);
    if c11 then L47() else L48(m36, l13, m34, dn26);
  L54():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  L6(m31, l10, m32, dx16, dx17):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l10, m32, dx16, dx17);
    goto L4(r40);
  L8(m45, l17, m46, dx21):
    dn29 = ld dn2;
    check L50() else D18();
  L39():
    dr12 = tryDispatchBuiltin.1("[[", dn22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L41() else L40(m23, l6, m24, dx11, dr12);
  L40(m27, l8, m28, dx13, dn24):
    __5 = ldf `[[` in base;
    r39 = dyn __5(dn24, 2.0);
    goto L6(m27, l8, m28, dx13, r39);
  L47():
    dr16 = tryDispatchBuiltin.1("[[", dn26);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L49() else L48(m36, l13, m34, dr16);
  L48(m41, l15, m42, dn28):
    __6 = ldf `[[` in base;
    r41 = dyn __6(dn28, 1.0);
    goto L8(m41, l15, m42, r41);
  D18():
    deopt 65 [m45, l17, m46, dx21, dn29];
  L41():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L6(m23, l6, m24, dx11, dx15);
  L49():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L8(m36, l13, m34, dx20);
  L50():
    dn30 = force? dn29;
    checkMissing(dn30);
    c12 = `is.object`(dn30);
    if c12 then L51() else L52(m45, l17, m46, dx21, dn30);
  L9(m53, l21, m54, dx26, dx27):
    ___1 = ldf `[<-` in base;
    r43 = dyn ___1(l21, m54, dx26, dx27);
    goto L7(r43);
  L51():
    dr18 = tryDispatchBuiltin.1("[[", dn30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L53() else L52(m45, l17, m46, dx21, dr18);
  L52(m49, l19, m50, dx23, dn32):
    __7 = ldf `[[` in base;
    r42 = dyn __7(dn32, 2.0);
    goto L9(m49, l19, m50, dx23, r42);
  L53():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L9(m45, l17, m46, dx21, dx25);
  }
}