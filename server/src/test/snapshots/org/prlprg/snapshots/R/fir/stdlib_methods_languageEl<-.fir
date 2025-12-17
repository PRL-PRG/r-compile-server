fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2751153939;
    st `languageEl<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2751153939(object, which, value) {
  (reg object:*, reg which:*, reg value:*) -+> V { var object:*, var which:*, var value:*, reg as_list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg data:*, reg data1:V, reg length:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg object3:*, reg object4:V, reg typeof:cls, reg r7:V, reg type:*, reg type1:V, reg r8:V, reg c:L, reg environment:cls, reg object5:*, reg object6:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg which1:*, reg which2:V, reg c1:L, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg which3:*, reg which4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg data2:*, reg data3:V, reg names:cls, reg r19:V, reg match:cls, reg r20:V, reg is_na:cls, reg r21:V, reg c3:L, reg data4:*, reg data5:V, reg c4:L, reg data7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n:*, reg n1:V, reg __:cls, reg r22:V, reg data8:*, reg data9:V, reg c5:L, reg data11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n2:*, reg n3:V, reg r23:V, reg __1:cls, reg r24:V, reg value1:*, reg value2:V, reg l:*, reg c6:L, reg value4:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg which5:*, reg which6:V, reg ____:cls, reg r25:V, reg body:*, reg body1:V, reg l3:*, reg c7:L, reg body3:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg body5:V, reg dx7:V, reg n4:*, reg n5:V, reg r26:V, reg ____1:cls, reg r27:V, reg body6:V, reg value7:*, reg value8:V, reg l6:*, reg c8:L, reg value10:V, reg l8:*, reg dr8:V, reg dc4:L, reg dx8:V, reg value12:V, reg dx9:V, reg which7:*, reg which8:V, reg ____2:cls, reg r28:V, reg which9:*, reg which10:V, reg r29:V, reg c9:L, reg c10:V, reg which11:*, reg which12:V, reg n6:*, reg n7:V, reg r30:V, reg c12:L, reg c13:V, reg c15:L, reg stop:cls, reg r31:V, reg value13:*, reg value14:V, reg l9:*, reg c16:L, reg value16:V, reg l11:*, reg dr10:V, reg dc5:L, reg dx10:V, reg value18:V, reg dx11:V, reg which13:*, reg which14:V, reg ____3:cls, reg r33:V, reg as_function:cls, reg data12:*, reg data13:V, reg p2:p(V +), reg r35:V, reg ev:*, reg ev1:V, reg l12:*, reg environment__:cls, reg r36:V, reg object7:*, reg object8:V, reg type2:*, reg type3:V, reg r37:V, reg c17:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg which15:*, reg which16:V, reg c18:L, reg c19:L, reg value19:*, reg value20:V, reg l13:*, reg c20:L, reg value22:V, reg l15:*, reg dr12:V, reg dc6:L, reg dx12:V, reg value24:V, reg dx13:V, reg which17:*, reg which18:V, reg ____4:cls, reg r40:V, reg isGrammarSymbol:cls, reg data14:*, reg data15:V, reg c21:L, reg data17:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __2:cls, reg r41:V, reg p3:p(V +), reg r43:V, reg c22:L, reg value26:*, reg value27:V, reg l16:*, reg c23:L, reg value29:V, reg l18:*, reg dr16:V, reg dc8:L, reg dx16:V, reg value31:V, reg dx17:V, reg which19:*, reg which20:V, reg r44:V, reg ____5:cls, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg which21:*, reg which22:V, reg identical:cls, reg r48:V, reg c24:L, reg c26:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg c29:L, reg r50:V, reg value32:*, reg value33:V, reg c30:L, reg c31:L, reg c32:V, reg c34:L, reg as_symbol:cls, reg value34:*, reg value35:V, reg p4:p(V +), reg r52:V, reg value36:*, reg value37:V, reg l19:*, reg c35:L, reg value39:V, reg l21:*, reg dr18:V, reg dc9:L, reg dx18:V, reg value41:V, reg dx19:V, reg which23:*, reg which24:V, reg ____6:cls, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg data18:*, reg data19:V, reg as_call:cls, reg r57:V, reg value42:*, reg value43:V, reg l22:*, reg c36:L, reg value45:V, reg l24:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg which25:*, reg which26:V, reg ____7:cls, reg r58:V, reg object9:*, reg object10:V |
    mkenv;
    st object = object;
    st which = which;
    st value = value;
    as_list = ldf `as.list`;
    check L35() else D0();
  D0():
    deopt 1 [];
  L35():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn as_list(p);
    check L36() else D1();
  D1():
    deopt 3 [r1];
  L36():
    st data = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L0(r3):
    st n = r3;
    sym1 = ldf typeof;
    base1 = ldf typeof in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L37():
    data = ld data;
    check L39() else D2();
  L38():
    r2 = dyn base(<sym data>);
    goto L0(r2);
  D2():
    deopt 7 [data];
  L1(r6):
    st type = r6;
    type = ld type;
    check L45() else D6();
  L39():
    data1 = force? data;
    checkMissing(data1);
    length = ldf length in base;
    r4 = dyn length(data1);
    check L40() else D3();
  L41():
    object3 = ld object;
    check L43() else D4();
  L42():
    r5 = dyn base1(<sym object>);
    goto L1(r5);
  D3():
    deopt 10 [r4];
  D4():
    deopt 14 [object3];
  D6():
    deopt 19 [type];
  L40():
    goto L0(r4);
  L43():
    object4 = force? object3;
    checkMissing(object4);
    typeof = ldf typeof in base;
    r7 = dyn typeof(object4);
    check L44() else D5();
  L45():
    type1 = force? type;
    checkMissing(type1);
    r8 = `==`(type1, "closure");
    c = `as.logical`(r8);
    if c then L46() else L2();
  D5():
    deopt 17 [r7];
  L2():
    type2 = ld type;
    check L113() else D38();
  L44():
    goto L1(r7);
  L46():
    environment = ldf environment;
    check L47() else D7();
  D7():
    deopt 24 [];
  D38():
    deopt 122 [type2];
  L47():
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r10 = dyn environment(p1);
    check L48() else D8();
  L113():
    type3 = force? type2;
    checkMissing(type3);
    r37 = `==`(type3, "language");
    c17 = `as.logical`(r37);
    if c17 then L114() else L20();
  D8():
    deopt 26 [r10];
  L20():
    value42 = ld value;
    check L157() else D55();
  L48():
    st ev = r10;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L114():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  D55():
    deopt 189 [value42];
  L3(r12):
    c2 = `as.logical`(r12);
    if c2 then L52() else L4();
  L21(r39):
    c19 = `as.logical`(r39);
    if c19 then L118() else L22();
  L49():
    which1 = ld which;
    check L51() else D9();
  L50():
    r11 = dyn base2(<sym which>);
    goto L3(r11);
  L115():
    which15 = ld which;
    check L117() else D39();
  L116():
    r38 = dyn base6(<sym which>);
    goto L21(r38);
  L157():
    value43 = force? value42;
    checkMissing(value43);
    l22 = ld object;
    c36 = `is.object`(l22);
    if c36 then L158() else L159(value43, l22);
  D9():
    deopt 29 [which1];
  D39():
    deopt 127 [which15];
  L4():
    which9 = ld which;
    check L92() else D25();
  L15():
    as_function = ldf `as.function`;
    check L106() else D32();
  L22():
    isGrammarSymbol = ldf isGrammarSymbol;
    check L125() else D42();
  L24():
    sym9 = ldf `as.call`;
    base9 = ldf `as.call` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L152() else L153();
  L34(dx21):
    st object = dx21;
    object9 = ld object;
    check L162() else D57();
  L51():
    which2 = force? which1;
    checkMissing(which2);
    c1 = `is.character`(which2);
    goto L3(c1);
  L52():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L117():
    which16 = force? which15;
    checkMissing(which16);
    c18 = `is.character`(which16);
    goto L21(c18);
  L118():
    value19 = ld value;
    check L119() else D40();
  L158():
    dr20 = tryDispatchBuiltin.0("[[<-", l22, value43);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L160() else L159(value43, dr20);
  L159(value45, l24):
    which25 = ld which;
    check L161() else D56();
  D25():
    deopt 86 [which9];
  D32():
    deopt 109 [];
  D40():
    deopt 130 [value19];
  D42():
    deopt 138 [];
  D56():
    deopt 192 [value45, l24, value43, which25];
  D57():
    deopt 196 [object9];
  L5(r14):
    c3 = `as.logical`(r14);
    if c3 then L64() else L8();
  L33(r56):
    popenv;
    return r56;
  L53():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L54():
    r13 = dyn base3(<lang match(which, names(data))>);
    goto L5(r13);
  L92():
    which10 = force? which9;
    checkMissing(which10);
    r29 = `<`(which10, 1.0);
    c9 = `as.logical`(r29);
    if c9 then L16(c9) else L93();
  L106():
    p2 = prom<V +>{
      data12 = ld data;
      data13 = force? data12;
      checkMissing(data13);
      return data13;
    };
    r35 = dyn as_function(p2);
    check L107() else D33();
  L119():
    value20 = force? value19;
    checkMissing(value20);
    l13 = ld data;
    c20 = `is.object`(l13);
    if c20 then L120() else L121(value20, l13);
  L125():
    p3 = prom<V +>{
      data14 = ld data;
      data15 = force? data14;
      checkMissing(data15);
      c21 = `is.object`(data15);
      if c21 then L1() else L2(data15);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", data15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(data17):
      __2 = ldf `[[` in base;
      r41 = dyn __2(data17, 1);
      goto L0(r41);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r43 = dyn isGrammarSymbol(p3);
    check L126() else D43();
  L152():
    data18 = ld data;
    check L154() else D53();
  L153():
    r55 = dyn base9(<sym data>);
    goto L33(r55);
  L160():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L34(dx20);
  L161():
    which26 = force? which25;
    ____7 = ldf `[[<-` in base;
    r58 = dyn ____7(l24, value43, which26);
    goto L34(r58);
  L162():
    object10 = force? object9;
    checkMissing(object10);
    popenv;
    return object10;
  D33():
    deopt 111 [r35];
  D43():
    deopt 140 [r43];
  D53():
    deopt 185 [data18];
  L6(r16):
    is_na = ldf `is.na` in base;
    r21 = dyn is_na(r16);
    check L63() else D14();
  L8():
    value7 = ld value;
    check L86() else D23();
  L13(body6):
    goto L15();
  L16(c10):
    c15 = `as.logical`(c10);
    if c15 then L97() else L17();
  L23(value24, dx13):
    st data = dx13;
    goto L24();
  L55():
    which3 = ld which;
    check L57() else D10();
  L56():
    r15 = dyn base4(<sym which>, <lang names(data)>);
    goto L6(r15);
  L64():
    data4 = ld data;
    check L65() else D15();
  L93():
    which11 = ld which;
    check L94() else D26();
  L107():
    st object = r35;
    ev = ld ev;
    check L108() else D34();
  L120():
    dr12 = tryDispatchBuiltin.0("[[<-", l13, value20);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L122() else L121(value20, dr12);
  L121(value22, l15):
    which17 = ld which;
    check L123() else D41();
  L126():
    c22 = `as.logical`(r43);
    if c22 then L127() else L25();
  L154():
    data19 = force? data18;
    checkMissing(data19);
    as_call = ldf `as.call` in base;
    r57 = dyn as_call(data19);
    check L155() else D54();
  D10():
    deopt 36 [which3];
  D14():
    deopt 49 [r21];
  D15():
    deopt 50 [data4];
  D23():
    deopt 79 [value7];
  D26():
    deopt 90 [c9, which11];
  D34():
    deopt 113 [ev];
  D41():
    deopt 133 [value22, l15, value20, which17];
  D54():
    deopt 188 [r57];
  L17():
    goto L18();
  L18():
    value13 = ld value;
    check L101() else D30();
  L25():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L134() else L135();
  L57():
    which4 = force? which3;
    checkMissing(which4);
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L63():
    goto L5(r21);
  L65():
    data5 = force? data4;
    checkMissing(data5);
    c4 = `is.object`(data5);
    if c4 then L66() else L67(data5);
  L86():
    value8 = force? value7;
    checkMissing(value8);
    l6 = ld data;
    c8 = `is.object`(l6);
    if c8 then L87() else L88(value8, l6);
  L94():
    which12 = force? which11;
    checkMissing(which12);
    n6 = ld n;
    check L95() else D27();
  L97():
    stop = ldf stop;
    check L98() else D28();
  L108():
    ev1 = force? ev;
    checkMissing(ev1);
    l12 = ld object;
    environment__ = ldf `environment<-`;
    check L109() else D35();
  L122():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(value20, dx12);
  L123():
    which18 = force? which17;
    ____4 = ldf `[[<-` in base;
    r40 = dyn ____4(l15, value20, which18);
    goto L23(value22, r40);
  L127():
    value26 = ld value;
    check L128() else D44();
  L155():
    goto L33(r57);
  D27():
    deopt 91 [c9, which12, n6];
  D28():
    deopt 96 [];
  D30():
    deopt 101 [value13];
  D35():
    deopt 116 [ev1, l12, ev1];
  D44():
    deopt 141 [value26];
  L7(r18):
    match = ldf match in base;
    r20 = dyn match(which4, r18, NA_INT, NULL);
    check L62() else D13();
  L9(dx1):
    st body = dx1;
    data8 = ld data;
    check L70() else D17();
  L14(value12, dx9):
    st data = dx9;
    goto L13(value12);
  L27(r47):
    c24 = `as.logical`(r47);
    if c24 then L138() else L28(c24);
  L58():
    data2 = ld data;
    check L60() else D11();
  L59():
    r17 = dyn base5(<sym data>);
    goto L7(r17);
  L66():
    dr = tryDispatchBuiltin.1("[[", data5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(dr);
  L67(data7):
    n = ld n;
    check L69() else D16();
  L87():
    dr8 = tryDispatchBuiltin.0("[[<-", l6, value8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L89() else L88(value8, dr8);
  L88(value10, l8):
    which7 = ld which;
    check L90() else D24();
  L95():
    n7 = force? n6;
    checkMissing(n7);
    r30 = `>`(which12, n7);
    c12 = `as.logical`(r30);
    c13 = `||`(c9, c12);
    goto L16(c13);
  L98():
    r31 = dyn stop("invalid index for function argument");
    check L99() else D29();
  L101():
    value14 = force? value13;
    checkMissing(value14);
    l9 = ld data;
    c16 = `is.object`(l9);
    if c16 then L102() else L103(value14, l9);
  L109():
    r36 = dyn environment__(l12, NULL, ev1);
    check L110() else D36();
  L128():
    value27 = force? value26;
    checkMissing(value27);
    l16 = ld data;
    c23 = `is.object`(l16);
    if c23 then L129() else L130(value27, l16);
  L134():
    which21 = ld which;
    check L136() else D46();
  L135():
    r46 = dyn base7(<sym which>, 1.0);
    goto L27(r46);
  D11():
    deopt 40 [data2];
  D13():
    deopt 47 [r20];
  D16():
    deopt 52 [data7, n];
  D17():
    deopt 56 [data8];
  D24():
    deopt 82 [value10, l8, value8, which7];
  D29():
    deopt 98 [r31];
  D36():
    deopt 118 [ev1, r36];
  D46():
    deopt 152 [which21];
  L19(value18, dx11):
    st data = dx11;
    goto L15();
  L26(value31, dx17):
    st data = dx17;
    goto L24();
  L28(c26):
    c34 = `as.logical`(c26);
    if c34 then L143() else L30();
  L60():
    data3 = force? data2;
    checkMissing(data3);
    names = ldf names in base;
    r19 = dyn names(data3);
    check L61() else D12();
  L62():
    goto L6(r20);
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L69():
    n1 = force? n;
    __ = ldf `[[` in base;
    r22 = dyn __(data7, n1);
    goto L9(r22);
  L70():
    data9 = force? data8;
    checkMissing(data9);
    c5 = `is.object`(data9);
    if c5 then L71() else L72(data9);
  L89():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(value8, dx8);
  L90():
    which8 = force? which7;
    ____2 = ldf `[[<-` in base;
    r28 = dyn ____2(l8, value8, which8);
    goto L14(value10, r28);
  L99():
    goto L18();
  L102():
    dr10 = tryDispatchBuiltin.0("[[<-", l9, value14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L104() else L103(value14, dr10);
  L103(value16, l11):
    which13 = ld which;
    check L105() else D31();
  L110():
    st object = r36;
    object7 = ld object;
    check L111() else D37();
  L129():
    dr16 = tryDispatchBuiltin.0("[[<-", l16, value27);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L131() else L130(value27, dr16);
  L130(value29, l18):
    which19 = ld which;
    check L132() else D45();
  L136():
    which22 = force? which21;
    checkMissing(which22);
    identical = ldf identical in base;
    r48 = dyn identical(which22, 1.0, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L137() else D47();
  L138():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L139() else L140();
  D12():
    deopt 43 [r19];
  D31():
    deopt 104 [value16, l11, value14, which13];
  D37():
    deopt 120 [object7];
  D45():
    deopt 144 [value29, l18, value27, which19];
  D47():
    deopt 163 [r48];
  L10(dx3):
    st data = dx3;
    value1 = ld value;
    check L75() else D19();
  L29(c29, r50):
    c31 = `as.logical`(r50);
    c32 = `&&`(c29, c31);
    goto L28(c32);
  L30():
    goto L31();
  L31():
    value36 = ld value;
    check L147() else D51();
  L61():
    goto L7(r19);
  L71():
    dr2 = tryDispatchBuiltin.1("[", data9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(data11):
    n2 = ld n;
    check L74() else D18();
  L104():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(value14, dx10);
  L105():
    which14 = force? which13;
    ____3 = ldf `[[<-` in base;
    r33 = dyn ____3(l11, value14, which14);
    goto L19(value16, r33);
  L111():
    object8 = force? object7;
    checkMissing(object8);
    popenv;
    return object8;
  L131():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L26(value27, dx16);
  L132():
    which20 = force? which19;
    checkMissing(which20);
    r44 = `+`(which20, 1.0);
    ____5 = ldf `[[<-` in base;
    r45 = dyn ____5(l18, value27, r44);
    goto L26(value29, r45);
  L137():
    goto L27(r48);
  L139():
    value32 = ld value;
    check L141() else D48();
  L140():
    r49 = dyn base8(<sym value>);
    goto L29(c24, r49);
  L143():
    as_symbol = ldf `as.symbol`;
    check L144() else D49();
  D18():
    deopt 58 [data11, n2];
  D19():
    deopt 63 [value1];
  D48():
    deopt 165 [c24, value32];
  D49():
    deopt 170 [];
  D51():
    deopt 176 [value36];
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L74():
    n3 = force? n2;
    checkMissing(n3);
    r23 = `-`(<missing>, n3);
    __1 = ldf `[` in base;
    r24 = dyn __1(data11, r23);
    goto L10(r24);
  L75():
    value2 = force? value1;
    checkMissing(value2);
    l = ld data;
    c6 = `is.object`(l);
    if c6 then L76() else L77(value2, l);
  L141():
    value33 = force? value32;
    checkMissing(value33);
    c30 = `is.character`(value33);
    goto L29(c24, c30);
  L144():
    p4 = prom<V +>{
      value34 = ld value;
      value35 = force? value34;
      checkMissing(value35);
      return value35;
    };
    r52 = dyn as_symbol(p4);
    check L145() else D50();
  L147():
    value37 = force? value36;
    checkMissing(value37);
    l19 = ld data;
    c35 = `is.object`(l19);
    if c35 then L148() else L149(value37, l19);
  D50():
    deopt 172 [r52];
  L11(dx5):
    st data = dx5;
    body = ld body;
    check L80() else D21();
  L32(value41, dx19):
    st data = dx19;
    goto L24();
  L76():
    dr4 = tryDispatchBuiltin.0("[[<-", l, value2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L78() else L77(value2, dr4);
  L77(value4, l2):
    which5 = ld which;
    check L79() else D20();
  L145():
    st value = r52;
    goto L31();
  L148():
    dr18 = tryDispatchBuiltin.0("[[<-", l19, value37);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L150() else L149(value37, dr18);
  L149(value39, l21):
    which23 = ld which;
    check L151() else D52();
  D20():
    deopt 66 [value4, l2, value2, which5];
  D21():
    deopt 70 [body];
  D52():
    deopt 179 [value39, l21, value37, which23];
  L78():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L79():
    which6 = force? which5;
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l2, value2, which6);
    goto L11(r25);
  L80():
    body1 = force? body;
    checkMissing(body1);
    l3 = ld data;
    c7 = `is.object`(l3);
    if c7 then L81() else L82(body1, l3);
  L150():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L32(value37, dx18);
  L151():
    which24 = force? which23;
    ____6 = ldf `[[<-` in base;
    r54 = dyn ____6(l21, value37, which24);
    goto L32(value39, r54);
  L12(body5, dx7):
    st data = dx7;
    goto L13(body5);
  L81():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, body1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(body1, dr6);
  L82(body3, l5):
    n4 = ld n;
    check L84() else D22();
  D22():
    deopt 73 [body3, l5, body1, n4];
  L83():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(body1, dx6);
  L84():
    n5 = force? n4;
    checkMissing(n5);
    r26 = `+`(n5, 1.0);
    ____1 = ldf `[[<-` in base;
    r27 = dyn ____1(l5, body1, r26);
    goto L12(body3, r27);
  }
}