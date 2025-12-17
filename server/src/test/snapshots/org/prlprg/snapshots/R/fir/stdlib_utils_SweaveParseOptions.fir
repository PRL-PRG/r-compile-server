fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3144545141;
    st SweaveParseOptions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3144545141(text, defaults, check) {
  (reg text:*, reg defaults:*, reg check:*) -+> V { var text:*, var defaults:*, reg defaults_isMissing:L, reg defaults_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var check:*, reg check_isMissing:L, reg check_orDefault:*, reg sub:cls, reg text1:*, reg text2:V, reg p1:p(V +), reg r5:V, reg sub1:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r7:V, reg unlist:cls, reg strsplit:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg strsplit1:cls, reg x4:*, reg x5:V, reg p5:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg x6:*, reg x7:V, reg length:cls, reg r16:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg x8:*, reg x9:V, reg c1:L, reg x11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r19:V, reg length1:cls, reg r20:V, reg r21:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg x12:*, reg x13:V, reg c3:L, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r24:V, reg c4:cls, reg r25:V, reg l:*, reg c5:L, reg r27:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r29:V, reg dx5:V, reg ____:cls, reg r30:V, reg defaults1:*, reg defaults2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg lengths:cls, reg x16:*, reg x17:V, reg p6:p(V +), reg r36:V, reg r37:V, reg any:cls, reg r38:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg text3:*, reg text4:V, reg p7:p(V +), reg r40:V, reg p8:p(V +), reg r42:V, reg defaults3:*, reg defaults4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg x18:*, reg x19:V, reg r46:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x20:V, reg x21:*, reg x22:V, reg c8:L, reg i6:I, reg x24:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg k:*, reg k1:V, reg __2:cls, reg r47:V, reg c9:L, reg i10:I, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i12:I, reg dx11:V, reg __3:cls, reg r48:V, reg l4:*, reg c10:L, reg i14:I, reg dx13:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx15:V, reg i16:I, reg dx17:V, reg x25:*, reg x26:V, reg c11:L, reg i18:I, reg dx20:V, reg l8:*, reg dx21:V, reg x28:V, reg dr12:V, reg dc6:L, reg dx24:V, reg i20:I, reg dx25:V, reg l10:*, reg dx26:V, reg dx27:V, reg k2:*, reg k3:V, reg __4:cls, reg r49:V, reg c12:L, reg i22:I, reg dx31:V, reg l12:*, reg dx32:V, reg dx33:V, reg dr14:V, reg dc7:L, reg dx36:V, reg i24:I, reg dx37:V, reg l14:*, reg dx38:V, reg dx39:V, reg __5:cls, reg r50:V, reg ____1:cls, reg r51:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg options:*, reg options1:V, reg c13:L, reg options3:V, reg dr16:V, reg dc8:L, reg dx40:V, reg dx41:V, reg __6:cls, reg r54:V, reg c14:V, reg r55:V, reg c15:L, reg c17:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg c20:L, reg r57:V, reg options4:*, reg options5:V, reg c21:L, reg c23:L, reg options7:V, reg dr18:V, reg dc9:L, reg dx42:V, reg c25:L, reg dx43:V, reg __7:cls, reg r58:V, reg c26:V, reg r59:V, reg c27:L, reg c28:V, reg c30:L, reg sub2:cls, reg paste0:cls, reg options8:*, reg options9:V, reg c31:L, reg options11:V, reg dr20:V, reg dc10:L, reg dx44:V, reg dx45:V, reg __8:cls, reg r60:V, reg p9:p(V +), reg r62:V, reg p10:p(V +), reg options12:*, reg options13:V, reg c32:L, reg options15:V, reg dr22:V, reg dc11:L, reg dx46:V, reg dx47:V, reg __9:cls, reg r64:V, reg p11:p(V +), reg r66:V, reg l15:*, reg c33:L, reg r68:V, reg l17:*, reg dr24:V, reg dc12:L, reg dx48:V, reg r70:V, reg dx49:V, reg ____2:cls, reg r71:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg r74:V, reg check1:*, reg check2:V, reg c34:V, reg r75:V, reg c35:L, reg check3:cls, reg options16:*, reg options17:V, reg p12:p(V +), reg r77:V, reg options18:*, reg options19:V |
    mkenv;
    st text = text;
    defaults_isMissing = missing.0(defaults);
    if defaults_isMissing then L0() else L1(defaults);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(defaults_orDefault):
    st defaults = defaults_orDefault;
    check_isMissing = missing.0(check);
    if check_isMissing then L2(NULL) else L2(check);
  L2(check_orDefault):
    st check = check_orDefault;
    sub = ldf sub;
    check L34() else D0();
  D0():
    deopt 1 [];
  L34():
    p1 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r5 = dyn sub("^[[:space:]]*(.*)", "\\1", p1);
    check L35() else D1();
  D1():
    deopt 5 [r5];
  L35():
    st x = r5;
    sub1 = ldf sub;
    check L36() else D2();
  D2():
    deopt 8 [];
  L36():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r7 = dyn sub1("(.*[^[:space:]])[[:space:]]*$", "\\1", p2);
    check L37() else D3();
  D3():
    deopt 12 [r7];
  L37():
    st x = r7;
    unlist = ldf unlist;
    check L38() else D4();
  D4():
    deopt 15 [];
  L38():
    p4 = prom<V +>{
      strsplit = ldf strsplit;
      p3 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r9 = dyn strsplit(p3, "[[:space:]]*,[[:space:]]*");
      return r9;
    };
    r11 = dyn unlist(p4);
    check L39() else D5();
  D5():
    deopt 17 [r11];
  L39():
    st x = r11;
    strsplit1 = ldf strsplit;
    check L40() else D6();
  D6():
    deopt 20 [];
  L40():
    p5 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r13 = dyn strsplit1(p5, "[[:space:]]*=[[:space:]]*");
    check L41() else D7();
  D7():
    deopt 23 [r13];
  L41():
    st x = r13;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L3(r15):
    c = `as.logical`(r15);
    if c then L46() else L4();
  L42():
    x6 = ld x;
    check L44() else D8();
  L43():
    r14 = dyn base1(<sym x>);
    goto L3(r14);
  D8():
    deopt 27 [x6];
  L4():
    defaults1 = ld defaults;
    check L67() else D14();
  L44():
    x7 = force? x6;
    checkMissing(x7);
    length = ldf length in base;
    r16 = dyn length(x7);
    check L45() else D9();
  L46():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  D9():
    deopt 30 [r16];
  D14():
    deopt 59 [defaults1];
  L5(r18):
    r21 = `==`(r18, 1);
    c2 = `as.logical`(r21);
    if c2 then L54() else L7();
  L45():
    goto L3(r16);
  L47():
    x8 = ld x;
    check L49() else D10();
  L48():
    r17 = dyn base2(<lang `[[`(x, 1)>);
    goto L5(r17);
  L67():
    defaults2 = force? defaults1;
    checkMissing(defaults2);
    popenv;
    return defaults2;
  D10():
    deopt 33 [x8];
  L7():
    goto L11();
  L11():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L49():
    x9 = force? x8;
    checkMissing(x9);
    c1 = `is.object`(x9);
    if c1 then L50() else L51(x9);
  L54():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L6(dx1):
    length1 = ldf length in base;
    r20 = dyn length1(dx1);
    check L53() else D11();
  L8(r23):
    l = ld x;
    c5 = `is.object`(l);
    if c5 then L62() else L63(r23, l);
  L13(r34):
    c6 = `as.logical`(r34);
    if c6 then L74() else L14();
  L50():
    dr = tryDispatchBuiltin.1("[[", x9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(dr);
  L51(x11):
    __ = ldf `[[` in base;
    r19 = dyn __(x11, 1);
    goto L6(r19);
  L55():
    x12 = ld x;
    check L57() else D12();
  L56():
    r22 = dyn base3("label", <lang `[[`(x, 1)>);
    goto L8(r22);
  L69():
    lengths = ldf lengths;
    check L71() else D15();
  L70():
    r33 = dyn base4(<lang `!=`(lengths(x), 2)>);
    goto L13(r33);
  D11():
    deopt 39 [r20];
  D12():
    deopt 45 [x12];
  D15():
    deopt 65 [];
  L10(r29, dx5):
    st x = dx5;
    goto L11();
  L14():
    goto L15();
  L15():
    defaults3 = ld defaults;
    check L78() else D20();
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L53():
    goto L5(r20);
  L57():
    x13 = force? x12;
    checkMissing(x13);
    c3 = `is.object`(x13);
    if c3 then L58() else L59(x13);
  L62():
    dr4 = tryDispatchBuiltin.0("[[<-", l, r23);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L64() else L63(r23, dr4);
  L63(r27, l2):
    ____ = ldf `[[<-` in base;
    r30 = dyn ____(l2, r23, 1);
    goto L10(r27, r30);
  L71():
    p6 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r36 = dyn lengths(p6);
    check L72() else D16();
  L74():
    stop = ldf stop;
    check L75() else D18();
  D16():
    deopt 67 [r36];
  D18():
    deopt 73 [];
  D20():
    deopt 80 [defaults3];
  L9(dx3):
    c4 = ldf c in base;
    r25 = dyn c4("label", dx3);
    check L61() else D13();
  L58():
    dr2 = tryDispatchBuiltin.1("[[", x13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(x15):
    __1 = ldf `[[` in base;
    r24 = dyn __1(x15, 1);
    goto L9(r24);
  L64():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(r23, dx4);
  L72():
    r37 = `!=`(r36, 2);
    any = ldf any in base;
    r38 = dyn any(r37);
    check L73() else D17();
  L75():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        text3 = ld text;
        text4 = force? text3;
        checkMissing(text4);
        return text4;
      };
      r40 = dyn gettextf("parse error or empty option in\n%s", p7);
      return r40;
    };
    r42 = dyn stop[, domain](p8, NA_LGL);
    check L76() else D19();
  L78():
    defaults4 = force? defaults3;
    checkMissing(defaults4);
    st options = defaults4;
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  D13():
    deopt 51 [r25];
  D17():
    deopt 71 [r38];
  D19():
    deopt 77 [r42];
  L16(r45):
    s = toForSeq(r45);
    l3 = length(s);
    i = 0;
    goto L17(i);
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L61():
    goto L8(r25);
  L73():
    goto L13(r38);
  L76():
    goto L15();
  L79():
    x18 = ld x;
    check L81() else D21();
  L80():
    r44 = dyn base5(<sym x>);
    goto L16(r44);
  D21():
    deopt 84 [x18];
  L17(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l3, i2);
    if c7 then L82() else L23();
  L81():
    x19 = force? x18;
    checkMissing(x19);
    r46 = seq_along(x19);
    goto L16(r46);
  L23():
    x20 = `[[`(s, i2, NULL, TRUE);
    st k = x20;
    x21 = ld x;
    check L83() else D22();
  L82():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L102() else L103();
  D22():
    deopt 87 [i2, x21];
  L24(r53):
    r55 = `!`(r53);
    c15 = `as.logical`(r55);
    if c15 then L108() else L26(c15);
  L83():
    x22 = force? x21;
    checkMissing(x22);
    c8 = `is.object`(x22);
    if c8 then L84() else L85(i2, x22);
  L102():
    options = ld options;
    check L104() else D26();
  L103():
    r52 = dyn base6(<lang `[[`(options, "label")>);
    goto L24(r52);
  D26():
    deopt 110 [options];
  L18(i8, dx7):
    c9 = `is.object`(dx7);
    if c9 then L88() else L89(i8, dx7);
  L26(c17):
    c30 = `as.logical`(c17);
    if c30 then L116() else L29();
  L84():
    dr6 = tryDispatchBuiltin.1("[[", x22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L86() else L85(i2, dr6);
  L85(i6, x24):
    k = ld k;
    check L87() else D23();
  L104():
    options1 = force? options;
    checkMissing(options1);
    c13 = `is.object`(options1);
    if c13 then L105() else L106(options1);
  L108():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L109() else L110();
  D23():
    deopt 89 [i6, x24, k];
  L19(i12, dx11):
    l4 = ld options;
    c10 = `is.object`(l4);
    if c10 then L91() else L92(i12, dx11, l4);
  L25(dx41):
    c14 = `==`(dx41, NULL);
    goto L24(c14);
  L27(c20, r57):
    r59 = `!`(r57);
    c27 = `as.logical`(r59);
    c28 = `&&`(c20, c27);
    goto L26(c28);
  L29():
    goto L31();
  L31():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L123() else L124();
  L86():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(i2, dx6);
  L87():
    k1 = force? k;
    __2 = ldf `[[` in base;
    r47 = dyn __2(x24, k1);
    goto L18(i6, r47);
  L88():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(i8, dr8);
  L89(i10, dx9):
    __3 = ldf `[` in base;
    r48 = dyn __3(dx9, 2);
    goto L19(i10, r48);
  L105():
    dr16 = tryDispatchBuiltin.1("[[", options1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L107() else L106(dr16);
  L106(options3):
    __6 = ldf `[[` in base;
    r54 = dyn __6(options3, "label");
    goto L25(r54);
  L109():
    options4 = ld options;
    check L111() else D27();
  L110():
    r56 = dyn base7(<lang `[[`(options, "engine")>);
    goto L27(c15, r56);
  L116():
    sub2 = ldf sub;
    check L117() else D28();
  D27():
    deopt 118 [c15, options4];
  D28():
    deopt 127 [];
  L20(i16, dx17):
    st options = dx17;
    goto L17(i16);
  L32(r74):
    r75 = `!`(r74);
    c35 = `as.logical`(r75);
    if c35 then L126() else L33();
  L90():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L19(i8, dx10);
  L91():
    dr10 = tryDispatchBuiltin.0("[[<-", l4, dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L93() else L92(i12, dx11, dr10);
  L92(i14, dx13, l6):
    x25 = ld x;
    check L94() else D24();
  L107():
    dx40 = getTryDispatchBuiltinValue(dr16);
    goto L25(dx40);
  L111():
    options5 = force? options4;
    checkMissing(options5);
    c21 = `is.object`(options5);
    if c21 then L112() else L113(c15, options5);
  L117():
    p10 = prom<V +>{
      paste0 = ldf paste0;
      p9 = prom<V +>{
        options8 = ld options;
        options9 = force? options8;
        checkMissing(options9);
        c31 = `is.object`(options9);
        if c31 then L1() else L2(options9);
      L0(dx45):
        return dx45;
      L1():
        dr20 = tryDispatchBuiltin.1("[[", options9);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(options11):
        __8 = ldf `[[` in base;
        r60 = dyn __8(options11, "engine");
        goto L0(r60);
      L3():
        dx44 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx44);
      };
      r62 = dyn paste0("\\.", p9, "$");
      return r62;
    };
    p11 = prom<V +>{
      options12 = ld options;
      options13 = force? options12;
      checkMissing(options13);
      c32 = `is.object`(options13);
      if c32 then L1() else L2(options13);
    L0(dx47):
      return dx47;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", options13);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(options15):
      __9 = ldf `[[` in base;
      r64 = dyn __9(options15, "label");
      goto L0(r64);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx46);
    };
    r66 = dyn sub2(p10, "", p11);
    check L118() else D29();
  L123():
    check1 = ld check;
    check L125() else D30();
  L124():
    r73 = dyn base8(<sym check>);
    goto L32(r73);
  D24():
    deopt 96 [i14, dx13, l6, dx11, x25];
  D29():
    deopt 131 [r66];
  D30():
    deopt 140 [check1];
  L28(c25, dx43):
    c26 = `==`(dx43, NULL);
    goto L27(c25, c26);
  L33():
    options18 = ld options;
    check L130() else D33();
  L93():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L20(i12, dx15);
  L94():
    x26 = force? x25;
    checkMissing(x26);
    c11 = `is.object`(x26);
    if c11 then L95() else L96(i14, dx13, l6, dx11, x26);
  L112():
    dr18 = tryDispatchBuiltin.1("[[", options5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L114() else L113(c15, dr18);
  L113(c23, options7):
    __7 = ldf `[[` in base;
    r58 = dyn __7(options7, "engine");
    goto L28(c23, r58);
  L118():
    l15 = ld options;
    c33 = `is.object`(l15);
    if c33 then L119() else L120(r66, l15);
  L125():
    check2 = force? check1;
    checkMissing(check2);
    c34 = `==`(check2, NULL);
    goto L32(c34);
  L126():
    check3 = ldf check;
    check L127() else D31();
  D31():
    deopt 145 [];
  D33():
    deopt 148 [options18];
  L21(i20, dx25, l10, dx26, dx27):
    c12 = `is.object`(dx27);
    if c12 then L99() else L100(i20, dx25, l10, dx26, dx27);
  L30(r70, dx49):
    st options = dx49;
    goto L31();
  L95():
    dr12 = tryDispatchBuiltin.1("[[", x26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L97() else L96(i14, dx13, l6, dx11, dr12);
  L96(i18, dx20, l8, dx21, x28):
    k2 = ld k;
    check L98() else D25();
  L114():
    dx42 = getTryDispatchBuiltinValue(dr18);
    goto L28(c15, dx42);
  L119():
    dr24 = tryDispatchBuiltin.0("[[<-", l15, r66);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L121() else L120(r66, dr24);
  L120(r68, l17):
    ____2 = ldf `[[<-` in base;
    r71 = dyn ____2(l17, r66, "label");
    goto L30(r68, r71);
  L127():
    p12 = prom<V +>{
      options16 = ld options;
      options17 = force? options16;
      checkMissing(options17);
      return options17;
    };
    r77 = dyn check3(p12);
    check L128() else D32();
  L130():
    options19 = force? options18;
    checkMissing(options19);
    popenv;
    return options19;
  D25():
    deopt 98 [i18, dx20, l8, dx21, x28, k2];
  D32():
    deopt 147 [r77];
  L22(i24, dx37, l14, dx38, dx39):
    ____1 = ldf `[[<-` in base;
    r51 = dyn ____1(l14, dx38, dx39);
    goto L20(i24, r51);
  L97():
    dx24 = getTryDispatchBuiltinValue(dr12);
    goto L21(i14, dx13, l6, dx11, dx24);
  L98():
    k3 = force? k2;
    __4 = ldf `[[` in base;
    r49 = dyn __4(x28, k3);
    goto L21(i18, dx20, l8, dx21, r49);
  L99():
    dr14 = tryDispatchBuiltin.1("[", dx27);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L101() else L100(i20, dx25, l10, dx26, dr14);
  L100(i22, dx31, l12, dx32, dx33):
    __5 = ldf `[` in base;
    r50 = dyn __5(dx33, 1);
    goto L22(i22, dx31, l12, dx32, r50);
  L121():
    dx48 = getTryDispatchBuiltinValue(dr24);
    goto L30(r66, dx48);
  L128():
    popenv;
    return r77;
  L101():
    dx36 = getTryDispatchBuiltinValue(dr14);
    goto L22(i20, dx25, l10, dx26, dx36);
  }
}