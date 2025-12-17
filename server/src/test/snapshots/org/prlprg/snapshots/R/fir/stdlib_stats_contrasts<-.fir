fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1428792030;
    st `contrasts<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1428792030(x, `how.many`, value) {
  (reg x:*, reg how_many:*, reg value:*) -+> V { var x:*, var `how.many`:*, reg how_many_isMissing:L, reg how_many_orDefault:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg factor:cls, reg x3:*, reg x4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c2:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_factor:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r10:V, reg r11:V, reg c3:L, reg stop:cls, reg r12:V, reg nlevels:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r15:V, reg r16:V, reg c4:L, reg stop1:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg value1:*, reg value2:V, reg is_function:cls, reg r21:V, reg c5:L, reg value3:cls, reg levels:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg value4:*, reg value5:V, reg is_numeric:cls, reg r29:V, reg c6:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg c11:L, reg r31:V, reg value6:*, reg value7:V, reg isS4:cls, reg r32:V, reg c12:L, reg c15:L, reg c16:V, reg __:cls, reg r33:V, reg r34:cls, reg value8:*, reg value9:V, reg p6:p(V +), reg r36:V, reg c17:L, reg c18:V, reg c21:L, reg c22:V, reg c24:L, reg is_n:*, reg is_n1:V, reg c25:L, reg as_matrix:cls, reg value10:*, reg value11:V, reg p7:p(V +), reg r38:V, reg nlevels1:cls, reg x11:*, reg x12:V, reg p8:p(V +), reg r41:V, reg nrow:cls, reg value12:*, reg value13:V, reg p9:p(V +), reg r43:V, reg nlevs:*, reg nlevs1:V, reg r44:V, reg c26:L, reg stop2:cls, reg r45:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg missing:cls, reg r49:V, reg c27:L, reg c28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg c32:L, reg r51:V, reg how_many1:*, reg how_many2:V, reg c33:V, reg c34:L, reg c35:V, reg c37:L, reg nlevs2:*, reg nlevs3:V, reg r52:V, reg r53:V, reg how_many3:*, reg how_many4:V, reg ncol:cls, reg value14:*, reg value15:V, reg p10:p(V +), reg r55:V, reg levels1:cls, reg x13:*, reg x14:V, reg p11:p(V +), reg r57:V, reg l:*, reg rownames__:cls, reg r58:V, reg nc:*, reg nc1:V, reg n1:*, reg n2:V, reg r59:V, reg c38:L, reg is_n2:*, reg is_n3:V, reg r60:V, reg c39:L, reg as_matrix1:cls, reg value16:*, reg value17:V, reg p12:p(V +), reg r62:V, reg qr:cls, reg cbind:cls, reg value18:*, reg value19:V, reg p13:p(V +), reg r65:V, reg p14:p(V +), reg r67:V, reg cm:*, reg cm1:V, reg c40:L, reg cm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r68:V, reg nc2:*, reg nc3:V, reg r69:V, reg r70:V, reg c41:L, reg stop3:cls, reg r71:V, reg qr_qy:cls, reg cm4:*, reg cm5:V, reg p15:p(V +), reg diag:cls, reg nlevs4:*, reg nlevs5:V, reg p16:p(V +), reg r75:V, reg p17:p(V +), reg r77:V, reg c42:L, reg r79:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nlevs6:*, reg nlevs7:V, reg r80:V, reg __1:cls, reg r81:V, reg value20:*, reg value21:V, reg l1:*, reg c43:L, reg value23:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nc4:*, reg nc5:V, reg r82:V, reg ___:cls, reg r83:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r84:V, reg r85:V, reg levels2:cls, reg x15:*, reg x16:V, reg p18:p(V +), reg r87:V, reg list:cls, reg r88:V, reg l4:*, reg dimnames__:cls, reg r89:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r90:V, reg r91:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r92:V, reg r93:V, reg value26:*, reg value27:V, reg dimnames:cls, reg r94:V, reg c44:L, reg r96:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r97:V, reg c45:V, reg r98:V, reg c46:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r99:V, reg r100:V, reg nmcol:*, reg nmcol1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg r102:V, reg n3:*, reg n4:V, reg nc6:*, reg nc7:V, reg r103:V, reg rep_int:cls, reg r104:V, reg c47:cls, reg r105:V, reg l5:*, reg dimnames1:cls, reg r106:V, reg c48:L, reg r109:V, reg l7:*, reg r110:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r112:V, reg l9:*, reg dx9:V, reg ____:cls, reg r113:V, reg dimnames__1:cls, reg r114:V, reg r115:V, reg r116:V, reg value28:*, reg value29:V, reg c49:L, reg value31:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg n5:*, reg n6:V, reg r117:V, reg __3:cls, reg r118:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r120:V, reg r121:V, reg value32:*, reg value33:V, reg c50:L, reg c51:L, reg value34:*, reg value35:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r122:V, reg r123:V, reg value36:*, reg value37:V, reg c52:V, reg c53:L, reg stop4:cls, reg r124:V, reg cm6:*, reg cm7:V, reg l10:*, reg attr__:cls, reg r125:V, reg x17:*, reg x18:V |
    mkenv;
    st x = x;
    how_many_isMissing = missing.0(how_many);
    if how_many_isMissing then L0(NULL) else L0(how_many);
  L0(how_many_orDefault):
    st `how.many` = how_many_orDefault;
    st value = value;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L48() else L49();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L51() else L2();
  L48():
    x1 = ld x;
    check L50() else D0();
  L49():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 1 [x1];
  L2():
    goto L3();
  L3():
    is_factor = ldf `is.factor`;
    check L55() else D3();
  L50():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L1(c);
  L51():
    factor = ldf factor;
    check L52() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 14 [];
  L52():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c2 = ldf c in base;
      r5 = dyn c2(FALSE, TRUE);
      goto L0(r5);
    L2():
      r3 = dyn base1(FALSE, TRUE);
      goto L0(r3);
    };
    r7 = dyn factor[, levels](p, p1);
    check L53() else D2();
  L55():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn is_factor(p2);
    check L56() else D4();
  D2():
    deopt 9 [r7];
  D4():
    deopt 16 [r10];
  L53():
    st x = r7;
    goto L3();
  L56():
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L57() else L4();
  L4():
    goto L5();
  L5():
    nlevels = ldf nlevels;
    check L61() else D7();
  L57():
    stop = ldf stop;
    check L58() else D5();
  D5():
    deopt 19 [];
  D7():
    deopt 25 [];
  L58():
    r12 = dyn stop("contrasts apply only to factors");
    check L59() else D6();
  L61():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r15 = dyn nlevels(p3);
    check L62() else D8();
  D6():
    deopt 21 [r12];
  D8():
    deopt 27 [r15];
  L59():
    goto L5();
  L62():
    r16 = `<`(r15, 2);
    c4 = `as.logical`(r16);
    if c4 then L63() else L6();
  L6():
    goto L7();
  L7():
    sym2 = ldf `is.function`;
    base2 = ldf `is.function` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L67() else L68();
  L63():
    stop1 = ldf stop;
    check L64() else D9();
  D9():
    deopt 31 [];
  L8(r20):
    c5 = `as.logical`(r20);
    if c5 then L71() else L9();
  L64():
    r17 = dyn stop1("contrasts can be applied only to factors with 2 or more levels");
    check L65() else D10();
  L67():
    value1 = ld value;
    check L69() else D11();
  L68():
    r19 = dyn base2(<sym value>);
    goto L8(r19);
  D10():
    deopt 33 [r17];
  D11():
    deopt 38 [value1];
  L9():
    goto L10();
  L10():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L65():
    goto L7();
  L69():
    value2 = force? value1;
    checkMissing(value2);
    is_function = ldf `is.function` in base;
    r21 = dyn is_function(value2);
    check L70() else D12();
  L71():
    value3 = ldf value;
    check L72() else D13();
  D12():
    deopt 41 [r21];
  D13():
    deopt 43 [];
  L11(r28):
    st `is.n` = r28;
    c6 = `as.logical`(r28);
    if c6 then L12(c6) else L79();
  L70():
    goto L8(r21);
  L72():
    p5 = prom<V +>{
      levels = ldf levels;
      p4 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r23 = dyn levels(p4);
      return r23;
    };
    r25 = dyn value3(p5);
    check L73() else D14();
  L75():
    value4 = ld value;
    check L77() else D15();
  L76():
    r27 = dyn base3(<sym value>);
    goto L11(r27);
  D14():
    deopt 45 [r25];
  D15():
    deopt 51 [value4];
  L12(c7):
    c24 = `as.logical`(c7);
    if c24 then L90() else L15();
  L73():
    st value = r25;
    goto L10();
  L77():
    value5 = force? value4;
    checkMissing(value5);
    is_numeric = ldf `is.numeric` in base;
    r29 = dyn is_numeric(value5);
    check L78() else D16();
  L79():
    sym4 = ldf isS4;
    base4 = ldf isS4 in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  D16():
    deopt 54 [r29];
  L13(c11, r31):
    c12 = `as.logical`(r31);
    if c12 then L84() else L14(c11, c12);
  L15():
    sym12 = ldf `is.character`;
    base12 = ldf `is.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L194() else L195();
  L43():
    cm6 = ld cm;
    check L207() else D80();
  L78():
    goto L11(r29);
  L80():
    value6 = ld value;
    check L82() else D17();
  L81():
    r30 = dyn base4(<sym value>);
    goto L13(c6, r30);
  L90():
    is_n = ld `is.n`;
    check L91() else D22();
  D17():
    deopt 58 [c6, value6];
  D22():
    deopt 73 [is_n];
  D80():
    deopt 270 [cm6];
  L14(c15, c16):
    c21 = `as.logical`(c16);
    c22 = `||`(c15, c21);
    goto L12(c22);
  L44(r121):
    c51 = `as.logical`(r121);
    if c51 then L197() else L45();
  L82():
    value7 = force? value6;
    checkMissing(value7);
    isS4 = ldf isS4 in base;
    r32 = dyn isS4(value7);
    check L83() else D18();
  L84():
    __ = ldf `::`;
    check L85() else D19();
  L91():
    is_n1 = force? is_n;
    checkMissing(is_n1);
    c25 = `as.logical`(is_n1);
    if c25 then L92() else L16();
  L194():
    value32 = ld value;
    check L196() else D75();
  L195():
    r120 = dyn base12(<sym value>);
    goto L44(r120);
  L207():
    cm7 = force? cm6;
    checkMissing(cm7);
    l10 = ld x;
    attr__ = ldf `attr<-`;
    check L208() else D81();
  D18():
    deopt 61 [c6, r32];
  D19():
    deopt 63 [c11, c12];
  D75():
    deopt 253 [value32];
  D81():
    deopt 273 [cm7, l10, cm7];
  L16():
    goto L17();
  L17():
    nlevels1 = ldf nlevels;
    check L96() else D25();
  L45():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L200() else L201();
  L83():
    goto L13(c6, r32);
  L85():
    r33 = dyn __("methods", "is");
    check L86() else D20();
  L92():
    as_matrix = ldf `as.matrix`;
    check L93() else D23();
  L196():
    value33 = force? value32;
    checkMissing(value33);
    c50 = `is.character`(value33);
    goto L44(c50);
  L197():
    value34 = ld value;
    check L198() else D76();
  L208():
    r125 = dyn attr__(l10, NULL, "contrasts", cm7);
    check L209() else D82();
  D20():
    deopt 66 [c11, c12, r33];
  D23():
    deopt 76 [];
  D25():
    deopt 83 [];
  D76():
    deopt 256 [value34];
  D82():
    deopt 276 [cm7, r125];
  L46(r123):
    c53 = `as.logical`(r123);
    if c53 then L203() else L47();
  L86():
    checkFun.0(r33);
    r34 = r33 as cls;
    p6 = prom<V +>{
      value8 = ld value;
      value9 = force? value8;
      checkMissing(value9);
      return value9;
    };
    r36 = dyn r34(p6, "Matrix");
    check L87() else D21();
  L93():
    p7 = prom<V +>{
      value10 = ld value;
      value11 = force? value10;
      checkMissing(value11);
      return value11;
    };
    r38 = dyn as_matrix(p7);
    check L94() else D24();
  L96():
    p8 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r41 = dyn nlevels1(p8);
    check L97() else D26();
  L198():
    value35 = force? value34;
    checkMissing(value35);
    st cm = value35;
    goto L43();
  L200():
    value36 = ld value;
    check L202() else D77();
  L201():
    r122 = dyn base13(<sym value>);
    goto L46(r122);
  L209():
    st x = r125;
    x17 = ld x;
    check L210() else D83();
  D21():
    deopt 70 [c11, c12, r36];
  D24():
    deopt 78 [r38];
  D26():
    deopt 85 [r41];
  D77():
    deopt 260 [value36];
  D83():
    deopt 278 [x17];
  L47():
    stop4 = ldf stop;
    check L205() else D78();
  L87():
    c17 = `as.logical`(r36);
    c18 = `&&`(c12, c17);
    goto L14(c11, c18);
  L94():
    st value = r38;
    goto L17();
  L97():
    st nlevs = r41;
    nrow = ldf nrow;
    check L98() else D27();
  L202():
    value37 = force? value36;
    checkMissing(value37);
    c52 = `==`(value37, NULL);
    goto L46(c52);
  L203():
    st cm = NULL;
    goto L43();
  L210():
    x18 = force? x17;
    checkMissing(x18);
    popenv;
    return x18;
  D27():
    deopt 88 [];
  D78():
    deopt 267 [];
  L98():
    p9 = prom<V +>{
      value12 = ld value;
      value13 = force? value12;
      checkMissing(value13);
      return value13;
    };
    r43 = dyn nrow(p9);
    check L99() else D28();
  L205():
    r124 = dyn stop4("numeric contrasts or contrast name expected");
    check L206() else D79();
  D28():
    deopt 90 [r43];
  D79():
    deopt 269 [r124];
  L99():
    nlevs = ld nlevs;
    check L100() else D29();
  L206():
    goto L43();
  D29():
    deopt 90 [r43, nlevs];
  L100():
    nlevs1 = force? nlevs;
    checkMissing(nlevs1);
    r44 = `!=`(r43, nlevs1);
    c26 = `as.logical`(r44);
    if c26 then L101() else L18();
  L18():
    goto L19();
  L19():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L105() else L106();
  L101():
    stop2 = ldf stop;
    check L102() else D30();
  D30():
    deopt 94 [];
  L20(r48):
    c27 = `as.logical`(r48);
    if c27 then L21(c27) else L107();
  L102():
    r45 = dyn stop2("wrong number of contrast matrix rows");
    check L103() else D31();
  L105():
    missing = ldf missing in base;
    r49 = dyn missing(<sym how.many>);
    goto L20(r49);
  L106():
    r47 = dyn base5(<sym how.many>);
    goto L20(r47);
  D31():
    deopt 96 [r45];
  L21(c28):
    c37 = `as.logical`(c28);
    if c37 then L112() else L23();
  L103():
    goto L19();
  L107():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L108() else L109();
  L22(c32, r51):
    c34 = `as.logical`(r51);
    c35 = `||`(c32, c34);
    goto L21(c35);
  L23():
    how_many3 = ld `how.many`;
    check L115() else D34();
  L24(r53):
    st n1 = r53;
    ncol = ldf ncol;
    check L116() else D35();
  L108():
    how_many1 = ld `how.many`;
    check L110() else D32();
  L109():
    r50 = dyn base6(<sym how.many>);
    goto L22(c27, r50);
  L112():
    nlevs2 = ld nlevs;
    check L113() else D33();
  D32():
    deopt 103 [c27, how_many1];
  D33():
    deopt 107 [nlevs2];
  D34():
    deopt 111 [how_many3];
  D35():
    deopt 115 [];
  L110():
    how_many2 = force? how_many1;
    checkMissing(how_many2);
    c33 = `==`(how_many2, NULL);
    goto L22(c27, c33);
  L113():
    nlevs3 = force? nlevs2;
    checkMissing(nlevs3);
    r52 = `-`(nlevs3, 1);
    goto L24(r52);
  L115():
    how_many4 = force? how_many3;
    checkMissing(how_many4);
    goto L24(how_many4);
  L116():
    p10 = prom<V +>{
      value14 = ld value;
      value15 = force? value14;
      checkMissing(value15);
      return value15;
    };
    r55 = dyn ncol(p10);
    check L117() else D36();
  D36():
    deopt 117 [r55];
  L117():
    st nc = r55;
    levels1 = ldf levels;
    check L118() else D37();
  D37():
    deopt 120 [];
  L118():
    p11 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r57 = dyn levels1(p11);
    check L119() else D38();
  D38():
    deopt 122 [r57];
  L119():
    l = ld value;
    rownames__ = ldf `rownames<-`;
    check L120() else D39();
  D39():
    deopt 124 [r57, l, r57];
  L120():
    r58 = dyn rownames__(l, NULL, r57);
    check L121() else D40();
  D40():
    deopt 126 [r57, r58];
  L121():
    st value = r58;
    nc = ld nc;
    check L122() else D41();
  D41():
    deopt 128 [nc];
  L122():
    nc1 = force? nc;
    checkMissing(nc1);
    n1 = ld n1;
    check L123() else D42();
  D42():
    deopt 129 [nc1, n1];
  L123():
    n2 = force? n1;
    checkMissing(n2);
    r59 = `<`(nc1, n2);
    c38 = `as.logical`(r59);
    if c38 then L124() else L25();
  L25():
    value28 = ld value;
    check L188() else D73();
  L41(r116):
    goto L43();
  L124():
    is_n2 = ld `is.n`;
    check L125() else D43();
  D43():
    deopt 132 [is_n2];
  D73():
    deopt 240 [value28];
  L125():
    is_n3 = force? is_n2;
    checkMissing(is_n3);
    r60 = `!`(is_n3);
    c39 = `as.logical`(r60);
    if c39 then L126() else L26();
  L188():
    value29 = force? value28;
    checkMissing(value29);
    c49 = `is.object`(value29);
    if c49 then L189() else L190(value29);
  L26():
    goto L27();
  L27():
    qr = ldf qr;
    check L130() else D46();
  L42(dx11):
    st cm = dx11;
    goto L41(dx11);
  L126():
    as_matrix1 = ldf `as.matrix`;
    check L127() else D44();
  L189():
    dr10 = tryDispatchBuiltin.1("[", value29);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L191() else L190(dr10);
  L190(value31):
    n5 = ld n1;
    check L192() else D74();
  D44():
    deopt 136 [];
  D46():
    deopt 143 [];
  D74():
    deopt 244 [value31, 1, n5];
  L127():
    p12 = prom<V +>{
      value16 = ld value;
      value17 = force? value16;
      checkMissing(value17);
      return value17;
    };
    r62 = dyn as_matrix1(p12);
    check L128() else D45();
  L130():
    p14 = prom<V +>{
      cbind = ldf cbind;
      p13 = prom<V +>{
        value18 = ld value;
        value19 = force? value18;
        checkMissing(value19);
        return value19;
      };
      r65 = dyn cbind(1.0, p13);
      return r65;
    };
    r67 = dyn qr(p14);
    check L131() else D47();
  L191():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L42(dx10);
  L192():
    n6 = force? n5;
    checkMissing(n6);
    r117 = `:`(1, n6);
    __3 = ldf `[` in base;
    r118 = dyn __3(value29, <missing>, r117, FALSE);
    goto L42(r118);
  D45():
    deopt 138 [r62];
  D47():
    deopt 145 [r67];
  L128():
    st value = r62;
    goto L27();
  L131():
    st cm = r67;
    cm = ld cm;
    check L132() else D48();
  D48():
    deopt 147 [cm];
  L132():
    cm1 = force? cm;
    checkMissing(cm1);
    c40 = `is.object`(cm1);
    if c40 then L134() else L135(cm1);
  L133(dx1):
    nc2 = ld nc;
    check L137() else D49();
  L134():
    dr = tryDispatchBuiltin.1("$", cm1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L136() else L135(dr);
  L135(cm3):
    r68 = `$`(cm3, <sym rank>);
    goto L133(r68);
  D49():
    deopt 149 [dx1, nc2];
  L136():
    dx = getTryDispatchBuiltinValue(dr);
    goto L133(dx);
  L137():
    nc3 = force? nc2;
    checkMissing(nc3);
    r69 = `+`(nc3, 1.0);
    r70 = `!=`(dx1, r69);
    c41 = `as.logical`(r70);
    if c41 then L138() else L28();
  L28():
    goto L29();
  L29():
    qr_qy = ldf `qr.qy`;
    check L142() else D52();
  L138():
    stop3 = ldf stop;
    check L139() else D50();
  D50():
    deopt 155 [];
  D52():
    deopt 161 [];
  L139():
    r71 = dyn stop3("singular contrast matrix");
    check L140() else D51();
  L142():
    p15 = prom<V +>{
      cm4 = ld cm;
      cm5 = force? cm4;
      checkMissing(cm5);
      return cm5;
    };
    p17 = prom<V +>{
      diag = ldf diag;
      p16 = prom<V +>{
        nlevs4 = ld nlevs;
        nlevs5 = force? nlevs4;
        checkMissing(nlevs5);
        return nlevs5;
      };
      r75 = dyn diag(p16);
      return r75;
    };
    r77 = dyn qr_qy(p15, p17);
    check L143() else D53();
  D51():
    deopt 157 [r71];
  D53():
    deopt 164 [r77];
  L140():
    goto L29();
  L143():
    c42 = `is.object`(r77);
    if c42 then L144() else L145(r77);
  L30(dx3):
    st cm = dx3;
    value20 = ld value;
    check L148() else D55();
  L144():
    dr2 = tryDispatchBuiltin.1("[", r77);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L146() else L145(dr2);
  L145(r79):
    nlevs6 = ld nlevs;
    check L147() else D54();
  D54():
    deopt 167 [r79, 2, nlevs6];
  D55():
    deopt 173 [value20];
  L146():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx2);
  L147():
    nlevs7 = force? nlevs6;
    checkMissing(nlevs7);
    r80 = `:`(2, nlevs7);
    __1 = ldf `[` in base;
    r81 = dyn __1(r77, <missing>, r80);
    goto L30(r81);
  L148():
    value21 = force? value20;
    checkMissing(value21);
    l1 = ld cm;
    c43 = `is.object`(l1);
    if c43 then L149() else L150(value21, l1);
  L31(dx5):
    st cm = dx5;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L153() else L154();
  L149():
    dr4 = tryDispatchBuiltin.0("[<-", l1, value21);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L151() else L150(value21, dr4);
  L150(value23, l3):
    nc4 = ld nc;
    check L152() else D56();
  D56():
    deopt 178 [value23, l3, value21, 1, nc4];
  L32(r85):
    l4 = ld cm;
    dimnames__ = ldf `dimnames<-`;
    check L158() else D60();
  L151():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L152():
    nc5 = force? nc4;
    checkMissing(nc5);
    r82 = `:`(1, nc5);
    ___ = ldf `[<-` in base;
    r83 = dyn ___(l1, <missing>, r82, value21);
    goto L31(r83);
  L153():
    levels2 = ldf levels;
    check L155() else D57();
  L154():
    r84 = dyn base7(<lang levels(x)>, NULL);
    goto L32(r84);
  D57():
    deopt 187 [];
  D60():
    deopt 194 [r85, l4, r85];
  L155():
    p18 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r87 = dyn levels2(p18);
    check L156() else D58();
  L158():
    r89 = dyn dimnames__(l4, NULL, r85);
    check L159() else D61();
  D58():
    deopt 189 [r87];
  D61():
    deopt 196 [r85, r89];
  L156():
    list = ldf list in base;
    r88 = dyn list(r87, NULL);
    check L157() else D59();
  L159():
    st cm = r89;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L160() else L161();
  D59():
    deopt 192 [r88];
  L33(r91):
    r98 = `!`(r91);
    c46 = `as.logical`(r98);
    if c46 then L169() else L36();
  L157():
    goto L32(r88);
  L160():
    sym9 = ldf dimnames;
    base9 = ldf dimnames in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L162() else L163();
  L161():
    r90 = dyn base8(<lang `<-`(nmcol, `[[`(dimnames(value), 2))>);
    goto L33(r90);
  L34(r93):
    c44 = `is.object`(r93);
    if c44 then L166() else L167(r93);
  L36():
    goto L40(NULL);
  L40(r115):
    goto L41(r115);
  L162():
    value26 = ld value;
    check L164() else D62();
  L163():
    r92 = dyn base9(<sym value>);
    goto L34(r92);
  L169():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L170() else L171();
  D62():
    deopt 201 [value26];
  L35(dx7):
    st nmcol = dx7;
    c45 = `==`(dx7, NULL);
    goto L33(c45);
  L37(r100):
    l5 = ld cm;
    dimnames1 = ldf dimnames;
    check L179() else D69();
  L164():
    value27 = force? value26;
    checkMissing(value27);
    dimnames = ldf dimnames in base;
    r94 = dyn dimnames(value27);
    check L165() else D63();
  L166():
    dr6 = tryDispatchBuiltin.1("[[", r93);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L168() else L167(dr6);
  L167(r96):
    __2 = ldf `[[` in base;
    r97 = dyn __2(r96, 2);
    goto L35(r97);
  L170():
    nmcol = ld nmcol;
    check L172() else D64();
  L171():
    r99 = dyn base10(<sym nmcol>, <lang rep.int("", `-`(n1, nc))>);
    goto L37(r99);
  D63():
    deopt 204 [r94];
  D64():
    deopt 213 [nmcol];
  D69():
    deopt 227 [r100, l5, r100];
  L165():
    goto L34(r94);
  L168():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L35(dx6);
  L172():
    nmcol1 = force? nmcol;
    checkMissing(nmcol1);
    sym11 = ldf `rep.int`;
    base11 = ldf `rep.int` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L173() else L174();
  L179():
    r106 = dyn dimnames1(r100, NULL);
    check L180() else D70();
  D70():
    deopt 229 [r100, l5, r100, r106];
  L38(r102):
    c47 = ldf c in base;
    r105 = dyn c47(nmcol1, r102);
    check L178() else D68();
  L173():
    n3 = ld n1;
    check L175() else D65();
  L174():
    r101 = dyn base11("", <lang `-`(n1, nc)>);
    goto L38(r101);
  L180():
    c48 = `is.object`(r106);
    if c48 then L181() else L182(r100, l5, r106);
  D65():
    deopt 218 [n3];
  D68():
    deopt 225 [r105];
  L39(r112, l9, dx9):
    dimnames__1 = ldf `dimnames<-`;
    check L184() else D71();
  L175():
    n4 = force? n3;
    checkMissing(n4);
    nc6 = ld nc;
    check L176() else D66();
  L178():
    goto L37(r105);
  L181():
    dr8 = tryDispatchBuiltin.0("[[<-", r106, r100);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L183() else L182(r100, l5, dr8);
  L182(r109, l7, r110):
    ____ = ldf `[[<-` in base;
    r113 = dyn ____(r110, r100, 2);
    goto L39(r109, l7, r113);
  D66():
    deopt 219 [n4, nc6];
  D71():
    deopt 234 [r112, l9, dx9];
  L176():
    nc7 = force? nc6;
    checkMissing(nc7);
    r103 = `-`(n4, nc7);
    rep_int = ldf `rep.int` in base;
    r104 = dyn rep_int("", r103);
    check L177() else D67();
  L183():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L39(r100, l5, dx8);
  L184():
    r114 = dyn dimnames__1(l9, NULL, dx9);
    check L185() else D72();
  D67():
    deopt 223 [r104];
  D72():
    deopt 236 [r112, r114];
  L177():
    goto L38(r104);
  L185():
    st cm = r114;
    goto L40(r112);
  }
}