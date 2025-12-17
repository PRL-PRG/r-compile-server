fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1802909;
    st `.findAll` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1802909(what, where) {
  (reg what:*, reg where:*) -+> V { var what:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg where1:*, reg where2:V, reg is_environment:cls, reg r9:V, reg c:L, reg isNamespace:cls, reg where3:*, reg where4:V, reg p2:p(V +), reg r11:V, reg c1:L, reg exists:cls, reg what1:*, reg what2:V, reg p3:p(V +), reg where5:*, reg where6:V, reg p4:p(V +), reg r14:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg value:*, reg value1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg where7:*, reg where8:V, reg list1:cls, reg r19:V, reg c3:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg where9:*, reg where10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg emptyenv:cls, reg r26:V, reg identical:cls, reg r27:V, reg c4:L, reg parent_env:cls, reg where11:*, reg where12:V, reg p5:p(V +), reg r30:V, reg r31:V, reg exists1:cls, reg what3:*, reg what4:V, reg p6:p(V +), reg where13:*, reg where14:V, reg p7:p(V +), reg r34:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg value2:*, reg value3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg where15:*, reg where16:V, reg list2:cls, reg r39:V, reg c6:cls, reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg search:cls, reg r44:V, reg r45:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg exists2:cls, reg what5:*, reg what6:V, reg p8:p(V +), reg i5:*, reg i6:V, reg p9:p(V +), reg r48:V, reg c8:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg i11:I, reg r50:V, reg i12:*, reg i13:V, reg as_environment:cls, reg r51:V, reg value4:*, reg value5:V, reg s1:V, reg l1:I, reg i14:I, reg i15:I, reg i16:I, reg i17:I, reg c9:L, reg x1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg i26:I, reg i27:I, reg r53:V, reg other:*, reg other1:V, reg evi:*, reg evi1:V, reg identical1:cls, reg r54:V, reg c10:L, reg i32:I, reg addMe:*, reg addMe1:V, reg c11:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg i42:I, reg r57:V, reg value6:*, reg value7:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg i45:I, reg r59:V, reg evi2:*, reg evi3:V, reg list3:cls, reg r60:V, reg c12:cls, reg r61:V, reg i46:I, reg r62:V, reg i47:I, reg where17:*, reg where18:V, reg s2:V, reg l2:I, reg i48:I, reg i49:I, reg i50:I, reg c13:L, reg x2:V, reg exists3:cls, reg what7:*, reg what8:V, reg p10:p(V +), reg i53:*, reg i54:V, reg p11:p(V +), reg r67:V, reg c14:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg i59:I, reg r69:V, reg value8:*, reg value9:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r70:V, reg i62:I, reg r71:V, reg i63:*, reg i64:V, reg list4:cls, reg r72:V, reg c15:cls, reg r73:V, reg i65:I, reg value10:*, reg value11:V |
    mkenv;
    st what = what;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L2(r5):
    st value = r5;
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L44():
    list = ldf list in base;
    r6 = dyn list();
    check L46() else D0();
  L45():
    r4 = dyn base();
    goto L2(r4);
  D0():
    deopt 3 [r6];
  L3(r8):
    c = `as.logical`(r8);
    if c then L51() else L4();
  L46():
    goto L2(r6);
  L47():
    where1 = ld where;
    check L49() else D1();
  L48():
    r7 = dyn base1(<sym where>);
    goto L3(r7);
  D1():
    deopt 7 [where1];
  L4():
    where17 = ld where;
    check L128() else D37();
  L37():
    value10 = ld value;
    check L142() else D44();
  L49():
    where2 = force? where1;
    checkMissing(where2);
    is_environment = ldf `is.environment` in base;
    r9 = dyn is_environment(where2);
    check L50() else D2();
  L51():
    isNamespace = ldf isNamespace;
    check L52() else D3();
  D2():
    deopt 10 [r9];
  D3():
    deopt 12 [];
  D37():
    deopt 159 [where17];
  D44():
    deopt 186 [value10];
  L50():
    goto L3(r9);
  L52():
    p2 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r11 = dyn isNamespace(p2);
    check L53() else D4();
  L128():
    where18 = force? where17;
    checkMissing(where18);
    s2 = toForSeq(where18);
    l2 = length(s2);
    i48 = 0;
    goto L38(i48);
  L142():
    value11 = force? value10;
    checkMissing(value11);
    popenv;
    return value11;
  D4():
    deopt 14 [r11];
  L38(i49):
    i50 = `+`.1(i49, 1);
    c13 = `<`.1(l2, i50);
    if c13 then L129() else L43();
  L53():
    c1 = `as.logical`(r11);
    if c1 then L54() else L5();
  L5():
    exists1 = ldf exists;
    check L81() else D16();
  L16(r31):
    goto L37();
  L43():
    x2 = `[[`(s2, i50, NULL, TRUE);
    st i = x2;
    exists3 = ldf exists;
    check L130() else D38();
  L54():
    goto L15();
  L129():
    goto L37();
  D16():
    deopt 67 [];
  D38():
    deopt 162 [i50];
  L15():
    exists = ldf exists;
    check L55() else D5();
  L81():
    p6 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p7 = prom<V +>{
      where13 = ld where;
      where14 = force? where13;
      checkMissing(where14);
      return where14;
    };
    r34 = dyn exists1[, , inherits](p6, p7, FALSE);
    check L82() else D17();
  L130():
    p10 = prom<V +>{
      what7 = ld what;
      what8 = force? what7;
      checkMissing(what8);
      return what8;
    };
    p11 = prom<V +>{
      i53 = ld i;
      i54 = force? i53;
      checkMissing(i54);
      return i54;
    };
    r67 = dyn exists3[, , inherits](p10, p11, FALSE);
    check L131() else D39();
  D5():
    deopt 16 [];
  D17():
    deopt 72 [r34];
  D39():
    deopt 167 [i50, r67];
  L55():
    p3 = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p4 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r14 = dyn exists[, , inherits](p3, p4, FALSE);
    check L56() else D6();
  L82():
    c5 = `as.logical`(r34);
    if c5 then L83() else L17();
  L131():
    c14 = `as.logical`(r67);
    if c14 then L132() else L39();
  D6():
    deopt 21 [r14];
  L17():
    goto L20();
  L20():
    sym8 = ldf seq_along;
    base8 = ldf seq_along in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L39():
    goto L42(i50);
  L42(i65):
    goto L38(i65);
  L56():
    c2 = `as.logical`(r14);
    if c2 then L57() else L6();
  L83():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L132():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L133() else L134();
  L6():
    goto L9();
  L9():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L18(r36):
    st value = r36;
    goto L20();
  L21(r43):
    s = toForSeq(r43);
    l = length(s);
    i = 0;
    goto L22(i);
  L40(i59, r69):
    st value = r69;
    goto L42(i59);
  L57():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L84():
    value2 = ld value;
    check L86() else D18();
  L85():
    r35 = dyn base6(<sym value>, <lang list(where)>);
    goto L18(r35);
  L93():
    search = ldf search;
    check L95() else D22();
  L94():
    r42 = dyn base8(<lang search()>);
    goto L21(r42);
  L133():
    value8 = ld value;
    check L135() else D40();
  L134():
    r68 = dyn base13(<sym value>, <lang list(i)>);
    goto L40(i50, r68);
  D18():
    deopt 75 [value2];
  D22():
    deopt 90 [];
  D40():
    deopt 170 [i50, value8];
  L7(r16):
    st value = r16;
    goto L9();
  L10(r23):
    c4 = `as.logical`(r23);
    if c4 then L74() else L12();
  L22(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L97() else L36();
  L58():
    value = ld value;
    check L60() else D7();
  L59():
    r15 = dyn base2(<sym value>, <lang list(where)>);
    goto L7(r15);
  L67():
    where9 = ld where;
    check L69() else D11();
  L68():
    r22 = dyn base4(<sym where>, <lang emptyenv()>);
    goto L10(r22);
  L86():
    value3 = force? value2;
    checkMissing(value3);
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L95():
    r44 = dyn search();
    check L96() else D23();
  L135():
    value9 = force? value8;
    checkMissing(value9);
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L136() else L137();
  D7():
    deopt 24 [value];
  D11():
    deopt 39 [where9];
  D23():
    deopt 91 [r44];
  L12():
    parent_env = ldf `parent.env`;
    check L77() else D14();
  L19(r38):
    c6 = ldf c in base;
    r40 = dyn c6(value3, r38);
    check L91() else D21();
  L36():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    exists2 = ldf exists;
    check L98() else D24();
  L41(i62, r71):
    c15 = ldf c in base;
    r73 = dyn c15(value9, r71);
    check L140() else D43();
  L60():
    value1 = force? value;
    checkMissing(value1);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L69():
    where10 = force? where9;
    checkMissing(where10);
    sym5 = ldf emptyenv;
    base5 = ldf emptyenv in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  L74():
    goto L16(NULL);
  L87():
    where15 = ld where;
    check L89() else D19();
  L88():
    r37 = dyn base7(<sym where>);
    goto L19(r37);
  L96():
    r45 = seq_along(r44);
    goto L21(r45);
  L97():
    goto L16(i2);
  L136():
    i63 = ld i;
    check L138() else D41();
  L137():
    r70 = dyn base14(<sym i>);
    goto L41(i50, r70);
  D14():
    deopt 59 [];
  D19():
    deopt 79 [where15];
  D21():
    deopt 84 [r40];
  D24():
    deopt 94 [i2];
  D41():
    deopt 174 [i50, i63];
  D43():
    deopt 179 [i62, r73];
  L8(r18):
    c3 = ldf c in base;
    r20 = dyn c3(value1, r18);
    check L65() else D10();
  L11(r25):
    identical = ldf identical in base;
    r27 = dyn identical(where10, r25, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L73() else D13();
  L61():
    where7 = ld where;
    check L63() else D8();
  L62():
    r17 = dyn base3(<sym where>);
    goto L8(r17);
  L70():
    emptyenv = ldf emptyenv in base;
    r26 = dyn emptyenv();
    check L72() else D12();
  L71():
    r24 = dyn base5();
    goto L11(r24);
  L77():
    p5 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r30 = dyn parent_env(p5);
    check L78() else D15();
  L89():
    where16 = force? where15;
    checkMissing(where16);
    list2 = ldf list in base;
    r39 = dyn list2(where16);
    check L90() else D20();
  L91():
    goto L18(r40);
  L98():
    p8 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    p9 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r48 = dyn exists2[, , inherits](p8, p9, FALSE);
    check L99() else D25();
  L138():
    i64 = force? i63;
    checkMissing(i64);
    list4 = ldf list in base;
    r72 = dyn list4(i64);
    check L139() else D42();
  L140():
    goto L40(i62, r73);
  D8():
    deopt 28 [where7];
  D10():
    deopt 33 [r20];
  D12():
    deopt 44 [r26];
  D13():
    deopt 53 [r27];
  D15():
    deopt 61 [r30];
  D20():
    deopt 82 [r39];
  D25():
    deopt 99 [i2, r48];
  D42():
    deopt 177 [i50, r72];
  L63():
    where8 = force? where7;
    checkMissing(where8);
    list1 = ldf list in base;
    r19 = dyn list1(where8);
    check L64() else D9();
  L65():
    goto L7(r20);
  L72():
    goto L11(r26);
  L73():
    goto L10(r27);
  L78():
    st where = r30;
    goto L15();
  L90():
    goto L19(r39);
  L99():
    c8 = `as.logical`(r48);
    if c8 then L100() else L23();
  L139():
    goto L41(i50, r72);
  D9():
    deopt 31 [r19];
  L23():
    goto L35(i2);
  L35(i47):
    goto L22(i47);
  L64():
    goto L8(r19);
  L100():
    sym9 = ldf `as.environment`;
    base9 = ldf `as.environment` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L101() else L102();
  L24(i11, r50):
    st evi = r50;
    st addMe = TRUE;
    value4 = ld value;
    check L105() else D28();
  L101():
    i12 = ld i;
    check L103() else D26();
  L102():
    r49 = dyn base9(<sym i>);
    goto L24(i2, r49);
  D26():
    deopt 102 [i2, i12];
  D28():
    deopt 110 [i11, value4];
  L103():
    i13 = force? i12;
    checkMissing(i13);
    as_environment = ldf `as.environment` in base;
    r51 = dyn as_environment(i13);
    check L104() else D27();
  L105():
    value5 = force? value4;
    checkMissing(value5);
    s1 = toForSeq(value5);
    l1 = length(s1);
    i14 = 0;
    goto L25(i11, i14);
  D27():
    deopt 105 [i2, r51];
  L25(i15, i16):
    i17 = `+`.1(i16, 1);
    c9 = `<`.1(l1, i17);
    if c9 then L106() else L30();
  L104():
    goto L24(i2, r51);
  L28(i32):
    addMe = ld addMe;
    check L115() else D32();
  L30():
    x1 = `[[`(s1, i17, NULL, TRUE);
    st other = x1;
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L107() else L108();
  L106():
    goto L28(i15);
  D32():
    deopt 137 [i32, addMe];
  L26(i26, i27, r53):
    c10 = `as.logical`(r53);
    if c10 then L112() else L27();
  L107():
    other = ld other;
    check L109() else D29();
  L108():
    r52 = dyn base10(<sym other>, <sym evi>);
    goto L26(i15, i17, r52);
  L115():
    addMe1 = force? addMe;
    checkMissing(addMe1);
    c11 = `as.logical`(addMe1);
    if c11 then L116() else L31();
  D29():
    deopt 114 [i15, i17, other];
  L27():
    goto L25(i26, i27);
  L31():
    goto L34(i32, NULL);
  L34(i46, r62):
    goto L35(i46);
  L109():
    other1 = force? other;
    checkMissing(other1);
    evi = ld evi;
    check L110() else D30();
  L112():
    st addMe = FALSE;
    goto L28(i26);
  L116():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L117() else L118();
  D30():
    deopt 116 [i15, i17, evi];
  L32(i42, r57):
    st value = r57;
    goto L34(i42, r57);
  L110():
    evi1 = force? evi;
    checkMissing(evi1);
    identical1 = ldf identical in base;
    r54 = dyn identical1(other1, evi1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L111() else D31();
  L117():
    value6 = ld value;
    check L119() else D33();
  L118():
    r56 = dyn base11(<sym value>, <lang list(evi)>);
    goto L32(i32, r56);
  D31():
    deopt 126 [i15, i17, r54];
  D33():
    deopt 141 [i32, value6];
  L111():
    goto L26(i15, i17, r54);
  L119():
    value7 = force? value6;
    checkMissing(value7);
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L120() else L121();
  L33(i45, r59):
    c12 = ldf c in base;
    r61 = dyn c12(value7, r59);
    check L124() else D36();
  L120():
    evi2 = ld evi;
    check L122() else D34();
  L121():
    r58 = dyn base12(<sym evi>);
    goto L33(i32, r58);
  D34():
    deopt 145 [i32, evi2];
  D36():
    deopt 150 [i45, r61];
  L122():
    evi3 = force? evi2;
    checkMissing(evi3);
    list3 = ldf list in base;
    r60 = dyn list3(evi3);
    check L123() else D35();
  L124():
    goto L32(i45, r61);
  D35():
    deopt 148 [i32, r60];
  L123():
    goto L33(i32, r60);
  }
}