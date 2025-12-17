fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1584779395;
    st `.rowNamesDF<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1584779395(x, `make.names`, value) {
  (reg x:*, reg make_names:*, reg value:*) -+> V { var x:*, var `make.names`:*, reg make_names_isMissing:L, reg make_names_orDefault:*, var value:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg as_data_frame:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r4:V, reg _row_names_info:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg value1:*, reg value2:V, reg c1:V, reg c2:L, reg _set_row_names:cls, reg n:*, reg n1:V, reg p3:p(V +), reg r11:V, reg l:*, reg attr__:cls, reg r12:V, reg x7:*, reg x8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg value3:*, reg value4:V, reg c3:L, reg c4:L, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg c9:L, reg r18:V, reg value5:*, reg value6:V, reg c10:L, reg r19:V, reg c11:L, reg c12:V, reg c14:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg value7:*, reg value8:V, reg as_character:cls, reg r22:V, reg n2:*, reg n3:V, reg r24:V, reg c15:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg x9:*, reg x10:V, reg attr:cls, reg r29:V, reg c16:V, reg r30:V, reg c17:L, reg c19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg c22:L, reg r32:V, reg value9:*, reg value10:V, reg length:cls, reg r33:V, reg r34:V, reg c23:L, reg c24:V, reg c26:L, reg stop:cls, reg r35:V, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg value11:*, reg value12:V, reg length1:cls, reg r40:V, reg n4:*, reg n5:V, reg r41:V, reg c27:L, reg isFALSE:cls, reg make_names1:*, reg make_names2:V, reg p4:p(V +), reg r43:V, reg c28:L, reg stop1:cls, reg r44:V, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg make_names3:*, reg make_names4:V, reg is_na:cls, reg r48:V, reg c29:L, reg _set_row_names1:cls, reg n6:*, reg n7:V, reg p5:p(V +), reg r50:V, reg l1:*, reg attr__1:cls, reg r51:V, reg x11:*, reg x12:V, reg isTRUE:cls, reg make_names5:*, reg make_names6:V, reg p6:p(V +), reg r54:V, reg r55:V, reg c30:L, reg stop2:cls, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg value13:*, reg value14:V, reg length2:cls, reg r59:V, reg n8:*, reg n9:V, reg r60:V, reg c31:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg value15:*, reg value16:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r63:V, reg r64:V, reg value17:*, reg value18:V, reg c32:L, reg value20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nv:*, reg nv1:V, reg __:cls, reg r65:V, reg n10:*, reg n11:V, reg nv2:*, reg nv3:V, reg r66:V, reg rep_len:cls, reg r67:V, reg c33:cls, reg r68:V, reg value21:*, reg value22:V, reg c34:L, reg value24:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg value27:V, reg r70:V, reg n12:*, reg n13:V, reg r71:I, reg __1:cls, reg r72:V, reg anyDuplicated:cls, reg value28:*, reg value29:V, reg p7:p(V +), reg r74:V, reg c35:L, reg isFALSE1:cls, reg make_names7:*, reg make_names8:V, reg p8:p(V +), reg r76:V, reg c36:L, reg sort:cls, reg unique:cls, reg value30:*, reg value31:V, reg c37:L, reg value33:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg duplicated:cls, reg value34:*, reg value35:V, reg p9:p(V +), reg r78:V, reg __2:cls, reg r79:V, reg p10:p(V +), reg r81:V, reg p11:p(V +), reg r83:V, reg warning:cls, reg ngettext:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg nonuniq:*, reg nonuniq1:V, reg length3:cls, reg r86:V, reg p12:p(V +), reg sprintf:cls, reg sQuote:cls, reg nonuniq2:*, reg nonuniq3:V, reg c38:L, reg nonuniq5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r88:V, reg p13:p(V +), reg r90:V, reg p14:p(V +), reg r92:V, reg p15:p(V +), reg sprintf1:cls, reg paste:cls, reg sQuote1:cls, reg nonuniq6:*, reg nonuniq7:V, reg p16:p(V +), reg r95:V, reg p17:p(V +), reg r97:V, reg p18:p(V +), reg r99:V, reg p19:p(V +), reg r101:V, reg p20:p(V +), reg r103:V, reg stop3:cls, reg r104:V, reg r105:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r106:V, reg r107:V, reg make_names9:*, reg make_names10:V, reg is_na1:cls, reg r108:V, reg c39:L, reg _set_row_names2:cls, reg n14:*, reg n15:V, reg r109:V, reg c40:L, reg c42:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r110:V, reg c45:L, reg r111:V, reg _row_names_info1:cls, reg x13:*, reg x14:V, reg p21:p(V +), reg r113:V, reg c46:V, reg c47:L, reg c48:V, reg c50:L, reg c52:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r114:V, reg c55:L, reg r115:V, reg x15:*, reg x16:V, reg length4:cls, reg r116:V, reg r117:V, reg c56:L, reg c57:V, reg c59:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r118:V, reg r119:V, reg x17:*, reg x18:V, reg c60:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r120:V, reg length5:cls, reg r121:V, reg n16:*, reg n17:V, reg p22:p(V +), reg r123:V, reg isTRUE1:cls, reg make_names11:*, reg make_names12:V, reg p23:p(V +), reg r125:V, reg r126:V, reg c61:L, reg stop4:cls, reg r127:V, reg make_names13:cls, reg value36:*, reg value37:V, reg p24:p(V +), reg r129:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r131:V, reg r132:V, reg value38:*, reg value39:V, reg anyNA:cls, reg r133:V, reg c62:L, reg isFALSE2:cls, reg make_names14:*, reg make_names15:V, reg p25:p(V +), reg r135:V, reg c63:L, reg stop5:cls, reg r136:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r138:V, reg r139:V, reg make_names16:*, reg make_names17:V, reg is_na2:cls, reg r140:V, reg c64:L, reg _set_row_names3:cls, reg n18:*, reg n19:V, reg r141:V, reg c65:L, reg n20:*, reg n21:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r142:V, reg r143:V, reg value40:*, reg value41:V, reg length6:cls, reg r144:V, reg p26:p(V +), reg r146:V, reg r147:V, reg isTRUE2:cls, reg make_names18:*, reg make_names19:V, reg p27:p(V +), reg r149:V, reg r150:V, reg c66:L, reg stop6:cls, reg r151:V, reg make_names20:cls, reg value42:*, reg value43:V, reg p28:p(V +), reg r153:V, reg value44:*, reg value45:V, reg l2:*, reg attr__2:cls, reg r154:V, reg x21:*, reg x22:V |
    mkenv;
    st x = x;
    make_names_isMissing = missing.0(make_names);
    if make_names_isMissing then L0(FALSE) else L0(make_names);
  L0(make_names_orDefault):
    st `make.names` = make_names_orDefault;
    st value = value;
    is_data_frame = ldf `is.data.frame`;
    check L49() else D0();
  D0():
    deopt 1 [];
  L49():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L50() else D1();
  D1():
    deopt 3 [r1];
  L50():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L51() else L1();
  L1():
    goto L2();
  L2():
    _row_names_info = ldf `.row_names_info`;
    check L55() else D4();
  L51():
    as_data_frame = ldf `as.data.frame`;
    check L52() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 13 [];
  L52():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn as_data_frame(p1);
    check L53() else D3();
  L55():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r7 = dyn _row_names_info(p2, 2);
    check L56() else D5();
  D3():
    deopt 8 [r4];
  D5():
    deopt 16 [r7];
  L53():
    st x = r4;
    goto L2();
  L56():
    st n = r7;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L57() else L58();
  L3(r9):
    c2 = `as.logical`(r9);
    if c2 then L60() else L4();
  L57():
    value1 = ld value;
    check L59() else D6();
  L58():
    r8 = dyn base(<sym value>);
    goto L3(r8);
  D6():
    deopt 19 [value1];
  L4():
    sym1 = ldf `is.object`;
    base1 = ldf `is.object` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L59():
    value2 = force? value1;
    checkMissing(value2);
    c1 = `==`(value2, NULL);
    goto L3(c1);
  L60():
    _set_row_names = ldf `.set_row_names`;
    check L61() else D7();
  D7():
    deopt 23 [];
  L6(r16):
    c4 = `as.logical`(r16);
    if c4 then L7(c4) else L71();
  L61():
    p3 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r11 = dyn _set_row_names(p3);
    check L62() else D8();
  L68():
    value3 = ld value;
    check L70() else D12();
  L69():
    r15 = dyn base1(<sym value>);
    goto L6(r15);
  D8():
    deopt 25 [r11];
  D12():
    deopt 38 [value3];
  L7(c5):
    c14 = `as.logical`(c5);
    if c14 then L76() else L9();
  L62():
    l = ld x;
    attr__ = ldf `attr<-`;
    check L63() else D9();
  L70():
    value4 = force? value3;
    checkMissing(value4);
    c3 = `is.object`(value4);
    goto L6(c3);
  L71():
    sym2 = ldf `is.integer`;
    base2 = ldf `is.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  D9():
    deopt 27 [r11, l, r11];
  L8(c9, r18):
    r19 = `!`(r18);
    c11 = `as.logical`(r19);
    c12 = `||`(c9, c11);
    goto L7(c12);
  L9():
    goto L11();
  L11():
    n2 = ld n;
    check L82() else D16();
  L63():
    r12 = dyn attr__(l, NULL, "row.names", r11);
    check L64() else D10();
  L72():
    value5 = ld value;
    check L74() else D13();
  L73():
    r17 = dyn base2(<sym value>);
    goto L8(c4, r17);
  L76():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L77() else L78();
  D10():
    deopt 30 [r11, r12];
  D13():
    deopt 42 [c4, value5];
  D16():
    deopt 56 [n2];
  L10(r21):
    st value = r21;
    goto L11();
  L64():
    st x = r12;
    x7 = ld x;
    check L65() else D11();
  L74():
    value6 = force? value5;
    checkMissing(value6);
    c10 = `is.integer`(value6);
    goto L8(c4, c10);
  L77():
    value7 = ld value;
    check L79() else D14();
  L78():
    r20 = dyn base3(<sym value>);
    goto L10(r20);
  L82():
    n3 = force? n2;
    checkMissing(n3);
    r24 = `==`(n3, 0);
    c15 = `as.logical`(r24);
    if c15 then L83() else L12();
  D11():
    deopt 32 [x7];
  D14():
    deopt 49 [value7];
  L12():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L101() else L102();
  L19():
    anyDuplicated = ldf anyDuplicated;
    check L160() else D53();
  L65():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L79():
    value8 = force? value7;
    checkMissing(value8);
    as_character = ldf `as.character` in base;
    r22 = dyn as_character(value8);
    check L80() else D15();
  L83():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  D15():
    deopt 52 [r22];
  D53():
    deopt 169 [];
  L13(r26):
    r30 = `!`(r26);
    c17 = `as.logical`(r30);
    if c17 then L90() else L15(c17);
  L20(r39):
    n4 = ld n;
    check L105() else D25();
  L80():
    goto L10(r22);
  L84():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L86() else L87();
  L85():
    r25 = dyn base4(<lang attr(x, "row.names")>);
    goto L13(r25);
  L101():
    value11 = ld value;
    check L103() else D23();
  L102():
    r38 = dyn base7(<sym value>);
    goto L20(r38);
  L160():
    p7 = prom<V +>{
      value28 = ld value;
      value29 = force? value28;
      checkMissing(value29);
      return value29;
    };
    r74 = dyn anyDuplicated(p7);
    check L161() else D54();
  D23():
    deopt 87 [value11];
  D25():
    deopt 90 [r39, n4];
  D54():
    deopt 171 [r74];
  L14(r28):
    c16 = `==`(r28, NULL);
    goto L13(c16);
  L15(c19):
    c26 = `as.logical`(c19);
    if c26 then L96() else L17();
  L86():
    x9 = ld x;
    check L88() else D17();
  L87():
    r27 = dyn base5(<sym x>, "row.names");
    goto L14(r27);
  L90():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L103():
    value12 = force? value11;
    checkMissing(value12);
    length1 = ldf length in base;
    r40 = dyn length1(value12);
    check L104() else D24();
  L105():
    n5 = force? n4;
    checkMissing(n5);
    r41 = `!=`(r39, n5);
    c27 = `as.logical`(r41);
    if c27 then L106() else L21();
  L161():
    c35 = `as.logical`(r74);
    if c35 then L162() else L34();
  D17():
    deopt 63 [x9];
  D24():
    deopt 90 [r40];
  L16(c22, r32):
    r34 = `>`(r32, 0);
    c23 = `as.logical`(r34);
    c24 = `&&`(c22, c23);
    goto L15(c24);
  L17():
    goto L18(NULL);
  L18(r36):
    goto L19();
  L21():
    goto L19();
  L34():
    sym18 = ldf anyNA;
    base18 = ldf anyNA in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L190() else L191();
  L40():
    value44 = ld value;
    check L218() else D89();
  L88():
    x10 = force? x9;
    checkMissing(x10);
    attr = ldf attr in base;
    r29 = dyn attr(x10, "row.names");
    check L89() else D18();
  L91():
    value9 = ld value;
    check L93() else D19();
  L92():
    r31 = dyn base6(<sym value>);
    goto L16(c17, r31);
  L96():
    stop = ldf stop;
    check L97() else D21();
  L104():
    goto L20(r40);
  L106():
    isFALSE = ldf isFALSE;
    check L107() else D26();
  L162():
    isFALSE1 = ldf isFALSE;
    check L163() else D55();
  D18():
    deopt 67 [r29];
  D19():
    deopt 72 [c17, value9];
  D21():
    deopt 80 [];
  D26():
    deopt 94 [];
  D55():
    deopt 173 [];
  D89():
    deopt 265 [value44];
  L41(r132):
    c62 = `as.logical`(r132);
    if c62 then L194() else L42();
  L89():
    goto L14(r29);
  L93():
    value10 = force? value9;
    checkMissing(value10);
    length = ldf length in base;
    r33 = dyn length(value10);
    check L94() else D20();
  L97():
    r35 = dyn stop("invalid 'row.names' length");
    check L98() else D22();
  L107():
    p4 = prom<V +>{
      make_names1 = ld `make.names`;
      make_names2 = force? make_names1;
      checkMissing(make_names2);
      return make_names2;
    };
    r43 = dyn isFALSE(p4);
    check L108() else D27();
  L163():
    p8 = prom<V +>{
      make_names7 = ld `make.names`;
      make_names8 = force? make_names7;
      checkMissing(make_names8);
      return make_names8;
    };
    r76 = dyn isFALSE1(p8);
    check L164() else D56();
  L190():
    value38 = ld value;
    check L192() else D73();
  L191():
    r131 = dyn base18(<sym value>);
    goto L41(r131);
  L218():
    value45 = force? value44;
    checkMissing(value45);
    l2 = ld x;
    attr__2 = ldf `attr<-`;
    check L219() else D90();
  D20():
    deopt 75 [c17, r33];
  D22():
    deopt 82 [r35];
  D27():
    deopt 96 [r43];
  D56():
    deopt 175 [r76];
  D73():
    deopt 222 [value38];
  D90():
    deopt 268 [value45, l2, value45];
  L42():
    goto L40();
  L94():
    goto L16(c17, r33);
  L98():
    goto L18(r35);
  L108():
    c28 = `as.logical`(r43);
    if c28 then L109() else L22();
  L164():
    c36 = `as.logical`(r76);
    if c36 then L165() else L35();
  L192():
    value39 = force? value38;
    checkMissing(value39);
    anyNA = ldf anyNA in base;
    r133 = dyn anyNA(value39);
    check L193() else D74();
  L194():
    isFALSE2 = ldf isFALSE;
    check L195() else D75();
  L219():
    r154 = dyn attr__2(l2, NULL, "row.names", value45);
    check L220() else D91();
  D74():
    deopt 225 [r133];
  D75():
    deopt 227 [];
  D91():
    deopt 271 [value45, r154];
  L22():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L113() else L114();
  L23(r45):
    goto L19();
  L35():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L173() else L174();
  L36(r105):
    goto L40();
  L109():
    stop1 = ldf stop;
    check L110() else D28();
  L165():
    sort = ldf sort;
    check L166() else D57();
  L193():
    goto L41(r133);
  L195():
    p25 = prom<V +>{
      make_names14 = ld `make.names`;
      make_names15 = force? make_names14;
      checkMissing(make_names15);
      return make_names15;
    };
    r135 = dyn isFALSE2(p25);
    check L196() else D76();
  L220():
    st x = r154;
    x21 = ld x;
    check L221() else D92();
  D28():
    deopt 98 [];
  D57():
    deopt 177 [];
  D76():
    deopt 229 [r135];
  D92():
    deopt 273 [x21];
  L24(r47):
    c29 = `as.logical`(r47);
    if c29 then L117() else L25();
  L37(r107):
    c39 = `as.logical`(r107);
    if c39 then L177() else L38();
  L110():
    r44 = dyn stop1("invalid 'row.names' length");
    check L111() else D29();
  L113():
    make_names3 = ld `make.names`;
    check L115() else D30();
  L114():
    r46 = dyn base8(<sym make.names>);
    goto L24(r46);
  L166():
    p11 = prom<V +>{
      unique = ldf unique;
      p10 = prom<V +>{
        value30 = ld value;
        value31 = force? value30;
        checkMissing(value31);
        c37 = `is.object`(value31);
        if c37 then L1() else L2(value31);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", value31);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(value33):
        duplicated = ldf duplicated;
        p9 = prom<V +>{
          value34 = ld value;
          value35 = force? value34;
          checkMissing(value35);
          return value35;
        };
        r78 = dyn duplicated(p9);
        __2 = ldf `[` in base;
        r79 = dyn __2(value33, r78);
        goto L0(r79);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r81 = dyn unique(p10);
      return r81;
    };
    r83 = dyn sort(p11);
    check L167() else D58();
  L173():
    make_names9 = ld `make.names`;
    check L175() else D63();
  L174():
    r106 = dyn base14(<sym make.names>);
    goto L37(r106);
  L196():
    c63 = `as.logical`(r135);
    if c63 then L197() else L43();
  L221():
    x22 = force? x21;
    checkMissing(x22);
    popenv;
    return x22;
  D29():
    deopt 100 [r44];
  D30():
    deopt 103 [make_names3];
  D58():
    deopt 179 [r83];
  D63():
    deopt 195 [make_names9];
  L25():
    isTRUE = ldf isTRUE;
    check L125() else D37();
  L38():
    isTRUE1 = ldf isTRUE;
    check L181() else D67();
  L43():
    goto L44();
  L44():
    sym19 = ldf `is.na`;
    base19 = ldf `is.na` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L201() else L202();
  L111():
    goto L23(r44);
  L115():
    make_names4 = force? make_names3;
    checkMissing(make_names4);
    is_na = ldf `is.na` in base;
    r48 = dyn is_na(make_names4);
    check L116() else D31();
  L117():
    _set_row_names1 = ldf `.set_row_names`;
    check L118() else D32();
  L167():
    st nonuniq = r83;
    warning = ldf warning;
    check L168() else D59();
  L175():
    make_names10 = force? make_names9;
    checkMissing(make_names10);
    is_na1 = ldf `is.na` in base;
    r108 = dyn is_na1(make_names10);
    check L176() else D64();
  L177():
    _set_row_names2 = ldf `.set_row_names`;
    check L178() else D65();
  L197():
    stop5 = ldf stop;
    check L198() else D77();
  D31():
    deopt 106 [r48];
  D32():
    deopt 108 [];
  D37():
    deopt 121 [];
  D59():
    deopt 182 [];
  D64():
    deopt 198 [r108];
  D65():
    deopt 200 [];
  D67():
    deopt 205 [];
  D77():
    deopt 231 [];
  L45(r139):
    c64 = `as.logical`(r139);
    if c64 then L205() else L46();
  L116():
    goto L24(r48);
  L118():
    p5 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    r50 = dyn _set_row_names1(p5);
    check L119() else D33();
  L125():
    p6 = prom<V +>{
      make_names5 = ld `make.names`;
      make_names6 = force? make_names5;
      checkMissing(make_names6);
      return make_names6;
    };
    r54 = dyn isTRUE(p6);
    check L126() else D38();
  L168():
    p20 = prom<V +>{
      ngettext = ldf ngettext;
      p12 = prom<V +>{
        sym13 = ldf length;
        base13 = ldf length in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r85):
        return r85;
      L1():
        nonuniq = ld nonuniq;
        nonuniq1 = force? nonuniq;
        checkMissing(nonuniq1);
        length3 = ldf length in base;
        r86 = dyn length3(nonuniq1);
        goto L0(r86);
      L2():
        r84 = dyn base13(<sym nonuniq>);
        goto L0(r84);
      };
      p15 = prom<V +>{
        sprintf = ldf sprintf;
        p14 = prom<V +>{
          sQuote = ldf sQuote;
          p13 = prom<V +>{
            nonuniq2 = ld nonuniq;
            nonuniq3 = force? nonuniq2;
            checkMissing(nonuniq3);
            c38 = `is.object`(nonuniq3);
            if c38 then L1() else L2(nonuniq3);
          L0(dx7):
            return dx7;
          L1():
            dr6 = tryDispatchBuiltin.1("[", nonuniq3);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L3() else L2(dr6);
          L2(nonuniq5):
            __3 = ldf `[` in base;
            r88 = dyn __3(nonuniq5, 1);
            goto L0(r88);
          L3():
            dx6 = getTryDispatchBuiltinValue(dr6);
            goto L0(dx6);
          };
          r90 = dyn sQuote(p13);
          return r90;
        };
        r92 = dyn sprintf("non-unique value when setting 'row.names': %s", p14);
        return r92;
      };
      p19 = prom<V +>{
        sprintf1 = ldf sprintf;
        p18 = prom<V +>{
          paste = ldf paste;
          p17 = prom<V +>{
            sQuote1 = ldf sQuote;
            p16 = prom<V +>{
              nonuniq6 = ld nonuniq;
              nonuniq7 = force? nonuniq6;
              checkMissing(nonuniq7);
              return nonuniq7;
            };
            r95 = dyn sQuote1(p16);
            return r95;
          };
          r97 = dyn paste[, collapse](p17, ", ");
          return r97;
        };
        r99 = dyn sprintf1("non-unique values when setting 'row.names': %s", p18);
        return r99;
      };
      r101 = dyn ngettext(p12, p15, p19);
      return r101;
    };
    r103 = dyn warning[, domain, `call.`](p20, NA_LGL, FALSE);
    check L169() else D60();
  L176():
    goto L37(r108);
  L178():
    p22 = prom<V +>{
      n14 = ld n;
      n15 = force? n14;
      checkMissing(n15);
      r109 = `==`(n15, 0);
      c40 = `as.logical`(r109);
      if c40 then L7() else L0(c40);
    L0(c42):
      c50 = `as.logical`(c42);
      if c50 then L11() else L2(c50);
    L7():
      sym15 = ldf `is.null`;
      base15 = ldf `is.null` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L8() else L9();
    L1(c45, r111):
      c47 = `as.logical`(r111);
      c48 = `&&`(c45, c47);
      goto L0(c48);
    L2(c52):
      c59 = `as.logical`(c52);
      if c59 then L15() else L4();
    L8():
      _row_names_info1 = ldf `.row_names_info`;
      p21 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r113 = dyn _row_names_info1(p21, 0);
      c46 = `==`(r113, NULL);
      goto L1(c40, c46);
    L9():
      r110 = dyn base15(<lang .row_names_info(x, 0)>);
      goto L1(c40, r110);
    L11():
      sym16 = ldf length;
      base16 = ldf length in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L12() else L13();
    L3(c55, r115):
      r117 = `>`(r115, 0);
      c56 = `as.logical`(r117);
      c57 = `&&`(c55, c56);
      goto L2(c57);
    L4():
      n16 = ld n;
      n17 = force? n16;
      checkMissing(n17);
      return n17;
    L12():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      length4 = ldf length in base;
      r116 = dyn length4(x16);
      goto L3(c50, r116);
    L13():
      r114 = dyn base16(<sym x>);
      goto L3(c50, r114);
    L15():
      sym17 = ldf length;
      base17 = ldf length in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L16() else L17();
    L5(r119):
      return r119;
    L16():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c60 = `is.object`(x18);
      if c60 then L18() else L19(x18);
    L17():
      r118 = dyn base17(<lang `[[`(x, 1)>);
      goto L5(r118);
    L6(dx9):
      length5 = ldf length in base;
      r121 = dyn length5(dx9);
      goto L5(r121);
    L18():
      dr8 = tryDispatchBuiltin.1("[[", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L20() else L19(dr8);
    L19(x20):
      __4 = ldf `[[` in base;
      r120 = dyn __4(x20, 1);
      goto L6(r120);
    L20():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L6(dx8);
    };
    r123 = dyn _set_row_names2(p22);
    check L179() else D66();
  L181():
    p23 = prom<V +>{
      make_names11 = ld `make.names`;
      make_names12 = force? make_names11;
      checkMissing(make_names12);
      return make_names12;
    };
    r125 = dyn isTRUE1(p23);
    check L182() else D68();
  L198():
    r136 = dyn stop5("missing values in 'row.names' are not allowed");
    check L199() else D78();
  L201():
    make_names16 = ld `make.names`;
    check L203() else D79();
  L202():
    r138 = dyn base19(<sym make.names>);
    goto L45(r138);
  D33():
    deopt 110 [r50];
  D38():
    deopt 123 [r54];
  D60():
    deopt 188 [r103];
  D66():
    deopt 202 [r123];
  D68():
    deopt 207 [r125];
  D78():
    deopt 233 [r136];
  D79():
    deopt 238 [make_names16];
  L46():
    isTRUE2 = ldf isTRUE;
    check L209() else D83();
  L47(r147):
    goto L40();
  L119():
    l1 = ld x;
    attr__1 = ldf `attr<-`;
    check L120() else D34();
  L126():
    r55 = `!`(r54);
    c30 = `as.logical`(r55);
    if c30 then L127() else L26();
  L169():
    stop3 = ldf stop;
    check L170() else D61();
  L179():
    st value = r123;
    goto L36(r123);
  L182():
    r126 = `!`(r125);
    c61 = `as.logical`(r126);
    if c61 then L183() else L39();
  L199():
    goto L44();
  L203():
    make_names17 = force? make_names16;
    checkMissing(make_names17);
    is_na2 = ldf `is.na` in base;
    r140 = dyn is_na2(make_names17);
    check L204() else D80();
  L205():
    _set_row_names3 = ldf `.set_row_names`;
    check L206() else D81();
  D34():
    deopt 112 [r50, l1, r50];
  D61():
    deopt 190 [];
  D80():
    deopt 241 [r140];
  D81():
    deopt 243 [];
  D83():
    deopt 248 [];
  L26():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L131() else L132();
  L39():
    make_names13 = ldf `make.names`;
    check L187() else D71();
  L120():
    r51 = dyn attr__1(l1, NULL, "row.names", r50);
    check L121() else D35();
  L127():
    stop2 = ldf stop;
    check L128() else D39();
  L170():
    r104 = dyn stop3("duplicate 'row.names' are not allowed");
    check L171() else D62();
  L183():
    stop4 = ldf stop;
    check L184() else D69();
  L204():
    goto L45(r140);
  L206():
    p26 = prom<V +>{
      n18 = ld n;
      n19 = force? n18;
      checkMissing(n19);
      r141 = `>`(n19, 0.0);
      c65 = `as.logical`(r141);
      if c65 then L2() else L0();
    L0():
      sym20 = ldf length;
      base20 = ldf length in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L4() else L5();
    L2():
      n20 = ld n;
      n21 = force? n20;
      checkMissing(n21);
      return n21;
    L1(r143):
      return r143;
    L4():
      value40 = ld value;
      value41 = force? value40;
      checkMissing(value41);
      length6 = ldf length in base;
      r144 = dyn length6(value41);
      goto L1(r144);
    L5():
      r142 = dyn base20(<sym value>);
      goto L1(r142);
    };
    r146 = dyn _set_row_names3(p26);
    check L207() else D82();
  L209():
    p27 = prom<V +>{
      make_names18 = ld `make.names`;
      make_names19 = force? make_names18;
      checkMissing(make_names19);
      return make_names19;
    };
    r149 = dyn isTRUE2(p27);
    check L210() else D84();
  D35():
    deopt 115 [r50, r51];
  D39():
    deopt 126 [];
  D62():
    deopt 192 [r104];
  D69():
    deopt 210 [];
  D71():
    deopt 214 [];
  D82():
    deopt 245 [r146];
  D84():
    deopt 250 [r149];
  L27(r58):
    st nv = r58;
    n8 = ld n;
    check L135() else D43();
  L121():
    st x = r51;
    x11 = ld x;
    check L122() else D36();
  L128():
    r56 = dyn stop2("invalid 'make.names'");
    check L129() else D40();
  L131():
    value13 = ld value;
    check L133() else D41();
  L132():
    r57 = dyn base9(<sym value>);
    goto L27(r57);
  L171():
    goto L36(r104);
  L184():
    r127 = dyn stop4("invalid 'make.names'");
    check L185() else D70();
  L187():
    p24 = prom<V +>{
      value36 = ld value;
      value37 = force? value36;
      checkMissing(value37);
      return value37;
    };
    r129 = dyn make_names13[, unique](p24, TRUE);
    check L188() else D72();
  L207():
    st value = r146;
    goto L47(r146);
  L210():
    r150 = `!`(r149);
    c66 = `as.logical`(r150);
    if c66 then L211() else L48();
  D36():
    deopt 117 [x11];
  D40():
    deopt 128 [r56];
  D41():
    deopt 131 [value13];
  D43():
    deopt 135 [r58, n8];
  D70():
    deopt 212 [r127];
  D72():
    deopt 218 [r129];
  L48():
    make_names20 = ldf `make.names`;
    check L215() else D87();
  L122():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  L129():
    goto L23(r56);
  L133():
    value14 = force? value13;
    checkMissing(value14);
    length2 = ldf length in base;
    r59 = dyn length2(value14);
    check L134() else D42();
  L135():
    n9 = force? n8;
    checkMissing(n9);
    r60 = `<`(r58, n9);
    c31 = `as.logical`(r60);
    if c31 then L136() else L28();
  L185():
    goto L36(r127);
  L188():
    st value = r129;
    goto L36(r129);
  L211():
    stop6 = ldf stop;
    check L212() else D85();
  D42():
    deopt 134 [r59];
  D85():
    deopt 253 [];
  D87():
    deopt 257 [];
  L28():
    value21 = ld value;
    check L152() else D51();
  L134():
    goto L27(r59);
  L136():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L137() else L138();
  L212():
    r151 = dyn stop6("invalid 'make.names'");
    check L213() else D86();
  L215():
    p28 = prom<V +>{
      value42 = ld value;
      value43 = force? value42;
      checkMissing(value43);
      return value43;
    };
    r153 = dyn make_names20[, unique](p28, TRUE);
    check L216() else D88();
  D51():
    deopt 158 [value21];
  D86():
    deopt 255 [r151];
  D88():
    deopt 261 [r153];
  L29(r62):
    st value = r62;
    goto L23(r62);
  L137():
    value15 = ld value;
    check L139() else D44();
  L138():
    r61 = dyn base10(<sym value>, <lang rep_len(`[`(value, nv), `-`(n, nv))>);
    goto L29(r61);
  L152():
    value22 = force? value21;
    checkMissing(value22);
    c34 = `is.object`(value22);
    if c34 then L153() else L154(value22);
  L213():
    goto L47(r151);
  L216():
    st value = r153;
    goto L47(r153);
  D44():
    deopt 140 [value15];
  L32(dx3):
    st value = dx3;
    goto L23(dx3);
  L139():
    value16 = force? value15;
    checkMissing(value16);
    sym11 = ldf rep_len;
    base11 = ldf rep_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L140() else L141();
  L153():
    dr2 = tryDispatchBuiltin.1("[", value22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L155() else L154(dr2);
  L154(value24):
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L156() else L157();
  L30(r64):
    c33 = ldf c in base;
    r68 = dyn c33(value16, r64);
    check L150() else D50();
  L33(value27, r70):
    __1 = ldf `[` in base;
    r72 = dyn __1(value27, r70);
    goto L32(r72);
  L140():
    value17 = ld value;
    check L142() else D45();
  L141():
    r63 = dyn base11(<lang `[`(value, nv)>, <lang `-`(n, nv)>);
    goto L30(r63);
  L155():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L156():
    n12 = ld n;
    check L158() else D52();
  L157():
    r69 = dyn base12(<sym n>);
    goto L33(value24, r69);
  D45():
    deopt 144 [value17];
  D50():
    deopt 156 [r68];
  D52():
    deopt 161 [value24, n12];
  L142():
    value18 = force? value17;
    checkMissing(value18);
    c32 = `is.object`(value18);
    if c32 then L143() else L144(value18);
  L150():
    goto L29(r68);
  L158():
    n13 = force? n12;
    checkMissing(n13);
    r71 = seq_len(n13);
    goto L33(value24, r71);
  L31(dx1):
    n10 = ld n;
    check L147() else D47();
  L143():
    dr = tryDispatchBuiltin.1("[", value18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L145() else L144(dr);
  L144(value20):
    nv = ld nv;
    check L146() else D46();
  D46():
    deopt 146 [value20, nv];
  D47():
    deopt 149 [n10];
  L145():
    dx = getTryDispatchBuiltinValue(dr);
    goto L31(dx);
  L146():
    nv1 = force? nv;
    __ = ldf `[` in base;
    r65 = dyn __(value20, nv1);
    goto L31(r65);
  L147():
    n11 = force? n10;
    checkMissing(n11);
    nv2 = ld nv;
    check L148() else D48();
  D48():
    deopt 150 [n11, nv2];
  L148():
    nv3 = force? nv2;
    checkMissing(nv3);
    r66 = `-`(n11, nv3);
    rep_len = ldf rep_len in base;
    r67 = dyn rep_len(dx1, r66);
    check L149() else D49();
  D49():
    deopt 154 [r67];
  L149():
    goto L30(r67);
  }
}