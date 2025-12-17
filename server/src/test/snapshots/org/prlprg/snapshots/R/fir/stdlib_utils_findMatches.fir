fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3887170248;
    st findMatches = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3887170248(pattern, values, fuzzy, backtick) {
  (reg pattern:*, reg values:*, reg fuzzy:*, reg backtick:*) -+> V { var pattern:*, var values:*, var fuzzy:*, var backtick:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg isTRUE:cls, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c1:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing1:cls, reg r10:V, reg c3:L, reg isTRUE1:cls, reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c4:L, reg _CompletionEnv7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r11:V, reg c5:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg fuzzy1:*, reg fuzzy2:V, reg c6:L, reg findFuzzyMatches:cls, reg pattern1:*, reg pattern2:V, reg p2:p(V +), reg values1:*, reg values2:V, reg p3:p(V +), reg r18:V, reg r19:V, reg findExactMatches:cls, reg pattern3:*, reg pattern4:V, reg p4:p(V +), reg values3:*, reg values4:V, reg p5:p(V +), reg r22:V, reg backtick1:*, reg backtick2:V, reg c7:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg c12:L, reg r24:V, reg comps:*, reg comps1:V, reg length:cls, reg r25:V, reg c13:L, reg c14:V, reg c16:L, reg c18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg c21:L, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg c24:L, reg r29:V, reg comps2:*, reg comps3:V, reg nzchar:cls, reg r30:V, reg all:cls, reg r31:V, reg c25:L, reg c26:V, reg c28:L, reg vapply:cls, reg comps4:*, reg comps5:V, reg p6:p(V +), reg r33:cls, reg p7:p(V +), reg r35:V, reg comps6:*, reg comps7:V |
    mkenv;
    st pattern = pattern;
    st values = values;
    st fuzzy = fuzzy;
    st backtick = backtick;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    c = `as.logical`(r1);
    if c then L17() else L1();
  L15():
    missing = ldf missing in base;
    r2 = dyn missing(<sym fuzzy>);
    goto L0(r2);
  L16():
    r = dyn base(<sym fuzzy>);
    goto L0(r);
  L1():
    goto L2();
  L2():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    isTRUE = ldf isTRUE;
    check L18() else D0();
  D0():
    deopt 4 [];
  L3(r9):
    c3 = `as.logical`(r9);
    if c3 then L23() else L4();
  L18():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      c1 = `is.object`(_CompletionEnv1);
      if c1 then L2() else L3(_CompletionEnv1);
    L1(dx1):
      c2 = `is.object`(dx1);
      if c2 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(_CompletionEnv3):
      r3 = `$`(_CompletionEnv3, <sym settings>);
      goto L1(r3);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __ = ldf `[[` in base;
      r4 = dyn __(dx3, "fuzzy");
      goto L0(r4);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    r6 = dyn isTRUE(p);
    check L19() else D1();
  L21():
    missing1 = ldf missing in base;
    r10 = dyn missing1(<sym backtick>);
    goto L3(r10);
  L22():
    r8 = dyn base1(<sym backtick>);
    goto L3(r8);
  D1():
    deopt 6 [r6];
  L4():
    goto L5();
  L5():
    fuzzy1 = ld fuzzy;
    check L27() else D4();
  L19():
    st fuzzy = r6;
    goto L2();
  L23():
    isTRUE1 = ldf isTRUE;
    check L24() else D2();
  D2():
    deopt 14 [];
  D4():
    deopt 20 [fuzzy1];
  L24():
    p1 = prom<V +>{
      _CompletionEnv4 = ld `.CompletionEnv`;
      _CompletionEnv5 = force? _CompletionEnv4;
      checkMissing(_CompletionEnv5);
      c4 = `is.object`(_CompletionEnv5);
      if c4 then L2() else L3(_CompletionEnv5);
    L1(dx7):
      c5 = `is.object`(dx7);
      if c5 then L5() else L6(dx7);
    L2():
      dr4 = tryDispatchBuiltin.1("$", _CompletionEnv5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(_CompletionEnv7):
      r11 = `$`(_CompletionEnv7, <sym settings>);
      goto L1(r11);
    L0(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx6);
    L5():
      dr6 = tryDispatchBuiltin.1("[[", dx7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx9):
      __1 = ldf `[[` in base;
      r12 = dyn __1(dx9, "backtick");
      goto L0(r12);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx10);
    };
    r14 = dyn isTRUE1(p1);
    check L25() else D3();
  L27():
    fuzzy2 = force? fuzzy1;
    checkMissing(fuzzy2);
    c6 = `as.logical`(fuzzy2);
    if c6 then L28() else L6();
  D3():
    deopt 16 [r14];
  L6():
    findExactMatches = ldf findExactMatches;
    check L32() else D7();
  L7(r19):
    st comps = r19;
    backtick1 = ld backtick;
    check L34() else D9();
  L25():
    st backtick = r14;
    goto L5();
  L28():
    findFuzzyMatches = ldf findFuzzyMatches;
    check L29() else D5();
  D5():
    deopt 23 [];
  D7():
    deopt 28 [];
  D9():
    deopt 33 [backtick1];
  L29():
    p2 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p3 = prom<V +>{
      values1 = ld values;
      values2 = force? values1;
      checkMissing(values2);
      return values2;
    };
    r18 = dyn findFuzzyMatches(p2, p3);
    check L30() else D6();
  L32():
    p4 = prom<V +>{
      pattern3 = ld pattern;
      pattern4 = force? pattern3;
      checkMissing(pattern4);
      return pattern4;
    };
    p5 = prom<V +>{
      values3 = ld values;
      values4 = force? values3;
      checkMissing(values4);
      return values4;
    };
    r22 = dyn findExactMatches(p4, p5);
    check L33() else D8();
  L34():
    backtick2 = force? backtick1;
    checkMissing(backtick2);
    c7 = `as.logical`(backtick2);
    if c7 then L35() else L8(c7);
  D6():
    deopt 26 [r18];
  D8():
    deopt 31 [r22];
  L8(c9):
    c16 = `as.logical`(c9);
    if c16 then L41() else L10(c16);
  L30():
    goto L7(r18);
  L33():
    goto L7(r22);
  L35():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L9(c12, r24):
    c13 = `as.logical`(r24);
    c14 = `&&`(c12, c13);
    goto L8(c14);
  L10(c18):
    c28 = `as.logical`(c18);
    if c28 then L50() else L13();
  L36():
    comps = ld comps;
    check L38() else D10();
  L37():
    r23 = dyn base2(<sym comps>);
    goto L9(c7, r23);
  L41():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D10():
    deopt 37 [c7, comps];
  L11(c21, r27):
    c25 = `as.logical`(r27);
    c26 = `&&`(c21, c25);
    goto L10(c26);
  L13():
    goto L14();
  L14():
    comps6 = ld comps;
    check L54() else D17();
  L38():
    comps1 = force? comps;
    checkMissing(comps1);
    length = ldf length in base;
    r25 = dyn length(comps1);
    check L39() else D11();
  L42():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L43():
    r26 = dyn base3(<lang nzchar(comps)>);
    goto L11(c16, r26);
  L50():
    vapply = ldf vapply;
    check L51() else D15();
  D11():
    deopt 40 [c7, r25];
  D15():
    deopt 54 [];
  D17():
    deopt 64 [comps6];
  L12(c24, r29):
    all = ldf all in base;
    r31 = dyn all(r29);
    check L48() else D14();
  L39():
    goto L9(c7, r25);
  L44():
    comps2 = ld comps;
    check L46() else D12();
  L45():
    r28 = dyn base4(<sym comps>);
    goto L12(c16, r28);
  L51():
    p6 = prom<V +>{
      comps4 = ld comps;
      comps5 = force? comps4;
      checkMissing(comps5);
      return comps5;
    };
    p7 = prom<V +>{
      r33 = clos inner2120784111;
      return r33;
    };
    r35 = dyn vapply[, FUN, `FUN.VALUE`](p6, p7, "");
    check L52() else D16();
  L54():
    comps7 = force? comps6;
    checkMissing(comps7);
    popenv;
    return comps7;
  D12():
    deopt 46 [c16, comps2];
  D14():
    deopt 51 [c24, r31];
  D16():
    deopt 60 [r35];
  L46():
    comps3 = force? comps2;
    checkMissing(comps3);
    nzchar = ldf nzchar in base;
    r30 = dyn nzchar(comps3);
    check L47() else D13();
  L48():
    goto L11(c24, r31);
  L52():
    st comps = r35;
    goto L14();
  D13():
    deopt 49 [c16, r30];
  L47():
    goto L12(c16, r30);
  }
}
fun inner2120784111(comp) {
  (reg comp:*) -+> V { var comp:*, reg deparse1:cls, reg as_name:cls, reg comp1:*, reg comp2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st comp = comp;
    deparse1 = ldf deparse1;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_name = ldf `as.name`;
      p = prom<V +>{
        comp1 = ld comp;
        comp2 = force? comp1;
        checkMissing(comp2);
        return comp2;
      };
      r1 = dyn as_name(p);
      return r1;
    };
    r3 = dyn deparse1[, backtick](p1, TRUE);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}