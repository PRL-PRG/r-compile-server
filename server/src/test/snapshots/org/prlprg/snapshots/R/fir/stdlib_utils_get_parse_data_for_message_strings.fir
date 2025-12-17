fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2605656128;
    st get_parse_data_for_message_strings = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2605656128(file, encoding) {
  (reg file:*, reg encoding:*) -+> V { var file:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg suppressWarnings:cls, reg ___:cls, reg r:V, reg r1:cls, reg file1:*, reg file2:V, reg p:p(V +), reg encoding1:*, reg encoding2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg exprs:*, reg exprs1:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg getParseData:cls, reg exprs2:*, reg exprs3:V, reg p3:p(V +), reg r14:V, reg pd:*, reg pd1:V, reg c1:L, reg pd3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg pd4:*, reg pd5:V, reg c2:L, reg pd7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg l:*, reg names__:cls, reg r17:V, reg r18:cls, reg pd8:*, reg pd9:V, reg c3:L, reg pd11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg r30:V, reg pd12:*, reg pd13:V, reg c4:L, reg r32:V, reg pd15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r34:V, reg dx7:V, reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg r40:V, reg c5:cls, reg r41:V, reg match:cls, reg r42:V, reg is_na:cls, reg r43:V, reg r44:V, reg r45:V, reg pd16:*, reg pd17:V, reg c6:L, reg pd19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r46:V, reg c7:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg ind:*, reg ind1:V, reg __:cls, reg r47:V, reg gpids:cls, reg pd20:*, reg pd21:V, reg c8:L, reg pd23:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r48:V, reg c9:L, reg dx17:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r49:V, reg p4:p(V +), reg r51:V, reg getParseText:cls, reg pd24:*, reg pd25:V, reg p5:p(V +), reg ids:*, reg ids1:V, reg p6:p(V +), reg r54:V, reg pd26:*, reg pd27:V, reg c10:L, reg pd29:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg pd30:*, reg pd31:V, reg c11:L, reg pd34:V, reg pd35:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r55:V, reg r56:V, reg __2:cls, reg r57:V, reg getParseText1:cls, reg table:*, reg table1:V, reg p7:p(V +), reg table2:*, reg table3:V, reg c12:L, reg table5:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r59:V, reg p8:p(V +), reg r61:V, reg l1:*, reg c13:L, reg r63:V, reg l3:*, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r66:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r67:V, reg r68:V, reg gpids1:cls, reg table6:*, reg table7:V, reg c14:L, reg table9:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r69:V, reg p9:p(V +), reg r71:V, reg ids2:*, reg ids3:V, reg match1:cls, reg r72:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r73:V, reg r74:V, reg pos:*, reg pos1:V, reg is_na1:cls, reg r75:V, reg r76:V, reg split:cls, reg table10:*, reg table11:V, reg c15:L, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r77:V, reg p10:p(V +), reg factor:cls, reg pos2:*, reg pos3:V, reg c16:L, reg pos5:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg ind6:*, reg ind7:V, reg __4:cls, reg r79:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r81:V, reg r82:V, reg ids4:*, reg ids5:V, reg r83:I, reg p12:p(V +), reg r85:V, reg p13:p(V +), reg r87:V, reg r88:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p14:p(V +), reg Map:cls, reg extract_message_strings:*, reg extract_message_strings1:V, reg p15:p(V +), reg as_list:cls, reg funs:*, reg funs1:V, reg p16:p(V +), reg r92:V, reg p17:p(V +), reg as_list1:cls, reg calls:*, reg calls1:V, reg p18:p(V +), reg r95:V, reg p19:p(V +), reg table14:*, reg table15:V, reg p20:p(V +), reg r98:V, reg p21:p(V +), reg r100:V |
    mkenv;
    st file = file;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    suppressWarnings = ldf suppressWarnings;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p2 = prom<V +>{
      ___ = ldf `:::`;
      r = dyn ___("tools", ".parse_code_file");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      p1 = prom<V +>{
        encoding1 = ld encoding;
        encoding2 = force? encoding1;
        checkMissing(encoding2);
        return encoding2;
      };
      r4 = dyn r1[file, encoding, `keep.source`](p, p1, TRUE);
      return r4;
    };
    r6 = dyn suppressWarnings(p2);
    check L12() else D1();
  D1():
    deopt 3 [r6];
  L12():
    st exprs = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L17() else L2();
  L13():
    exprs = ld exprs;
    check L15() else D2();
  L14():
    r7 = dyn base(<sym exprs>);
    goto L1(r7);
  D2():
    deopt 7 [exprs];
  L2():
    getParseData = ldf getParseData;
    check L20() else D4();
  L15():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    length = ldf length in base;
    r9 = dyn length(exprs1);
    check L16() else D3();
  L17():
    popenv;
    return NULL;
  D3():
    deopt 10 [r9];
  D4():
    deopt 18 [];
  L16():
    goto L1(r9);
  L20():
    p3 = prom<V +>{
      exprs2 = ld exprs;
      exprs3 = force? exprs2;
      checkMissing(exprs3);
      return exprs3;
    };
    r14 = dyn getParseData(p3);
    check L21() else D5();
  D5():
    deopt 20 [r14];
  L21():
    st pd = r14;
    pd = ld pd;
    check L22() else D6();
  D6():
    deopt 22 [pd];
  L22():
    pd1 = force? pd;
    checkMissing(pd1);
    c1 = `is.object`(pd1);
    if c1 then L24() else L25(pd1);
  L23(dx1):
    st parents = dx1;
    pd4 = ld pd;
    check L27() else D7();
  L24():
    dr = tryDispatchBuiltin.1("$", pd1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(pd3):
    r15 = `$`(pd3, <sym parent>);
    goto L23(r15);
  D7():
    deopt 26 [pd4];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L27():
    pd5 = force? pd4;
    checkMissing(pd5);
    c2 = `is.object`(pd5);
    if c2 then L29() else L30(pd5);
  L28(dx3):
    l = ld parents;
    names__ = ldf `names<-`;
    check L32() else D8();
  L29():
    dr2 = tryDispatchBuiltin.1("$", pd5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(pd7):
    r16 = `$`(pd7, <sym id>);
    goto L28(r16);
  D8():
    deopt 30 [dx3, l, dx3];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L32():
    r17 = dyn names__(l, NULL, dx3);
    check L33() else D9();
  D9():
    deopt 32 [dx3, r17];
  L33():
    st parents = r17;
    r18 = clos inner161954228;
    st gpids = r18;
    pd8 = ld pd;
    check L34() else D10();
  D10():
    deopt 37 [pd8];
  L34():
    pd9 = force? pd8;
    checkMissing(pd9);
    c3 = `is.object`(pd9);
    if c3 then L36() else L37(pd9);
  L35(dx5):
    r20 = `==`(dx5, "SYMBOL_FUNCTION_CALL");
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L36():
    dr4 = tryDispatchBuiltin.1("$", pd9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(dr4);
  L37(pd11):
    r19 = `$`(pd11, <sym token>);
    goto L35(r19);
  L4(r24, r25):
    r44 = `!`(r25);
    r45 = `&&`(r24, r44);
    st ind = r45;
    pd16 = ld pd;
    check L53() else D15();
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx4);
  L39():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L40():
    r23 = dyn base1(<lang match(`$`(pd, text), c("warning", "stop", "message", "packageStartupMessage", "gettext", "gettextf", "ngettext"))>);
    goto L4(r20, r23);
  D15():
    deopt 68 [pd16];
  L5(r29, r30):
    is_na = ldf `is.na` in base;
    r43 = dyn is_na(r30);
    check L52() else D14();
  L41():
    pd12 = ld pd;
    check L43() else D11();
  L42():
    r28 = dyn base2(<lang `$`(pd, text)>, <lang c("warning", "stop", "message", "packageStartupMessage", "gettext", "gettextf", "ngettext")>);
    goto L5(r20, r28);
  L53():
    pd17 = force? pd16;
    checkMissing(pd17);
    c6 = `is.object`(pd17);
    if c6 then L55() else L56(pd17);
  D11():
    deopt 45 [r20, pd12];
  D14():
    deopt 64 [r29, r43];
  L43():
    pd13 = force? pd12;
    checkMissing(pd13);
    c4 = `is.object`(pd13);
    if c4 then L45() else L46(r20, pd13);
  L52():
    goto L4(r29, r43);
  L54(dx9):
    c7 = `is.object`(dx9);
    if c7 then L58() else L59(dx9);
  L55():
    dr8 = tryDispatchBuiltin.1("$", pd17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L57() else L56(dr8);
  L56(pd19):
    r46 = `$`(pd19, <sym text>);
    goto L54(r46);
  L7(dx13):
    st funs = dx13;
    gpids = ldf gpids;
    check L62() else D17();
  L44(r34, dx7):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L45():
    dr6 = tryDispatchBuiltin.1("$", pd13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L47() else L46(r20, dr6);
  L46(r32, pd15):
    r35 = `$`(pd15, <sym text>);
    goto L44(r32, r35);
  L57():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L54(dx8);
  L58():
    dr10 = tryDispatchBuiltin.1("[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L60() else L59(dr10);
  L59(dx11):
    ind = ld ind;
    check L61() else D16();
  D16():
    deopt 71 [dx11, ind];
  D17():
    deopt 76 [];
  L6(r39, r40):
    match = ldf match in base;
    r42 = dyn match(dx7, r40, NA_INT, NULL);
    check L51() else D13();
  L47():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L44(r20, dx6);
  L48():
    c5 = ldf c in base;
    r41 = dyn c5("warning", "stop", "message", "packageStartupMessage", "gettext", "gettextf", "ngettext");
    check L50() else D12();
  L49():
    r38 = dyn base3("warning", "stop", "message", "packageStartupMessage", "gettext", "gettextf", "ngettext");
    goto L6(r34, r38);
  L60():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L7(dx12);
  L61():
    ind1 = force? ind;
    __ = ldf `[` in base;
    r47 = dyn __(dx11, ind1);
    goto L7(r47);
  L62():
    p4 = prom<V +>{
      pd20 = ld pd;
      pd21 = force? pd20;
      checkMissing(pd21);
      c8 = `is.object`(pd21);
      if c8 then L2() else L3(pd21);
    L1(dx15):
      c9 = `is.object`(dx15);
      if c9 then L5() else L6(dx15);
    L2():
      dr12 = tryDispatchBuiltin.1("$", pd21);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(pd23):
      r48 = `$`(pd23, <sym id>);
      goto L1(r48);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx14);
    L5():
      dr14 = tryDispatchBuiltin.1("[", dx15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx17):
      ind2 = ld ind;
      ind3 = force? ind2;
      __1 = ldf `[` in base;
      r49 = dyn __1(dx17, ind3);
      goto L0(r49);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    r51 = dyn gpids(p4);
    check L63() else D18();
  D12():
    deopt 58 [r34, r41];
  D13():
    deopt 62 [r39, r42];
  D18():
    deopt 78 [r51];
  L50():
    goto L6(r34, r41);
  L51():
    goto L5(r39, r42);
  L63():
    st ids = r51;
    getParseText = ldf getParseText;
    check L64() else D19();
  D19():
    deopt 81 [];
  L64():
    p5 = prom<V +>{
      pd24 = ld pd;
      pd25 = force? pd24;
      checkMissing(pd25);
      return pd25;
    };
    p6 = prom<V +>{
      ids = ld ids;
      ids1 = force? ids;
      checkMissing(ids1);
      return ids1;
    };
    r54 = dyn getParseText(p5, p6);
    check L65() else D20();
  D20():
    deopt 84 [r54];
  L65():
    st calls = r54;
    pd26 = ld pd;
    check L66() else D21();
  D21():
    deopt 86 [pd26];
  L66():
    pd27 = force? pd26;
    checkMissing(pd27);
    c10 = `is.object`(pd27);
    if c10 then L67() else L68(pd27);
  L8(dx21):
    st table = dx21;
    getParseText1 = ldf getParseText;
    check L75() else D23();
  L67():
    dr16 = tryDispatchBuiltin.1("[", pd27);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L69() else L68(dr16);
  L68(pd29):
    pd30 = ld pd;
    check L70() else D22();
  D22():
    deopt 88 [pd29, pd30];
  D23():
    deopt 98 [];
  L69():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L8(dx20);
  L70():
    pd31 = force? pd30;
    checkMissing(pd31);
    c11 = `is.object`(pd31);
    if c11 then L72() else L73(pd29, pd31);
  L75():
    p7 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p8 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      c12 = `is.object`(table3);
      if c12 then L1() else L2(table3);
    L0(dx25):
      return dx25;
    L1():
      dr20 = tryDispatchBuiltin.1("$", table3);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(table5):
      r59 = `$`(table5, <sym id>);
      goto L0(r59);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx24);
    };
    r61 = dyn getParseText1(p7, p8);
    check L76() else D24();
  D24():
    deopt 101 [r61];
  L71(dx23):
    r56 = `==`(dx23, "STR_CONST");
    __2 = ldf `[` in base;
    r57 = dyn __2(pd27, r56, <missing>);
    goto L8(r57);
  L72():
    dr18 = tryDispatchBuiltin.1("$", pd31);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L74() else L73(pd29, dr18);
  L73(pd34, pd35):
    r55 = `$`(pd35, <sym token>);
    goto L71(r55);
  L76():
    l1 = ld table;
    c13 = `is.object`(l1);
    if c13 then L78() else L79(r61, l1);
  L74():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L71(dx22);
  L77(dx27):
    st table = dx27;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L78():
    dr22 = tryDispatchBuiltin.0("$<-", l1, r61);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L80() else L79(r61, dr22);
  L79(r63, l3):
    r66 = `$<-`(l3, <sym text>, r61);
    goto L77(r66);
  L9(r68):
    st pos = r68;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  L80():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L77(dx26);
  L81():
    gpids1 = ldf gpids;
    check L83() else D25();
  L82():
    r67 = dyn base4(<lang gpids(`$`(table, id))>, <sym ids>);
    goto L9(r67);
  D25():
    deopt 108 [];
  L10(r74):
    r76 = `!`(r74);
    st ind = r76;
    split = ldf split;
    check L91() else D31();
  L83():
    p9 = prom<V +>{
      table6 = ld table;
      table7 = force? table6;
      checkMissing(table7);
      c14 = `is.object`(table7);
      if c14 then L1() else L2(table7);
    L0(dx29):
      return dx29;
    L1():
      dr24 = tryDispatchBuiltin.1("$", table7);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(table9):
      r69 = `$`(table9, <sym id>);
      goto L0(r69);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx28);
    };
    r71 = dyn gpids1(p9);
    check L84() else D26();
  L87():
    pos = ld pos;
    check L89() else D29();
  L88():
    r73 = dyn base5(<sym pos>);
    goto L10(r73);
  D26():
    deopt 110 [r71];
  D29():
    deopt 120 [pos];
  D31():
    deopt 127 [];
  L84():
    ids2 = ld ids;
    check L85() else D27();
  L89():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na1 = ldf `is.na` in base;
    r75 = dyn is_na1(pos1);
    check L90() else D30();
  L91():
    p10 = prom<V +>{
      table10 = ld table;
      table11 = force? table10;
      checkMissing(table11);
      c15 = `is.object`(table11);
      if c15 then L1() else L2();
    L0(dx31):
      return dx31;
    L1():
      dr26 = tryDispatchBuiltin.1("[", table11);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2();
    L2():
      ind4 = ld ind;
      ind5 = force? ind4;
      __3 = ldf `[` in base;
      r77 = dyn __3(table11, ind5, <missing>);
      goto L0(r77);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx30);
    };
    p13 = prom<V +>{
      factor = ldf factor;
      p11 = prom<V +>{
        pos2 = ld pos;
        pos3 = force? pos2;
        checkMissing(pos3);
        c16 = `is.object`(pos3);
        if c16 then L1() else L2(pos3);
      L0(dx33):
        return dx33;
      L1():
        dr28 = tryDispatchBuiltin.1("[", pos3);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(pos5):
        ind6 = ld ind;
        ind7 = force? ind6;
        __4 = ldf `[` in base;
        r79 = dyn __4(pos5, ind7);
        goto L0(r79);
      L3():
        dx32 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx32);
      };
      p12 = prom<V +>{
        sym6 = ldf seq_along;
        base6 = ldf seq_along in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r82):
        return r82;
      L1():
        ids4 = ld ids;
        ids5 = force? ids4;
        checkMissing(ids5);
        r83 = seq_along(ids5);
        goto L0(r83);
      L2():
        r81 = dyn base6(<sym ids>);
        goto L0(r81);
      };
      r85 = dyn factor(p11, p12);
      return r85;
    };
    r87 = dyn split(p10, p13);
    check L92() else D32();
  D27():
    deopt 111 [ids2];
  D30():
    deopt 123 [r75];
  D32():
    deopt 130 [r87];
  L85():
    ids3 = force? ids2;
    checkMissing(ids3);
    match1 = ldf match in base;
    r72 = dyn match1(r71, ids3, NA_INT, NULL);
    check L86() else D28();
  L90():
    goto L10(r75);
  L92():
    st table = r87;
    r88 = clos inner4168020745;
    st extract_message_strings = r88;
    do_call = ldf `do.call`;
    check L93() else D33();
  D28():
    deopt 116 [r72];
  D33():
    deopt 136 [];
  L86():
    goto L9(r72);
  L93():
    p14 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p21 = prom<V +>{
      Map = ldf Map;
      p15 = prom<V +>{
        extract_message_strings = ld extract_message_strings;
        extract_message_strings1 = force? extract_message_strings;
        checkMissing(extract_message_strings1);
        return extract_message_strings1;
      };
      p17 = prom<V +>{
        as_list = ldf `as.list`;
        p16 = prom<V +>{
          funs = ld funs;
          funs1 = force? funs;
          checkMissing(funs1);
          return funs1;
        };
        r92 = dyn as_list(p16);
        return r92;
      };
      p19 = prom<V +>{
        as_list1 = ldf `as.list`;
        p18 = prom<V +>{
          calls = ld calls;
          calls1 = force? calls;
          checkMissing(calls1);
          return calls1;
        };
        r95 = dyn as_list1(p18);
        return r95;
      };
      p20 = prom<V +>{
        table14 = ld table;
        table15 = force? table14;
        checkMissing(table15);
        return table15;
      };
      r98 = dyn Map(p15, p17, p19, p20);
      return r98;
    };
    r100 = dyn do_call(p14, p21);
    check L94() else D34();
  D34():
    deopt 139 [r100];
  L94():
    popenv;
    return r100;
  }
}
fun inner161954228(ids) {
  (reg ids:*) -+> V { var ids:*, reg parents:*, reg parents1:V, reg c:L, reg parents3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg parents6:V, reg r1:V, reg parents7:*, reg parents8:V, reg c1:L, reg parents11:V, reg parents12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg parents14:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg parents19:V, reg parents20:V, reg r3:V, reg ids1:*, reg ids2:V, reg as_character:cls, reg r4:V, reg __:cls, reg r5:V, reg as_character1:cls, reg r6:V, reg __1:cls, reg r7:V |
    mkenv;
    st ids = ids;
    parents = ld parents;
    check L4() else D0();
  D0():
    deopt 0 [parents];
  L4():
    parents1 = force? parents;
    checkMissing(parents1);
    c = `is.object`(parents1);
    if c then L5() else L6(parents1);
  L0(dx1):
    popenv;
    return dx1;
  L5():
    dr = tryDispatchBuiltin.1("[", parents1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(parents3):
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(parents6, r1):
    __1 = ldf `[` in base;
    r7 = dyn __1(parents6, r1);
    goto L0(r7);
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    parents7 = ld parents;
    check L10() else D1();
  L9():
    r = dyn base(<lang `[`(parents, as.character(ids))>);
    goto L1(parents3, r);
  D1():
    deopt 4 [parents3, parents7];
  L10():
    parents8 = force? parents7;
    checkMissing(parents8);
    c1 = `is.object`(parents8);
    if c1 then L11() else L12(parents3, parents8);
  L2(parents14, dx3):
    as_character1 = ldf `as.character` in base;
    r6 = dyn as_character1(dx3);
    check L18() else D4();
  L11():
    dr2 = tryDispatchBuiltin.1("[", parents8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(parents3, dr2);
  L12(parents11, parents12):
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D4():
    deopt 14 [parents14, r6];
  L3(parents19, parents20, r3):
    __ = ldf `[` in base;
    r5 = dyn __(parents20, r3);
    goto L2(parents19, r5);
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(parents3, dx2);
  L14():
    ids1 = ld ids;
    check L16() else D2();
  L15():
    r2 = dyn base1(<sym ids>);
    goto L3(parents11, parents12, r2);
  L18():
    goto L1(parents14, r6);
  D2():
    deopt 8 [parents11, parents12, ids1];
  L16():
    ids2 = force? ids1;
    checkMissing(ids2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(ids2);
    check L17() else D3();
  D3():
    deopt 11 [parents11, parents12, r4];
  L17():
    goto L3(parents11, parents12, r4);
  }
}
fun inner4168020745(fun, call, table) {
  (reg fun:*, reg call:*, reg table:*) -+> V { var fun:*, var call:*, var table:*, reg str2lang:cls, reg call1:*, reg call2:V, reg p:p(V +), reg r1:V, reg call3:*, reg call4:V, reg c:L, reg call6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg call9:V, reg r3:V, reg call10:*, reg call11:V, reg as_character:cls, reg r4:V, reg r5:V, reg __:cls, reg r6:V, reg as_list:cls, reg match_call:cls, reg get:cls, reg fun1:*, reg fun2:V, reg p1:p(V +), reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg call12:*, reg call13:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg fun3:*, reg fun4:V, reg r15:V, reg c1:L, reg mc:*, reg mc1:V, reg c2:L, reg mc3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg dx4:V, reg fun5:*, reg fun6:V, reg r17:V, reg c3:L, reg mc4:*, reg mc5:V, reg c4:L, reg mc7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg mc10:V, reg r19:V, reg c5:cls, reg r20:V, reg __2:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg mc11:*, reg mc12:V, reg names:cls, reg r26:V, reg c6:V, reg r27:V, reg c7:L, reg mc13:*, reg mc14:V, reg c8:L, reg mc16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg mc19:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg mc22:V, reg r31:V, reg mc23:*, reg mc24:V, reg names1:cls, reg r32:V, reg nzchar:cls, reg r33:V, reg r34:V, reg __3:cls, reg r35:V, reg mc25:*, reg mc26:V, reg c9:L, reg mc28:V, reg dr8:V, reg dc4:L, reg dx10:V, reg __4:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg args:*, reg args1:V, reg c10:L, reg args3:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg vapply:cls, reg args4:*, reg args5:V, reg p6:p(V +), reg is_character:*, reg is_character1:V, reg p7:p(V +), reg r41:V, reg __5:cls, reg r42:V, reg as_character1:cls, reg r43:V, reg vapply1:cls, reg str2expression:cls, reg table1:*, reg table2:V, reg c11:L, reg table4:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r44:V, reg p8:p(V +), reg r46:V, reg p9:p(V +), reg as_character2:*, reg as_character3:V, reg p10:p(V +), reg r49:V, reg which:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg texts:*, reg texts1:V, reg strings:*, reg strings1:V, reg match:cls, reg r54:V, reg is_na:cls, reg r55:V, reg r56:V, reg p11:p(V +), reg r58:V, reg cbind:cls, reg table5:*, reg table6:V, reg c12:L, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg pos:*, reg pos1:V, reg __6:cls, reg r59:V, reg p12:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg r62:V, reg fun7:*, reg fun8:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg pos2:*, reg pos3:V, reg length:cls, reg r65:V, reg rep_int:cls, reg r66:V, reg p13:p(V +), reg r68:V |
    mkenv;
    st fun = fun;
    st call = call;
    st table = table;
    str2lang = ldf str2lang;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      return call2;
    };
    r1 = dyn str2lang(p);
    check L18() else D1();
  D1():
    deopt 3 [r1];
  L18():
    st call = r1;
    call3 = ld call;
    check L19() else D2();
  D2():
    deopt 5 [call3];
  L19():
    call4 = force? call3;
    checkMissing(call4);
    c = `is.object`(call4);
    if c then L20() else L21(call4);
  L0(dx1):
    st call = dx1;
    as_list = ldf `as.list`;
    check L27() else D5();
  L20():
    dr = tryDispatchBuiltin.1("[", call4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(call6):
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  D5():
    deopt 18 [];
  L1(call9, r3):
    r5 = `!=`(r3, "...");
    __ = ldf `[` in base;
    r6 = dyn __(call9, r5);
    goto L0(r6);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L23():
    call10 = ld call;
    check L25() else D3();
  L24():
    r2 = dyn base(<sym call>);
    goto L1(call6, r2);
  L27():
    p5 = prom<V +>{
      match_call = ldf `match.call`;
      p3 = prom<V +>{
        get = ldf get;
        p1 = prom<V +>{
          fun1 = ld fun;
          fun2 = force? fun1;
          checkMissing(fun2);
          return fun2;
        };
        p2 = prom<V +>{
          _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
          _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
          checkMissing(_BaseNamespaceEnv1);
          return _BaseNamespaceEnv1;
        };
        r9 = dyn get[, envir](p1, p2);
        return r9;
      };
      p4 = prom<V +>{
        call12 = ld call;
        call13 = force? call12;
        checkMissing(call13);
        return call13;
      };
      r12 = dyn match_call(p3, p4);
      return r12;
    };
    r14 = dyn as_list(p5);
    check L28() else D6();
  D3():
    deopt 9 [call6, call10];
  D6():
    deopt 20 [r14];
  L25():
    call11 = force? call10;
    checkMissing(call11);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(call11);
    check L26() else D4();
  L28():
    st mc = r14;
    fun3 = ld fun;
    check L29() else D7();
  D4():
    deopt 12 [call6, r4];
  D7():
    deopt 22 [fun3];
  L26():
    goto L1(call6, r4);
  L29():
    fun4 = force? fun3;
    checkMissing(fun4);
    r15 = `==`(fun4, "gettextf");
    c1 = `as.logical`(r15);
    if c1 then L30() else L2();
  L2():
    fun5 = ld fun;
    check L36() else D9();
  L4(dx4):
    st args = dx4;
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L30():
    mc = ld mc;
    check L31() else D8();
  D8():
    deopt 26 [mc];
  D9():
    deopt 31 [fun5];
  L15(r38):
    st strings = r38;
    vapply1 = ldf vapply;
    check L78() else D23();
  L31():
    mc1 = force? mc;
    checkMissing(mc1);
    c2 = `is.object`(mc1);
    if c2 then L32() else L33(mc1);
  L36():
    fun6 = force? fun5;
    checkMissing(fun6);
    r17 = `==`(fun6, "ngettext");
    c3 = `as.logical`(r17);
    if c3 then L37() else L5();
  L69():
    args = ld args;
    check L71() else D19();
  L70():
    r37 = dyn base6(<lang `[`(args, vapply(args, is.character, TRUE))>);
    goto L15(r37);
  D19():
    deopt 78 [args];
  D23():
    deopt 91 [];
  L3(dx3):
    goto L4(dx3);
  L5():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L32():
    dr2 = tryDispatchBuiltin.1("[", mc1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(mc3):
    __1 = ldf `[` in base;
    r16 = dyn __1(mc3, "fmt");
    goto L3(r16);
  L37():
    mc4 = ld mc;
    check L38() else D10();
  L71():
    args1 = force? args;
    checkMissing(args1);
    c10 = `is.object`(args1);
    if c10 then L72() else L73(args1);
  L78():
    p9 = prom<V +>{
      str2expression = ldf str2expression;
      p8 = prom<V +>{
        table1 = ld table;
        table2 = force? table1;
        checkMissing(table2);
        c11 = `is.object`(table2);
        if c11 then L1() else L2(table2);
      L0(dx14):
        return dx14;
      L1():
        dr12 = tryDispatchBuiltin.1("$", table2);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(table4):
        r44 = `$`(table4, <sym text>);
        goto L0(r44);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx13);
      };
      r46 = dyn str2expression(p8);
      return r46;
    };
    p10 = prom<V +>{
      as_character2 = ld `as.character`;
      as_character3 = force? as_character2;
      checkMissing(as_character3);
      return as_character3;
    };
    r49 = dyn vapply1(p9, p10, "");
    check L79() else D24();
  D10():
    deopt 35 [mc4];
  D24():
    deopt 95 [r49];
  L8(r23):
    r27 = `!`(r23);
    c7 = `as.logical`(r27);
    if c7 then L52() else L10();
  L16(dx12):
    as_character1 = ldf `as.character` in base;
    r43 = dyn as_character1(dx12);
    check L77() else D22();
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L38():
    mc5 = force? mc4;
    checkMissing(mc5);
    c4 = `is.object`(mc5);
    if c4 then L39() else L40(mc5);
  L46():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L47():
    r22 = dyn base2(<lang names(mc)>);
    goto L8(r22);
  L72():
    dr10 = tryDispatchBuiltin.1("[", args1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L74() else L73(dr10);
  L73(args3):
    vapply = ldf vapply;
    check L75() else D20();
  L79():
    st texts = r49;
    which = ldf which;
    check L80() else D25();
  D20():
    deopt 81 [args3];
  D22():
    deopt 88 [r43];
  D25():
    deopt 98 [];
  L6(dx6):
    goto L4(dx6);
  L9(r25):
    c6 = `==`(r25, NULL);
    goto L8(c6);
  L10():
    goto L14();
  L14():
    mc25 = ld mc;
    check L65() else D18();
  L39():
    dr4 = tryDispatchBuiltin.1("[", mc5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(mc7):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L48():
    mc11 = ld mc;
    check L50() else D12();
  L49():
    r24 = dyn base3(<sym mc>);
    goto L9(r24);
  L52():
    mc13 = ld mc;
    check L53() else D14();
  L74():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L16(dx11);
  L75():
    p6 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    p7 = prom<V +>{
      is_character = ld `is.character`;
      is_character1 = force? is_character;
      checkMissing(is_character1);
      return is_character1;
    };
    r41 = dyn vapply(p6, p7, TRUE);
    check L76() else D21();
  L77():
    goto L15(r43);
  L80():
    p11 = prom<V +>{
      sym7 = ldf `is.na`;
      base7 = ldf `is.na` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r51):
      r56 = `!`(r51);
      return r56;
    L2():
      sym8 = ldf match;
      base8 = ldf match in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r50 = dyn base7(<lang match(texts, strings)>);
      goto L0(r50);
    L1(r53):
      is_na = ldf `is.na` in base;
      r55 = dyn is_na(r53);
      goto L0(r55);
    L4():
      texts = ld texts;
      texts1 = force? texts;
      checkMissing(texts1);
      strings = ld strings;
      strings1 = force? strings;
      checkMissing(strings1);
      match = ldf match in base;
      r54 = dyn match(texts1, strings1, NA_INT, NULL);
      goto L1(r54);
    L5():
      r52 = dyn base8(<sym texts>, <sym strings>);
      goto L1(r52);
    };
    r58 = dyn which(p11);
    check L81() else D26();
  D12():
    deopt 47 [mc11];
  D14():
    deopt 53 [mc13];
  D18():
    deopt 70 [mc25];
  D21():
    deopt 85 [args3, r41];
  D26():
    deopt 100 [r58];
  L7(mc10, r19):
    __2 = ldf `[` in base;
    r21 = dyn __2(mc10, r19);
    goto L6(r21);
  L41():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx5);
  L42():
    c5 = ldf c in base;
    r20 = dyn c5("msg1", "msg2");
    check L44() else D11();
  L43():
    r18 = dyn base1("msg1", "msg2");
    goto L7(mc7, r18);
  L50():
    mc12 = force? mc11;
    checkMissing(mc12);
    names = ldf names in base;
    r26 = dyn names(mc12);
    check L51() else D13();
  L53():
    mc14 = force? mc13;
    checkMissing(mc14);
    c8 = `is.object`(mc14);
    if c8 then L54() else L55(mc14);
  L65():
    mc26 = force? mc25;
    checkMissing(mc26);
    c9 = `is.object`(mc26);
    if c9 then L66() else L67(mc26);
  L76():
    __5 = ldf `[` in base;
    r42 = dyn __5(args3, r41);
    goto L16(r42);
  L81():
    st pos = r58;
    cbind = ldf cbind;
    check L82() else D27();
  D11():
    deopt 42 [mc7, r20];
  D13():
    deopt 50 [r26];
  D27():
    deopt 103 [];
  L11(dx8):
    st mc = dx8;
    goto L14();
  L44():
    goto L7(mc7, r20);
  L51():
    goto L9(r26);
  L54():
    dr6 = tryDispatchBuiltin.1("[", mc14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(mc16):
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L66():
    dr8 = tryDispatchBuiltin.1("[", mc26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L68() else L67(dr8);
  L67(mc28):
    __4 = ldf `[` in base;
    r36 = dyn __4(mc28, -1);
    goto L4(r36);
  L82():
    p12 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      c12 = `is.object`(table6);
      if c12 then L1() else L2();
    L0(dx16):
      return dx16;
    L1():
      dr14 = tryDispatchBuiltin.1("[", table6);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      pos = ld pos;
      pos1 = force? pos;
      __6 = ldf `[` in base;
      r59 = dyn __6(table6, pos1, <missing>);
      goto L0(r59);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx15);
    };
    p13 = prom<V +>{
      sym9 = ldf `rep.int`;
      base9 = ldf `rep.int` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r62):
      return r62;
    L2():
      fun7 = ld fun;
      fun8 = force? fun7;
      checkMissing(fun8);
      sym10 = ldf length;
      base10 = ldf length in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r61 = dyn base9(<sym fun>, <lang length(pos)>);
      goto L0(r61);
    L1(r64):
      rep_int = ldf `rep.int` in base;
      r66 = dyn rep_int(fun8, r64);
      goto L0(r66);
    L4():
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      length = ldf length in base;
      r65 = dyn length(pos3);
      goto L1(r65);
    L5():
      r63 = dyn base10(<sym pos>);
      goto L1(r63);
    };
    r68 = dyn cbind[, caller](p12, p13);
    check L83() else D28();
  D28():
    deopt 107 [r68];
  L12(mc19, r29):
    r34 = `!`(r29);
    __3 = ldf `[` in base;
    r35 = dyn __3(mc19, r34);
    goto L11(r35);
  L56():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx7);
  L57():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L58():
    r28 = dyn base4(<lang names(mc)>);
    goto L12(mc16, r28);
  L68():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx10);
  L83():
    popenv;
    return r68;
  L13(mc22, r31):
    nzchar = ldf nzchar in base;
    r33 = dyn nzchar(r31);
    check L63() else D17();
  L59():
    mc23 = ld mc;
    check L61() else D15();
  L60():
    r30 = dyn base5(<sym mc>);
    goto L13(mc16, r30);
  D15():
    deopt 59 [mc16, mc23];
  D17():
    deopt 64 [mc22, r33];
  L61():
    mc24 = force? mc23;
    checkMissing(mc24);
    names1 = ldf names in base;
    r32 = dyn names1(mc24);
    check L62() else D16();
  L63():
    goto L12(mc22, r33);
  D16():
    deopt 62 [mc16, r32];
  L62():
    goto L13(mc16, r32);
  }
}