fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_description_encoding` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg length:cls, reg r6:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg gettextf:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg p:p(V +), reg r11:V, reg c3:cls, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg length1:cls, reg r17:V, reg c5:L, reg gettext:cls, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x13:*, reg x14:V, reg c6:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg length2:cls, reg r23:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg gettext1:cls, reg r26:V, reg _pretty_format:cls, reg x17:*, reg x18:V, reg c8:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r27:V, reg p1:p(V +), reg r29:V, reg gettext2:cls, reg r30:V, reg c9:cls, reg r31:V, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg x21:*, reg x22:V, reg c10:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r35:V, reg length3:cls, reg r36:V, reg c11:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg gettext3:cls, reg r39:V, reg _pretty_format1:cls, reg x25:*, reg x26:V, reg c12:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r40:V, reg p2:p(V +), reg r42:V, reg c13:cls, reg r43:V, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg lengths:cls, reg x29:*, reg x30:V, reg p3:p(V +), reg r50:V, reg as_integer:cls, reg r51:V, reg r52:V, reg any:cls, reg r53:V, reg c14:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg strwrap:cls, reg gettextf1:cls, reg r56:V, reg p4:p(V +), reg r58:V, reg c15:cls, reg r59:V, reg r60:V, reg c16:cls, reg r61:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    popenv;
    return r1;
  L21():
    character = ldf character;
    check L23() else D0();
  L22():
    r = dyn base(<lang character()>, <lang if(length(`$`(x, non_portable_encoding)), {
        c(gettextf("Encoding '%s' is not portable", `$`(x, non_portable_encoding)), "")
      })>, <lang if(length(`$`(x, missing_encoding)), {
        gettext("Unknown encoding with non-ASCII data")
      })>, <lang if(length(`$`(x, fields_with_non_ASCII_tags)), {
        c(gettext("Fields with non-ASCII tags:"), .pretty_format(`$`(x, fields_with_non_ASCII_tags)), gettext("All field tags must be ASCII."), "")
      })>, <lang if(length(`$`(x, fields_with_non_ASCII_values)), {
        c(gettext("Fields with non-ASCII values:"), .pretty_format(`$`(x, fields_with_non_ASCII_values)))
      })>, <lang if(any(`>`(as.integer(lengths(x)), 0)), {
        c(strwrap(gettextf("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual.")), "")
      })>);
    goto L0(r);
  D0():
    deopt 3 [];
  L23():
    r2 = dyn character();
    check L24() else D1();
  D1():
    deopt 4 [r2];
  L24():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L33() else L2();
  L25():
    x1 = ld x;
    check L27() else D2();
  L26():
    r3 = dyn base1(<lang `$`(x, non_portable_encoding)>);
    goto L1(r3);
  D2():
    deopt 7 [x1];
  L2():
    goto L4(NULL);
  L4(r13):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L27():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L29() else L30(x2);
  L33():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L3(r8):
    goto L4(r8);
  L5(r15):
    c5 = `as.logical`(r15);
    if c5 then L48() else L6();
  L28(dx1):
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L32() else D3();
  L29():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(x4):
    r5 = `$`(x4, <sym non_portable_encoding>);
    goto L28(r5);
  L34():
    gettextf = ldf gettextf;
    check L36() else D4();
  L35():
    r7 = dyn base2(<lang gettextf("Encoding '%s' is not portable", `$`(x, non_portable_encoding))>, "");
    goto L3(r7);
  L40():
    x9 = ld x;
    check L42() else D7();
  L41():
    r14 = dyn base3(<lang `$`(x, missing_encoding)>);
    goto L5(r14);
  D3():
    deopt 11 [r6];
  D4():
    deopt 15 [];
  D7():
    deopt 26 [x9];
  L6():
    goto L7(NULL);
  L7(r19):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L32():
    goto L1(r6);
  L36():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r9 = `$`(x8, <sym non_portable_encoding>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r11 = dyn gettextf("Encoding '%s' is not portable", p);
    check L37() else D5();
  L42():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L44() else L45(x10);
  L48():
    gettext = ldf gettext;
    check L49() else D9();
  D5():
    deopt 18 [r11];
  D9():
    deopt 32 [];
  L8(r21):
    c7 = `as.logical`(r21);
    if c7 then L60() else L9();
  L37():
    c3 = ldf c in base;
    r12 = dyn c3(r11, "");
    check L38() else D6();
  L43(dx5):
    length1 = ldf length in base;
    r17 = dyn length1(dx5);
    check L47() else D8();
  L44():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(dr4);
  L45(x12):
    r16 = `$`(x12, <sym missing_encoding>);
    goto L43(r16);
  L49():
    r18 = dyn gettext("Unknown encoding with non-ASCII data");
    check L50() else D10();
  L52():
    x13 = ld x;
    check L54() else D11();
  L53():
    r20 = dyn base4(<lang `$`(x, fields_with_non_ASCII_tags)>);
    goto L8(r20);
  D6():
    deopt 21 [r12];
  D8():
    deopt 30 [r17];
  D10():
    deopt 34 [r18];
  D11():
    deopt 39 [x13];
  L9():
    goto L11(NULL);
  L11(r32):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L38():
    goto L3(r12);
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(dx4);
  L47():
    goto L5(r17);
  L50():
    goto L7(r18);
  L54():
    x14 = force? x13;
    checkMissing(x14);
    c6 = `is.object`(x14);
    if c6 then L56() else L57(x14);
  L60():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L10(r25):
    goto L11(r25);
  L12(r34):
    c11 = `as.logical`(r34);
    if c11 then L79() else L13();
  L55(dx7):
    length2 = ldf length in base;
    r23 = dyn length2(dx7);
    check L59() else D12();
  L56():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(dr6);
  L57(x16):
    r22 = `$`(x16, <sym fields_with_non_ASCII_tags>);
    goto L55(r22);
  L61():
    gettext1 = ldf gettext;
    check L63() else D13();
  L62():
    r24 = dyn base5(<lang gettext("Fields with non-ASCII tags:")>, <lang .pretty_format(`$`(x, fields_with_non_ASCII_tags))>, <lang gettext("All field tags must be ASCII.")>, "");
    goto L10(r24);
  L71():
    x21 = ld x;
    check L73() else D20();
  L72():
    r33 = dyn base6(<lang `$`(x, fields_with_non_ASCII_values)>);
    goto L12(r33);
  D12():
    deopt 43 [r23];
  D13():
    deopt 47 [];
  D20():
    deopt 65 [x21];
  L13():
    goto L15(NULL);
  L15(r44):
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L55(dx6);
  L59():
    goto L8(r23);
  L63():
    r26 = dyn gettext1("Fields with non-ASCII tags:");
    check L64() else D14();
  L73():
    x22 = force? x21;
    checkMissing(x22);
    c10 = `is.object`(x22);
    if c10 then L75() else L76(x22);
  L79():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  D14():
    deopt 49 [r26];
  L14(r38):
    goto L15(r38);
  L16(r46):
    c14 = `as.logical`(r46);
    if c14 then L96() else L18();
  L64():
    _pretty_format = ldf `.pretty_format`;
    check L65() else D15();
  L74(dx11):
    length3 = ldf length in base;
    r36 = dyn length3(dx11);
    check L78() else D21();
  L75():
    dr10 = tryDispatchBuiltin.1("$", x22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L77() else L76(dr10);
  L76(x24):
    r35 = `$`(x24, <sym fields_with_non_ASCII_values>);
    goto L74(r35);
  L80():
    gettext3 = ldf gettext;
    check L82() else D22();
  L81():
    r37 = dyn base7(<lang gettext("Fields with non-ASCII values:")>, <lang .pretty_format(`$`(x, fields_with_non_ASCII_values))>);
    goto L14(r37);
  L88():
    sym9 = ldf `as.integer`;
    base9 = ldf `as.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L90() else L91();
  L89():
    r45 = dyn base8(<lang `>`(as.integer(lengths(x)), 0)>);
    goto L16(r45);
  D15():
    deopt 51 [];
  D21():
    deopt 69 [r36];
  D22():
    deopt 73 [];
  L17(r48):
    r52 = `>`(r48, 0);
    any = ldf any in base;
    r53 = dyn any(r52);
    check L95() else D30();
  L18():
    goto L20(NULL);
  L20(r60):
    c16 = ldf c in base;
    r61 = dyn c16(r2, r13, r19, r32, r44, r60);
    check L103() else D34();
  L65():
    p1 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c8 = `is.object`(x18);
      if c8 then L1() else L2(x18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      r27 = `$`(x20, <sym fields_with_non_ASCII_tags>);
      goto L0(r27);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r29 = dyn _pretty_format(p1);
    check L66() else D16();
  L77():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L74(dx10);
  L78():
    goto L12(r36);
  L82():
    r39 = dyn gettext3("Fields with non-ASCII values:");
    check L83() else D23();
  L90():
    lengths = ldf lengths;
    check L92() else D27();
  L91():
    r47 = dyn base9(<lang lengths(x)>);
    goto L17(r47);
  L96():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  D16():
    deopt 53 [r29];
  D23():
    deopt 75 [r39];
  D27():
    deopt 89 [];
  D30():
    deopt 97 [r53];
  D34():
    deopt 110 [r61];
  L19(r55):
    goto L20(r55);
  L66():
    gettext2 = ldf gettext;
    check L67() else D17();
  L83():
    _pretty_format1 = ldf `.pretty_format`;
    check L84() else D24();
  L92():
    p3 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r50 = dyn lengths(p3);
    check L93() else D28();
  L95():
    goto L16(r53);
  L97():
    strwrap = ldf strwrap;
    check L99() else D31();
  L98():
    r54 = dyn base10(<lang strwrap(gettextf("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual."))>, "");
    goto L19(r54);
  L103():
    goto L0(r61);
  D17():
    deopt 55 [];
  D24():
    deopt 77 [];
  D28():
    deopt 91 [r50];
  D31():
    deopt 101 [];
  L67():
    r30 = dyn gettext2("All field tags must be ASCII.");
    check L68() else D18();
  L84():
    p2 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c12 = `is.object`(x26);
      if c12 then L1() else L2(x26);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x28):
      r40 = `$`(x28, <sym fields_with_non_ASCII_values>);
      goto L0(r40);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r42 = dyn _pretty_format1(p2);
    check L85() else D25();
  L93():
    as_integer = ldf `as.integer` in base;
    r51 = dyn as_integer(r50);
    check L94() else D29();
  L99():
    p4 = prom<V +>{
      gettextf1 = ldf gettextf;
      r56 = dyn gettextf1("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual.");
      return r56;
    };
    r58 = dyn strwrap(p4);
    check L100() else D32();
  D18():
    deopt 57 [r30];
  D25():
    deopt 79 [r42];
  D29():
    deopt 93 [r51];
  D32():
    deopt 103 [r58];
  L68():
    c9 = ldf c in base;
    r31 = dyn c9(r26, r29, r30, "");
    check L69() else D19();
  L85():
    c13 = ldf c in base;
    r43 = dyn c13(r39, r42);
    check L86() else D26();
  L94():
    goto L17(r51);
  L100():
    c15 = ldf c in base;
    r59 = dyn c15(r58, "");
    check L101() else D33();
  D19():
    deopt 60 [r31];
  D26():
    deopt 81 [r43];
  D33():
    deopt 106 [r59];
  L69():
    goto L10(r31);
  L86():
    goto L14(r43);
  L101():
    goto L19(r59);
  }
}