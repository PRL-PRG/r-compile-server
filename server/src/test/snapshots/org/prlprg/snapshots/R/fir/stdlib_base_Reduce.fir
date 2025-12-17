fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1828503910;
    st Reduce = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1828503910(f, x, init, right, accumulate, simplify) {
  (reg f:*, reg x:*, reg init:*, reg right:*, reg accumulate:*, reg simplify:*) -+> V { var f:*, var x:*, var init:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var accumulate:*, reg accumulate_isMissing:L, reg accumulate_orDefault:*, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg len:*, reg len1:V, reg r6:V, reg c:L, reg mis:*, reg mis1:V, reg c1:L, reg r7:V, reg init1:*, reg init2:V, reg match_fun:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg is_vector:cls, reg r14:V, reg r15:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c7:L, reg r17:V, reg x5:*, reg x6:V, reg c8:L, reg c9:L, reg c10:V, reg c12:L, reg as_list:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg len2:*, reg len3:V, reg r23:I, reg mis2:*, reg mis3:V, reg c13:L, reg right1:*, reg right2:V, reg c14:L, reg x9:*, reg x10:V, reg c15:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg len4:*, reg len5:V, reg __:cls, reg r24:V, reg ind:*, reg ind1:V, reg c16:L, reg ind3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg len6:*, reg len7:V, reg r25:V, reg __1:cls, reg r26:V, reg dx4:V, reg x13:*, reg x14:V, reg c17:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r27:V, reg ind4:*, reg ind5:V, reg c18:L, reg ind7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r28:V, reg accumulate1:*, reg accumulate2:V, reg r29:V, reg c19:L, reg right3:*, reg right4:V, reg c20:L, reg rev:cls, reg ind8:*, reg ind9:V, reg p2:p(V +), reg r31:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c21:L, reg x17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg i7:I, reg r33:V, reg forceAndCall:cls, reg r34:V, reg ind10:*, reg ind11:V, reg s1:V, reg l1:I, reg i9:I, reg i10:I, reg i11:I, reg c22:L, reg x18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg i16:I, reg r36:V, reg forceAndCall1:cls, reg r37:V, reg init3:*, reg init4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg ind12:*, reg ind13:V, reg length1:cls, reg r40:V, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg len8:*, reg len9:V, reg vector:cls, reg r44:V, reg mis4:*, reg mis5:V, reg c23:L, reg right5:*, reg right6:V, reg c24:L, reg init5:*, reg init6:V, reg l2:*, reg c25:L, reg init8:V, reg l4:*, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg len10:*, reg len11:V, reg ____:cls, reg r45:V, reg rev1:cls, reg ind14:*, reg ind15:V, reg p3:p(V +), reg r47:V, reg s2:V, reg l5:I, reg i17:I, reg i18:I, reg i19:I, reg c26:L, reg x19:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg i24:I, reg r49:V, reg forceAndCall2:cls, reg r50:V, reg init11:*, reg init12:V, reg l6:*, reg c27:L, reg i26:I, reg init14:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx12:V, reg i28:I, reg dx13:V, reg i29:*, reg i30:V, reg ____1:cls, reg r51:V, reg i31:I, reg init17:*, reg init18:V, reg l9:*, reg c28:L, reg init20:V, reg l11:*, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg ____2:cls, reg r52:V, reg ind16:*, reg ind17:V, reg s3:V, reg l12:I, reg i32:I, reg i33:I, reg i34:I, reg c29:L, reg x20:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg i39:I, reg r54:V, reg forceAndCall3:cls, reg r55:V, reg init23:*, reg init24:V, reg l13:*, reg c30:L, reg i41:I, reg init26:V, reg l15:*, reg dr14:V, reg dc7:L, reg dx16:V, reg i43:I, reg dx17:V, reg i44:*, reg i45:V, reg ____3:cls, reg r56:V, reg right7:*, reg right8:V, reg c31:L, reg init29:*, reg init30:V, reg l16:*, reg c32:L, reg init32:V, reg l18:*, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg len12:*, reg len13:V, reg ____4:cls, reg r57:V, reg rev2:cls, reg ind18:*, reg ind19:V, reg p4:p(V +), reg r59:V, reg s4:V, reg l19:I, reg i47:I, reg i48:I, reg i49:I, reg c33:L, reg x21:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg i54:I, reg r61:V, reg forceAndCall4:cls, reg r62:V, reg init35:*, reg init36:V, reg l20:*, reg c34:L, reg i56:I, reg init38:V, reg l22:*, reg dr18:V, reg dc9:L, reg dx20:V, reg i58:I, reg dx21:V, reg i59:*, reg i60:V, reg ____5:cls, reg r63:V, reg ind20:*, reg ind21:V, reg s5:V, reg l23:I, reg i61:I, reg i62:I, reg i63:I, reg c35:L, reg x22:V, reg init41:*, reg init42:V, reg l24:*, reg c36:L, reg i67:I, reg init44:V, reg l26:*, reg dr20:V, reg dc10:L, reg dx22:V, reg i69:I, reg dx23:V, reg i70:*, reg i71:V, reg ____6:cls, reg r64:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg i74:I, reg r66:V, reg forceAndCall5:cls, reg r67:V, reg init47:*, reg init48:V, reg l27:*, reg c37:L, reg init50:V, reg l29:*, reg dr22:V, reg dc11:L, reg dx24:V, reg init52:V, reg dx25:V, reg len14:*, reg len15:V, reg ____7:cls, reg r68:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg lengths:cls, reg out:*, reg out1:V, reg p5:p(V +), reg r72:V, reg r73:V, reg all:cls, reg r74:V, reg c38:L, reg c40:V, reg simplify1:*, reg simplify2:V, reg c41:L, reg c42:V, reg c44:L, reg unlist:cls, reg out2:*, reg out3:V, reg p6:p(V +), reg r76:V, reg out4:*, reg out5:V |
    mkenv;
    st f = f;
    st x = x;
    st init = init;
    right_isMissing = missing.0(right);
    if right_isMissing then L0(FALSE) else L0(right);
  L0(right_orDefault):
    st right = right_orDefault;
    accumulate_isMissing = missing.0(accumulate);
    if accumulate_isMissing then L1(FALSE) else L1(accumulate);
  L1(accumulate_orDefault):
    st accumulate = accumulate_orDefault;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L2(TRUE) else L2(simplify);
  L2(simplify_orDefault):
    st simplify = simplify_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L63() else L64();
  L3(r1):
    st mis = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L65() else L66();
  L63():
    missing = ldf missing in base;
    r2 = dyn missing(<sym init>);
    goto L3(r2);
  L64():
    r = dyn base(<sym init>);
    goto L3(r);
  L4(r4):
    st len = r4;
    len = ld len;
    check L69() else D2();
  L65():
    x1 = ld x;
    check L67() else D0();
  L66():
    r3 = dyn base1(<sym x>);
    goto L4(r3);
  D0():
    deopt 6 [x1];
  D2():
    deopt 11 [len];
  L67():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r5 = dyn length(x2);
    check L68() else D1();
  L69():
    len1 = force? len;
    checkMissing(len1);
    r6 = `==`(len1, 0);
    c = `as.logical`(r6);
    if c then L70() else L5();
  D1():
    deopt 9 [r5];
  L5():
    match_fun = ldf `match.fun`;
    check L77() else D5();
  L68():
    goto L4(r5);
  L70():
    mis = ld mis;
    check L71() else D3();
  D3():
    deopt 15 [mis];
  D5():
    deopt 25 [];
  L71():
    mis1 = force? mis;
    checkMissing(mis1);
    c1 = `as.logical`(mis1);
    if c1 then L72() else L6();
  L77():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r11 = dyn match_fun(p);
    check L78() else D6();
  D6():
    deopt 27 [r11];
  L6():
    init1 = ld init;
    check L74() else D4();
  L7(r7):
    popenv;
    return r7;
  L72():
    goto L7(NULL);
  L78():
    st f = r11;
    sym2 = ldf `is.vector`;
    base2 = ldf `is.vector` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  D4():
    deopt 19 [init1];
  L9(r13):
    r15 = `!`(r13);
    c2 = `as.logical`(r15);
    if c2 then L10(c2) else L83();
  L74():
    init2 = force? init1;
    checkMissing(init2);
    goto L7(init2);
  L79():
    x3 = ld x;
    check L81() else D7();
  L80():
    r12 = dyn base2(<sym x>);
    goto L9(r12);
  D7():
    deopt 31 [x3];
  L10(c3):
    c12 = `as.logical`(c3);
    if c12 then L88() else L12();
  L81():
    x4 = force? x3;
    checkMissing(x4);
    is_vector = ldf `is.vector` in base;
    r14 = dyn is_vector(x4, "any");
    check L82() else D8();
  L83():
    sym3 = ldf `is.object`;
    base3 = ldf `is.object` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L84() else L85();
  D8():
    deopt 35 [r14];
  L11(c7, r17):
    c9 = `as.logical`(r17);
    c10 = `||`(c7, c9);
    goto L10(c10);
  L12():
    goto L13();
  L13():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  L82():
    goto L9(r14);
  L84():
    x5 = ld x;
    check L86() else D9();
  L85():
    r16 = dyn base3(<sym x>);
    goto L11(c2, r16);
  L88():
    as_list = ldf `as.list`;
    check L89() else D10();
  D9():
    deopt 38 [c2, x5];
  D10():
    deopt 43 [];
  L14(r22):
    st ind = r22;
    mis2 = ld mis;
    check L95() else D13();
  L86():
    x6 = force? x5;
    checkMissing(x6);
    c8 = `is.object`(x6);
    goto L11(c2, c8);
  L89():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r19 = dyn as_list(p1);
    check L90() else D11();
  L92():
    len2 = ld len;
    check L94() else D12();
  L93():
    r21 = dyn base4(<sym len>);
    goto L14(r21);
  D11():
    deopt 45 [r19];
  D12():
    deopt 50 [len2];
  D13():
    deopt 54 [mis2];
  L90():
    st x = r19;
    goto L13();
  L94():
    len3 = force? len2;
    checkMissing(len3);
    r23 = seq_len(len3);
    goto L14(r23);
  L95():
    mis3 = force? mis2;
    checkMissing(mis3);
    c13 = `as.logical`(mis3);
    if c13 then L96() else L15();
  L15():
    goto L22();
  L22():
    accumulate1 = ld accumulate;
    check L119() else D21();
  L96():
    right1 = ld right;
    check L97() else D14();
  D14():
    deopt 56 [right1];
  D21():
    deopt 85 [accumulate1];
  L97():
    right2 = force? right1;
    checkMissing(right2);
    c14 = `as.logical`(right2);
    if c14 then L98() else L16();
  L119():
    accumulate2 = force? accumulate1;
    checkMissing(accumulate2);
    r29 = `!`(accumulate2);
    c19 = `as.logical`(r29);
    if c19 then L120() else L23();
  L16():
    x13 = ld x;
    check L110() else D19();
  L19(dx4):
    goto L22();
  L23():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L135() else L136();
  L98():
    x9 = ld x;
    check L99() else D15();
  L120():
    right3 = ld right;
    check L121() else D22();
  D15():
    deopt 58 [x9];
  D19():
    deopt 71 [x13];
  D22():
    deopt 88 [right3];
  L32(r39):
    r41 = `+`(r39, 1);
    st len = r41;
    sym8 = ldf vector;
    base8 = ldf vector in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L139() else L140();
  L99():
    x10 = force? x9;
    checkMissing(x10);
    c15 = `is.object`(x10);
    if c15 then L100() else L101(x10);
  L110():
    x14 = force? x13;
    checkMissing(x14);
    c17 = `is.object`(x14);
    if c17 then L111() else L112(x14);
  L121():
    right4 = force? right3;
    checkMissing(right4);
    c20 = `as.logical`(right4);
    if c20 then L122() else L24();
  L135():
    ind12 = ld ind;
    check L137() else D27();
  L136():
    r38 = dyn base7(<sym ind>);
    goto L32(r38);
  D27():
    deopt 114 [ind12];
  L17(dx1):
    st init = dx1;
    ind = ld ind;
    check L104() else D17();
  L20(dx6):
    st init = dx6;
    ind4 = ld ind;
    check L114() else D20();
  L24():
    ind10 = ld ind;
    check L129() else D25();
  L28():
    init3 = ld init;
    check L133() else D26();
  L33(r43):
    st out = r43;
    mis4 = ld mis;
    check L143() else D31();
  L100():
    dr = tryDispatchBuiltin.1("[[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L102() else L101(dr);
  L101(x12):
    len4 = ld len;
    check L103() else D16();
  L111():
    dr4 = tryDispatchBuiltin.1("[[", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L113() else L112(dr4);
  L112(x16):
    __2 = ldf `[[` in base;
    r27 = dyn __2(x16, 1);
    goto L20(r27);
  L122():
    rev = ldf rev;
    check L123() else D23();
  L137():
    ind13 = force? ind12;
    checkMissing(ind13);
    length1 = ldf length in base;
    r40 = dyn length1(ind13);
    check L138() else D28();
  L139():
    len8 = ld len;
    check L141() else D29();
  L140():
    r42 = dyn base8("list", <sym len>);
    goto L33(r42);
  D16():
    deopt 60 [x12, len4];
  D17():
    deopt 64 [ind];
  D20():
    deopt 77 [ind4];
  D23():
    deopt 91 [];
  D25():
    deopt 101 [ind10];
  D26():
    deopt 110 [init3];
  D28():
    deopt 117 [r40];
  D29():
    deopt 124 [len8];
  D31():
    deopt 129 [mis4];
  L102():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L103():
    len5 = force? len4;
    __ = ldf `[[` in base;
    r24 = dyn __(x12, len5);
    goto L17(r24);
  L104():
    ind1 = force? ind;
    checkMissing(ind1);
    c16 = `is.object`(ind1);
    if c16 then L105() else L106(ind1);
  L113():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx5);
  L114():
    ind5 = force? ind4;
    checkMissing(ind5);
    c18 = `is.object`(ind5);
    if c18 then L115() else L116(ind5);
  L123():
    p2 = prom<V +>{
      ind8 = ld ind;
      ind9 = force? ind8;
      checkMissing(ind9);
      return ind9;
    };
    r31 = dyn rev(p2);
    check L124() else D24();
  L129():
    ind11 = force? ind10;
    checkMissing(ind11);
    s1 = toForSeq(ind11);
    l1 = length(s1);
    i9 = 0;
    goto L29(i9);
  L133():
    init4 = force? init3;
    checkMissing(init4);
    popenv;
    return init4;
  L138():
    goto L32(r40);
  L141():
    len9 = force? len8;
    checkMissing(len9);
    vector = ldf vector in base;
    r44 = dyn vector("list", len9);
    check L142() else D30();
  L143():
    mis5 = force? mis4;
    checkMissing(mis5);
    c23 = `as.logical`(mis5);
    if c23 then L144() else L34();
  D24():
    deopt 93 [r31];
  D30():
    deopt 127 [r44];
  L18(dx3):
    st ind = dx3;
    goto L19(dx3);
  L21(dx8):
    st ind = dx8;
    goto L19(dx8);
  L29(i10):
    i11 = `+`.1(i10, 1);
    c22 = `<`.1(l1, i11);
    if c22 then L130() else L31();
  L34():
    right7 = ld right;
    check L177() else D43();
  L47():
    sym13 = ldf all;
    base13 = ldf all in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L209() else L210();
  L105():
    dr2 = tryDispatchBuiltin.1("[", ind1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L107() else L106(dr2);
  L106(ind3):
    len6 = ld len;
    check L108() else D18();
  L115():
    dr6 = tryDispatchBuiltin.1("[", ind5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L117() else L116(dr6);
  L116(ind7):
    __3 = ldf `[` in base;
    r28 = dyn __3(ind7, -1);
    goto L21(r28);
  L124():
    s = toForSeq(r31);
    l = length(s);
    i = 0;
    goto L25(i);
  L142():
    goto L33(r44);
  L144():
    right5 = ld right;
    check L145() else D32();
  D18():
    deopt 66 [ind3, len6];
  D32():
    deopt 131 [right5];
  D43():
    deopt 181 [right7];
  L25(i1):
    i2 = `+`.1(i1, 1);
    c21 = `<`.1(l, i2);
    if c21 then L125() else L27();
  L31():
    x18 = `[[`(s1, i11, NULL, TRUE);
    st i = x18;
    sym6 = ldf forceAndCall;
    base6 = ldf forceAndCall in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L131() else L132();
  L59(r70):
    c38 = `as.logical`(r70);
    if c38 then L214() else L60(c38);
  L107():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L108():
    len7 = force? len6;
    checkMissing(len7);
    r25 = `-`(<missing>, len7);
    __1 = ldf `[` in base;
    r26 = dyn __1(ind3, r25);
    goto L18(r26);
  L117():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx7);
  L130():
    goto L28();
  L145():
    right6 = force? right5;
    checkMissing(right6);
    c24 = `as.logical`(right6);
    if c24 then L146() else L35();
  L177():
    right8 = force? right7;
    checkMissing(right8);
    c31 = `as.logical`(right8);
    if c31 then L178() else L48();
  L209():
    lengths = ldf lengths;
    check L211() else D55();
  L210():
    r69 = dyn base13(<lang `==`(lengths(out), 1)>);
    goto L59(r69);
  D55():
    deopt 234 [];
  L27():
    x17 = `[[`(s, i2, NULL, TRUE);
    st i = x17;
    sym5 = ldf forceAndCall;
    base5 = ldf forceAndCall in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L126() else L127();
  L30(i16, r36):
    st init = r36;
    goto L29(i16);
  L35():
    init17 = ld init;
    check L163() else D39();
  L41(i31):
    goto L47();
  L48():
    ind20 = ld ind;
    check L195() else D50();
  L60(c40):
    c44 = `as.logical`(c40);
    if c44 then L217() else L61();
  L125():
    goto L28();
  L131():
    forceAndCall1 = ldf forceAndCall in base;
    r37 = dyn forceAndCall1(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>);
    goto L30(i11, r37);
  L132():
    r35 = dyn base6(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>);
    goto L30(i11, r35);
  L146():
    init5 = ld init;
    check L147() else D33();
  L178():
    init29 = ld init;
    check L179() else D44();
  L211():
    p5 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r72 = dyn lengths(p5);
    check L212() else D56();
  L214():
    simplify1 = ld simplify;
    check L215() else D58();
  D33():
    deopt 133 [init5];
  D39():
    deopt 158 [init17];
  D44():
    deopt 183 [init29];
  D50():
    deopt 208 [ind20];
  D56():
    deopt 236 [r72];
  D58():
    deopt 241 [c38, simplify1];
  L26(i7, r33):
    st init = r33;
    goto L25(i7);
  L61():
    goto L62();
  L62():
    out4 = ld out;
    check L221() else D61();
  L126():
    forceAndCall = ldf forceAndCall in base;
    r34 = dyn forceAndCall(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>);
    goto L26(i2, r34);
  L127():
    r32 = dyn base5(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>);
    goto L26(i2, r32);
  L147():
    init6 = force? init5;
    checkMissing(init6);
    l2 = ld out;
    c25 = `is.object`(l2);
    if c25 then L148() else L149(init6, l2);
  L163():
    init18 = force? init17;
    checkMissing(init18);
    l9 = ld out;
    c28 = `is.object`(l9);
    if c28 then L164() else L165(init18, l9);
  L179():
    init30 = force? init29;
    checkMissing(init30);
    l16 = ld out;
    c32 = `is.object`(l16);
    if c32 then L180() else L181(init30, l16);
  L195():
    ind21 = force? ind20;
    checkMissing(ind21);
    s5 = toForSeq(ind21);
    l23 = length(s5);
    i61 = 0;
    goto L54(i61);
  L212():
    r73 = `==`(r72, 1);
    all = ldf all in base;
    r74 = dyn all(r73);
    check L213() else D57();
  L215():
    simplify2 = force? simplify1;
    checkMissing(simplify2);
    c41 = `as.logical`(simplify2);
    c42 = `&&`(c38, c41);
    goto L60(c42);
  L217():
    unlist = ldf unlist;
    check L218() else D59();
  D57():
    deopt 240 [r74];
  D59():
    deopt 245 [];
  D61():
    deopt 253 [out4];
  L36(dx11):
    st out = dx11;
    rev1 = ldf rev;
    check L152() else D35();
  L42(dx15):
    st out = dx15;
    ind16 = ld ind;
    check L167() else D40();
  L49(dx19):
    st out = dx19;
    rev2 = ldf rev;
    check L184() else D46();
  L54(i62):
    i63 = `+`.1(i62, 1);
    c35 = `<`.1(l23, i63);
    if c35 then L196() else L57();
  L148():
    dr8 = tryDispatchBuiltin.0("[[<-", l2, init6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L150() else L149(init6, dr8);
  L149(init8, l4):
    len10 = ld len;
    check L151() else D34();
  L164():
    dr12 = tryDispatchBuiltin.0("[[<-", l9, init18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L166() else L165(init18, dr12);
  L165(init20, l11):
    ____2 = ldf `[[<-` in base;
    r52 = dyn ____2(l11, init18, 1);
    goto L42(r52);
  L180():
    dr16 = tryDispatchBuiltin.0("[[<-", l16, init30);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L182() else L181(init30, dr16);
  L181(init32, l18):
    len12 = ld len;
    check L183() else D45();
  L213():
    goto L59(r74);
  L218():
    p6 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r76 = dyn unlist[, recursive](p6, FALSE);
    check L219() else D60();
  L221():
    out5 = force? out4;
    checkMissing(out5);
    popenv;
    return out5;
  D34():
    deopt 136 [init8, l4, init6, len10];
  D35():
    deopt 141 [];
  D40():
    deopt 165 [ind16];
  D45():
    deopt 186 [init32, l18, init30, len12];
  D46():
    deopt 191 [];
  D60():
    deopt 249 [r76];
  L57():
    x22 = `[[`(s5, i63, NULL, TRUE);
    st i = x22;
    init41 = ld init;
    check L197() else D51();
  L150():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L36(dx10);
  L151():
    len11 = force? len10;
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l4, init6, len11);
    goto L36(r45);
  L152():
    p3 = prom<V +>{
      ind14 = ld ind;
      ind15 = force? ind14;
      checkMissing(ind15);
      return ind15;
    };
    r47 = dyn rev1(p3);
    check L153() else D36();
  L166():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L42(dx14);
  L167():
    ind17 = force? ind16;
    checkMissing(ind17);
    s3 = toForSeq(ind17);
    l12 = length(s3);
    i32 = 0;
    goto L43(i32);
  L182():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L49(dx18);
  L183():
    len13 = force? len12;
    ____4 = ldf `[[<-` in base;
    r57 = dyn ____4(l18, init30, len13);
    goto L49(r57);
  L184():
    p4 = prom<V +>{
      ind18 = ld ind;
      ind19 = force? ind18;
      checkMissing(ind19);
      return ind19;
    };
    r59 = dyn rev2(p4);
    check L185() else D47();
  L196():
    init47 = ld init;
    check L204() else D53();
  L219():
    st out = r76;
    goto L62();
  D36():
    deopt 143 [r47];
  D47():
    deopt 193 [r59];
  D51():
    deopt 210 [i63, init41];
  D53():
    deopt 224 [init47];
  L43(i33):
    i34 = `+`.1(i33, 1);
    c29 = `<`.1(l12, i34);
    if c29 then L168() else L46();
  L153():
    s2 = toForSeq(r47);
    l5 = length(s2);
    i17 = 0;
    goto L37(i17);
  L185():
    s4 = toForSeq(r59);
    l19 = length(s4);
    i47 = 0;
    goto L50(i47);
  L197():
    init42 = force? init41;
    checkMissing(init42);
    l24 = ld out;
    c36 = `is.object`(l24);
    if c36 then L198() else L199(i63, init42, l24);
  L204():
    init48 = force? init47;
    checkMissing(init48);
    l27 = ld out;
    c37 = `is.object`(l27);
    if c37 then L205() else L206(init48, l27);
  L37(i18):
    i19 = `+`.1(i18, 1);
    c26 = `<`.1(l5, i19);
    if c26 then L154() else L40();
  L46():
    x20 = `[[`(s3, i34, NULL, TRUE);
    st i = x20;
    sym10 = ldf forceAndCall;
    base10 = ldf forceAndCall in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L169() else L170();
  L50(i48):
    i49 = `+`.1(i48, 1);
    c33 = `<`.1(l19, i49);
    if c33 then L186() else L53();
  L55(i69, dx23):
    st out = dx23;
    sym12 = ldf forceAndCall;
    base12 = ldf forceAndCall in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L202() else L203();
  L58(init52, dx25):
    st out = dx25;
    goto L47();
  L168():
    goto L41(i34);
  L198():
    dr20 = tryDispatchBuiltin.0("[[<-", l24, init42);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L200() else L199(i63, init42, dr20);
  L199(i67, init44, l26):
    i70 = ld i;
    check L201() else D52();
  L205():
    dr22 = tryDispatchBuiltin.0("[[<-", l27, init48);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L207() else L206(init48, dr22);
  L206(init50, l29):
    len14 = ld len;
    check L208() else D54();
  D52():
    deopt 213 [i67, init44, l26, init42, i70];
  D54():
    deopt 227 [init50, l29, init48, len14];
  L40():
    x19 = `[[`(s2, i19, NULL, TRUE);
    st i = x19;
    sym9 = ldf forceAndCall;
    base9 = ldf forceAndCall in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L155() else L156();
  L44(i39, r54):
    st init = r54;
    init23 = ld init;
    check L171() else D41();
  L53():
    x21 = `[[`(s4, i49, NULL, TRUE);
    st i = x21;
    sym11 = ldf forceAndCall;
    base11 = ldf forceAndCall in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L187() else L188();
  L56(i74, r66):
    st init = r66;
    goto L54(i74);
  L154():
    goto L41(i19);
  L169():
    forceAndCall3 = ldf forceAndCall in base;
    r55 = dyn forceAndCall3(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>);
    goto L44(i34, r55);
  L170():
    r53 = dyn base10(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>);
    goto L44(i34, r53);
  L186():
    goto L47();
  L200():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L55(i63, dx22);
  L201():
    i71 = force? i70;
    ____6 = ldf `[[<-` in base;
    r64 = dyn ____6(l26, init42, i71);
    goto L55(i67, r64);
  L202():
    forceAndCall5 = ldf forceAndCall in base;
    r67 = dyn forceAndCall5(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>);
    goto L56(i69, r67);
  L203():
    r65 = dyn base12(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>);
    goto L56(i69, r65);
  L207():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L58(init48, dx24);
  L208():
    len15 = force? len14;
    ____7 = ldf `[[<-` in base;
    r68 = dyn ____7(l29, init48, len15);
    goto L58(init50, r68);
  D41():
    deopt 171 [i39, init23];
  L38(i24, r49):
    st init = r49;
    init11 = ld init;
    check L157() else D37();
  L51(i54, r61):
    st init = r61;
    init35 = ld init;
    check L189() else D48();
  L155():
    forceAndCall2 = ldf forceAndCall in base;
    r50 = dyn forceAndCall2(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>);
    goto L38(i19, r50);
  L156():
    r48 = dyn base9(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>);
    goto L38(i19, r48);
  L171():
    init24 = force? init23;
    checkMissing(init24);
    l13 = ld out;
    c30 = `is.object`(l13);
    if c30 then L172() else L173(i39, init24, l13);
  L187():
    forceAndCall4 = ldf forceAndCall in base;
    r62 = dyn forceAndCall4(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>);
    goto L51(i49, r62);
  L188():
    r60 = dyn base11(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>);
    goto L51(i49, r60);
  D37():
    deopt 148 [i24, init11];
  D48():
    deopt 198 [i54, init35];
  L45(i43, dx17):
    st out = dx17;
    goto L43(i43);
  L157():
    init12 = force? init11;
    checkMissing(init12);
    l6 = ld out;
    c27 = `is.object`(l6);
    if c27 then L158() else L159(i24, init12, l6);
  L172():
    dr14 = tryDispatchBuiltin.0("[[<-", l13, init24);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L174() else L173(i39, init24, dr14);
  L173(i41, init26, l15):
    i44 = ld i;
    check L175() else D42();
  L189():
    init36 = force? init35;
    checkMissing(init36);
    l20 = ld out;
    c34 = `is.object`(l20);
    if c34 then L190() else L191(i54, init36, l20);
  D42():
    deopt 174 [i41, init26, l15, init24, i44];
  L39(i28, dx13):
    st out = dx13;
    goto L37(i28);
  L52(i58, dx21):
    st out = dx21;
    goto L50(i58);
  L158():
    dr10 = tryDispatchBuiltin.0("[[<-", l6, init12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L160() else L159(i24, init12, dr10);
  L159(i26, init14, l8):
    i29 = ld i;
    check L161() else D38();
  L174():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L45(i39, dx16);
  L175():
    i45 = force? i44;
    ____3 = ldf `[[<-` in base;
    r56 = dyn ____3(l15, init24, i45);
    goto L45(i41, r56);
  L190():
    dr18 = tryDispatchBuiltin.0("[[<-", l20, init36);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L192() else L191(i54, init36, dr18);
  L191(i56, init38, l22):
    i59 = ld i;
    check L193() else D49();
  D38():
    deopt 151 [i26, init14, l8, init12, i29];
  D49():
    deopt 201 [i56, init38, l22, init36, i59];
  L160():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L39(i24, dx12);
  L161():
    i30 = force? i29;
    ____1 = ldf `[[<-` in base;
    r51 = dyn ____1(l8, init12, i30);
    goto L39(i26, r51);
  L192():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L52(i54, dx20);
  L193():
    i60 = force? i59;
    ____5 = ldf `[[<-` in base;
    r63 = dyn ____5(l22, init36, i60);
    goto L52(i56, r63);
  }
}