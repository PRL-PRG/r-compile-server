fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4044830143;
    st check_math_rendering_in_Rd_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4044830143(db, eq, katex) {
  (reg db:*, reg eq:*, reg katex:*) -+> V { var db:*, var eq:*, reg eq_isMissing:L, reg eq_orDefault:*, var katex:*, reg katex_isMissing:L, reg katex_orDefault:*, reg _make_KaTeX_checker:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg eq1:*, reg eq2:V, reg c:V, reg c1:L, reg _Rd_get_equations_from_Rd_db:cls, reg db1:*, reg db2:V, reg p1:p(V +), reg r5:V, reg matrix:cls, reg character:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg lapply:cls, reg eq3:*, reg eq4:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg p3:p(V +), reg katex1:*, reg katex2:V, reg p4:p(V +), reg r13:V, reg vapply:cls, reg results:*, reg results1:V, reg p5:p(V +), reg __1:*, reg __2:V, reg p6:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg msg:*, reg msg1:V, reg nzchar:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg ind:*, reg ind1:V, reg any:cls, reg r22:V, reg c3:L, reg msg2:*, reg msg3:V, reg c4:L, reg msg5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r23:V, reg sub:cls, reg msg6:*, reg msg7:V, reg p7:p(V +), reg r25:V, reg sub1:cls, reg msg8:*, reg msg9:V, reg p8:p(V +), reg r27:V, reg gsub:cls, reg msg10:*, reg msg11:V, reg p9:p(V +), reg r29:V, reg gsub1:cls, reg msg12:*, reg msg13:V, reg p10:p(V +), reg r31:V, reg eq7:*, reg eq8:V, reg c5:L, reg eq10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind4:*, reg ind5:V, reg __4:cls, reg r32:V, reg eq11:*, reg eq12:V, reg c6:L, reg eq14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind6:*, reg ind7:V, reg __5:cls, reg r33:V, reg l1:*, reg l2:V, reg l3:*, reg l4:V, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg tst:*, reg tst1:V, reg is_na:cls, reg r37:V, reg l5:*, reg c7:L, reg r39:S, reg l7:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos:*, reg pos1:V, reg ___:cls, reg r42:V, reg which:cls, reg pos2:*, reg pos3:V, reg r43:V, reg p11:p(V +), reg r45:V, reg paste0:cls, reg l8:*, reg l9:V, reg c8:L, reg l11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pos4:*, reg pos5:V, reg __6:cls, reg r46:V, reg p12:p(V +), reg r48:V, reg l12:*, reg c9:L, reg r50:V, reg l14:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg pos6:*, reg pos7:V, reg ___1:cls, reg r53:V, reg which1:cls, reg tst2:*, reg tst3:V, reg c10:L, reg tst5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos8:*, reg pos9:V, reg __7:cls, reg r54:V, reg r55:V, reg p13:p(V +), reg r57:V, reg paste1:cls, reg l15:*, reg l16:V, reg c11:L, reg l18:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg pos10:*, reg pos11:V, reg __8:cls, reg r58:V, reg p14:p(V +), reg l19:*, reg l20:V, reg c12:L, reg l22:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg pos12:*, reg pos13:V, reg __9:cls, reg r60:V, reg p15:p(V +), reg r62:V, reg l23:*, reg c13:L, reg r64:V, reg l25:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg pos14:*, reg pos15:V, reg ___2:cls, reg r67:V, reg cbind:cls, reg eq15:*, reg eq16:V, reg c14:L, reg eq18:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg ind8:*, reg ind9:V, reg __10:cls, reg r68:V, reg p16:p(V +), reg l26:*, reg l27:V, reg p17:p(V +), reg msg14:*, reg msg15:V, reg p18:p(V +), reg r72:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r74:V, reg r75:V, reg c15:cls, reg r76:V, reg l28:*, reg colnames__:cls, reg r77:V, reg out:*, reg out1:V |
    mkenv;
    st db = db;
    eq_isMissing = missing.0(eq);
    if eq_isMissing then L0(NULL) else L0(eq);
  L0(eq_orDefault):
    st eq = eq_orDefault;
    katex_isMissing = missing.0(katex);
    if katex_isMissing then L1() else L2(katex);
  L1():
    p = prom<V +>{
      _make_KaTeX_checker = ldf `.make_KaTeX_checker`;
      r = dyn _make_KaTeX_checker();
      return r;
    };
    goto L2(p);
  L2(katex_orDefault):
    st katex = katex_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L3(r3):
    c1 = `as.logical`(r3);
    if c1 then L21() else L4();
  L18():
    eq1 = ld eq;
    check L20() else D0();
  L19():
    r2 = dyn base(<sym eq>);
    goto L3(r2);
  D0():
    deopt 1 [eq1];
  L4():
    goto L5();
  L5():
    matrix = ldf matrix;
    check L25() else D3();
  L20():
    eq2 = force? eq1;
    checkMissing(eq2);
    c = `==`(eq2, NULL);
    goto L3(c);
  L21():
    _Rd_get_equations_from_Rd_db = ldf `.Rd_get_equations_from_Rd_db`;
    check L22() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L22():
    p1 = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    r5 = dyn _Rd_get_equations_from_Rd_db(p1);
    check L23() else D2();
  L25():
    p2 = prom<V +>{
      character = ldf character;
      r7 = dyn character();
      return r7;
    };
    r9 = dyn matrix(p2, 0, 3);
    check L26() else D4();
  D2():
    deopt 7 [r5];
  D4():
    deopt 16 [r9];
  L23():
    st eq = r5;
    goto L5();
  L26():
    st out = r9;
    lapply = ldf lapply;
    check L27() else D5();
  D5():
    deopt 19 [];
  L27():
    p3 = prom<V +>{
      eq3 = ld eq;
      eq4 = force? eq3;
      checkMissing(eq4);
      c2 = `is.object`(eq4);
      if c2 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", eq4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r10 = dyn __(eq4, <missing>, 3);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      katex1 = ld katex;
      katex2 = force? katex1;
      checkMissing(katex2);
      return katex2;
    };
    r13 = dyn lapply(p3, p4);
    check L28() else D6();
  D6():
    deopt 22 [r13];
  L28():
    st results = r13;
    vapply = ldf vapply;
    check L29() else D7();
  D7():
    deopt 25 [];
  L29():
    p5 = prom<V +>{
      results = ld results;
      results1 = force? results;
      checkMissing(results1);
      return results1;
    };
    p6 = prom<V +>{
      __1 = ld `[[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r16 = dyn vapply(p5, p6, "", "error");
    check L30() else D8();
  D8():
    deopt 30 [r16];
  L30():
    st msg = r16;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L6(r18):
    st ind = r18;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L31():
    msg = ld msg;
    check L33() else D9();
  L32():
    r17 = dyn base1(<sym msg>);
    goto L6(r17);
  D9():
    deopt 34 [msg];
  L7(r21):
    c3 = `as.logical`(r21);
    if c3 then L39() else L8();
  L33():
    msg1 = force? msg;
    checkMissing(msg1);
    nzchar = ldf nzchar in base;
    r19 = dyn nzchar(msg1);
    check L34() else D10();
  L35():
    ind = ld ind;
    check L37() else D11();
  L36():
    r20 = dyn base2(<sym ind>);
    goto L7(r20);
  D10():
    deopt 37 [r19];
  D11():
    deopt 41 [ind];
  L8():
    goto L16();
  L16():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  L34():
    goto L6(r19);
  L37():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r22 = dyn any(ind1);
    check L38() else D12();
  L39():
    msg2 = ld msg;
    check L40() else D13();
  D12():
    deopt 44 [r22];
  D13():
    deopt 45 [msg2];
  L17(r75):
    l28 = ld out;
    colnames__ = ldf `colnames<-`;
    check L95() else D45();
  L38():
    goto L7(r22);
  L40():
    msg3 = force? msg2;
    checkMissing(msg3);
    c4 = `is.object`(msg3);
    if c4 then L41() else L42(msg3);
  L92():
    c15 = ldf c in base;
    r76 = dyn c15("path", "pos", "msg");
    check L94() else D44();
  L93():
    r74 = dyn base4("path", "pos", "msg");
    goto L17(r74);
  D44():
    deopt 158 [r76];
  D45():
    deopt 160 [r75, l28, r75];
  L9(dx3):
    st msg = dx3;
    sub = ldf sub;
    check L45() else D15();
  L41():
    dr2 = tryDispatchBuiltin.1("[", msg3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(msg5):
    ind2 = ld ind;
    check L44() else D14();
  L94():
    goto L17(r76);
  L95():
    r77 = dyn colnames__(l28, NULL, r75);
    check L96() else D46();
  D14():
    deopt 47 [msg5, ind2];
  D15():
    deopt 52 [];
  D46():
    deopt 162 [r75, r77];
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L44():
    ind3 = force? ind2;
    __3 = ldf `[` in base;
    r23 = dyn __3(msg5, ind3);
    goto L9(r23);
  L45():
    p7 = prom<V +>{
      msg6 = ld msg;
      msg7 = force? msg6;
      checkMissing(msg7);
      return msg7;
    };
    r25 = dyn sub("^KaTeX parse error: (.*) at position.*:", "\\1 in", p7);
    check L46() else D16();
  L96():
    st out = r77;
    out = ld out;
    check L97() else D47();
  D16():
    deopt 56 [r25];
  D47():
    deopt 164 [out];
  L46():
    st msg = r25;
    sub1 = ldf sub;
    check L47() else D17();
  L97():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D17():
    deopt 59 [];
  L47():
    p8 = prom<V +>{
      msg8 = ld msg;
      msg9 = force? msg8;
      checkMissing(msg9);
      return msg9;
    };
    r27 = dyn sub1("^KaTeX parse error: ", "", p8);
    check L48() else D18();
  D18():
    deopt 63 [r27];
  L48():
    st msg = r27;
    gsub = ldf gsub;
    check L49() else D19();
  D19():
    deopt 66 [];
  L49():
    p9 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    r29 = dyn gsub("\u2026", "...", p9);
    check L50() else D20();
  D20():
    deopt 70 [r29];
  L50():
    st msg = r29;
    gsub1 = ldf gsub;
    check L51() else D21();
  D21():
    deopt 73 [];
  L51():
    p10 = prom<V +>{
      msg12 = ld msg;
      msg13 = force? msg12;
      checkMissing(msg13);
      return msg13;
    };
    r31 = dyn gsub1("\u0332", "", p10);
    check L52() else D22();
  D22():
    deopt 77 [r31];
  L52():
    st msg = r31;
    eq7 = ld eq;
    check L53() else D23();
  D23():
    deopt 79 [eq7];
  L53():
    eq8 = force? eq7;
    checkMissing(eq8);
    c5 = `is.object`(eq8);
    if c5 then L54() else L55(eq8);
  L10(dx5):
    st l1 = dx5;
    eq11 = ld eq;
    check L58() else D25();
  L54():
    dr4 = tryDispatchBuiltin.1("[", eq8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(dr4);
  L55(eq10):
    ind4 = ld ind;
    check L57() else D24();
  D24():
    deopt 81 [eq10, ind4];
  D25():
    deopt 86 [eq11];
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L57():
    ind5 = force? ind4;
    __4 = ldf `[` in base;
    r32 = dyn __4(eq10, ind5, 5);
    goto L10(r32);
  L58():
    eq12 = force? eq11;
    checkMissing(eq12);
    c6 = `is.object`(eq12);
    if c6 then L59() else L60(eq12);
  L11(dx7):
    st l2 = dx7;
    l1 = ld l1;
    check L63() else D27();
  L59():
    dr6 = tryDispatchBuiltin.1("[", eq12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(dr6);
  L60(eq14):
    ind6 = ld ind;
    check L62() else D26();
  D26():
    deopt 88 [eq14, ind6];
  D27():
    deopt 93 [l1];
  L61():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L62():
    ind7 = force? ind6;
    __5 = ldf `[` in base;
    r33 = dyn __5(eq14, ind7, 6);
    goto L11(r33);
  L63():
    l2 = force? l1;
    checkMissing(l2);
    l3 = ld l2;
    check L64() else D28();
  D28():
    deopt 94 [l2, l3];
  L64():
    l4 = force? l3;
    checkMissing(l4);
    r34 = `==`(l2, l4);
    st tst = r34;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L65() else L66();
  L12(r36):
    st pos = r36;
    l5 = ld l1;
    c7 = `is.object`(l5);
    if c7 then L69() else L70("", l5);
  L65():
    tst = ld tst;
    check L67() else D29();
  L66():
    r35 = dyn base3(<sym tst>);
    goto L12(r35);
  D29():
    deopt 100 [tst];
  L13(dx9):
    st l1 = dx9;
    which = ldf which;
    check L73() else D32();
  L67():
    tst1 = force? tst;
    checkMissing(tst1);
    is_na = ldf `is.na` in base;
    r37 = dyn is_na(tst1);
    check L68() else D30();
  L69():
    dr8 = tryDispatchBuiltin.0("[<-", l5, "");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L71() else L70("", dr8);
  L70(r39, l7):
    pos = ld pos;
    check L72() else D31();
  D30():
    deopt 103 [r37];
  D31():
    deopt 108 [r39, l7, "", pos];
  D32():
    deopt 113 [];
  L68():
    goto L12(r37);
  L71():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx8);
  L72():
    pos1 = force? pos;
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l7, "", pos1);
    goto L13(r42);
  L73():
    p11 = prom<V +>{
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      r43 = `!`(pos3);
      return r43;
    };
    r45 = dyn which(p11);
    check L74() else D33();
  D33():
    deopt 115 [r45];
  L74():
    st pos = r45;
    paste0 = ldf paste0;
    check L75() else D34();
  D34():
    deopt 118 [];
  L75():
    p12 = prom<V +>{
      l8 = ld l1;
      l9 = force? l8;
      checkMissing(l9);
      c8 = `is.object`(l9);
      if c8 then L1() else L2(l9);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", l9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(l11):
      pos4 = ld pos;
      pos5 = force? pos4;
      __6 = ldf `[` in base;
      r46 = dyn __6(l11, pos5);
      goto L0(r46);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r48 = dyn paste0(":", p12);
    check L76() else D35();
  D35():
    deopt 121 [r48];
  L76():
    l12 = ld l1;
    c9 = `is.object`(l12);
    if c9 then L77() else L78(r48, l12);
  L14(dx13):
    st l1 = dx13;
    which1 = ldf which;
    check L81() else D37();
  L77():
    dr12 = tryDispatchBuiltin.0("[<-", l12, r48);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L79() else L78(r48, dr12);
  L78(r50, l14):
    pos6 = ld pos;
    check L80() else D36();
  D36():
    deopt 123 [r50, l14, r48, pos6];
  D37():
    deopt 128 [];
  L79():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L14(dx12);
  L80():
    pos7 = force? pos6;
    ___1 = ldf `[<-` in base;
    r53 = dyn ___1(l14, r48, pos7);
    goto L14(r53);
  L81():
    p13 = prom<V +>{
      tst2 = ld tst;
      tst3 = force? tst2;
      checkMissing(tst3);
      c10 = `is.object`(tst3);
      if c10 then L1() else L2(tst3);
    L0(dx15):
      r55 = `!`(dx15);
      return r55;
    L1():
      dr14 = tryDispatchBuiltin.1("[", tst3);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(tst5):
      pos8 = ld pos;
      pos9 = force? pos8;
      __7 = ldf `[` in base;
      r54 = dyn __7(tst5, pos9);
      goto L0(r54);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r57 = dyn which1(p13);
    check L82() else D38();
  D38():
    deopt 130 [r57];
  L82():
    st pos = r57;
    paste1 = ldf paste0;
    check L83() else D39();
  D39():
    deopt 133 [];
  L83():
    p14 = prom<V +>{
      l15 = ld l1;
      l16 = force? l15;
      checkMissing(l16);
      c11 = `is.object`(l16);
      if c11 then L1() else L2(l16);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", l16);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(l18):
      pos10 = ld pos;
      pos11 = force? pos10;
      __8 = ldf `[` in base;
      r58 = dyn __8(l18, pos11);
      goto L0(r58);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p15 = prom<V +>{
      l19 = ld l2;
      l20 = force? l19;
      checkMissing(l20);
      c12 = `is.object`(l20);
      if c12 then L1() else L2(l20);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", l20);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(l22):
      pos12 = ld pos;
      pos13 = force? pos12;
      __9 = ldf `[` in base;
      r60 = dyn __9(l22, pos13);
      goto L0(r60);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r62 = dyn paste1(p14, "-", p15);
    check L84() else D40();
  D40():
    deopt 137 [r62];
  L84():
    l23 = ld l1;
    c13 = `is.object`(l23);
    if c13 then L85() else L86(r62, l23);
  L15(dx21):
    st l1 = dx21;
    cbind = ldf cbind;
    check L89() else D42();
  L85():
    dr20 = tryDispatchBuiltin.0("[<-", l23, r62);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L87() else L86(r62, dr20);
  L86(r64, l25):
    pos14 = ld pos;
    check L88() else D41();
  D41():
    deopt 139 [r64, l25, r62, pos14];
  D42():
    deopt 144 [];
  L87():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L15(dx20);
  L88():
    pos15 = force? pos14;
    ___2 = ldf `[<-` in base;
    r67 = dyn ___2(l25, r62, pos15);
    goto L15(r67);
  L89():
    p16 = prom<V +>{
      eq15 = ld eq;
      eq16 = force? eq15;
      checkMissing(eq16);
      c14 = `is.object`(eq16);
      if c14 then L1() else L2(eq16);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", eq16);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(eq18):
      ind8 = ld ind;
      ind9 = force? ind8;
      __10 = ldf `[` in base;
      r68 = dyn __10(eq18, ind9, 1);
      goto L0(r68);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p17 = prom<V +>{
      l26 = ld l1;
      l27 = force? l26;
      checkMissing(l27);
      return l27;
    };
    p18 = prom<V +>{
      msg14 = ld msg;
      msg15 = force? msg14;
      checkMissing(msg15);
      return msg15;
    };
    r72 = dyn cbind(p16, p17, p18);
    check L90() else D43();
  D43():
    deopt 148 [r72];
  L90():
    st out = r72;
    goto L16();
  }
}