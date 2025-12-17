fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg getParseData:cls, reg fn:*, reg fn1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg d:*, reg d1:V, reg c:V, reg r6:V, reg c1:L, reg which:cls, reg d2:*, reg d3:V, reg c2:L, reg d5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg r8:V, reg p1:p(V +), reg r10:V, reg d6:*, reg d7:V, reg c3:L, reg d9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg plus:*, reg plus1:V, reg __:cls, reg r12:V, reg print:cls, reg d10:*, reg d11:V, reg c5:L, reg d13:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg sum:*, reg sum1:V, reg as_character:cls, reg r15:V, reg __1:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg print1:cls, reg getParseText:cls, reg d17:*, reg d18:V, reg p3:p(V +), reg sum2:*, reg sum3:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V |
    mkenv;
    r = clos inner618818357;
    st getParseData = r;
    r1 = clos inner2501545716;
    st fn = r1;
    getParseData = ldf getParseData;
    check L3() else D0();
  D0():
    deopt 7 [];
  L3():
    p = prom<V +>{
      fn = ld fn;
      fn1 = force? fn;
      checkMissing(fn1);
      return fn1;
    };
    r3 = dyn getParseData(p);
    check L4() else D1();
  D1():
    deopt 9 [r3];
  L4():
    st d = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L8() else L1();
  L5():
    d = ld d;
    check L7() else D2();
  L6():
    r4 = dyn base(<sym d>);
    goto L0(r4);
  D2():
    deopt 12 [d];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L7():
    d1 = force? d;
    checkMissing(d1);
    c = `==`(d1, NULL);
    goto L0(c);
  L8():
    which = ldf which;
    check L9() else D3();
  D3():
    deopt 17 [];
  L9():
    p1 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      c2 = `is.object`(d3);
      if c2 then L1() else L2(d3);
    L0(dx1):
      r8 = `==`(dx1, "'+'");
      return r8;
    L1():
      dr = tryDispatchBuiltin.1("$", d3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(d5):
      r7 = `$`(d5, <sym token>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn which(p1);
    check L10() else D4();
  D4():
    deopt 19 [r10];
  L10():
    st plus = r10;
    d6 = ld d;
    check L11() else D5();
  D5():
    deopt 21 [d6];
  L11():
    d7 = force? d6;
    checkMissing(d7);
    c3 = `is.object`(d7);
    if c3 then L13() else L14(d7);
  L12(dx3):
    c4 = `is.object`(dx3);
    if c4 then L16() else L17(dx3);
  L13():
    dr2 = tryDispatchBuiltin.1("$", d7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(d9):
    r11 = `$`(d9, <sym parent>);
    goto L12(r11);
  L2(dx7):
    st sum = dx7;
    print = ldf print;
    check L20() else D7();
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(dr4);
  L17(dx5):
    plus = ld plus;
    check L19() else D6();
  D6():
    deopt 24 [dx5, plus];
  D7():
    deopt 29 [];
  L18():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx6);
  L19():
    plus1 = force? plus;
    __ = ldf `[` in base;
    r12 = dyn __(dx5, plus1);
    goto L2(r12);
  L20():
    p2 = prom<V +>{
      d10 = ld d;
      d11 = force? d10;
      checkMissing(d11);
      c5 = `is.object`(d11);
      if c5 then L2() else L3(d11);
    L0(dx9):
      return dx9;
    L2():
      dr6 = tryDispatchBuiltin.1("[", d11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(d13):
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(r14):
      __1 = ldf `[` in base;
      r16 = dyn __1(d11, r14, <missing>);
      goto L0(r16);
    L4():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    L5():
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      as_character = ldf `as.character` in base;
      r15 = dyn as_character(sum1);
      goto L1(r15);
    L6():
      r13 = dyn base1(<sym sum>);
      goto L1(r13);
    };
    r18 = dyn print(p2);
    check L21() else D8();
  D8():
    deopt 31 [r18];
  L21():
    print1 = ldf print;
    check L22() else D9();
  D9():
    deopt 33 [];
  L22():
    p5 = prom<V +>{
      getParseText = ldf getParseText;
      p3 = prom<V +>{
        d17 = ld d;
        d18 = force? d17;
        checkMissing(d18);
        return d18;
      };
      p4 = prom<V +>{
        sum2 = ld sum;
        sum3 = force? sum2;
        checkMissing(sum3);
        return sum3;
      };
      r21 = dyn getParseText(p3, p4);
      return r21;
    };
    r23 = dyn print1(p5);
    check L23() else D10();
  D10():
    deopt 35 [r23];
  L23():
    popenv;
    return r23;
  }
}
fun inner618818357(x, includeText) {
  (reg x:*, reg includeText:*) -+> V { var x:*, var includeText:*, reg includeText_isMissing:L, reg includeText_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg x5:V, reg getSrcfile:cls, reg x6:*, reg x7:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg srcfile:*, reg srcfile1:V, reg c1:V, reg c2:L, reg srcfile2:*, reg srcfile3:V, reg c3:L, reg srcfile5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg data:*, reg data1:V, reg c4:V, reg c5:L, reg c7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg c10:L, reg r13:V, reg srcfile6:*, reg srcfile7:V, reg c11:L, reg c13:L, reg srcfile9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c15:L, reg dx3:V, reg r14:V, reg c16:V, reg r15:V, reg c17:L, reg c18:V, reg c20:L, reg srcfile10:*, reg srcfile11:V, reg c21:L, reg srcfile13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg c22:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg data2:*, reg data3:V, reg c23:V, reg r20:V, reg c24:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg data4:*, reg data5:V, reg attr:cls, reg r23:V, reg t:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg data6:*, reg data7:V, reg unclass:cls, reg r26:V, reg p1:p(V +), reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg c25:cls, reg r31:V, reg l:*, reg colnames__:cls, reg r32:V, reg data_frame:cls, reg data8:*, reg data9:V, reg c26:L, reg data11:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg r34:V, reg c27:cls, reg r35:V, reg r36:V, reg __:cls, reg r37:V, reg p2:p(V +), reg tokens:*, reg tokens1:V, reg p3:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg data15:*, reg data16:V, reg c28:L, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg __1:cls, reg r42:V, reg as_logical:cls, reg r43:V, reg p4:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg data19:*, reg data20:V, reg attr1:cls, reg r47:V, reg p5:p(V +), reg r49:V, reg order:cls, reg data21:*, reg data22:V, reg c29:L, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg __2:cls, reg r50:V, reg p6:p(V +), reg data25:*, reg data26:V, reg c30:L, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg __3:cls, reg r52:V, reg p7:p(V +), reg data29:*, reg data30:V, reg c31:L, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg __4:cls, reg r54:V, reg r55:V, reg p8:p(V +), reg data33:*, reg data34:V, reg c32:L, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg __5:cls, reg r57:V, reg r58:V, reg p9:p(V +), reg r60:V, reg data37:*, reg data38:V, reg c33:L, reg data40:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg o:*, reg o1:V, reg __6:cls, reg r61:V, reg data41:*, reg data42:V, reg c34:L, reg data44:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg r62:V, reg l1:*, reg rownames__:cls, reg r63:V, reg srcfile14:*, reg srcfile15:V, reg l2:*, reg attr__:cls, reg r64:V, reg isTRUE:cls, reg includeText1:*, reg includeText2:V, reg p10:p(V +), reg r66:V, reg c35:L, reg which:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg data45:*, reg data46:V, reg c36:L, reg data48:V, reg dr24:V, reg dc12:L, reg dx27:V, reg dx28:V, reg r69:V, reg nzchar:cls, reg r70:V, reg r71:V, reg p11:p(V +), reg r73:V, reg r74:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r75:V, reg r76:V, reg includeText3:*, reg includeText4:V, reg is_na:cls, reg r77:V, reg c37:L, reg which1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r78:V, reg r79:V, reg data49:*, reg data50:V, reg c38:L, reg data52:V, reg dr26:V, reg dc13:L, reg dx29:V, reg dx30:V, reg r80:V, reg nzchar1:cls, reg r81:V, reg r82:V, reg data53:*, reg data54:V, reg c39:L, reg r84:V, reg data56:V, reg dr28:V, reg dc14:L, reg dx31:V, reg r86:V, reg dx32:V, reg r87:V, reg r88:V, reg p12:p(V +), reg r90:V, reg l3:*, reg c40:L, reg r92:dots, reg l5:*, reg dr30:V, reg dc15:L, reg dx33:V, reg dx34:V, reg r95:V, reg integer:cls, reg r96:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r97:V, reg r98:V, reg gettext:*, reg gettext1:V, reg length:cls, reg r99:V, reg c41:L, reg getParseText:cls, reg data57:*, reg data58:V, reg p13:p(V +), reg data59:*, reg data60:V, reg c42:L, reg data62:V, reg dr32:V, reg dc16:L, reg dx35:V, reg dx36:V, reg r101:V, reg c43:L, reg dx38:V, reg dr34:V, reg dc17:L, reg dx39:V, reg dx40:V, reg gettext2:*, reg gettext3:V, reg __7:cls, reg r102:V, reg p14:p(V +), reg r104:V, reg l6:*, reg c44:L, reg r107:V, reg l9:*, reg r108:V, reg l10:*, reg dr36:V, reg dc18:L, reg dx41:V, reg r111:V, reg l12:*, reg r112:V, reg dx42:V, reg r113:V, reg c45:L, reg r115:V, reg l14:*, reg dx44:V, reg dr38:V, reg dc19:L, reg dx45:V, reg r117:V, reg l16:*, reg dx46:V, reg gettext4:*, reg gettext5:V, reg ___:cls, reg r118:V, reg c46:L, reg r120:V, reg l18:*, reg dr40:V, reg dc20:L, reg dx47:V, reg r122:V, reg dx48:V, reg r123:V, reg r124:V, reg data63:*, reg data64:V |
    mkenv;
    st x = x;
    includeText_isMissing = missing.0(includeText);
    if includeText_isMissing then L0(NA_LGL) else L0(includeText);
  L0(includeText_orDefault):
    st includeText = includeText_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L1(r1):
    c = `as.logical`(r1);
    if c then L30() else L2();
  L26():
    x1 = ld x;
    check L28() else D0();
  L27():
    r = dyn base(<sym x>, "srcfile");
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    getSrcfile = ldf getSrcfile;
    check L33() else D3();
  L3(x5):
    st srcfile = x5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L28():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "srcfile", FALSE);
    check L29() else D1();
  L30():
    x3 = ld x;
    check L31() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  D3():
    deopt 11 [];
  L4(r6):
    c2 = `as.logical`(r6);
    if c2 then L38() else L5();
  L29():
    goto L1(r2);
  L31():
    x4 = force? x3;
    checkMissing(x4);
    goto L3(x4);
  L33():
    p = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r4 = dyn getSrcfile(p);
    check L34() else D4();
  L35():
    srcfile = ld srcfile;
    check L37() else D5();
  L36():
    r5 = dyn base1(<sym srcfile>);
    goto L4(r5);
  D4():
    deopt 13 [r4];
  D5():
    deopt 16 [srcfile];
  L5():
    srcfile2 = ld srcfile;
    check L41() else D6();
  L34():
    goto L3(r4);
  L37():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    c1 = `==`(srcfile1, NULL);
    goto L4(c1);
  L38():
    popenv;
    return NULL;
  D6():
    deopt 24 [srcfile2];
  L41():
    srcfile3 = force? srcfile2;
    checkMissing(srcfile3);
    c3 = `is.object`(srcfile3);
    if c3 then L43() else L44(srcfile3);
  L42(dx1):
    st data = dx1;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L43():
    dr = tryDispatchBuiltin.1("$", srcfile3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(dr);
  L44(srcfile5):
    r9 = `$`(srcfile5, <sym parseData>);
    goto L42(r9);
  L7(r11):
    c5 = `as.logical`(r11);
    if c5 then L49() else L8(c5);
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L42(dx);
  L46():
    data = ld data;
    check L48() else D7();
  L47():
    r10 = dyn base2(<sym data>);
    goto L7(r10);
  D7():
    deopt 29 [data];
  L8(c7):
    c20 = `as.logical`(c7);
    if c20 then L58() else L10();
  L48():
    data1 = force? data;
    checkMissing(data1);
    c4 = `==`(data1, NULL);
    goto L7(c4);
  L49():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L9(c10, r13):
    r15 = `!`(r13);
    c17 = `as.logical`(r15);
    c18 = `&&`(c10, c17);
    goto L8(c18);
  L10():
    goto L11();
  L11():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L50():
    srcfile6 = ld srcfile;
    check L52() else D8();
  L51():
    r12 = dyn base3(<lang `$`(srcfile, original)>);
    goto L9(c5, r12);
  L58():
    srcfile10 = ld srcfile;
    check L59() else D9();
  D8():
    deopt 33 [c5, srcfile6];
  D9():
    deopt 39 [srcfile10];
  L12(r19):
    r20 = `!`(r19);
    c24 = `as.logical`(r20);
    if c24 then L72() else L13();
  L52():
    srcfile7 = force? srcfile6;
    checkMissing(srcfile7);
    c11 = `is.object`(srcfile7);
    if c11 then L54() else L55(c5, srcfile7);
  L59():
    srcfile11 = force? srcfile10;
    checkMissing(srcfile11);
    c21 = `is.object`(srcfile11);
    if c21 then L61() else L62(srcfile11);
  L69():
    data2 = ld data;
    check L71() else D10();
  L70():
    r18 = dyn base4(<sym data>);
    goto L12(r18);
  D10():
    deopt 47 [data2];
  L13():
    goto L25();
  L25():
    data63 = ld data;
    check L144() else D45();
  L53(c15, dx3):
    c16 = `==`(dx3, NULL);
    goto L9(c15, c16);
  L54():
    dr2 = tryDispatchBuiltin.1("$", srcfile7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(c5, dr2);
  L55(c13, srcfile9):
    r14 = `$`(srcfile9, <sym original>);
    goto L53(c13, r14);
  L60(dx5):
    c22 = `is.object`(dx5);
    if c22 then L65() else L66(dx5);
  L61():
    dr4 = tryDispatchBuiltin.1("$", srcfile11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(srcfile13):
    r16 = `$`(srcfile13, <sym original>);
    goto L60(r16);
  L71():
    data3 = force? data2;
    checkMissing(data3);
    c23 = `==`(data3, NULL);
    goto L12(c23);
  L72():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  D45():
    deopt 178 [data63];
  L14(r22):
    st tokens = r22;
    t = ldf t;
    check L77() else D13();
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L53(c5, dx2);
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L60(dx4);
  L64(dx9):
    st data = dx9;
    goto L11();
  L65():
    dr6 = tryDispatchBuiltin.1("$", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L67() else L66(dr6);
  L66(dx7):
    r17 = `$`(dx7, <sym parseData>);
    goto L64(r17);
  L73():
    data4 = ld data;
    check L75() else D11();
  L74():
    r21 = dyn base5(<sym data>, "tokens");
    goto L14(r21);
  L144():
    data64 = force? data63;
    checkMissing(data64);
    popenv;
    return data64;
  D11():
    deopt 53 [data4];
  D13():
    deopt 60 [];
  L67():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L64(dx8);
  L75():
    data5 = force? data4;
    checkMissing(data5);
    attr = ldf attr in base;
    r23 = dyn attr(data5, "tokens");
    check L76() else D12();
  L77():
    p1 = prom<V +>{
      sym6 = ldf unclass;
      base6 = ldf unclass in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      data6 = ld data;
      data7 = force? data6;
      checkMissing(data7);
      unclass = ldf unclass in base;
      r26 = dyn unclass(data7);
      goto L0(r26);
    L2():
      r24 = dyn base6(<sym data>);
      goto L0(r24);
    };
    r28 = dyn t(p1);
    check L78() else D14();
  D12():
    deopt 57 [r23];
  D14():
    deopt 62 [r28];
  L76():
    goto L14(r23);
  L78():
    st data = r28;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L15(r30):
    l = ld data;
    colnames__ = ldf `colnames<-`;
    check L82() else D16();
  L79():
    c25 = ldf c in base;
    r31 = dyn c25("line1", "col1", "line2", "col2", "terminal", "token.num", "id", "parent");
    check L81() else D15();
  L80():
    r29 = dyn base7("line1", "col1", "line2", "col2", "terminal", "token.num", "id", "parent");
    goto L15(r29);
  D15():
    deopt 75 [r31];
  D16():
    deopt 77 [r30, l, r30];
  L81():
    goto L15(r31);
  L82():
    r32 = dyn colnames__(l, NULL, r30);
    check L83() else D17();
  D17():
    deopt 79 [r30, r32];
  L83():
    st data = r32;
    data_frame = ldf `data.frame`;
    check L84() else D18();
  D18():
    deopt 82 [];
  L84():
    p2 = prom<V +>{
      data8 = ld data;
      data9 = force? data8;
      checkMissing(data9);
      c26 = `is.object`(data9);
      if c26 then L2() else L3(data9);
    L0(dx12):
      return dx12;
    L2():
      dr8 = tryDispatchBuiltin.1("[", data9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(data11):
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L1(r34):
      r36 = `-`(<missing>, r34);
      __ = ldf `[` in base;
      r37 = dyn __(data9, <missing>, r36, FALSE);
      goto L0(r37);
    L4():
      dx11 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx11);
    L5():
      c27 = ldf c in base;
      r35 = dyn c27(5.0, 6.0);
      goto L1(r35);
    L6():
      r33 = dyn base8(5.0, 6.0);
      goto L1(r33);
    };
    p3 = prom<V +>{
      tokens = ld tokens;
      tokens1 = force? tokens;
      checkMissing(tokens1);
      return tokens1;
    };
    p4 = prom<V +>{
      sym9 = ldf `as.logical`;
      base9 = ldf `as.logical` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r41):
      return r41;
    L2():
      data15 = ld data;
      data16 = force? data15;
      checkMissing(data16);
      c28 = `is.object`(data16);
      if c28 then L4() else L5();
    L3():
      r40 = dyn base9(<lang `[`(data, , "terminal")>);
      goto L0(r40);
    L1(dx14):
      as_logical = ldf `as.logical` in base;
      r43 = dyn as_logical(dx14);
      goto L0(r43);
    L4():
      dr10 = tryDispatchBuiltin.1("[", data16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5();
    L5():
      __1 = ldf `[` in base;
      r42 = dyn __1(data16, <missing>, "terminal");
      goto L1(r42);
    L6():
      dx13 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx13);
    };
    p5 = prom<V +>{
      sym10 = ldf attr;
      base10 = ldf attr in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      data19 = ld data;
      data20 = force? data19;
      checkMissing(data20);
      attr1 = ldf attr in base;
      r47 = dyn attr1(data20, "text");
      goto L0(r47);
    L2():
      r45 = dyn base10(<sym data>, "text");
      goto L0(r45);
    };
    r49 = dyn data_frame[, token, terminal, text, stringsAsFactors](p2, p3, p4, p5, FALSE);
    check L85() else D19();
  D19():
    deopt 92 [r49];
  L85():
    st data = r49;
    order = ldf order;
    check L86() else D20();
  D20():
    deopt 95 [];
  L86():
    p6 = prom<V +>{
      data21 = ld data;
      data22 = force? data21;
      checkMissing(data22);
      c29 = `is.object`(data22);
      if c29 then L1() else L2();
    L0(dx16):
      return dx16;
    L1():
      dr12 = tryDispatchBuiltin.1("[", data22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r50 = dyn __2(data22, <missing>, 1.0);
      goto L0(r50);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx15);
    };
    p7 = prom<V +>{
      data25 = ld data;
      data26 = force? data25;
      checkMissing(data26);
      c30 = `is.object`(data26);
      if c30 then L1() else L2();
    L0(dx18):
      return dx18;
    L1():
      dr14 = tryDispatchBuiltin.1("[", data26);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r52 = dyn __3(data26, <missing>, 2.0);
      goto L0(r52);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx17);
    };
    p8 = prom<V +>{
      data29 = ld data;
      data30 = force? data29;
      checkMissing(data30);
      c31 = `is.object`(data30);
      if c31 then L1() else L2();
    L0(dx20):
      r55 = `-`(<missing>, dx20);
      return r55;
    L1():
      dr16 = tryDispatchBuiltin.1("[", data30);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r54 = dyn __4(data30, <missing>, 3.0);
      goto L0(r54);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx19);
    };
    p9 = prom<V +>{
      data33 = ld data;
      data34 = force? data33;
      checkMissing(data34);
      c32 = `is.object`(data34);
      if c32 then L1() else L2();
    L0(dx22):
      r58 = `-`(<missing>, dx22);
      return r58;
    L1():
      dr18 = tryDispatchBuiltin.1("[", data34);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r57 = dyn __5(data34, <missing>, 4.0);
      goto L0(r57);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx21);
    };
    r60 = dyn order(p6, p7, p8, p9);
    check L87() else D21();
  D21():
    deopt 100 [r60];
  L87():
    st o = r60;
    data37 = ld data;
    check L88() else D22();
  D22():
    deopt 102 [data37];
  L88():
    data38 = force? data37;
    checkMissing(data38);
    c33 = `is.object`(data38);
    if c33 then L89() else L90(data38);
  L16(dx24):
    st data = dx24;
    data41 = ld data;
    check L93() else D24();
  L89():
    dr20 = tryDispatchBuiltin.1("[", data38);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L91() else L90(dr20);
  L90(data40):
    o = ld o;
    check L92() else D23();
  D23():
    deopt 104 [data40, o];
  D24():
    deopt 110 [data41];
  L91():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L16(dx23);
  L92():
    o1 = force? o;
    __6 = ldf `[` in base;
    r61 = dyn __6(data38, o1, <missing>);
    goto L16(r61);
  L93():
    data42 = force? data41;
    checkMissing(data42);
    c34 = `is.object`(data42);
    if c34 then L95() else L96(data42);
  L94(dx26):
    l1 = ld data;
    rownames__ = ldf `rownames<-`;
    check L98() else D25();
  L95():
    dr22 = tryDispatchBuiltin.1("$", data42);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L97() else L96(dr22);
  L96(data44):
    r62 = `$`(data44, <sym id>);
    goto L94(r62);
  D25():
    deopt 114 [dx26, l1, dx26];
  L97():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L94(dx25);
  L98():
    r63 = dyn rownames__(l1, NULL, dx26);
    check L99() else D26();
  D26():
    deopt 116 [dx26, r63];
  L99():
    st data = r63;
    srcfile14 = ld srcfile;
    check L100() else D27();
  D27():
    deopt 118 [srcfile14];
  L100():
    srcfile15 = force? srcfile14;
    checkMissing(srcfile15);
    l2 = ld data;
    attr__ = ldf `attr<-`;
    check L101() else D28();
  D28():
    deopt 121 [srcfile15, l2, srcfile15];
  L101():
    r64 = dyn attr__(l2, NULL, "srcfile", srcfile15);
    check L102() else D29();
  D29():
    deopt 124 [srcfile15, r64];
  L102():
    st data = r64;
    isTRUE = ldf isTRUE;
    check L103() else D30();
  D30():
    deopt 127 [];
  L103():
    p10 = prom<V +>{
      includeText1 = ld includeText;
      includeText2 = force? includeText1;
      checkMissing(includeText2);
      return includeText2;
    };
    r66 = dyn isTRUE(p10);
    check L104() else D31();
  D31():
    deopt 129 [r66];
  L104():
    c35 = `as.logical`(r66);
    if c35 then L105() else L17();
  L17():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L109() else L110();
  L18(r74):
    st gettext = r74;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L123() else L124();
  L105():
    which = ldf which;
    check L106() else D32();
  D32():
    deopt 131 [];
  L19(r76):
    c37 = `as.logical`(r76);
    if c37 then L113() else L20();
  L21(r98):
    c41 = `as.logical`(r98);
    if c41 then L127() else L22();
  L106():
    p11 = prom<V +>{
      sym11 = ldf nzchar;
      base11 = ldf nzchar in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r68):
      r71 = `!`(r68);
      return r71;
    L1():
      data45 = ld data;
      data46 = force? data45;
      checkMissing(data46);
      c36 = `is.object`(data46);
      if c36 then L4() else L5(data46);
    L2():
      r67 = dyn base11(<lang `$`(data, text)>);
      goto L0(r67);
    L3(dx28):
      nzchar = ldf nzchar in base;
      r70 = dyn nzchar(dx28);
      goto L0(r70);
    L4():
      dr24 = tryDispatchBuiltin.1("$", data46);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L6() else L5(dr24);
    L5(data48):
      r69 = `$`(data48, <sym text>);
      goto L3(r69);
    L6():
      dx27 = getTryDispatchBuiltinValue(dr24);
      goto L3(dx27);
    };
    r73 = dyn which(p11);
    check L107() else D33();
  L109():
    includeText3 = ld includeText;
    check L111() else D34();
  L110():
    r75 = dyn base12(<sym includeText>);
    goto L19(r75);
  L123():
    gettext = ld gettext;
    check L125() else D40();
  L124():
    r97 = dyn base14(<sym gettext>);
    goto L21(r97);
  D33():
    deopt 133 [r73];
  D34():
    deopt 136 [includeText3];
  D40():
    deopt 156 [gettext];
  L20():
    l3 = ld data;
    c40 = `is.object`(l3);
    if c40 then L118() else L119(NULL, l3);
  L22():
    goto L24(NULL);
  L24(r124):
    goto L25();
  L107():
    goto L18(r73);
  L111():
    includeText4 = force? includeText3;
    checkMissing(includeText4);
    is_na = ldf `is.na` in base;
    r77 = dyn is_na(includeText4);
    check L112() else D35();
  L113():
    which1 = ldf which;
    check L114() else D36();
  L125():
    gettext1 = force? gettext;
    checkMissing(gettext1);
    length = ldf length in base;
    r99 = dyn length(gettext1);
    check L126() else D41();
  L127():
    getParseText = ldf getParseText;
    check L128() else D42();
  D35():
    deopt 139 [r77];
  D36():
    deopt 141 [];
  D41():
    deopt 159 [r99];
  D42():
    deopt 161 [];
  L112():
    goto L19(r77);
  L114():
    p12 = prom<V +>{
      sym13 = ldf nzchar;
      base13 = ldf nzchar in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r79):
      r82 = `!`(r79);
      data53 = ld data;
      data54 = force? data53;
      checkMissing(data54);
      c39 = `is.object`(data54);
      if c39 then L8() else L9(r82, data54);
    L1():
      data49 = ld data;
      data50 = force? data49;
      checkMissing(data50);
      c38 = `is.object`(data50);
      if c38 then L4() else L5(data50);
    L2():
      r78 = dyn base13(<lang `$`(data, text)>);
      goto L0(r78);
    L3(dx30):
      nzchar1 = ldf nzchar in base;
      r81 = dyn nzchar1(dx30);
      goto L0(r81);
    L4():
      dr26 = tryDispatchBuiltin.1("$", data50);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L6() else L5(dr26);
    L5(data52):
      r80 = `$`(data52, <sym text>);
      goto L3(r80);
    L7(r86, dx32):
      r88 = `&&`(r86, dx32);
      return r88;
    L8():
      dr28 = tryDispatchBuiltin.1("$", data54);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L10() else L9(r82, dr28);
    L9(r84, data56):
      r87 = `$`(data56, <sym terminal>);
      goto L7(r84, r87);
    L6():
      dx29 = getTryDispatchBuiltinValue(dr26);
      goto L3(dx29);
    L10():
      dx31 = getTryDispatchBuiltinValue(dr28);
      goto L7(r82, dx31);
    };
    r90 = dyn which1(p12);
    check L115() else D37();
  L117(dx34):
    st data = dx34;
    integer = ldf integer;
    check L121() else D38();
  L118():
    dr30 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L120() else L119(NULL, dr30);
  L119(r92, l5):
    r95 = `$<-`(l5, <sym text>, NULL);
    goto L117(r95);
  L126():
    goto L21(r99);
  L128():
    p13 = prom<V +>{
      data57 = ld data;
      data58 = force? data57;
      checkMissing(data58);
      return data58;
    };
    p14 = prom<V +>{
      data59 = ld data;
      data60 = force? data59;
      checkMissing(data60);
      c42 = `is.object`(data60);
      if c42 then L2() else L3(data60);
    L1(dx36):
      c43 = `is.object`(dx36);
      if c43 then L5() else L6(dx36);
    L2():
      dr32 = tryDispatchBuiltin.1("$", data60);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L4() else L3(dr32);
    L3(data62):
      r101 = `$`(data62, <sym id>);
      goto L1(r101);
    L0(dx40):
      return dx40;
    L4():
      dx35 = getTryDispatchBuiltinValue(dr32);
      goto L1(dx35);
    L5():
      dr34 = tryDispatchBuiltin.1("[", dx36);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L7() else L6(dr34);
    L6(dx38):
      gettext2 = ld gettext;
      gettext3 = force? gettext2;
      __7 = ldf `[` in base;
      r102 = dyn __7(dx38, gettext3);
      goto L0(r102);
    L7():
      dx39 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx39);
    };
    r104 = dyn getParseText(p13, p14);
    check L129() else D43();
  D37():
    deopt 143 [r90];
  D38():
    deopt 150 [];
  D43():
    deopt 164 [r104];
  L115():
    goto L18(r90);
  L120():
    dx33 = getTryDispatchBuiltinValue(dr30);
    goto L117(dx33);
  L121():
    r96 = dyn integer(0.0);
    check L122() else D39();
  L129():
    l6 = ld data;
    c44 = `is.object`(l6);
    if c44 then L131() else L132(r104, l6, r104, l6);
  D39():
    deopt 152 [r96];
  L122():
    goto L18(r96);
  L130(r111, l12, r112, dx42):
    c45 = `is.object`(dx42);
    if c45 then L134() else L135(r111, l12, dx42);
  L131():
    dr36 = tryDispatchBuiltin.1("$", l6);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L133() else L132(r104, l6, r104, dr36);
  L132(r107, l9, r108, l10):
    r113 = `$`(l10, <sym text>);
    goto L130(r107, l9, r108, r113);
  L23(r117, l16, dx46):
    c46 = `is.object`(l16);
    if c46 then L139() else L140(r117, l16);
  L133():
    dx41 = getTryDispatchBuiltinValue(dr36);
    goto L130(r104, l6, r104, dx41);
  L134():
    dr38 = tryDispatchBuiltin.0("[<-", dx42, r112);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L136() else L135(r111, l12, dr38);
  L135(r115, l14, dx44):
    gettext4 = ld gettext;
    check L137() else D44();
  D44():
    deopt 169 [r115, l14, dx44, r112, gettext4];
  L136():
    dx45 = getTryDispatchBuiltinValue(dr38);
    goto L23(r111, l12, dx45);
  L137():
    gettext5 = force? gettext4;
    ___ = ldf `[<-` in base;
    r118 = dyn ___(dx44, r112, gettext5);
    goto L23(r115, l14, r118);
  L138(r122, dx48):
    st data = dx48;
    goto L24(r122);
  L139():
    dr40 = tryDispatchBuiltin.0("$<-", l16, dx46);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L141() else L140(r117, dr40);
  L140(r120, l18):
    r123 = `$<-`(l18, <sym text>, dx46);
    goto L138(r120, r123);
  L141():
    dx47 = getTryDispatchBuiltinValue(dr40);
    goto L138(r117, dx47);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `+`(x2, 1.0);
    popenv;
    return r;
  }
}