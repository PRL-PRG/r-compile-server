fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1954341438`;
    st `as.data.frame.logical` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1954341438`(x, `row.names`, optional, `...`, nm) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots, reg nm:*) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, var nm:*, reg nm_isMissing:L, reg nm_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg sys_nframe:cls, reg r6:V, reg r7:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c5:L, reg r9:V, reg sys_function:cls, reg p2:p(V +), reg r11:V, reg as_data_frame:*, reg as_data_frame1:V, reg identical:cls, reg r12:V, reg c6:L, reg c7:L, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg c15:L, reg c16:L, reg r14:V, reg _isMethodsDispatchOn:cls, reg r15:V, reg c17:L, reg c21:L, reg c22:L, reg c23:V, reg __:cls, reg r16:V, reg r17:cls, reg sys_function1:cls, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg c24:L, reg c25:V, reg c29:L, reg c33:L, reg c34:L, reg c35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg c42:L, reg c43:L, reg c44:L, reg r23:V, reg __1:cls, reg r24:V, reg structure:cls, reg r25:V, reg identical1:cls, reg r26:V, reg c45:L, reg c46:V, reg c50:L, reg c51:V, reg r27:V, reg c54:L, reg c55:V, reg c57:L, reg _Deprecated:cls, reg gettextf:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg force:cls, reg nm1:*, reg nm2:V, reg p6:p(V +), reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg x1:*, reg x2:V, reg length:cls, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg row_names1:*, reg row_names2:V, reg c58:V, reg c59:L, reg nrows:*, reg nrows1:V, reg r39:V, reg c60:L, reg character:cls, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg x3:*, reg x4:V, reg names:cls, reg r46:V, reg length1:cls, reg r47:V, reg nrows2:*, reg nrows3:V, reg r48:V, reg c61:L, reg c62:V, reg anyDuplicated:cls, reg row_names3:*, reg row_names4:V, reg p7:p(V +), reg r50:V, reg c64:L, reg c65:V, reg c67:L, reg _set_row_names:cls, reg nrows4:*, reg nrows5:V, reg p8:p(V +), reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg row_names5:*, reg row_names6:V, reg c68:L, reg c69:L, reg c70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg c74:L, reg r57:V, reg row_names7:*, reg row_names8:V, reg c75:L, reg c76:L, reg c77:V, reg r58:V, reg c79:L, reg c80:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg c84:L, reg r60:V, reg row_names9:*, reg row_names10:V, reg length2:cls, reg r61:V, reg nrows6:*, reg nrows7:V, reg r62:V, reg c85:L, reg c86:V, reg c88:L, reg stop:cls, reg gettextf1:cls, reg nrows8:*, reg nrows9:V, reg p9:p(V +), reg r64:V, reg p10:p(V +), reg r66:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg x5:*, reg x6:V, reg names1:cls, reg r71:V, reg c89:V, reg r72:V, reg c90:L, reg l:*, reg names__:cls, reg r73:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r75:V, reg r76:V, reg x7:*, reg x8:V, reg list:cls, reg r77:V, reg optional1:*, reg optional2:V, reg r78:V, reg c91:L, reg nm3:*, reg nm4:V, reg l1:*, reg names__1:cls, reg r79:V, reg structure1:cls, reg value:*, reg value1:V, reg p11:p(V +), reg row_names11:*, reg row_names12:V, reg p12:p(V +), reg r82:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    nm_isMissing = missing.0(nm);
    if nm_isMissing then L2() else L3(nm);
  L2():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym x>);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L3(p1);
  L3(nm_orDefault):
    st nm = nm_orDefault;
    sys_nframe = ldf `sys.nframe`;
    check L36() else D0();
  D0():
    deopt 1 [];
  L36():
    r6 = dyn sys_nframe();
    check L37() else D1();
  D1():
    deopt 2 [r6];
  L37():
    r7 = `<=`(r6, 1);
    c = `as.logical`(r7);
    if c then L4(c) else L38();
  L4(c1):
    c57 = `as.logical`(c1);
    if c57 then L63() else L11();
  L38():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L5(c5, r9):
    c6 = `as.logical`(r9);
    if c6 then L6(c5, c6) else L45();
  L11():
    goto L12();
  L12():
    force = ldf force;
    check L67() else D15();
  L39():
    sys_function = ldf `sys.function`;
    check L41() else D2();
  L40():
    r8 = dyn base1(<lang sys.function(`-`(1))>, <sym as.data.frame>);
    goto L5(c, r8);
  L63():
    _Deprecated = ldf `.Deprecated`;
    check L64() else D13();
  D2():
    deopt 8 [c];
  D13():
    deopt 60 [];
  D15():
    deopt 67 [];
  L6(c7, c8):
    r27 = `!`(c8);
    c54 = `as.logical`(r27);
    c55 = `||`(c7, c54);
    goto L4(c55);
  L41():
    p2 = prom<V +>{
      return -1;
    };
    r11 = dyn sys_function(p2);
    check L42() else D3();
  L45():
    sym2 = ldf `.isMethodsDispatchOn`;
    base2 = ldf `.isMethodsDispatchOn` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L64():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      r28 = dyn gettextf("Direct call of '%s()' is deprecated.  Use '%s()' or '%s()' instead", "as.data.frame.logical", "as.data.frame.vector", "as.data.frame");
      return r28;
    };
    r30 = dyn _Deprecated[msg](p5);
    check L65() else D14();
  L67():
    p6 = prom<V +>{
      nm1 = ld nm;
      nm2 = force? nm1;
      checkMissing(nm2);
      return nm2;
    };
    r33 = dyn force(p6);
    check L68() else D16();
  D3():
    deopt 10 [c, r11];
  D14():
    deopt 63 [r30];
  D16():
    deopt 69 [r33];
  L7(c15, c16, r14):
    c17 = `as.logical`(r14);
    if c17 then L49() else L8(c15, c16, c17);
  L42():
    as_data_frame = ld `as.data.frame`;
    check L43() else D4();
  L46():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r15 = dyn _isMethodsDispatchOn();
    check L48() else D6();
  L47():
    r13 = dyn base2();
    goto L7(c5, c6, r13);
  L65():
    goto L12();
  L68():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  D4():
    deopt 11 [c, as_data_frame];
  D6():
    deopt 25 [c5, c6, r15];
  L8(c21, c22, c23):
    c29 = `as.logical`(c23);
    if c29 then L54() else L9(c21, c22, c29);
  L13(r35):
    st nrows = r35;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L43():
    as_data_frame1 = force? as_data_frame;
    checkMissing(as_data_frame1);
    identical = ldf identical in base;
    r12 = dyn identical(r11, as_data_frame1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L44() else D5();
  L48():
    goto L7(c5, c6, r15);
  L49():
    __ = ldf `::`;
    check L50() else D7();
  L69():
    x1 = ld x;
    check L71() else D17();
  L70():
    r34 = dyn base4(<sym x>);
    goto L13(r34);
  D5():
    deopt 21 [c, r12];
  D7():
    deopt 27 [c15, c16, c17];
  D17():
    deopt 72 [x1];
  L9(c33, c34, c35):
    c50 = `as.logical`(c35);
    c51 = `||`(c34, c50);
    goto L6(c33, c51);
  L14(r38):
    c59 = `as.logical`(r38);
    if c59 then L76() else L15();
  L44():
    goto L5(c, r12);
  L50():
    r16 = dyn __("methods", "is");
    check L51() else D8();
  L54():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L71():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r36 = dyn length(x2);
    check L72() else D18();
  L73():
    row_names1 = ld `row.names`;
    check L75() else D19();
  L74():
    r37 = dyn base5(<sym row.names>);
    goto L14(r37);
  D8():
    deopt 30 [c15, c16, c17, r16];
  D18():
    deopt 75 [r36];
  D19():
    deopt 78 [row_names1];
  L10(c42, c43, c44, r23):
    c45 = `as.logical`(r23);
    c46 = `&&`(c44, c45);
    goto L9(c42, c43, c46);
  L15():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L22():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L118() else L119();
  L51():
    checkFun.0(r16);
    r17 = r16 as cls;
    p4 = prom<V +>{
      sys_function1 = ldf `sys.function`;
      p3 = prom<V +>{
        return -1;
      };
      r19 = dyn sys_function1(p3);
      return r19;
    };
    r21 = dyn r17(p4, "derivedDefaultMethod");
    check L52() else D9();
  L55():
    __1 = ldf `@` in base;
    r24 = dyn __1(<lang sys.function(`-`(1))>, <sym generic>);
    structure = ldf structure;
    check L57() else D10();
  L56():
    r22 = dyn base3(<lang `@`(sys.function(`-`(1)), generic)>, <lang structure("as.data.frame", package="base")>);
    goto L10(c21, c22, c29, r22);
  L72():
    goto L13(r36);
  L75():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c58 = `==`(row_names2, NULL);
    goto L14(c58);
  L76():
    nrows = ld nrows;
    check L77() else D20();
  D9():
    deopt 34 [c15, c16, c17, r21];
  D10():
    deopt 41 [c21, c22, c29];
  D20():
    deopt 81 [nrows];
  L23(r55):
    c69 = `as.logical`(r55);
    if c69 then L24(c69) else L102();
  L29(r68):
    r72 = `!`(r68);
    c90 = `as.logical`(r72);
    if c90 then L124() else L31();
  L52():
    c24 = `as.logical`(r21);
    c25 = `&&`(c17, c24);
    goto L8(c15, c16, c25);
  L57():
    r25 = dyn structure[, package]("as.data.frame", "base");
    check L58() else D11();
  L77():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r39 = `==`(nrows1, 0);
    c60 = `as.logical`(r39);
    if c60 then L78() else L16();
  L99():
    row_names5 = ld `row.names`;
    check L101() else D31();
  L100():
    r54 = dyn base8(<sym row.names>);
    goto L23(r54);
  L118():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L120() else L121();
  L119():
    r67 = dyn base11(<lang names(x)>);
    goto L29(r67);
  D11():
    deopt 45 [c21, c22, c29, r25];
  D31():
    deopt 115 [row_names5];
  L16():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L17(r41):
    goto L22();
  L24(c70):
    r58 = `!`(c70);
    c79 = `as.logical`(r58);
    if c79 then L26(c79) else L107();
  L30(r70):
    c89 = `==`(r70, NULL);
    goto L29(c89);
  L31():
    goto L32();
  L32():
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L128() else L129();
  L58():
    identical1 = ldf identical in base;
    r26 = dyn identical1(r24, r25, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L59() else D12();
  L78():
    character = ldf character;
    check L79() else D21();
  L101():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    c68 = `is.character`(row_names6);
    goto L23(c68);
  L102():
    sym9 = ldf `is.integer`;
    base9 = ldf `is.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L103() else L104();
  L120():
    x5 = ld x;
    check L122() else D38();
  L121():
    r69 = dyn base12(<sym x>);
    goto L30(r69);
  L124():
    l = ld x;
    names__ = ldf `names<-`;
    check L125() else D40();
  D12():
    deopt 54 [c21, c22, c29, r26];
  D21():
    deopt 86 [];
  D38():
    deopt 144 [x5];
  D40():
    deopt 153 [NULL, l, NULL];
  L18(r43):
    nrows2 = ld nrows;
    check L89() else D26();
  L25(c74, r57):
    c76 = `as.logical`(r57);
    c77 = `||`(c74, c76);
    goto L24(c77);
  L26(c80):
    c88 = `as.logical`(c80);
    if c88 then L114() else L28();
  L33(r76):
    st value = r76;
    optional1 = ld optional;
    check L132() else D44();
  L59():
    goto L10(c21, c22, c29, r26);
  L79():
    r40 = dyn character();
    check L80() else D22();
  L82():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L83():
    r42 = dyn base6(<lang `<-`(row.names, names(x))>);
    goto L18(r42);
  L103():
    row_names7 = ld `row.names`;
    check L105() else D32();
  L104():
    r56 = dyn base9(<sym row.names>);
    goto L25(c69, r56);
  L107():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  L122():
    x6 = force? x5;
    checkMissing(x6);
    names1 = ldf names in base;
    r71 = dyn names1(x6);
    check L123() else D39();
  L125():
    r73 = dyn names__(l, NULL, NULL);
    check L126() else D41();
  L128():
    x7 = ld x;
    check L130() else D42();
  L129():
    r75 = dyn base13(<sym x>);
    goto L33(r75);
  D22():
    deopt 87 [r40];
  D26():
    deopt 99 [r43, nrows2];
  D32():
    deopt 119 [c69, row_names7];
  D39():
    deopt 147 [r71];
  D41():
    deopt 155 [NULL, r73];
  D42():
    deopt 161 [x7];
  D44():
    deopt 166 [optional1];
  L19(r45):
    st `row.names` = r45;
    length1 = ldf length in base;
    r47 = dyn length1(r45);
    check L88() else D25();
  L27(c84, r60):
    nrows6 = ld nrows;
    check L112() else D35();
  L28():
    goto L22();
  L80():
    st `row.names` = r40;
    goto L17(r40);
  L84():
    x3 = ld x;
    check L86() else D23();
  L85():
    r44 = dyn base7(<sym x>);
    goto L19(r44);
  L89():
    nrows3 = force? nrows2;
    checkMissing(nrows3);
    r48 = `!=`(r43, nrows3);
    c61 = `as.logical`(r48);
    if c61 then L20(c61) else L90();
  L105():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    c75 = `is.integer`(row_names8);
    goto L25(c69, c75);
  L108():
    row_names9 = ld `row.names`;
    check L110() else D33();
  L109():
    r59 = dyn base10(<sym row.names>);
    goto L27(c79, r59);
  L114():
    stop = ldf stop;
    check L115() else D36();
  L123():
    goto L30(r71);
  L126():
    st x = r73;
    goto L32();
  L130():
    x8 = force? x7;
    checkMissing(x8);
    list = ldf list in base;
    r77 = dyn list(x8);
    check L131() else D43();
  L132():
    optional2 = force? optional1;
    checkMissing(optional2);
    r78 = `!`(optional2);
    c91 = `as.logical`(r78);
    if c91 then L133() else L34();
  D23():
    deopt 93 [x3];
  D25():
    deopt 99 [r47];
  D33():
    deopt 126 [c79, row_names9];
  D35():
    deopt 129 [c84, r60, nrows6];
  D36():
    deopt 134 [];
  D43():
    deopt 164 [r77];
  L20(c62):
    c67 = `as.logical`(c62);
    if c67 then L94() else L21();
  L34():
    goto L35();
  L35():
    structure1 = ldf structure;
    check L138() else D48();
  L86():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r46 = dyn names(x4);
    check L87() else D24();
  L88():
    goto L18(r47);
  L90():
    anyDuplicated = ldf anyDuplicated;
    check L91() else D27();
  L110():
    row_names10 = force? row_names9;
    checkMissing(row_names10);
    length2 = ldf length in base;
    r61 = dyn length2(row_names10);
    check L111() else D34();
  L112():
    nrows7 = force? nrows6;
    checkMissing(nrows7);
    r62 = `!=`(r60, nrows7);
    c85 = `as.logical`(r62);
    c86 = `||`(c84, c85);
    goto L26(c86);
  L115():
    p10 = prom<V +>{
      gettextf1 = ldf gettextf;
      p9 = prom<V +>{
        nrows8 = ld nrows;
        nrows9 = force? nrows8;
        checkMissing(nrows9);
        return nrows9;
      };
      r64 = dyn gettextf1("'row.names' is not a character or integer vector of length %d", p9);
      return r64;
    };
    r66 = dyn stop[, domain](p10, NA_LGL);
    check L116() else D37();
  L131():
    goto L33(r77);
  L133():
    nm3 = ld nm;
    check L134() else D45();
  D24():
    deopt 96 [r46];
  D27():
    deopt 103 [c61];
  D34():
    deopt 129 [c79, r61];
  D37():
    deopt 138 [r66];
  D45():
    deopt 169 [nm3];
  D48():
    deopt 179 [];
  L21():
    goto L17(NULL);
  L87():
    goto L19(r46);
  L91():
    p7 = prom<V +>{
      row_names3 = ld `row.names`;
      row_names4 = force? row_names3;
      checkMissing(row_names4);
      return row_names4;
    };
    r50 = dyn anyDuplicated(p7);
    check L92() else D28();
  L94():
    _set_row_names = ldf `.set_row_names`;
    check L95() else D29();
  L111():
    goto L27(c79, r61);
  L116():
    goto L22();
  L134():
    nm4 = force? nm3;
    checkMissing(nm4);
    l1 = ld value;
    names__1 = ldf `names<-`;
    check L135() else D46();
  L138():
    p11 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    p12 = prom<V +>{
      row_names11 = ld `row.names`;
      row_names12 = force? row_names11;
      checkMissing(row_names12);
      return row_names12;
    };
    r82 = dyn structure1[, `row.names`, class](p11, p12, "data.frame");
    check L139() else D49();
  D28():
    deopt 105 [c61, r50];
  D29():
    deopt 108 [];
  D46():
    deopt 172 [nm4, l1, nm4];
  D49():
    deopt 185 [r82];
  L92():
    c64 = `as.logical`(r50);
    c65 = `||`(c61, c64);
    goto L20(c65);
  L95():
    p8 = prom<V +>{
      nrows4 = ld nrows;
      nrows5 = force? nrows4;
      checkMissing(nrows5);
      return nrows5;
    };
    r52 = dyn _set_row_names(p8);
    check L96() else D30();
  L135():
    r79 = dyn names__1(l1, NULL, nm4);
    check L136() else D47();
  L139():
    popenv;
    return r82;
  D30():
    deopt 110 [r52];
  D47():
    deopt 174 [nm4, r79];
  L96():
    st `row.names` = r52;
    goto L17(r52);
  L136():
    st value = r79;
    goto L35();
  }
}