fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st correctFilenameToken = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg head_default:cls, reg unlist:cls, reg strsplit:cls, reg linebuffer:*, reg linebuffer1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c1:L, reg _CompletionEnv7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg lbss:*, reg lbss1:V, reg r9:V, reg lbss2:*, reg lbss3:V, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg whichDoubleQuote:*, reg whichDoubleQuote1:V, reg sum:cls, reg r13:V, reg __2:cls, reg r14:V, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg whichSingleQuote:*, reg whichSingleQuote1:V, reg sum1:cls, reg r18:V, reg __3:cls, reg r19:V, reg r20:V, reg insideDoubleQuote:*, reg insideDoubleQuote1:V, reg c2:L, reg c4:V, reg insideSingleQuote:*, reg insideSingleQuote1:V, reg c5:L, reg c6:V, reg c8:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg which:cls, reg whichDoubleQuote2:*, reg whichDoubleQuote3:V, reg p4:p(V +), reg r24:V, reg which1:cls, reg whichSingleQuote2:*, reg whichSingleQuote3:V, reg p5:p(V +), reg r26:V, reg max:cls, reg r27:V, reg r28:V, reg insideDoubleQuote2:*, reg insideDoubleQuote3:V, reg c9:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg which2:cls, reg whichDoubleQuote4:*, reg whichDoubleQuote5:V, reg p6:p(V +), reg r32:V, reg max1:cls, reg r33:V, reg insideSingleQuote2:*, reg insideSingleQuote3:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg which3:cls, reg whichSingleQuote4:*, reg whichSingleQuote5:V, reg p7:p(V +), reg r37:V, reg max2:cls, reg r38:V, reg _CompletionEnv8:*, reg _CompletionEnv9:V, reg c11:L, reg _CompletionEnv11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg __4:cls, reg r39:V, reg substring:cls, reg linebuffer2:*, reg linebuffer3:V, reg p8:p(V +), reg loc_start:*, reg loc_start1:V, reg r41:V, reg p9:p(V +), reg _CompletionEnv12:*, reg _CompletionEnv13:V, reg c12:L, reg _CompletionEnv15:V, reg dr6:V, reg dc3:L, reg dx5:V, reg dx6:V, reg __5:cls, reg r43:V, reg p10:p(V +), reg r45:V |
    mkenv;
    _CompletionEnv = ld `.CompletionEnv`;
    check L11() else D0();
  D0():
    deopt 0 [_CompletionEnv];
  L11():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c = `is.object`(_CompletionEnv1);
    if c then L12() else L13(_CompletionEnv1);
  L0(dx1):
    st linebuffer = dx1;
    head_default = ldf `head.default`;
    check L15() else D1();
  L12():
    dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(_CompletionEnv3):
    __ = ldf `[[` in base;
    r = dyn __(_CompletionEnv3, "linebuffer");
    goto L0(r);
  D1():
    deopt 7 [];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L15():
    p2 = prom<V +>{
      unlist = ldf unlist;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          linebuffer = ld linebuffer;
          linebuffer1 = force? linebuffer;
          checkMissing(linebuffer1);
          return linebuffer1;
        };
        r2 = dyn strsplit(p, "");
        return r2;
      };
      r4 = dyn unlist(p1);
      return r4;
    };
    p3 = prom<V +>{
      _CompletionEnv4 = ld `.CompletionEnv`;
      _CompletionEnv5 = force? _CompletionEnv4;
      checkMissing(_CompletionEnv5);
      c1 = `is.object`(_CompletionEnv5);
      if c1 then L1() else L2(_CompletionEnv5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", _CompletionEnv5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(_CompletionEnv7):
      __1 = ldf `[[` in base;
      r6 = dyn __1(_CompletionEnv7, "end");
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r8 = dyn head_default(p2, p3);
    check L16() else D2();
  D2():
    deopt 10 [r8];
  L16():
    st lbss = r8;
    lbss = ld lbss;
    check L17() else D3();
  D3():
    deopt 12 [lbss];
  L17():
    lbss1 = force? lbss;
    checkMissing(lbss1);
    r9 = `==`(lbss1, "\"");
    st whichDoubleQuote = r9;
    lbss2 = ld lbss;
    check L18() else D4();
  D4():
    deopt 17 [lbss2];
  L18():
    lbss3 = force? lbss2;
    checkMissing(lbss3);
    r10 = `==`(lbss3, "'");
    st whichSingleQuote = r10;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L1(r12):
    __2 = ldf `%%` in base;
    r14 = dyn __2(r12, 2.0);
    check L23() else D7();
  L19():
    whichDoubleQuote = ld whichDoubleQuote;
    check L21() else D5();
  L20():
    r11 = dyn base(<sym whichDoubleQuote>);
    goto L1(r11);
  D5():
    deopt 25 [whichDoubleQuote];
  D7():
    deopt 31 [r14];
  L21():
    whichDoubleQuote1 = force? whichDoubleQuote;
    checkMissing(whichDoubleQuote1);
    sum = ldf sum in base;
    r13 = dyn sum(whichDoubleQuote1);
    check L22() else D6();
  L23():
    r15 = `==`(r14, 1.0);
    st insideDoubleQuote = r15;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D6():
    deopt 28 [r13];
  L2(r17):
    __3 = ldf `%%` in base;
    r19 = dyn __3(r17, 2.0);
    check L28() else D10();
  L22():
    goto L1(r13);
  L24():
    whichSingleQuote = ld whichSingleQuote;
    check L26() else D8();
  L25():
    r16 = dyn base1(<sym whichSingleQuote>);
    goto L2(r16);
  D8():
    deopt 38 [whichSingleQuote];
  D10():
    deopt 44 [r19];
  L26():
    whichSingleQuote1 = force? whichSingleQuote;
    checkMissing(whichSingleQuote1);
    sum1 = ldf sum in base;
    r18 = dyn sum1(whichSingleQuote1);
    check L27() else D9();
  L28():
    r20 = `==`(r19, 1.0);
    st insideSingleQuote = r20;
    insideDoubleQuote = ld insideDoubleQuote;
    check L29() else D11();
  D9():
    deopt 41 [r18];
  D11():
    deopt 48 [insideDoubleQuote];
  L27():
    goto L2(r18);
  L29():
    insideDoubleQuote1 = force? insideDoubleQuote;
    checkMissing(insideDoubleQuote1);
    c2 = `as.logical`(insideDoubleQuote1);
    if c2 then L30() else L3(c2);
  L3(c4):
    c8 = `as.logical`(c4);
    if c8 then L33() else L4();
  L30():
    insideSingleQuote = ld insideSingleQuote;
    check L31() else D12();
  D12():
    deopt 50 [c2, insideSingleQuote];
  L4():
    insideDoubleQuote2 = ld insideDoubleQuote;
    check L42() else D18();
  L6(r28):
    st `loc.start` = r28;
    substring = ldf substring;
    check L62() else D27();
  L31():
    insideSingleQuote1 = force? insideSingleQuote;
    checkMissing(insideSingleQuote1);
    c5 = `as.logical`(insideSingleQuote1);
    c6 = `&&`(c2, c5);
    goto L3(c6);
  L33():
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  D18():
    deopt 65 [insideDoubleQuote2];
  D27():
    deopt 92 [];
  L5(r22):
    goto L6(r22);
  L34():
    which = ldf which;
    check L36() else D13();
  L35():
    r21 = dyn base2(<lang which(whichDoubleQuote)>, <lang which(whichSingleQuote)>);
    goto L5(r21);
  L42():
    insideDoubleQuote3 = force? insideDoubleQuote2;
    checkMissing(insideDoubleQuote3);
    c9 = `as.logical`(insideDoubleQuote3);
    if c9 then L43() else L7();
  L62():
    p8 = prom<V +>{
      linebuffer2 = ld linebuffer;
      linebuffer3 = force? linebuffer2;
      checkMissing(linebuffer3);
      return linebuffer3;
    };
    p9 = prom<V +>{
      loc_start = ld `loc.start`;
      loc_start1 = force? loc_start;
      checkMissing(loc_start1);
      r41 = `+`(loc_start1, 1);
      return r41;
    };
    p10 = prom<V +>{
      _CompletionEnv12 = ld `.CompletionEnv`;
      _CompletionEnv13 = force? _CompletionEnv12;
      checkMissing(_CompletionEnv13);
      c12 = `is.object`(_CompletionEnv13);
      if c12 then L1() else L2(_CompletionEnv13);
    L0(dx6):
      return dx6;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", _CompletionEnv13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(_CompletionEnv15):
      __5 = ldf `[[` in base;
      r43 = dyn __5(_CompletionEnv15, "end");
      goto L0(r43);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx5);
    };
    r45 = dyn substring(p8, p9, p10);
    check L63() else D28();
  D13():
    deopt 56 [];
  D28():
    deopt 96 [r45];
  L7():
    insideSingleQuote2 = ld insideSingleQuote;
    check L50() else D22();
  L36():
    p4 = prom<V +>{
      whichDoubleQuote2 = ld whichDoubleQuote;
      whichDoubleQuote3 = force? whichDoubleQuote2;
      checkMissing(whichDoubleQuote3);
      return whichDoubleQuote3;
    };
    r24 = dyn which(p4);
    check L37() else D14();
  L43():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L63():
    popenv;
    return r45;
  D14():
    deopt 58 [r24];
  D22():
    deopt 75 [insideSingleQuote2];
  L8(r30):
    goto L6(r30);
  L37():
    which1 = ldf which;
    check L38() else D15();
  L44():
    which2 = ldf which;
    check L46() else D19();
  L45():
    r29 = dyn base3(<lang which(whichDoubleQuote)>);
    goto L8(r29);
  L50():
    insideSingleQuote3 = force? insideSingleQuote2;
    checkMissing(insideSingleQuote3);
    c10 = `as.logical`(insideSingleQuote3);
    if c10 then L51() else L9();
  D15():
    deopt 60 [];
  D19():
    deopt 70 [];
  L9():
    _CompletionEnv8 = ld `.CompletionEnv`;
    check L58() else D26();
  L38():
    p5 = prom<V +>{
      whichSingleQuote2 = ld whichSingleQuote;
      whichSingleQuote3 = force? whichSingleQuote2;
      checkMissing(whichSingleQuote3);
      return whichSingleQuote3;
    };
    r26 = dyn which1(p5);
    check L39() else D16();
  L46():
    p6 = prom<V +>{
      whichDoubleQuote4 = ld whichDoubleQuote;
      whichDoubleQuote5 = force? whichDoubleQuote4;
      checkMissing(whichDoubleQuote5);
      return whichDoubleQuote5;
    };
    r32 = dyn which2(p6);
    check L47() else D20();
  L51():
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D16():
    deopt 62 [r26];
  D20():
    deopt 72 [r32];
  D26():
    deopt 85 [_CompletionEnv8];
  L10(r35):
    goto L6(r35);
  L39():
    max = ldf max in base;
    r27 = dyn max(r24, r26);
    check L40() else D17();
  L47():
    max1 = ldf max in base;
    r33 = dyn max1(r32);
    check L48() else D21();
  L52():
    which3 = ldf which;
    check L54() else D23();
  L53():
    r34 = dyn base4(<lang which(whichSingleQuote)>);
    goto L10(r34);
  L58():
    _CompletionEnv9 = force? _CompletionEnv8;
    checkMissing(_CompletionEnv9);
    c11 = `is.object`(_CompletionEnv9);
    if c11 then L59() else L60(_CompletionEnv9);
  D17():
    deopt 64 [r27];
  D21():
    deopt 74 [r33];
  D23():
    deopt 80 [];
  L40():
    goto L5(r27);
  L48():
    goto L8(r33);
  L54():
    p7 = prom<V +>{
      whichSingleQuote4 = ld whichSingleQuote;
      whichSingleQuote5 = force? whichSingleQuote4;
      checkMissing(whichSingleQuote5);
      return whichSingleQuote5;
    };
    r37 = dyn which3(p7);
    check L55() else D24();
  L59():
    dr4 = tryDispatchBuiltin.1("[[", _CompletionEnv9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(dr4);
  L60(_CompletionEnv11):
    __4 = ldf `[[` in base;
    r39 = dyn __4(_CompletionEnv11, "start");
    goto L6(r39);
  D24():
    deopt 82 [r37];
  L55():
    max2 = ldf max in base;
    r38 = dyn max2(r37);
    check L56() else D25();
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  D25():
    deopt 84 [r38];
  L56():
    goto L10(r38);
  }
}