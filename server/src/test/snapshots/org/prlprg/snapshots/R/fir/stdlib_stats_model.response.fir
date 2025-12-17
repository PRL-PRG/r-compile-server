fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1651100019;
    st `model.response` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1651100019(data, type) {
  (reg data:*, reg type:*) -+> V { var data:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg data1:*, reg data2:V, reg attr:cls, reg r4:V, reg attr1:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg data3:*, reg data4:V, reg is_list:cls, reg r8:V, reg c1:L, reg c2:V, reg is_data_frame:cls, reg data5:*, reg data6:V, reg p:p(V +), reg r10:V, reg c4:L, reg c5:V, reg c7:L, reg data7:*, reg data8:V, reg c8:L, reg data10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg type1:*, reg type2:V, reg r12:V, reg c9:L, reg c11:V, reg is_factor:cls, reg v:*, reg v1:V, reg p1:p(V +), reg r14:V, reg c12:L, reg c13:V, reg c15:L, reg warning:cls, reg r15:V, reg type3:*, reg type4:V, reg r17:V, reg c16:L, reg c17:V, reg type5:*, reg type6:V, reg r18:V, reg c19:L, reg c20:V, reg c22:L, reg l:*, reg storage_mode__:cls, reg r19:V, reg type7:*, reg type8:V, reg r20:V, reg c23:L, reg stop:cls, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg v2:*, reg v3:V, reg is_matrix:cls, reg r24:V, reg c24:L, reg c26:V, reg ncol:cls, reg v4:*, reg v5:V, reg p2:p(V +), reg r26:V, reg r27:V, reg c27:L, reg c28:V, reg c30:L, reg l1:*, reg dim__:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg v6:*, reg v7:V, reg c31:L, reg c32:L, reg c34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg c37:L, reg r33:V, reg v8:*, reg v9:V, reg inherits:cls, reg r34:V, reg c38:L, reg c39:V, reg c41:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg v10:*, reg v11:V, reg unclass:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg data11:*, reg data12:V, reg attr2:cls, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg rows:*, reg rows1:V, reg length:cls, reg r44:V, reg c42:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg v12:*, reg v13:V, reg length1:cls, reg r47:V, reg nrows:*, reg nrows1:V, reg r48:V, reg c43:L, reg rows2:*, reg rows3:V, reg l2:*, reg names__:cls, reg r49:V, reg rows4:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg v14:*, reg v15:V, reg dim:cls, reg r54:V, reg length2:cls, reg r55:V, reg r56:V, reg c44:L, reg dd:*, reg dd1:V, reg c45:L, reg dd3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r57:V, reg nrows2:*, reg nrows3:V, reg r58:V, reg c46:L, reg c48:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r59:V, reg c51:L, reg r60:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg c54:L, reg r62:V, reg v16:*, reg v17:V, reg dimnames:cls, reg r63:V, reg c55:L, reg c57:L, reg r65:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c59:L, reg dx5:V, reg __2:cls, reg r66:V, reg length3:cls, reg r67:V, reg r68:V, reg c60:L, reg c61:V, reg c63:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg r70:V, reg rows5:*, reg rows6:V, reg dn:*, reg dn1:V, reg c64:L, reg dn3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r71:V, reg list:cls, reg r72:V, reg l3:*, reg dimnames__:cls, reg r73:V, reg r74:V, reg v18:*, reg v19:V, reg stop1:cls, reg r75:V |
    mkenv;
    st data = data;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("any") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L1(r1):
    c = `as.logical`(r1);
    if c then L50() else L3();
  L43():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L44():
    r = dyn base(<lang attr(data, "terms")>, "response");
    goto L1(r);
  L2(r3):
    attr1 = ldf attr in base;
    r5 = dyn attr1(r3, "response");
    check L49() else D2();
  L3():
    popenv;
    return NULL;
  L45():
    data1 = ld data;
    check L47() else D0();
  L46():
    r2 = dyn base1(<sym data>, "terms");
    goto L2(r2);
  L50():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  D0():
    deopt 4 [data1];
  D2():
    deopt 11 [r5];
  L4(r7):
    c1 = `as.logical`(r7);
    if c1 then L5(c1) else L55();
  L47():
    data2 = force? data1;
    checkMissing(data2);
    attr = ldf attr in base;
    r4 = dyn attr(data2, "terms");
    check L48() else D1();
  L49():
    goto L1(r5);
  L51():
    data3 = ld data;
    check L53() else D3();
  L52():
    r6 = dyn base2(<sym data>);
    goto L4(r6);
  D1():
    deopt 8 [r4];
  D3():
    deopt 14 [data3];
  L5(c2):
    c7 = `as.logical`(c2);
    if c7 then L59() else L6();
  L48():
    goto L2(r4);
  L53():
    data4 = force? data3;
    checkMissing(data4);
    is_list = ldf `is.list` in base;
    r8 = dyn is_list(data4);
    check L54() else D4();
  L55():
    is_data_frame = ldf `is.data.frame`;
    check L56() else D5();
  D4():
    deopt 17 [r8];
  D5():
    deopt 19 [c1];
  L6():
    stop1 = ldf stop;
    check L173() else D55();
  L54():
    goto L4(r8);
  L56():
    p = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r10 = dyn is_data_frame(p);
    check L57() else D6();
  L59():
    data7 = ld data;
    check L60() else D7();
  D6():
    deopt 21 [c1, r10];
  D7():
    deopt 23 [data7];
  D55():
    deopt 203 [];
  L57():
    c4 = `as.logical`(r10);
    c5 = `||`(c1, c4);
    goto L5(c5);
  L60():
    data8 = force? data7;
    checkMissing(data8);
    c8 = `is.object`(data8);
    if c8 then L61() else L62(data8);
  L173():
    r75 = dyn stop1("invalid 'data' argument");
    check L174() else D56();
  D56():
    deopt 205 [r75];
  L7(dx1):
    st v = dx1;
    type1 = ld type;
    check L64() else D8();
  L61():
    dr = tryDispatchBuiltin.1("[[", data8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(data10):
    __ = ldf `[[` in base;
    r11 = dyn __(data10, 1);
    goto L7(r11);
  L174():
    popenv;
    return r75;
  D8():
    deopt 29 [type1];
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L64():
    type2 = force? type1;
    checkMissing(type2);
    r12 = `==`(type2, "numeric");
    c9 = `as.logical`(r12);
    if c9 then L65() else L8(c9);
  L8(c11):
    c15 = `as.logical`(c11);
    if c15 then L69() else L9();
  L65():
    is_factor = ldf `is.factor`;
    check L66() else D9();
  D9():
    deopt 34 [c9];
  L9():
    type3 = ld type;
    check L73() else D13();
  L10():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L86() else L87();
  L66():
    p1 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    r14 = dyn is_factor(p1);
    check L67() else D10();
  L69():
    warning = ldf warning;
    check L70() else D11();
  D10():
    deopt 36 [c9, r14];
  D11():
    deopt 39 [];
  D13():
    deopt 42 [type3];
  L14(r23):
    c24 = `as.logical`(r23);
    if c24 then L90() else L15(c24);
  L67():
    c12 = `as.logical`(r14);
    c13 = `&&`(c9, c12);
    goto L8(c13);
  L70():
    r15 = dyn warning("using type = \"numeric\" with a factor response will be ignored");
    check L71() else D12();
  L73():
    type4 = force? type3;
    checkMissing(type4);
    r17 = `==`(type4, "numeric");
    c16 = `as.logical`(r17);
    if c16 then L11(c16) else L74();
  L86():
    v2 = ld v;
    check L88() else D20();
  L87():
    r22 = dyn base3(<sym v>);
    goto L14(r22);
  D12():
    deopt 41 [r15];
  D20():
    deopt 70 [v2];
  L11(c17):
    c22 = `as.logical`(c17);
    if c22 then L77() else L12();
  L15(c26):
    c30 = `as.logical`(c26);
    if c30 then L94() else L16();
  L71():
    goto L10();
  L74():
    type5 = ld type;
    check L75() else D14();
  L88():
    v3 = force? v2;
    checkMissing(v3);
    is_matrix = ldf `is.matrix` in base;
    r24 = dyn is_matrix(v3);
    check L89() else D21();
  L90():
    ncol = ldf ncol;
    check L91() else D22();
  D14():
    deopt 46 [c16, type5];
  D21():
    deopt 73 [r24];
  D22():
    deopt 75 [c24];
  L12():
    type7 = ld type;
    check L81() else D17();
  L16():
    goto L17();
  L17():
    sym4 = ldf `is.object`;
    base4 = ldf `is.object` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  L75():
    type6 = force? type5;
    checkMissing(type6);
    r18 = `==`(type6, "double");
    c19 = `as.logical`(r18);
    c20 = `||`(c16, c19);
    goto L11(c20);
  L77():
    l = ld v;
    storage_mode__ = ldf `storage.mode<-`;
    check L78() else D15();
  L89():
    goto L14(r24);
  L91():
    p2 = prom<V +>{
      v4 = ld v;
      v5 = force? v4;
      checkMissing(v5);
      return v5;
    };
    r26 = dyn ncol(p2);
    check L92() else D23();
  L94():
    l1 = ld v;
    dim__ = ldf `dim<-`;
    check L95() else D24();
  D15():
    deopt 54 ["double", l, "double"];
  D17():
    deopt 58 [type7];
  D23():
    deopt 77 [c24, r26];
  D24():
    deopt 84 [NULL, l1, NULL];
  L18(r31):
    c32 = `as.logical`(r31);
    if c32 then L101() else L19(c32);
  L78():
    r19 = dyn storage_mode__(l, NULL, "double");
    check L79() else D16();
  L81():
    type8 = force? type7;
    checkMissing(type8);
    r20 = `!=`(type8, "any");
    c23 = `as.logical`(r20);
    if c23 then L82() else L13();
  L92():
    r27 = `==`(r26, 1);
    c27 = `as.logical`(r27);
    c28 = `&&`(c24, c27);
    goto L15(c28);
  L95():
    r28 = dyn dim__(l1, NULL, NULL);
    check L96() else D25();
  L98():
    v6 = ld v;
    check L100() else D26();
  L99():
    r30 = dyn base4(<sym v>);
    goto L18(r30);
  D16():
    deopt 56 ["double", r19];
  D25():
    deopt 86 [NULL, r28];
  D26():
    deopt 91 [v6];
  L13():
    goto L10();
  L19(c34):
    c41 = `as.logical`(c34);
    if c41 then L107() else L21();
  L79():
    st v = r19;
    goto L10();
  L82():
    stop = ldf stop;
    check L83() else D18();
  L96():
    st v = r28;
    goto L17();
  L100():
    v7 = force? v6;
    checkMissing(v7);
    c31 = `is.object`(v7);
    goto L18(c31);
  L101():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L102() else L103();
  D18():
    deopt 63 [];
  L20(c37, r33):
    c38 = `as.logical`(r33);
    c39 = `&&`(c37, c38);
    goto L19(c39);
  L21():
    goto L23();
  L23():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L83():
    r21 = dyn stop("invalid response type");
    check L84() else D19();
  L102():
    v8 = ld v;
    check L104() else D27();
  L103():
    r32 = dyn base5(<sym v>, "AsIs");
    goto L20(c32, r32);
  L107():
    sym6 = ldf unclass;
    base6 = ldf unclass in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L108() else L109();
  D19():
    deopt 65 [r21];
  D27():
    deopt 96 [c32, v8];
  L22(r36):
    st v = r36;
    goto L23();
  L24(r40):
    st rows = r40;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L84():
    goto L10();
  L104():
    v9 = force? v8;
    checkMissing(v9);
    inherits = ldf inherits in base;
    r34 = dyn inherits(v9, "AsIs", FALSE);
    check L105() else D28();
  L108():
    v10 = ld v;
    check L110() else D29();
  L109():
    r35 = dyn base6(<sym v>);
    goto L22(r35);
  L113():
    data11 = ld data;
    check L115() else D31();
  L114():
    r39 = dyn base7(<sym data>, "row.names");
    goto L24(r39);
  D28():
    deopt 101 [c32, r34];
  D29():
    deopt 105 [v10];
  D31():
    deopt 114 [data11];
  L25(r43):
    st nrows = r43;
    c42 = `as.logical`(r43);
    if c42 then L121() else L26();
  L105():
    goto L20(c32, r34);
  L110():
    v11 = force? v10;
    checkMissing(v11);
    unclass = ldf unclass in base;
    r37 = dyn unclass(v11);
    check L111() else D30();
  L115():
    data12 = force? data11;
    checkMissing(data12);
    attr2 = ldf attr in base;
    r41 = dyn attr2(data12, "row.names");
    check L116() else D32();
  L117():
    rows = ld rows;
    check L119() else D33();
  L118():
    r42 = dyn base8(<sym rows>);
    goto L25(r42);
  D30():
    deopt 108 [r37];
  D32():
    deopt 118 [r41];
  D33():
    deopt 122 [rows];
  L26():
    goto L42();
  L42():
    v18 = ld v;
    check L171() else D54();
  L111():
    goto L22(r37);
  L116():
    goto L24(r41);
  L119():
    rows1 = force? rows;
    checkMissing(rows1);
    length = ldf length in base;
    r44 = dyn length(rows1);
    check L120() else D34();
  L121():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  D34():
    deopt 125 [r44];
  D54():
    deopt 200 [v18];
  L27(r46):
    nrows = ld nrows;
    check L126() else D37();
  L120():
    goto L25(r44);
  L122():
    v12 = ld v;
    check L124() else D35();
  L123():
    r45 = dyn base9(<sym v>);
    goto L27(r45);
  L171():
    v19 = force? v18;
    checkMissing(v19);
    popenv;
    return v19;
  D35():
    deopt 129 [v12];
  D37():
    deopt 132 [r46, nrows];
  L124():
    v13 = force? v12;
    checkMissing(v13);
    length1 = ldf length in base;
    r47 = dyn length1(v13);
    check L125() else D36();
  L126():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r48 = `==`(r46, nrows1);
    c43 = `as.logical`(r48);
    if c43 then L127() else L28();
  D36():
    deopt 132 [r47];
  L28():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L132() else L133();
  L29(rows4):
    goto L42();
  L125():
    goto L27(r47);
  L127():
    rows2 = ld rows;
    check L128() else D38();
  D38():
    deopt 135 [rows2];
  L30(r51):
    r56 = `==`(r51, 2);
    c44 = `as.logical`(r56);
    if c44 then L139() else L32();
  L128():
    rows3 = force? rows2;
    checkMissing(rows3);
    l2 = ld v;
    names__ = ldf `names<-`;
    check L129() else D39();
  L132():
    sym11 = ldf dim;
    base11 = ldf dim in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L134() else L135();
  L133():
    r50 = dyn base10(<lang `<-`(dd, dim(v))>);
    goto L30(r50);
  D39():
    deopt 138 [rows3, l2, rows3];
  L31(r53):
    st dd = r53;
    length2 = ldf length in base;
    r55 = dyn length2(r53);
    check L138() else D43();
  L32():
    goto L29(NULL);
  L129():
    r49 = dyn names__(l2, NULL, rows3);
    check L130() else D40();
  L134():
    v14 = ld v;
    check L136() else D41();
  L135():
    r52 = dyn base11(<sym v>);
    goto L31(r52);
  L139():
    dd = ld dd;
    check L140() else D44();
  D40():
    deopt 140 [rows3, r49];
  D41():
    deopt 146 [v14];
  D43():
    deopt 152 [r55];
  D44():
    deopt 155 [dd];
  L130():
    st v = r49;
    goto L29(rows3);
  L136():
    v15 = force? v14;
    checkMissing(v15);
    dim = ldf dim in base;
    r54 = dyn dim(v15);
    check L137() else D42();
  L138():
    goto L30(r55);
  L140():
    dd1 = force? dd;
    checkMissing(dd1);
    c45 = `is.object`(dd1);
    if c45 then L141() else L142(dd1);
  D42():
    deopt 149 [r54];
  L33(dx3):
    nrows2 = ld nrows;
    check L144() else D45();
  L137():
    goto L31(r54);
  L141():
    dr2 = tryDispatchBuiltin.1("[", dd1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L143() else L142(dr2);
  L142(dd3):
    __1 = ldf `[` in base;
    r57 = dyn __1(dd3, 1);
    goto L33(r57);
  D45():
    deopt 159 [dx3, nrows2];
  L143():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L144():
    nrows3 = force? nrows2;
    checkMissing(nrows3);
    r58 = `==`(dx3, nrows3);
    c46 = `as.logical`(r58);
    if c46 then L145() else L34(c46);
  L34(c48):
    c63 = `as.logical`(c48);
    if c63 then L157() else L38();
  L145():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L146() else L147();
  L35(c51, r60):
    r68 = `!`(r60);
    c60 = `as.logical`(r68);
    c61 = `&&`(c51, c60);
    goto L34(c61);
  L38():
    goto L41(NULL);
  L41(r74):
    goto L29(r74);
  L146():
    sym13 = ldf dimnames;
    base13 = ldf dimnames in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L148() else L149();
  L147():
    r59 = dyn base12(<lang `[[`(`(`(`<-`(dn, dimnames(v))), 1)>);
    goto L35(c46, r59);
  L157():
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L158() else L159();
  L36(c54, r62):
    st dn = r62;
    c55 = `is.object`(r62);
    if c55 then L152() else L153(c54, r62);
  L39(r70):
    l3 = ld v;
    dimnames__ = ldf `dimnames<-`;
    check L166() else D52();
  L148():
    v16 = ld v;
    check L150() else D46();
  L149():
    r61 = dyn base13(<sym v>);
    goto L36(c46, r61);
  L158():
    rows5 = ld rows;
    check L160() else D49();
  L159():
    r69 = dyn base14(<sym rows>, <lang `[[`(dn, 2)>);
    goto L39(r69);
  D46():
    deopt 166 [c46, v16];
  D49():
    deopt 180 [rows5];
  D52():
    deopt 190 [r70, l3, r70];
  L37(c59, dx5):
    length3 = ldf length in base;
    r67 = dyn length3(dx5);
    check L155() else D48();
  L150():
    v17 = force? v16;
    checkMissing(v17);
    dimnames = ldf dimnames in base;
    r63 = dyn dimnames(v17);
    check L151() else D47();
  L152():
    dr4 = tryDispatchBuiltin.1("[[", r62);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L154() else L153(c54, dr4);
  L153(c57, r65):
    __2 = ldf `[[` in base;
    r66 = dyn __2(r65, 1);
    goto L37(c57, r66);
  L160():
    rows6 = force? rows5;
    checkMissing(rows6);
    dn = ld dn;
    check L161() else D50();
  L166():
    r73 = dyn dimnames__(l3, NULL, r70);
    check L167() else D53();
  D47():
    deopt 169 [c46, r63];
  D48():
    deopt 175 [c59, r67];
  D50():
    deopt 182 [dn];
  D53():
    deopt 192 [r70, r73];
  L151():
    goto L36(c46, r63);
  L154():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(c54, dx4);
  L155():
    goto L35(c59, r67);
  L161():
    dn1 = force? dn;
    checkMissing(dn1);
    c64 = `is.object`(dn1);
    if c64 then L162() else L163(dn1);
  L167():
    st v = r73;
    goto L41(r70);
  L40(dx7):
    list = ldf list in base;
    r72 = dyn list(rows6, dx7);
    check L165() else D51();
  L162():
    dr6 = tryDispatchBuiltin.1("[[", dn1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L164() else L163(dr6);
  L163(dn3):
    __3 = ldf `[[` in base;
    r71 = dyn __3(dn3, 2);
    goto L40(r71);
  D51():
    deopt 188 [r72];
  L164():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L40(dx6);
  L165():
    goto L39(r72);
  }
}