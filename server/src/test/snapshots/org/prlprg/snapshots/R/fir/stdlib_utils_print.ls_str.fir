fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3617118966;
    st `print.ls_str` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3617118966(x, `max.level`, `give.attr`, `...`, digits) {
  (reg x:*, reg max_level:*, reg give_attr:*, reg ddd:dots, reg digits:*) -+> V { var x:*, var `max.level`:*, reg max_level_isMissing:L, reg max_level_orDefault:*, var `give.attr`:*, reg give_attr_isMissing:L, reg give_attr_orDefault:*, var `...`:dots?, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg max:cls, reg r6:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg attr:cls, reg r10:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg E:*, reg E1:V, reg is_environment:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg x3:*, reg x4:V, reg attr1:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg list:cls, reg ddd1:dots?, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg args:*, reg args1:V, reg length:cls, reg r24:V, reg c1:L, reg c3:V, reg _in_:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg args2:*, reg args3:V, reg names:cls, reg r27:V, reg p2:p(V +), reg r29:V, reg c4:L, reg c5:V, reg c7:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg missing:cls, reg r32:V, reg c8:L, reg args4:*, reg args5:V, reg c9:L, reg args7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r33:V, reg warning:cls, reg r34:V, reg l:*, reg c10:L, reg r36:dots, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg r38:dots, reg dx6:V, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg max_level1:*, reg max_level2:V, reg give_attr1:*, reg give_attr2:V, reg digits1:*, reg digits2:V, reg list1:cls, reg r45:V, reg args8:*, reg args9:V, reg c11:cls, reg r46:V, reg substr:cls, reg tempfile:cls, reg r47:V, reg p3:p(V +), reg r49:V, reg x5:*, reg x6:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x7:V, reg cat:cls, reg nam:*, reg nam1:V, reg p4:p(V +), reg r51:V, reg sprintf:cls, reg nam2:*, reg nam3:V, reg p5:p(V +), reg n_:*, reg n_1:V, reg p6:p(V +), reg r54:V, reg tryCatch:cls, reg get:cls, reg nam4:*, reg nam5:V, reg p7:p(V +), reg E2:*, reg E3:V, reg p8:p(V +), reg M:*, reg M1:V, reg p9:p(V +), reg r58:V, reg p10:p(V +), reg r60:cls, reg p11:p(V +), reg r62:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg i7:I, reg r64:V, reg o:*, reg o1:V, reg inherits:cls, reg r65:V, reg c13:L, reg i9:I, reg c15:V, reg isTRUE:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg o2:*, reg o3:V, reg eA:*, reg eA1:V, reg attr2:cls, reg r68:V, reg p12:p(V +), reg r70:V, reg c16:L, reg c17:V, reg c19:L, reg cat1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg grep:cls, reg o4:*, reg o5:V, reg c20:L, reg o7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r73:V, reg p13:p(V +), reg r75:V, reg length1:cls, reg r76:V, reg c21:L, reg o8:*, reg o9:V, reg c22:L, reg o11:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r77:V, reg p14:p(V +), reg r79:V, reg i13:I, reg r81:cls, reg do_call:cls, reg strO:*, reg strO1:V, reg p15:p(V +), reg strargs:*, reg strargs1:V, reg p16:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg o12:*, reg o13:V, reg is_call:cls, reg r86:V, reg c23:L, reg c24:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r87:V, reg c28:L, reg r88:V, reg o14:*, reg o15:V, reg c29:L, reg c30:L, reg c31:V, reg p17:p(V +), reg r90:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r91:V, reg r92:V, reg x8:*, reg x9:V, reg invisible:cls, reg r93:V |
    mkenv;
    st x = x;
    max_level_isMissing = missing.0(max_level);
    if max_level_isMissing then L0(1.0) else L0(max_level);
  L0(max_level_orDefault):
    st `max.level` = max_level_orDefault;
    give_attr_isMissing = missing.0(give_attr);
    if give_attr_isMissing then L1(FALSE) else L1(give_attr);
  L1(give_attr_orDefault):
    st `give.attr` = give_attr_orDefault;
    st `...` = ddd;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L2() else L3(digits);
  L2():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("str");
      c = `is.object`(r2);
      if c then L4() else L5(r2);
    L2():
      r = dyn base(1.0, <lang `$`(getOption("str"), digits.d)>);
      goto L0(r);
    L3(dx1):
      max = ldf max in base;
      r6 = dyn max(1.0, dx1);
      goto L0(r6);
    L4():
      dr = tryDispatchBuiltin.1("$", r2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r4):
      r5 = `$`(r4, <sym digits.d>);
      goto L3(r5);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    goto L3(p);
  L3(digits_orDefault):
    st digits = digits_orDefault;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L4(r9):
    st E = r9;
    stopifnot = ldf stopifnot;
    check L27() else D2();
  L23():
    x1 = ld x;
    check L25() else D0();
  L24():
    r8 = dyn base1(<sym x>, "envir");
    goto L4(r8);
  D0():
    deopt 2 [x1];
  D2():
    deopt 9 [];
  L25():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r10 = dyn attr(x2, "envir");
    check L26() else D1();
  L27():
    p1 = prom<V +>{
      sym2 = ldf `is.environment`;
      base2 = ldf `is.environment` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      E = ld E;
      E1 = force? E;
      checkMissing(E1);
      is_environment = ldf `is.environment` in base;
      r13 = dyn is_environment(E1);
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym E>);
      goto L0(r11);
    };
    r15 = dyn stopifnot(p1);
    check L28() else D3();
  D1():
    deopt 6 [r10];
  D3():
    deopt 11 [r15];
  L26():
    goto L4(r10);
  L28():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L5(r17):
    st M = r17;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L29():
    x3 = ld x;
    check L31() else D4();
  L30():
    r16 = dyn base3(<sym x>, "mode");
    goto L5(r16);
  D4():
    deopt 14 [x3];
  L6(r20):
    st args = r20;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L31():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r18 = dyn attr1(x4, "mode");
    check L32() else D5();
  L33():
    list = ldf list;
    check L35() else D6();
  L34():
    r19 = dyn base4(<sym ...>);
    goto L6(r19);
  D5():
    deopt 18 [r18];
  D6():
    deopt 22 [];
  L7(r23):
    c1 = `as.logical`(r23);
    if c1 then L41() else L8(c1);
  L32():
    goto L5(r18);
  L35():
    ddd1 = ld `...`;
    r21 = dyn list[`...`](ddd1);
    check L36() else D7();
  L37():
    args = ld args;
    check L39() else D8();
  L38():
    r22 = dyn base5(<sym args>);
    goto L7(r22);
  D7():
    deopt 24 [r21];
  D8():
    deopt 28 [args];
  L8(c3):
    c7 = `as.logical`(c3);
    if c7 then L45() else L9();
  L36():
    goto L6(r21);
  L39():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r24 = dyn length(args1);
    check L40() else D9();
  L41():
    _in_ = ldf `%in%`;
    check L42() else D10();
  D9():
    deopt 31 [r24];
  D10():
    deopt 33 [c1];
  L9():
    goto L13();
  L13():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L62() else L63();
  L40():
    goto L7(r24);
  L42():
    p2 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      names = ldf names in base;
      r27 = dyn names(args3);
      goto L0(r27);
    L2():
      r25 = dyn base6(<sym args>);
      goto L0(r25);
    };
    r29 = dyn _in_("digits.d", p2);
    check L43() else D11();
  L45():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L46() else L47();
  D11():
    deopt 36 [c1, r29];
  L10(r31):
    c8 = `as.logical`(r31);
    if c8 then L48() else L11();
  L14(r42):
    st strargs = r42;
    substr = ldf substr;
    check L72() else D21();
  L43():
    c4 = `as.logical`(r29);
    c5 = `&&`(c1, c4);
    goto L8(c5);
  L46():
    missing = ldf missing in base;
    r32 = dyn missing(<sym digits>);
    goto L10(r32);
  L47():
    r30 = dyn base7(<sym digits>);
    goto L10(r30);
  L62():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L64() else L65();
  L63():
    r41 = dyn base8(<lang list(max.level=max.level, give.attr=give.attr, digits.d=digits)>, <sym args>);
    goto L14(r41);
  D21():
    deopt 77 [];
  L11():
    warning = ldf warning;
    check L55() else D13();
  L12():
    l = ld args;
    c10 = `is.object`(l);
    if c10 then L58() else L59(NULL, l);
  L15(r44):
    args8 = ld args;
    check L70() else D19();
  L48():
    args4 = ld args;
    check L49() else D12();
  L64():
    max_level1 = ld `max.level`;
    check L66() else D15();
  L65():
    r43 = dyn base9[`max.level`, `give.attr`, `digits.d`](<sym max.level>, <sym give.attr>, <sym digits>);
    goto L15(r43);
  L72():
    p3 = prom<V +>{
      tempfile = ldf tempfile;
      r47 = dyn tempfile[, tmpdir]("ls_str_", "");
      return r47;
    };
    r49 = dyn substr(p3, 2, 20);
    check L73() else D22();
  D12():
    deopt 41 [args4];
  D13():
    deopt 46 [];
  D15():
    deopt 60 [max_level1];
  D19():
    deopt 71 [args8];
  D22():
    deopt 81 [r49];
  L49():
    args5 = force? args4;
    checkMissing(args5);
    c9 = `is.object`(args5);
    if c9 then L51() else L52(args5);
  L55():
    r34 = dyn warning("'digits' and 'digits.d' are both specified and the latter is not used");
    check L56() else D14();
  L57(r38, dx6):
    st args = dx6;
    goto L13();
  L58():
    dr4 = tryDispatchBuiltin.0("$<-", l, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(NULL, dr4);
  L59(r36, l2):
    r39 = `$<-`(l2, <sym digits.d>, NULL);
    goto L57(r36, r39);
  L66():
    max_level2 = force? max_level1;
    checkMissing(max_level2);
    give_attr1 = ld `give.attr`;
    check L67() else D16();
  L70():
    args9 = force? args8;
    checkMissing(args9);
    c11 = ldf c in base;
    r46 = dyn c11(r44, args9);
    check L71() else D20();
  L73():
    st `n.` = r49;
    x5 = ld x;
    check L74() else D23();
  D14():
    deopt 48 [r34];
  D16():
    deopt 63 [give_attr1];
  D20():
    deopt 74 [r46];
  D23():
    deopt 83 [x5];
  L50(dx3):
    st digits = dx3;
    goto L12();
  L51():
    dr2 = tryDispatchBuiltin.1("$", args5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(args7):
    r33 = `$`(args7, <sym digits.d>);
    goto L50(r33);
  L56():
    goto L12();
  L60():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L57(NULL, dx5);
  L67():
    give_attr2 = force? give_attr1;
    checkMissing(give_attr2);
    digits1 = ld digits;
    check L68() else D17();
  L71():
    goto L14(r46);
  L74():
    x6 = force? x5;
    checkMissing(x6);
    s = toForSeq(x6);
    l3 = length(s);
    i = 0;
    goto L16(i);
  D17():
    deopt 66 [digits1];
  L16(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l3, i2);
    if c12 then L75() else L21();
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L50(dx2);
  L68():
    digits2 = force? digits1;
    checkMissing(digits2);
    list1 = ldf list in base;
    r45 = dyn list1(max_level2, give_attr2, digits2);
    check L69() else D18();
  D18():
    deopt 70 [r45];
  L21():
    x7 = `[[`(s, i2, NULL, TRUE);
    st nam = x7;
    cat = ldf cat;
    check L76() else D24();
  L69():
    goto L15(r45);
  L75():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L96() else L97();
  D24():
    deopt 86 [i2];
  L22(r92):
    popenv;
    return r92;
  L76():
    p4 = prom<V +>{
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      return nam1;
    };
    r51 = dyn cat(p4, ": ");
    check L77() else D25();
  L96():
    x8 = ld x;
    check L98() else D38();
  L97():
    r91 = dyn base15(<sym x>);
    goto L22(r91);
  D25():
    deopt 89 [i2, r51];
  D38():
    deopt 139 [x8];
  L77():
    sprintf = ldf sprintf;
    check L78() else D26();
  L98():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r93 = dyn invisible(x9);
    check L99() else D39();
  D26():
    deopt 91 [i2];
  D39():
    deopt 142 [r93];
  L78():
    p5 = prom<V +>{
      nam2 = ld nam;
      nam3 = force? nam2;
      checkMissing(nam3);
      return nam3;
    };
    p6 = prom<V +>{
      n_ = ld `n.`;
      n_1 = force? n_;
      checkMissing(n_1);
      return n_1;
    };
    r54 = dyn sprintf("%s:%s", p5, p6);
    check L79() else D27();
  L99():
    goto L22(r93);
  D27():
    deopt 95 [i2, r54];
  L79():
    st eA = r54;
    tryCatch = ldf tryCatch;
    check L80() else D28();
  D28():
    deopt 98 [i2];
  L80():
    p10 = prom<V +>{
      get = ldf get;
      p7 = prom<V +>{
        nam4 = ld nam;
        nam5 = force? nam4;
        checkMissing(nam5);
        return nam5;
      };
      p8 = prom<V +>{
        E2 = ld E;
        E3 = force? E2;
        checkMissing(E3);
        return E3;
      };
      p9 = prom<V +>{
        M = ld M;
        M1 = force? M;
        checkMissing(M1);
        return M1;
      };
      r58 = dyn get[, envir, mode](p7, p8, p9);
      return r58;
    };
    p11 = prom<V +>{
      r60 = clos inner3708401697;
      return r60;
    };
    r62 = dyn tryCatch[, error](p10, p11);
    check L81() else D29();
  D29():
    deopt 102 [i2, r62];
  L81():
    st o = r62;
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L82() else L83();
  L17(i7, r64):
    c13 = `as.logical`(r64);
    if c13 then L86() else L18(i7, c13);
  L82():
    o = ld o;
    check L84() else D30();
  L83():
    r63 = dyn base10(<sym o>, "error");
    goto L17(i2, r63);
  D30():
    deopt 106 [i2, o];
  L18(i9, c15):
    c19 = `as.logical`(c15);
    if c19 then L90() else L19();
  L84():
    o1 = force? o;
    checkMissing(o1);
    inherits = ldf inherits in base;
    r65 = dyn inherits(o1, "error", FALSE);
    check L85() else D31();
  L86():
    isTRUE = ldf isTRUE;
    check L87() else D32();
  D31():
    deopt 111 [i2, r65];
  D32():
    deopt 113 [i7, c13];
  L19():
    r81 = clos inner1246119658;
    st strO = r81;
    do_call = ldf `do.call`;
    check L94() else D36();
  L20(i13):
    goto L16(i13);
  L85():
    goto L17(i2, r65);
  L87():
    p12 = prom<V +>{
      sym11 = ldf attr;
      base11 = ldf attr in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      o2 = ld o;
      o3 = force? o2;
      checkMissing(o3);
      eA = ld eA;
      eA1 = force? eA;
      checkMissing(eA1);
      attr2 = ldf attr in base;
      r68 = dyn attr2(o3, eA1);
      goto L0(r68);
    L2():
      r66 = dyn base11(<sym o>, <sym eA>);
      goto L0(r66);
    };
    r70 = dyn isTRUE(p12);
    check L88() else D33();
  L90():
    cat1 = ldf cat;
    check L91() else D34();
  D33():
    deopt 115 [i7, c13, r70];
  D34():
    deopt 118 [i9];
  D36():
    deopt 128 [i9];
  L88():
    c16 = `as.logical`(r70);
    c17 = `&&`(c13, c16);
    goto L18(i7, c17);
  L91():
    p14 = prom<V +>{
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r72):
      c21 = `as.logical`(r72);
      if c21 then L4() else L1();
    L2():
      grep = ldf grep;
      p13 = prom<V +>{
        o4 = ld o;
        o5 = force? o4;
        checkMissing(o5);
        c20 = `is.object`(o5);
        if c20 then L1() else L2(o5);
      L0(dx8):
        return dx8;
      L1():
        dr6 = tryDispatchBuiltin.1("$", o5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(o7):
        r73 = `$`(o7, <sym message>);
        goto L0(r73);
      L3():
        dx7 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx7);
      };
      r75 = dyn grep("missing|not found", p13);
      length1 = ldf length in base;
      r76 = dyn length1(r75);
      goto L0(r76);
    L3():
      r71 = dyn base12(<lang grep("missing|not found", `$`(o, message))>);
      goto L0(r71);
    L1():
      o8 = ld o;
      o9 = force? o8;
      checkMissing(o9);
      c22 = `is.object`(o9);
      if c22 then L7() else L8(o9);
    L4():
      return "<missing>";
    L6(dx10):
      return dx10;
    L7():
      dr8 = tryDispatchBuiltin.1("$", o9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L9() else L8(dr8);
    L8(o11):
      r77 = `$`(o11, <sym message>);
      goto L6(r77);
    L9():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L6(dx9);
    };
    r79 = dyn cat1[, , sep](p14, "\n", "");
    check L92() else D35();
  L94():
    p15 = prom<V +>{
      strO = ld strO;
      strO1 = force? strO;
      checkMissing(strO1);
      return strO1;
    };
    p16 = prom<V +>{
      strargs = ld strargs;
      strargs1 = force? strargs;
      checkMissing(strargs1);
      return strargs1;
    };
    p17 = prom<V +>{
      sym13 = ldf `is.call`;
      base13 = ldf `is.call` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L3() else L4();
    L0(r85):
      c23 = `as.logical`(r85);
      if c23 then L1(c23) else L5();
    L3():
      o12 = ld o;
      o13 = force? o12;
      checkMissing(o13);
      is_call = ldf `is.call` in base;
      r86 = dyn is_call(o13);
      goto L0(r86);
    L4():
      r84 = dyn base13(<sym o>);
      goto L0(r84);
    L1(c24):
      return c24;
    L5():
      sym14 = ldf `is.symbol`;
      base14 = ldf `is.symbol` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L6() else L7();
    L2(c28, r88):
      c30 = `as.logical`(r88);
      c31 = `||`(c28, c30);
      goto L1(c31);
    L6():
      o14 = ld o;
      o15 = force? o14;
      checkMissing(o15);
      c29 = `is.symbol`(o15);
      goto L2(c23, c29);
    L7():
      r87 = dyn base14(<sym o>);
      goto L2(c23, r87);
    };
    r90 = dyn do_call[, , quote](p15, p16, p17);
    check L95() else D37();
  D35():
    deopt 123 [i9, r79];
  D37():
    deopt 133 [i9, r90];
  L92():
    goto L20(i9);
  L95():
    goto L20(i9);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg l:*, reg attr__:cls, reg eA:*, reg eA1:V, reg p:p(V +), reg r1:V, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    l = ld e;
    attr__ = ldf `attr<-`;
    check L0() else D0();
  D0():
    deopt 3 [TRUE, l, TRUE];
  L0():
    p = prom<V +>{
      eA = ld eA;
      eA1 = force? eA;
      checkMissing(eA1);
      return eA1;
    };
    r1 = dyn attr__(l, NULL, p, TRUE);
    check L1() else D1();
  D1():
    deopt 6 [TRUE, r1];
  L1():
    st e = r1;
    e1 = ld e;
    check L2() else D2();
  D2():
    deopt 8 [e1];
  L2():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg str:cls, reg o:*, reg o1:V, reg p:p(V +), reg ddd1:dots?, reg r1:V |
    mkenv;
    st `...` = ddd;
    str = ldf str;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      o = ld o;
      o1 = force? o;
      checkMissing(o1);
      return o1;
    };
    ddd1 = ld `...`;
    r1 = dyn str[, `...`](p, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}