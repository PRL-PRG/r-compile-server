fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2543562472;
    st `regmatches<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2543562472(x, m, invert, value) {
  (reg x:*, reg m:*, reg invert:*, reg value:*) -+> V { var x:*, var m:*, var invert:*, reg invert_isMissing:L, reg invert_orDefault:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg m1:*, reg m2:V, reg is_list:cls, reg r8:V, reg ili:*, reg ili1:V, reg r9:V, reg c1:L, reg c3:V, reg invert1:*, reg invert2:V, reg c4:L, reg c5:V, reg c7:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c12:L, reg r11:V, reg m3:*, reg m4:V, reg r12:V, reg any:cls, reg r13:V, reg c13:L, reg c14:V, reg c16:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg character:cls, reg r18:V, reg list:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg x5:*, reg x6:V, reg length1:cls, reg r22:V, reg rep_len:cls, reg r23:V, reg as_list:cls, reg regmatches:cls, reg x7:*, reg x8:V, reg p:p(V +), reg m5:*, reg m6:V, reg p1:p(V +), reg r26:V, reg p2:p(V +), reg r28:V, reg l:*, reg c17:L, reg r30:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r32:V, reg dx1:V, reg m7:*, reg m8:V, reg r33:V, reg ___:cls, reg r34:V, reg regmatches1:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg m9:*, reg m10:V, reg p4:p(V +), reg invert3:*, reg invert4:V, reg r38:V, reg p5:p(V +), reg r40:V, reg ili2:*, reg ili3:V, reg r41:V, reg c18:L, reg c20:V, reg invert5:*, reg invert6:V, reg r42:V, reg c21:L, reg c22:V, reg c24:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg value1:*, reg value2:V, reg as_character:cls, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg value3:*, reg value4:V, reg anyNA:cls, reg r48:V, reg c25:L, reg stop:cls, reg r49:V, reg which:cls, reg lengths:cls, reg y:*, reg y1:V, reg p6:p(V +), reg r52:V, reg r53:V, reg p7:p(V +), reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg pos:*, reg pos1:V, reg length2:cls, reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg value5:*, reg value6:V, reg length3:cls, reg r61:V, reg np:*, reg np1:V, reg nv:*, reg nv1:V, reg r62:V, reg c26:L, reg nv2:*, reg nv3:V, reg r63:V, reg c27:L, reg stop1:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg value7:*, reg value8:V, reg np2:*, reg np3:V, reg rep_len1:cls, reg r68:V, reg y2:*, reg y3:V, reg c28:L, reg y5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pos2:*, reg pos3:V, reg __:cls, reg r70:V, reg paste0:cls, reg sapply:cls, reg y6:*, reg y7:V, reg p8:p(V +), reg __1:*, reg __2:V, reg p9:p(V +), reg r73:V, reg p10:p(V +), reg value9:*, reg value10:V, reg p11:p(V +), reg sapply1:cls, reg y8:*, reg y9:V, reg p12:p(V +), reg __3:*, reg __4:V, reg p13:p(V +), reg r78:V, reg p14:p(V +), reg r80:V, reg l3:*, reg c29:L, reg r82:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pos4:*, reg pos5:V, reg ___1:cls, reg r85:V, reg x11:*, reg x12:V, reg lapply:cls, reg value11:*, reg value12:V, reg p15:p(V +), reg as_character1:*, reg as_character2:V, reg p16:p(V +), reg r90:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg r92:V, reg value13:*, reg value14:V, reg anyNA1:cls, reg r93:V, reg c30:L, reg stop2:cls, reg r94:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r96:V, reg r97:V, reg value15:*, reg value16:V, reg length4:cls, reg r98:V, reg r99:V, reg c31:L, reg stop3:cls, reg r100:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r102:V, reg r103:V, reg value17:*, reg value18:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r104:V, reg r105:V, reg x13:*, reg x14:V, reg length5:cls, reg r106:V, reg rep_len2:cls, reg r107:V, reg invert7:*, reg invert8:V, reg c32:L, reg Map:cls, reg r108:cls, reg p17:p(V +), reg y10:*, reg y11:V, reg p18:p(V +), reg value19:*, reg value20:V, reg p19:p(V +), reg r112:V, reg r113:V, reg Map1:cls, reg r114:cls, reg p20:p(V +), reg y12:*, reg y13:V, reg p21:p(V +), reg value21:*, reg value22:V, reg p22:p(V +), reg r118:V, reg unlist:cls, reg y14:*, reg y15:V, reg p23:p(V +), reg r120:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r121:V, reg r122:V, reg x15:*, reg x16:V, reg names:cls, reg r123:V, reg l6:*, reg names__:cls, reg r124:V, reg y16:*, reg y17:V |
    mkenv;
    st x = x;
    st m = m;
    invert_isMissing = missing.0(invert);
    if invert_isMissing then L0(FALSE) else L0(invert);
  L0(invert_orDefault):
    st invert = invert_orDefault;
    st value = value;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L45() else L2();
  L41():
    x1 = ld x;
    check L43() else D0();
  L42():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L43():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L44() else D1();
  L45():
    x3 = ld x;
    check L46() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [x3];
  L4(r7):
    st ili = r7;
    ili = ld ili;
    check L53() else D5();
  L44():
    goto L1(r2);
  L46():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L49():
    m1 = ld m;
    check L51() else D3();
  L50():
    r6 = dyn base1(<sym m>);
    goto L4(r6);
  D3():
    deopt 14 [m1];
  D5():
    deopt 19 [ili];
  L51():
    m2 = force? m1;
    checkMissing(m2);
    is_list = ldf `is.list` in base;
    r8 = dyn is_list(m2);
    check L52() else D4();
  L53():
    ili1 = force? ili;
    checkMissing(ili1);
    r9 = `!`(ili1);
    c1 = `as.logical`(r9);
    if c1 then L54() else L5(c1);
  D4():
    deopt 17 [r8];
  L5(c3):
    c7 = `as.logical`(c3);
    if c7 then L57() else L6(c7);
  L52():
    goto L4(r8);
  L54():
    invert1 = ld invert;
    check L55() else D6();
  D6():
    deopt 22 [c1, invert1];
  L6(c9):
    c16 = `as.logical`(c9);
    if c16 then L63() else L8();
  L55():
    invert2 = force? invert1;
    checkMissing(invert2);
    c4 = `as.logical`(invert2);
    c5 = `&&`(c1, c4);
    goto L5(c5);
  L57():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L7(c12, r11):
    c13 = `as.logical`(r11);
    c14 = `&&`(c12, c13);
    goto L6(c14);
  L8():
    regmatches1 = ldf regmatches;
    check L83() else D18();
  L13():
    ili2 = ld ili;
    check L85() else D20();
  L58():
    m3 = ld m;
    check L60() else D7();
  L59():
    r10 = dyn base2(<lang `==`(m, `-`(1))>);
    goto L7(c7, r10);
  L63():
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  D7():
    deopt 27 [c7, m3];
  D18():
    deopt 64 [];
  D20():
    deopt 70 [ili2];
  L9(r15):
    st y = r15;
    as_list = ldf `as.list`;
    check L76() else D15();
  L60():
    m4 = force? m3;
    checkMissing(m4);
    r12 = `==`(m4, -1);
    any = ldf any in base;
    r13 = dyn any(r12);
    check L61() else D8();
  L64():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L65():
    r14 = dyn base3(<lang list(character())>, <lang length(x)>);
    goto L9(r14);
  L83():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p4 = prom<V +>{
      m9 = ld m;
      m10 = force? m9;
      checkMissing(m10);
      return m10;
    };
    p5 = prom<V +>{
      invert3 = ld invert;
      invert4 = force? invert3;
      checkMissing(invert4);
      r38 = `!`(invert4);
      return r38;
    };
    r40 = dyn regmatches1(p3, p4, p5);
    check L84() else D19();
  L85():
    ili3 = force? ili2;
    checkMissing(ili3);
    r41 = `!`(ili3);
    c18 = `as.logical`(r41);
    if c18 then L86() else L14(c18);
  D8():
    deopt 32 [c7, r13];
  D15():
    deopt 53 [];
  D19():
    deopt 68 [r40];
  L10(r17):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L14(c20):
    c24 = `as.logical`(c20);
    if c24 then L89() else L15();
  L61():
    goto L7(c7, r13);
  L66():
    character = ldf character;
    check L68() else D9();
  L67():
    r16 = dyn base4(<lang character()>);
    goto L10(r16);
  L76():
    p2 = prom<V +>{
      regmatches = ldf regmatches;
      p = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p1 = prom<V +>{
        m5 = ld m;
        m6 = force? m5;
        checkMissing(m6);
        return m6;
      };
      r26 = dyn regmatches(p, p1, FALSE);
      return r26;
    };
    r28 = dyn as_list(p2);
    check L77() else D16();
  L84():
    st y = r40;
    goto L13();
  L86():
    invert5 = ld invert;
    check L87() else D21();
  D9():
    deopt 39 [];
  D16():
    deopt 55 [r28];
  D21():
    deopt 73 [c18, invert5];
  L11(r21):
    rep_len = ldf rep_len in base;
    r23 = dyn rep_len(r17, r21);
    check L75() else D14();
  L15():
    lapply = ldf lapply;
    check L140() else D48();
  L68():
    r18 = dyn character();
    check L69() else D10();
  L71():
    x5 = ld x;
    check L73() else D12();
  L72():
    r20 = dyn base5(<sym x>);
    goto L11(r20);
  L77():
    l = ld y;
    c17 = `is.object`(l);
    if c17 then L78() else L79(r28, l);
  L87():
    invert6 = force? invert5;
    checkMissing(invert6);
    r42 = `!`(invert6);
    c21 = `as.logical`(r42);
    c22 = `&&`(c18, c21);
    goto L14(c22);
  L89():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  D10():
    deopt 40 [r18];
  D12():
    deopt 45 [x5];
  D14():
    deopt 50 [r23];
  D48():
    deopt 162 [];
  L12(r32, dx1):
    st y = dx1;
    goto L13();
  L16(r44):
    st value = r44;
    sym7 = ldf anyNA;
    base7 = ldf anyNA in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  L69():
    list = ldf list in base;
    r19 = dyn list(r18);
    check L70() else D11();
  L73():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r22 = dyn length1(x6);
    check L74() else D13();
  L75():
    goto L9(r23);
  L78():
    dr = tryDispatchBuiltin.0("[<-", l, r28);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(r28, dr);
  L79(r30, l2):
    m7 = ld m;
    check L81() else D17();
  L90():
    value1 = ld value;
    check L92() else D22();
  L91():
    r43 = dyn base6(<sym value>);
    goto L16(r43);
  L140():
    p15 = prom<V +>{
      value11 = ld value;
      value12 = force? value11;
      checkMissing(value12);
      return value12;
    };
    p16 = prom<V +>{
      as_character1 = ld `as.character`;
      as_character2 = force? as_character1;
      checkMissing(as_character2);
      return as_character2;
    };
    r90 = dyn lapply(p15, p16);
    check L141() else D49();
  D11():
    deopt 42 [r19];
  D13():
    deopt 48 [r22];
  D17():
    deopt 57 [r30, l2, r28, m7];
  D22():
    deopt 79 [value1];
  D49():
    deopt 165 [r90];
  L17(r47):
    c25 = `as.logical`(r47);
    if c25 then L98() else L18();
  L70():
    goto L10(r19);
  L74():
    goto L11(r22);
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(r28, dx);
  L81():
    m8 = force? m7;
    checkMissing(m8);
    r33 = `>`(m8, -1);
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l2, r28, r33);
    goto L12(r30, r34);
  L92():
    value2 = force? value1;
    checkMissing(value2);
    as_character = ldf `as.character` in base;
    r45 = dyn as_character(value2);
    check L93() else D23();
  L94():
    value3 = ld value;
    check L96() else D24();
  L95():
    r46 = dyn base7(<sym value>);
    goto L17(r46);
  L141():
    st value = r90;
    sym11 = ldf anyNA;
    base11 = ldf anyNA in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L142() else L143();
  D23():
    deopt 82 [r45];
  D24():
    deopt 86 [value3];
  L18():
    goto L19();
  L19():
    which = ldf which;
    check L102() else D28();
  L30(r92):
    c30 = `as.logical`(r92);
    if c30 then L146() else L31();
  L93():
    goto L16(r45);
  L96():
    value4 = force? value3;
    checkMissing(value4);
    anyNA = ldf anyNA in base;
    r48 = dyn anyNA(value4);
    check L97() else D25();
  L98():
    stop = ldf stop;
    check L99() else D26();
  L142():
    value13 = ld value;
    check L144() else D50();
  L143():
    r91 = dyn base11(<sym value>);
    goto L30(r91);
  D25():
    deopt 89 [r48];
  D26():
    deopt 91 [];
  D28():
    deopt 97 [];
  D50():
    deopt 169 [value13];
  L31():
    goto L32();
  L32():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L150() else L151();
  L97():
    goto L17(r48);
  L99():
    r49 = dyn stop("missing replacement values are not allowed");
    check L100() else D27();
  L102():
    p7 = prom<V +>{
      lengths = ldf lengths;
      p6 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r52 = dyn lengths(p6);
      r53 = `==`(r52, 2);
      return r53;
    };
    r55 = dyn which(p7);
    check L103() else D29();
  L144():
    value14 = force? value13;
    checkMissing(value14);
    anyNA1 = ldf anyNA in base;
    r93 = dyn anyNA1(value14);
    check L145() else D51();
  L146():
    stop2 = ldf stop;
    check L147() else D52();
  D27():
    deopt 93 [r49];
  D29():
    deopt 99 [r55];
  D51():
    deopt 172 [r93];
  D52():
    deopt 174 [];
  L33(r97):
    r99 = `!`(r97);
    c31 = `as.logical`(r99);
    if c31 then L154() else L34();
  L100():
    goto L19();
  L103():
    st pos = r55;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  L145():
    goto L30(r93);
  L147():
    r94 = dyn stop2("missing replacement values are not allowed");
    check L148() else D53();
  L150():
    value15 = ld value;
    check L152() else D54();
  L151():
    r96 = dyn base12(<sym value>);
    goto L33(r96);
  D53():
    deopt 176 [r94];
  D54():
    deopt 181 [value15];
  L20(r57):
    st np = r57;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  L34():
    goto L35();
  L35():
    sym13 = ldf rep_len;
    base13 = ldf rep_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L158() else L159();
  L104():
    pos = ld pos;
    check L106() else D30();
  L105():
    r56 = dyn base8(<sym pos>);
    goto L20(r56);
  L148():
    goto L32();
  L152():
    value16 = force? value15;
    checkMissing(value16);
    length4 = ldf length in base;
    r98 = dyn length4(value16);
    check L153() else D55();
  L154():
    stop3 = ldf stop;
    check L155() else D56();
  D30():
    deopt 103 [pos];
  D55():
    deopt 184 [r98];
  D56():
    deopt 187 [];
  L21(r60):
    st nv = r60;
    np = ld np;
    check L112() else D34();
  L36(r103):
    st value = r103;
    invert7 = ld invert;
    check L166() else D62();
  L106():
    pos1 = force? pos;
    checkMissing(pos1);
    length2 = ldf length in base;
    r58 = dyn length2(pos1);
    check L107() else D31();
  L108():
    value5 = ld value;
    check L110() else D32();
  L109():
    r59 = dyn base9(<sym value>);
    goto L21(r59);
  L153():
    goto L33(r98);
  L155():
    r100 = dyn stop3("value does not provide any replacement values");
    check L156() else D57();
  L158():
    value17 = ld value;
    check L160() else D58();
  L159():
    r102 = dyn base13(<sym value>, <lang length(x)>);
    goto L36(r102);
  D31():
    deopt 106 [r58];
  D32():
    deopt 110 [value5];
  D34():
    deopt 115 [np];
  D57():
    deopt 189 [r100];
  D58():
    deopt 194 [value17];
  D62():
    deopt 205 [invert7];
  L107():
    goto L20(r58);
  L110():
    value6 = force? value5;
    checkMissing(value6);
    length3 = ldf length in base;
    r61 = dyn length3(value6);
    check L111() else D33();
  L112():
    np1 = force? np;
    checkMissing(np1);
    nv = ld nv;
    check L113() else D35();
  L156():
    goto L35();
  L160():
    value18 = force? value17;
    checkMissing(value18);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L161() else L162();
  L166():
    invert8 = force? invert7;
    checkMissing(invert8);
    c32 = `as.logical`(invert8);
    if c32 then L167() else L38();
  D33():
    deopt 113 [r61];
  D35():
    deopt 116 [np1, nv];
  L37(r105):
    rep_len2 = ldf rep_len in base;
    r107 = dyn rep_len2(value18, r105);
    check L165() else D61();
  L38():
    Map1 = ldf Map;
    check L171() else D65();
  L39(r113):
    st y = r113;
    unlist = ldf unlist;
    check L173() else D67();
  L111():
    goto L21(r61);
  L113():
    nv1 = force? nv;
    checkMissing(nv1);
    r62 = `!=`(np1, nv1);
    c26 = `as.logical`(r62);
    if c26 then L114() else L22();
  L161():
    x13 = ld x;
    check L163() else D59();
  L162():
    r104 = dyn base14(<sym x>);
    goto L37(r104);
  L167():
    Map = ldf Map;
    check L168() else D63();
  D59():
    deopt 198 [x13];
  D61():
    deopt 203 [r107];
  D63():
    deopt 208 [];
  D65():
    deopt 216 [];
  D67():
    deopt 225 [];
  L22():
    goto L26();
  L26():
    y2 = ld y;
    check L126() else D42();
  L114():
    nv2 = ld nv;
    check L115() else D36();
  L163():
    x14 = force? x13;
    checkMissing(x14);
    length5 = ldf length in base;
    r106 = dyn length5(x14);
    check L164() else D60();
  L165():
    goto L36(r107);
  L168():
    p17 = prom<V +>{
      r108 = clos inner4198313549;
      return r108;
    };
    p18 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    p19 = prom<V +>{
      value19 = ld value;
      value20 = force? value19;
      checkMissing(value20);
      return value20;
    };
    r112 = dyn Map[, , , `USE.NAMES`](p17, p18, p19, FALSE);
    check L169() else D64();
  L171():
    p20 = prom<V +>{
      r114 = clos inner4198313549;
      return r114;
    };
    p21 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      return y13;
    };
    p22 = prom<V +>{
      value21 = ld value;
      value22 = force? value21;
      checkMissing(value22);
      return value22;
    };
    r118 = dyn Map1[, , , `USE.NAMES`](p20, p21, p22, FALSE);
    check L172() else D66();
  L173():
    p23 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      return y15;
    };
    r120 = dyn unlist(p23);
    check L174() else D68();
  D36():
    deopt 119 [nv2];
  D42():
    deopt 139 [y2];
  D60():
    deopt 201 [r106];
  D64():
    deopt 214 [r112];
  D66():
    deopt 222 [r118];
  D68():
    deopt 227 [r120];
  L115():
    nv3 = force? nv2;
    checkMissing(nv3);
    r63 = `!`(nv3);
    c27 = `as.logical`(r63);
    if c27 then L116() else L23();
  L126():
    y3 = force? y2;
    checkMissing(y3);
    c28 = `is.object`(y3);
    if c28 then L127() else L128(y3);
  L164():
    goto L37(r106);
  L169():
    goto L39(r112);
  L172():
    goto L39(r118);
  L174():
    st y = r120;
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L175() else L176();
  L23():
    goto L24();
  L24():
    sym10 = ldf rep_len;
    base10 = ldf rep_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L120() else L121();
  L27(dx3):
    st y = dx3;
    paste0 = ldf paste0;
    check L131() else D44();
  L40(r122):
    l6 = ld y;
    names__ = ldf `names<-`;
    check L179() else D71();
  L116():
    stop1 = ldf stop;
    check L117() else D37();
  L127():
    dr2 = tryDispatchBuiltin.1("[", y3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L129() else L128(dr2);
  L128(y5):
    pos2 = ld pos;
    check L130() else D43();
  L175():
    x15 = ld x;
    check L177() else D69();
  L176():
    r121 = dyn base15(<sym x>);
    goto L40(r121);
  D37():
    deopt 123 [];
  D43():
    deopt 141 [y5, pos2];
  D44():
    deopt 146 [];
  D69():
    deopt 231 [x15];
  D71():
    deopt 236 [r122, l6, r122];
  L25(r67):
    st value = r67;
    goto L26();
  L117():
    r64 = dyn stop1("must have replacement values for matches");
    check L118() else D38();
  L120():
    value7 = ld value;
    check L122() else D39();
  L121():
    r66 = dyn base10(<sym value>, <sym np>);
    goto L25(r66);
  L129():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L27(dx2);
  L130():
    pos3 = force? pos2;
    __ = ldf `[` in base;
    r70 = dyn __(y5, pos3);
    goto L27(r70);
  L131():
    p10 = prom<V +>{
      sapply = ldf sapply;
      p8 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      p9 = prom<V +>{
        __1 = ld `[`;
        __2 = force? __1;
        checkMissing(__2);
        return __2;
      };
      r73 = dyn sapply(p8, p9, 1);
      return r73;
    };
    p11 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      return value10;
    };
    p14 = prom<V +>{
      sapply1 = ldf sapply;
      p12 = prom<V +>{
        y8 = ld y;
        y9 = force? y8;
        checkMissing(y9);
        return y9;
      };
      p13 = prom<V +>{
        __3 = ld `[`;
        __4 = force? __3;
        checkMissing(__4);
        return __4;
      };
      r78 = dyn sapply1(p12, p13, 2);
      return r78;
    };
    r80 = dyn paste0(p10, p11, p14);
    check L132() else D45();
  L177():
    x16 = force? x15;
    checkMissing(x16);
    names = ldf names in base;
    r123 = dyn names(x16);
    check L178() else D70();
  L179():
    r124 = dyn names__(l6, NULL, r122);
    check L180() else D72();
  D38():
    deopt 125 [r64];
  D39():
    deopt 130 [value7];
  D45():
    deopt 150 [r80];
  D70():
    deopt 234 [r123];
  D72():
    deopt 238 [r122, r124];
  L118():
    goto L24();
  L122():
    value8 = force? value7;
    checkMissing(value8);
    np2 = ld np;
    check L123() else D40();
  L132():
    l3 = ld x;
    c29 = `is.object`(l3);
    if c29 then L133() else L134(r80, l3);
  L178():
    goto L40(r123);
  L180():
    st y = r124;
    y16 = ld y;
    check L181() else D73();
  D40():
    deopt 132 [np2];
  D73():
    deopt 240 [y16];
  L28(dx5):
    st x = dx5;
    x11 = ld x;
    check L137() else D47();
  L123():
    np3 = force? np2;
    checkMissing(np3);
    rep_len1 = ldf rep_len in base;
    r68 = dyn rep_len1(value8, np3);
    check L124() else D41();
  L133():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r80);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L135() else L134(r80, dr4);
  L134(r82, l5):
    pos4 = ld pos;
    check L136() else D46();
  L181():
    y17 = force? y16;
    checkMissing(y17);
    popenv;
    return y17;
  D41():
    deopt 135 [r68];
  D46():
    deopt 152 [r82, l5, r80, pos4];
  D47():
    deopt 156 [x11];
  L124():
    goto L25(r68);
  L135():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx4);
  L136():
    pos5 = force? pos4;
    ___1 = ldf `[<-` in base;
    r85 = dyn ___1(l5, r80, pos5);
    goto L28(r85);
  L137():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg u1:*, reg u2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg v1:*, reg v2:V, reg length1:cls, reg r5:V, reg nv:*, reg nv1:V, reg nu:*, reg nu1:V, reg r6:V, reg r7:V, reg c:L, reg nv2:*, reg nv3:V, reg r8:V, reg c1:L, reg stop:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg v3:*, reg v4:V, reg nu2:*, reg nu3:V, reg r13:V, reg rep_len:cls, reg r14:V, reg paste0:cls, reg v5:*, reg v6:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg u3:*, reg u4:V, reg c2:cls, reg r19:V, reg p1:p(V +), reg r21:V |
    mkenv;
    st u = u;
    st v = v;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st nu = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    u1 = ld u;
    check L9() else D0();
  L8():
    r = dyn base(<sym u>);
    goto L0(r);
  D0():
    deopt 2 [u1];
  L1(r4):
    st nv = r4;
    nv = ld nv;
    check L15() else D4();
  L9():
    u2 = force? u1;
    checkMissing(u2);
    length = ldf length in base;
    r2 = dyn length(u2);
    check L10() else D1();
  L11():
    v1 = ld v;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym v>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [v1];
  D4():
    deopt 14 [nv];
  L10():
    goto L0(r2);
  L13():
    v2 = force? v1;
    checkMissing(v2);
    length1 = ldf length in base;
    r5 = dyn length1(v2);
    check L14() else D3();
  L15():
    nv1 = force? nv;
    checkMissing(nv1);
    nu = ld nu;
    check L16() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 15 [nv1, nu];
  L14():
    goto L1(r5);
  L16():
    nu1 = force? nu;
    checkMissing(nu1);
    r6 = `+`(nu1, 1);
    r7 = `!=`(nv1, r6);
    c = `as.logical`(r7);
    if c then L17() else L2();
  L2():
    goto L6();
  L6():
    paste0 = ldf paste0;
    check L29() else D12();
  L17():
    nv2 = ld nv;
    check L18() else D6();
  D6():
    deopt 20 [nv2];
  D12():
    deopt 43 [];
  L18():
    nv3 = force? nv2;
    checkMissing(nv3);
    r8 = `!`(nv3);
    c1 = `as.logical`(r8);
    if c1 then L19() else L3();
  L29():
    p = prom<V +>{
      v5 = ld v;
      v6 = force? v5;
      checkMissing(v6);
      return v6;
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      c2 = ldf c in base;
      r19 = dyn c2(u4, "");
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym u>, "");
      goto L0(r17);
    };
    r21 = dyn paste0[, , collapse](p, p1, "");
    check L30() else D13();
  D13():
    deopt 48 [r21];
  L3():
    goto L4();
  L4():
    sym2 = ldf rep_len;
    base2 = ldf rep_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L19():
    stop = ldf stop;
    check L20() else D7();
  L30():
    popenv;
    return r21;
  D7():
    deopt 24 [];
  L5(r12):
    st v = r12;
    goto L6();
  L20():
    r9 = dyn stop("must have replacements for non-matches");
    check L21() else D8();
  L23():
    v3 = ld v;
    check L25() else D9();
  L24():
    r11 = dyn base2(<sym v>, <lang `+`(nu, 1)>);
    goto L5(r11);
  D8():
    deopt 26 [r9];
  D9():
    deopt 31 [v3];
  L21():
    goto L4();
  L25():
    v4 = force? v3;
    checkMissing(v4);
    nu2 = ld nu;
    check L26() else D10();
  D10():
    deopt 33 [nu2];
  L26():
    nu3 = force? nu2;
    checkMissing(nu3);
    r13 = `+`(nu3, 1);
    rep_len = ldf rep_len in base;
    r14 = dyn rep_len(v4, r13);
    check L27() else D11();
  D11():
    deopt 38 [r14];
  L27():
    goto L5(r14);
  }
}