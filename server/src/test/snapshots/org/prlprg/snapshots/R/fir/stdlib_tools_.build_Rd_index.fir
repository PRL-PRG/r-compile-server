fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1047779832;
    st `.build_Rd_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1047779832(contents, type) {
  (reg contents:*, reg type:*) -+> V { var contents:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg contents1:*, reg contents2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg type1:*, reg type2:V, reg c1:V, reg r3:V, reg c2:L, reg _in_:cls, reg contents5:*, reg contents6:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg p:p(V +), reg type3:*, reg type4:V, reg p1:p(V +), reg r7:V, reg type5:*, reg type6:V, reg r8:V, reg c4:L, reg idx:*, reg idx1:V, reg keywords:*, reg keywords1:V, reg r9:V, reg r10:V, reg contents9:*, reg contents10:V, reg c5:L, reg contents12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg idx2:*, reg idx3:V, reg __2:cls, reg r12:V, reg keywords2:*, reg keywords3:V, reg c6:L, reg keywords5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg idx4:*, reg idx5:V, reg __3:cls, reg r13:V, reg vapply:cls, reg keywords6:*, reg keywords7:V, reg p2:p(V +), reg r15:cls, reg p3:p(V +), reg r17:V, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg unlist:cls, reg Map:cls, reg _Rd_topic_for_display:*, reg _Rd_topic_for_display1:V, reg p4:p(V +), reg contents13:*, reg contents14:V, reg c7:L, reg contents16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg idx6:*, reg idx7:V, reg __4:cls, reg r22:V, reg p5:p(V +), reg contents17:*, reg contents18:V, reg c8:L, reg contents20:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg idx8:*, reg idx9:V, reg __5:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg p7:p(V +), reg r28:V, reg as_character:cls, reg r29:V, reg data_frame:cls, reg topic:*, reg topic1:V, reg p8:p(V +), reg contents21:*, reg contents22:V, reg c9:L, reg contents24:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg idx10:*, reg idx11:V, reg __6:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg nrow:cls, reg index:*, reg index1:V, reg p10:p(V +), reg r35:V, reg c10:L, reg l:*, reg c11:L, reg r38:S, reg l3:*, reg r39:S, reg l4:*, reg dr14:V, reg dc7:L, reg dx15:V, reg r42:S, reg l6:*, reg r43:S, reg dx16:V, reg r44:V, reg c12:L, reg r46:S, reg l8:*, reg dx18:V, reg dr16:V, reg dc8:L, reg dx19:V, reg r48:S, reg l10:*, reg dx20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r53:V, reg r54:S, reg l13:*, reg dx23:V, reg r55:S, reg r56:V, reg index2:*, reg index3:V, reg c13:L, reg r59:S, reg l15:*, reg dx25:V, reg r60:S, reg index5:V, reg dr18:V, reg dc9:L, reg dx27:V, reg r63:S, reg l17:*, reg dx28:V, reg r64:S, reg dx29:V, reg r65:V, reg is_na:cls, reg r66:V, reg ___:cls, reg r67:V, reg c14:L, reg r69:S, reg l19:*, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg r72:V, reg index6:*, reg index7:V, reg c15:L, reg index9:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg order:cls, reg index10:*, reg index11:V, reg c16:L, reg index13:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg r73:V, reg p11:p(V +), reg r75:V, reg __7:cls, reg r76:V, reg index14:*, reg index15:V |
    mkenv;
    st contents = contents;
    type_isMissing = missing.0(type);
    if type_isMissing then L0(NULL) else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    contents1 = ld contents;
    check L15() else D0();
  D0():
    deopt 0 [contents1];
  L15():
    contents2 = force? contents1;
    checkMissing(contents2);
    c = `is.object`(contents2);
    if c then L16() else L17();
  L1(dx1):
    st keywords = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L16():
    dr = tryDispatchBuiltin.1("[", contents2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17();
  L17():
    __ = ldf `[` in base;
    r = dyn __(contents2, <missing>, "Keywords");
    goto L1(r);
  L2(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L22() else L3();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L19():
    type1 = ld type;
    check L21() else D1();
  L20():
    r1 = dyn base(<sym type>);
    goto L2(r1);
  D1():
    deopt 8 [type1];
  L3():
    goto L8();
  L8():
    vapply = ldf vapply;
    check L41() else D11();
  L21():
    type2 = force? type1;
    checkMissing(type2);
    c1 = `==`(type2, NULL);
    goto L2(c1);
  L22():
    _in_ = ldf `%in%`;
    check L23() else D2();
  D2():
    deopt 13 [];
  D11():
    deopt 50 [];
  L23():
    p = prom<V +>{
      contents5 = ld contents;
      contents6 = force? contents5;
      checkMissing(contents6);
      c3 = `is.object`(contents6);
      if c3 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", contents6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r4 = dyn __1(contents6, <missing>, "Type");
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    r7 = dyn _in_(p, p1);
    check L24() else D3();
  L41():
    p2 = prom<V +>{
      keywords6 = ld keywords;
      keywords7 = force? keywords6;
      checkMissing(keywords7);
      return keywords7;
    };
    p3 = prom<V +>{
      r15 = clos inner2501545716;
      return r15;
    };
    r17 = dyn vapply(p2, p3, 0);
    check L42() else D12();
  D3():
    deopt 16 [r7];
  D12():
    deopt 54 [r17];
  L24():
    st idx = r7;
    type5 = ld type;
    check L25() else D4();
  L42():
    r18 = `==`(r17, 0);
    st idx = r18;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  D4():
    deopt 18 [type5];
  L9(r20):
    st topic = r20;
    data_frame = ldf `data.frame`;
    check L48() else D16();
  L25():
    type6 = force? type5;
    checkMissing(type6);
    r8 = `==`(type6, "data");
    c4 = `as.logical`(r8);
    if c4 then L26() else L4();
  L43():
    unlist = ldf unlist;
    check L45() else D13();
  L44():
    r19 = dyn base1(<lang unlist(Map(.Rd_topic_for_display, `[`(contents, idx, "Name"), `[`(contents, idx, "Aliases")))>);
    goto L9(r19);
  D13():
    deopt 61 [];
  D16():
    deopt 68 [];
  L4():
    goto L5();
  L5():
    contents9 = ld contents;
    check L30() else D7();
  L26():
    idx = ld idx;
    check L27() else D5();
  L45():
    p7 = prom<V +>{
      Map = ldf Map;
      p4 = prom<V +>{
        _Rd_topic_for_display = ld `.Rd_topic_for_display`;
        _Rd_topic_for_display1 = force? _Rd_topic_for_display;
        checkMissing(_Rd_topic_for_display1);
        return _Rd_topic_for_display1;
      };
      p5 = prom<V +>{
        contents13 = ld contents;
        contents14 = force? contents13;
        checkMissing(contents14);
        c7 = `is.object`(contents14);
        if c7 then L1() else L2(contents14);
      L0(dx10):
        return dx10;
      L1():
        dr8 = tryDispatchBuiltin.1("[", contents14);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(contents16):
        idx6 = ld idx;
        idx7 = force? idx6;
        __4 = ldf `[` in base;
        r22 = dyn __4(contents16, idx7, "Name");
        goto L0(r22);
      L3():
        dx9 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx9);
      };
      p6 = prom<V +>{
        contents17 = ld contents;
        contents18 = force? contents17;
        checkMissing(contents18);
        c8 = `is.object`(contents18);
        if c8 then L1() else L2(contents18);
      L0(dx12):
        return dx12;
      L1():
        dr10 = tryDispatchBuiltin.1("[", contents18);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(contents20):
        idx8 = ld idx;
        idx9 = force? idx8;
        __5 = ldf `[` in base;
        r24 = dyn __5(contents20, idx9, "Aliases");
        goto L0(r24);
      L3():
        dx11 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx11);
      };
      r26 = dyn Map(p4, p5, p6);
      return r26;
    };
    r28 = dyn unlist(p7);
    check L46() else D14();
  L48():
    p8 = prom<V +>{
      topic = ld topic;
      topic1 = force? topic;
      checkMissing(topic1);
      return topic1;
    };
    p9 = prom<V +>{
      contents21 = ld contents;
      contents22 = force? contents21;
      checkMissing(contents22);
      c9 = `is.object`(contents22);
      if c9 then L1() else L2(contents22);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", contents22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(contents24):
      idx10 = ld idx;
      idx11 = force? idx10;
      __6 = ldf `[` in base;
      r31 = dyn __6(contents24, idx11, "Title");
      goto L0(r31);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r33 = dyn data_frame[Topic, Title](p8, p9);
    check L49() else D17();
  D5():
    deopt 22 [idx];
  D7():
    deopt 31 [contents9];
  D14():
    deopt 63 [r28];
  D17():
    deopt 73 [r33];
  L27():
    idx1 = force? idx;
    checkMissing(idx1);
    keywords = ld keywords;
    check L28() else D6();
  L30():
    contents10 = force? contents9;
    checkMissing(contents10);
    c5 = `is.object`(contents10);
    if c5 then L31() else L32(contents10);
  L46():
    as_character = ldf `as.character` in base;
    r29 = dyn as_character(r28);
    check L47() else D15();
  L49():
    st index = r33;
    nrow = ldf nrow;
    check L50() else D18();
  D6():
    deopt 23 [idx1, keywords];
  D15():
    deopt 65 [r29];
  D18():
    deopt 76 [];
  L6(dx5):
    st contents = dx5;
    keywords2 = ld keywords;
    check L35() else D9();
  L28():
    keywords1 = force? keywords;
    checkMissing(keywords1);
    r9 = `==`(keywords1, "datasets");
    r10 = `||`(idx1, r9);
    st idx = r10;
    goto L5();
  L31():
    dr4 = tryDispatchBuiltin.1("[", contents10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(dr4);
  L32(contents12):
    idx2 = ld idx;
    check L34() else D8();
  L47():
    goto L9(r29);
  L50():
    p10 = prom<V +>{
      index = ld index;
      index1 = force? index;
      checkMissing(index1);
      return index1;
    };
    r35 = dyn nrow(p10);
    check L51() else D19();
  D8():
    deopt 33 [contents12, idx2];
  D9():
    deopt 41 [keywords2];
  D19():
    deopt 78 [r35];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L34():
    idx3 = force? idx2;
    __2 = ldf `[` in base;
    r12 = dyn __2(contents10, idx3, <missing>, FALSE);
    goto L6(r12);
  L35():
    keywords3 = force? keywords2;
    checkMissing(keywords3);
    c6 = `is.object`(keywords3);
    if c6 then L36() else L37(keywords3);
  L51():
    c10 = `as.logical`(r35);
    if c10 then L52() else L10();
  L7(dx7):
    st keywords = dx7;
    goto L8();
  L10():
    goto L14();
  L14():
    index14 = ld index;
    check L79() else D25();
  L36():
    dr6 = tryDispatchBuiltin.1("[", keywords3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(dr6);
  L37(keywords5):
    idx4 = ld idx;
    check L39() else D10();
  L52():
    l = ld index;
    c11 = `is.object`(l);
    if c11 then L54() else L55("", l, "", l);
  D10():
    deopt 43 [keywords5, idx4];
  D25():
    deopt 107 [index14];
  L38():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx6);
  L39():
    idx5 = force? idx4;
    __3 = ldf `[` in base;
    r13 = dyn __3(keywords5, idx5);
    goto L7(r13);
  L53(r42, l6, r43, dx16):
    c12 = `is.object`(dx16);
    if c12 then L57() else L58(r42, l6, dx16);
  L54():
    dr14 = tryDispatchBuiltin.1("$", l);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L56() else L55("", l, "", dr14);
  L55(r38, l3, r39, l4):
    r44 = `$`(l4, <sym Topic>);
    goto L53(r38, l3, r39, r44);
  L79():
    index15 = force? index14;
    checkMissing(index15);
    popenv;
    return index15;
  L11(r48, l10, dx20):
    c14 = `is.object`(l10);
    if c14 then L69() else L70(r48, l10);
  L56():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L53("", l, "", dx15);
  L57():
    dr16 = tryDispatchBuiltin.0("[<-", dx16, r43);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L59() else L58(r42, l6, dr16);
  L58(r46, l8, dx18):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L12(r54, l13, dx23, r55, r56):
    ___ = ldf `[<-` in base;
    r67 = dyn ___(dx23, r55, r56);
    goto L11(r54, l13, r67);
  L59():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L11(r42, l6, dx19);
  L60():
    index2 = ld index;
    check L62() else D20();
  L61():
    r53 = dyn base2(<lang `$`(index, Topic)>);
    goto L12(r46, l8, dx18, r43, r53);
  L68(dx31):
    st index = dx31;
    index6 = ld index;
    check L72() else D22();
  L69():
    dr20 = tryDispatchBuiltin.0("$<-", l10, dx20);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L71() else L70(r48, dr20);
  L70(r69, l19):
    r72 = `$<-`(l19, <sym Topic>, dx20);
    goto L68(r72);
  D20():
    deopt 87 [r46, l8, dx18, r43, index2];
  D22():
    deopt 95 [index6];
  L62():
    index3 = force? index2;
    checkMissing(index3);
    c13 = `is.object`(index3);
    if c13 then L64() else L65(r46, l8, dx18, r43, index3);
  L71():
    dx30 = getTryDispatchBuiltinValue(dr20);
    goto L68(dx30);
  L72():
    index7 = force? index6;
    checkMissing(index7);
    c15 = `is.object`(index7);
    if c15 then L73() else L74(index7);
  L13(dx33):
    st index = dx33;
    goto L14();
  L63(r63, l17, dx28, r64, dx29):
    is_na = ldf `is.na` in base;
    r66 = dyn is_na(dx29);
    check L67() else D21();
  L64():
    dr18 = tryDispatchBuiltin.1("$", index3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L66() else L65(r46, l8, dx18, r43, dr18);
  L65(r59, l15, dx25, r60, index5):
    r65 = `$`(index5, <sym Topic>);
    goto L63(r59, l15, dx25, r60, r65);
  L73():
    dr22 = tryDispatchBuiltin.1("[", index7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L75() else L74(dr22);
  L74(index9):
    order = ldf order;
    check L76() else D23();
  D21():
    deopt 91 [r63, l17, dx28, r64, r66];
  D23():
    deopt 98 [index9];
  L66():
    dx27 = getTryDispatchBuiltinValue(dr18);
    goto L63(r46, l8, dx18, r43, dx27);
  L67():
    goto L12(r63, l17, dx28, r64, r66);
  L75():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L13(dx32);
  L76():
    p11 = prom<V +>{
      index10 = ld index;
      index11 = force? index10;
      checkMissing(index11);
      c16 = `is.object`(index11);
      if c16 then L1() else L2(index11);
    L0(dx35):
      return dx35;
    L1():
      dr24 = tryDispatchBuiltin.1("$", index11);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(index13):
      r73 = `$`(index13, <sym Topic>);
      goto L0(r73);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx34);
    };
    r75 = dyn order(p11);
    check L77() else D24();
  D24():
    deopt 100 [index9, r75];
  L77():
    __7 = ldf `[` in base;
    r76 = dyn __7(index7, r75, <missing>);
    goto L13(r76);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg match:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base("internal", <sym x>, 0);
    goto L0(r);
  D0():
    deopt 3 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    match = ldf match in base;
    r2 = dyn match("internal", x2, 0, NULL);
    check L4() else D1();
  D1():
    deopt 8 [r2];
  L4():
    goto L0(r2);
  }
}