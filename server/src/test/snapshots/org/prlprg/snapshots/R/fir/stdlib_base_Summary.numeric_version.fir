fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1466705707`;
    st `Summary.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1466705707`(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg i_ddd:dots, reg i:V, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg stop:cls, reg r1:V, reg ok:*, reg ok1:V, reg r2:V, reg c10:L, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg do_call:cls, reg c11:*, reg c12:V, reg p2:p(V +), reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg list:cls, reg ddd1:dots?, reg r11:V, reg p3:p(V +), reg as_numeric_version:*, reg as_numeric_version1:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg _encode_numeric_version:cls, reg x:*, reg x1:V, reg p6:p(V +), reg r18:V, reg na_rm1:*, reg na_rm2:V, reg r19:V, reg c13:L, reg c15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg c18:L, reg r21:V, reg which:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg v:*, reg v1:V, reg is_na:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg length:cls, reg r27:V, reg c19:L, reg c20:V, reg c22:L, reg x2:*, reg x3:V, reg c23:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos:*, reg pos1:V, reg c24:L, reg x7:V, reg pos3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg x9:V, reg dx3:V, reg __:cls, reg r28:V, reg __1:cls, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg _Generic4:*, reg _Generic5:V, reg as_character:cls, reg r32:V, reg r33:V, reg c25:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg y:*, reg y1:V, reg y2:*, reg y3:V, reg c26:cls, reg r36:V, reg y4:*, reg y5:V, reg _Generic6:*, reg _Generic7:V, reg c27:L, reg c28:L, reg c29:L, reg c30:L, reg c31:L, reg c32:L, reg i_ddd1:dots, reg i1:V, reg c33:L, reg c34:L, reg c35:L, reg x10:*, reg x11:V, reg c36:L, reg x13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg which1:cls, reg v2:*, reg v3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg v6:V, reg r38:V, reg v7:*, reg v8:V, reg max:cls, reg r39:V, reg r40:V, reg p8:p(V +), reg r42:V, reg c37:L, reg x15:V, reg r44:V, reg dr6:V, reg dc3:L, reg dx6:V, reg x17:V, reg dx7:V, reg __2:cls, reg r45:V, reg __3:cls, reg r46:V, reg x18:*, reg x19:V, reg c38:L, reg x21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg which2:cls, reg v9:*, reg v10:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg v13:V, reg r48:V, reg v14:*, reg v15:V, reg min:cls, reg r49:V, reg r50:V, reg p9:p(V +), reg r52:V, reg c39:L, reg x23:V, reg r54:V, reg dr10:V, reg dc5:L, reg dx10:V, reg x25:V, reg dx11:V, reg __4:cls, reg r55:V, reg __5:cls, reg r56:V, reg x26:*, reg x27:V, reg c40:L, reg x29:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg x32:V, reg r58:V, reg which3:cls, reg v16:*, reg v17:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg v20:V, reg r60:V, reg v21:*, reg v22:V, reg min1:cls, reg r61:V, reg r62:V, reg p10:p(V +), reg r64:V, reg c41:L, reg x34:V, reg r66:V, reg dr14:V, reg dc7:L, reg dx14:V, reg x36:V, reg dx15:V, reg __6:cls, reg r67:V, reg which4:cls, reg v23:*, reg v24:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg v27:V, reg r69:V, reg v28:*, reg v29:V, reg max1:cls, reg r70:V, reg r71:V, reg p11:p(V +), reg r73:V, reg c42:L, reg x38:V, reg r75:V, reg dr16:V, reg dc8:L, reg dx16:V, reg x40:V, reg dx17:V, reg __7:cls, reg r76:V, reg c43:cls, reg r77:V, reg __8:cls, reg r78:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    _Generic = ld `.Generic`;
    check L27() else D0();
  D0():
    deopt 0 [_Generic];
  L27():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c = `is.vector`(_Generic1, "any");
    if c then L28() else L29();
  L28():
    c1 = inherits(_Generic1, "factor", FALSE);
    if c1 then L30() else L31();
  L29():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L30():
    c2 = `is.character`(_Generic1);
    if c2 then L32() else L33();
  L31():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L30();
  L0():
    goto L4(TRUE);
  L1():
    goto L4(FALSE);
  L4(r1):
    st ok = r1;
    ok = ld ok;
    check L45() else D2();
  L32():
    c3 = `==`.6(_Generic1, "max");
    if c3 then L0() else L34();
  L33():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c6 = `==`.5(i, 1);
    if c6 then L2() else L37();
  D2():
    deopt 13 [ok];
  L2():
    stop = ldf stop;
    check L41() else D1();
  L3():
    goto L4(NULL);
  L34():
    c4 = `==`.6(_Generic1, "min");
    if c4 then L0() else L35();
  L37():
    c7 = `==`.5(i, 2);
    if c7 then L2() else L38();
  L45():
    ok1 = force? ok;
    checkMissing(ok1);
    r2 = `!`(ok1);
    c10 = `as.logical`(r2);
    if c10 then L46() else L5();
  D1():
    deopt 3 [];
  L5():
    goto L6();
  L6():
    do_call = ldf `do.call`;
    check L50() else D5();
  L35():
    c5 = `==`.6(_Generic1, "range");
    if c5 then L0() else L36();
  L38():
    c8 = `==`.5(i, 3);
    if c8 then L0() else L39();
  L41():
    dyn stop("empty alternative in numeric switch");
    goto L3();
  L46():
    stop1 = ldf stop;
    check L47() else D3();
  D3():
    deopt 17 [];
  D5():
    deopt 25 [];
  L36():
    goto L1();
  L39():
    c9 = `==`.5(i, 4);
    if c9 then L1() else L40();
  L47():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r4 = dyn gettextf("%s not defined for \"numeric_version\" objects", p);
      return r4;
    };
    r6 = dyn stop1[, domain](p1, NA_LGL);
    check L48() else D4();
  L50():
    p2 = prom<V +>{
      c11 = ld c;
      c12 = force? c11;
      checkMissing(c12);
      return c12;
    };
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        sym = ldf list;
        base = ldf list in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r10):
        return r10;
      L1():
        list = ldf list;
        ddd1 = ld `...`;
        r11 = dyn list[`...`](ddd1);
        goto L0(r11);
      L2():
        r9 = dyn base(<sym ...>);
        goto L0(r9);
      };
      p4 = prom<V +>{
        as_numeric_version = ld `as.numeric_version`;
        as_numeric_version1 = force? as_numeric_version;
        checkMissing(as_numeric_version1);
        return as_numeric_version1;
      };
      r14 = dyn lapply(p3, p4);
      return r14;
    };
    r16 = dyn do_call(p2, p5);
    check L51() else D6();
  D4():
    deopt 21 [r6];
  D6():
    deopt 28 [r16];
  L40():
    goto L3();
  L48():
    goto L6();
  L51():
    st x = r16;
    _encode_numeric_version = ldf `.encode_numeric_version`;
    check L52() else D7();
  D7():
    deopt 31 [];
  L52():
    p6 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r18 = dyn _encode_numeric_version(p6);
    check L53() else D8();
  D8():
    deopt 33 [r18];
  L53():
    st v = r18;
    na_rm1 = ld `na.rm`;
    check L54() else D9();
  D9():
    deopt 35 [na_rm1];
  L54():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    r19 = `!`(na_rm2);
    c13 = `as.logical`(r19);
    if c13 then L55() else L7(c13);
  L7(c15):
    c22 = `as.logical`(c15);
    if c22 then L62() else L9();
  L55():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L8(c18, r21):
    c19 = `as.logical`(r21);
    c20 = `&&`(c18, c19);
    goto L7(c20);
  L9():
    _Generic6 = ld `.Generic`;
    check L84() else D21();
  L56():
    which = ldf which;
    check L58() else D10();
  L57():
    r20 = dyn base1(<lang `<-`(pos, which(is.na(v)))>);
    goto L8(c13, r20);
  L62():
    x2 = ld x;
    check L63() else D13();
  D10():
    deopt 41 [c13];
  D13():
    deopt 48 [x2];
  D21():
    deopt 75 [_Generic6];
  L58():
    p7 = prom<V +>{
      sym2 = ldf `is.na`;
      base2 = ldf `is.na` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      is_na = ldf `is.na` in base;
      r24 = dyn is_na(v1);
      goto L0(r24);
    L2():
      r22 = dyn base2(<sym v>);
      goto L0(r22);
    };
    r26 = dyn which(p7);
    check L59() else D11();
  L63():
    x3 = force? x2;
    checkMissing(x3);
    c23 = `is.object`(x3);
    if c23 then L64() else L65(x3);
  L84():
    _Generic7 = force? _Generic6;
    checkMissing(_Generic7);
    c27 = `is.vector`(_Generic7, "any");
    if c27 then L85() else L86();
  D11():
    deopt 43 [c13, r26];
  L10(dx1):
    st y = dx1;
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L59():
    st pos = r26;
    length = ldf length in base;
    r27 = dyn length(r26);
    check L60() else D12();
  L64():
    dr = tryDispatchBuiltin.1("[", x3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L66() else L65(dr);
  L65(x5):
    pos = ld pos;
    check L67() else D14();
  L85():
    c28 = inherits(_Generic7, "factor", FALSE);
    if c28 then L87() else L88();
  L86():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D12():
    deopt 46 [c13, r27];
  D14():
    deopt 50 [x5, pos];
  L12(r31):
    r33 = `==`(r31, "range");
    c25 = `as.logical`(r33);
    if c25 then L75() else L13();
  L60():
    goto L8(c13, r27);
  L66():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L67():
    pos1 = force? pos;
    checkMissing(pos1);
    c24 = `is.object`(pos1);
    if c24 then L68() else L69(x5, pos1);
  L71():
    _Generic4 = ld `.Generic`;
    check L73() else D15();
  L72():
    r30 = dyn base3(<sym .Generic>);
    goto L12(r30);
  L87():
    c29 = `is.character`(_Generic7);
    if c29 then L89() else L90();
  L88():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L87();
  D15():
    deopt 59 [_Generic4];
  L11(x9, dx3):
    __1 = ldf `[` in base;
    r29 = dyn __1(x9, dx3);
    goto L10(r29);
  L13():
    y4 = ld y;
    check L82() else D20();
  L15():
    x10 = ld x;
    check L98() else D22();
  L16():
    x18 = ld x;
    check L108() else D25();
  L17():
    x26 = ld x;
    check L118() else D28();
  L18():
    invisible.0();
    popenv;
    return NULL;
  L68():
    dr2 = tryDispatchBuiltin.1("[", pos1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(x5, dr2);
  L69(x7, pos3):
    __ = ldf `[` in base;
    r28 = dyn __(pos3, 1);
    goto L11(x7, r28);
  L73():
    _Generic5 = force? _Generic4;
    checkMissing(_Generic5);
    as_character = ldf `as.character` in base;
    r32 = dyn as_character(_Generic5);
    check L74() else D16();
  L75():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L89():
    c30 = `==`.6(_Generic7, "max");
    if c30 then L15() else L91();
  L90():
    i_ddd1 = dots[_Generic7];
    i1 = `as.integer`(i_ddd1);
    c33 = `==`.5(i1, 1);
    if c33 then L15() else L94();
  D16():
    deopt 62 [r32];
  D20():
    deopt 73 [y4];
  D22():
    deopt 80 [x10];
  D25():
    deopt 90 [x18];
  D28():
    deopt 100 [x26];
  L14(r35):
    popenv;
    return r35;
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(x5, dx2);
  L74():
    goto L12(r32);
  L76():
    y = ld y;
    check L78() else D17();
  L77():
    r34 = dyn base4(<sym y>, <sym y>);
    goto L14(r34);
  L82():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  L91():
    c31 = `==`.6(_Generic7, "min");
    if c31 then L16() else L92();
  L94():
    c34 = `==`.5(i1, 2);
    if c34 then L16() else L95();
  L98():
    x11 = force? x10;
    checkMissing(x11);
    c36 = `is.object`(x11);
    if c36 then L99() else L100(x11);
  L108():
    x19 = force? x18;
    checkMissing(x19);
    c38 = `is.object`(x19);
    if c38 then L109() else L110(x19);
  L118():
    x27 = force? x26;
    checkMissing(x27);
    c40 = `is.object`(x27);
    if c40 then L119() else L120(x27);
  D17():
    deopt 67 [y];
  L19(dx5):
    popenv;
    return dx5;
  L21(dx9):
    popenv;
    return dx9;
  L23(dx13):
    popenv;
    return dx13;
  L78():
    y1 = force? y;
    checkMissing(y1);
    y2 = ld y;
    check L79() else D18();
  L92():
    c32 = `==`.6(_Generic7, "range");
    if c32 then L17() else L93();
  L95():
    c35 = `==`.5(i1, 3);
    if c35 then L17() else L96();
  L99():
    dr4 = tryDispatchBuiltin.1("[", x11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L101() else L100(dr4);
  L100(x13):
    which1 = ldf which;
    check L102() else D23();
  L109():
    dr8 = tryDispatchBuiltin.1("[", x19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L111() else L110(dr8);
  L110(x21):
    which2 = ldf which;
    check L112() else D26();
  L119():
    dr12 = tryDispatchBuiltin.1("[", x27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L121() else L120(dr12);
  L120(x29):
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L122() else L123();
  D18():
    deopt 69 [y2];
  D23():
    deopt 83 [x13];
  D26():
    deopt 93 [x21];
  L24(x32, r58):
    __8 = ldf `[` in base;
    r78 = dyn __8(x32, r58);
    goto L23(r78);
  L79():
    y3 = force? y2;
    checkMissing(y3);
    c26 = ldf c in base;
    r36 = dyn c26(y1, y3);
    check L80() else D19();
  L93():
    goto L18();
  L96():
    goto L18();
  L101():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L102():
    p8 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      sym5 = ldf max;
      base5 = ldf max in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(v6, r38):
      r40 = `==`(v6, r38);
      return r40;
    L1():
      v7 = ld v;
      v8 = force? v7;
      checkMissing(v8);
      max = ldf max in base;
      r39 = dyn max(v8);
      goto L0(v3, r39);
    L2():
      r37 = dyn base5(<sym v>);
      goto L0(v3, r37);
    };
    r42 = dyn which1(p8);
    check L103() else D24();
  L111():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx8);
  L112():
    p9 = prom<V +>{
      v9 = ld v;
      v10 = force? v9;
      checkMissing(v10);
      sym6 = ldf min;
      base6 = ldf min in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(v13, r48):
      r50 = `==`(v13, r48);
      return r50;
    L1():
      v14 = ld v;
      v15 = force? v14;
      checkMissing(v15);
      min = ldf min in base;
      r49 = dyn min(v15);
      goto L0(v10, r49);
    L2():
      r47 = dyn base6(<sym v>);
      goto L0(v10, r47);
    };
    r52 = dyn which2(p9);
    check L113() else D27();
  L121():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(dx12);
  L122():
    which3 = ldf which;
    check L124() else D29();
  L123():
    r57 = dyn base7(<lang `[`(which(`==`(v, min(v))), 1)>, <lang `[`(which(`==`(v, max(v))), 1)>);
    goto L24(x29, r57);
  D19():
    deopt 72 [r36];
  D24():
    deopt 85 [x13, r42];
  D27():
    deopt 95 [x21, r52];
  D29():
    deopt 105 [x29];
  L80():
    goto L14(r36);
  L103():
    c37 = `is.object`(r42);
    if c37 then L104() else L105(x13, r42);
  L113():
    c39 = `is.object`(r52);
    if c39 then L114() else L115(x21, r52);
  L124():
    p10 = prom<V +>{
      v16 = ld v;
      v17 = force? v16;
      checkMissing(v17);
      sym8 = ldf min;
      base8 = ldf min in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(v20, r60):
      r62 = `==`(v20, r60);
      return r62;
    L1():
      v21 = ld v;
      v22 = force? v21;
      checkMissing(v22);
      min1 = ldf min in base;
      r61 = dyn min1(v22);
      goto L0(v17, r61);
    L2():
      r59 = dyn base8(<sym v>);
      goto L0(v17, r59);
    };
    r64 = dyn which3(p10);
    check L125() else D30();
  D30():
    deopt 107 [x29, r64];
  L20(x17, dx7):
    __3 = ldf `[` in base;
    r46 = dyn __3(x17, dx7);
    goto L19(r46);
  L22(x25, dx11):
    __5 = ldf `[` in base;
    r56 = dyn __5(x25, dx11);
    goto L21(r56);
  L104():
    dr6 = tryDispatchBuiltin.1("[", r42);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L106() else L105(x13, dr6);
  L105(x15, r44):
    __2 = ldf `[` in base;
    r45 = dyn __2(r44, 1);
    goto L20(x15, r45);
  L114():
    dr10 = tryDispatchBuiltin.1("[", r52);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L116() else L115(x21, dr10);
  L115(x23, r54):
    __4 = ldf `[` in base;
    r55 = dyn __4(r54, 1);
    goto L22(x23, r55);
  L125():
    c41 = `is.object`(r64);
    if c41 then L126() else L127(x29, r64);
  L25(x36, dx15):
    which4 = ldf which;
    check L129() else D31();
  L106():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L20(x13, dx6);
  L116():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L22(x21, dx10);
  L126():
    dr14 = tryDispatchBuiltin.1("[", r64);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L128() else L127(x29, dr14);
  L127(x34, r66):
    __6 = ldf `[` in base;
    r67 = dyn __6(r66, 1);
    goto L25(x34, r67);
  D31():
    deopt 112 [x36];
  L128():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L25(x29, dx14);
  L129():
    p11 = prom<V +>{
      v23 = ld v;
      v24 = force? v23;
      checkMissing(v24);
      sym9 = ldf max;
      base9 = ldf max in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(v27, r69):
      r71 = `==`(v27, r69);
      return r71;
    L1():
      v28 = ld v;
      v29 = force? v28;
      checkMissing(v29);
      max1 = ldf max in base;
      r70 = dyn max1(v29);
      goto L0(v24, r70);
    L2():
      r68 = dyn base9(<sym v>);
      goto L0(v24, r68);
    };
    r73 = dyn which4(p11);
    check L130() else D32();
  D32():
    deopt 114 [x36, r73];
  L130():
    c42 = `is.object`(r73);
    if c42 then L131() else L132(x36, r73);
  L26(x40, dx17):
    c43 = ldf c in base;
    r77 = dyn c43(dx15, dx17);
    check L134() else D33();
  L131():
    dr16 = tryDispatchBuiltin.1("[", r73);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L133() else L132(x36, dr16);
  L132(x38, r75):
    __7 = ldf `[` in base;
    r76 = dyn __7(r75, 1);
    goto L26(x38, r76);
  D33():
    deopt 119 [x40, r77];
  L133():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L26(x36, dx16);
  L134():
    goto L24(x40, r77);
  }
}