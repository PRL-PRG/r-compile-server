fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3421086882;
    st findFuzzyMatches = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3421086882(pattern, values) {
  (reg pattern:*, reg values:*) -+> V { var pattern:*, var values:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rc_getOption:cls, reg r2:V, reg c:V, reg r3:V, reg c1:L, reg ffun:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg values1:*, reg values2:V, reg p1:p(V +), reg r6:V, reg findExactMatches:cls, reg pattern3:*, reg pattern4:V, reg p2:p(V +), reg values3:*, reg values4:V, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg exact_matches:*, reg exact_matches1:V, reg length:cls, reg r14:V, reg r15:V, reg c2:L, reg gsub:cls, reg pattern5:*, reg pattern6:V, reg p4:p(V +), reg r17:V, reg gsub1:cls, reg normalizedPattern:*, reg normalizedPattern1:V, reg p5:p(V +), reg r19:V, reg gsub2:cls, reg values5:*, reg values6:V, reg p6:p(V +), reg r21:V, reg values7:*, reg values8:V, reg c3:L, reg values10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg normalizedPattern2:*, reg normalizedPattern3:V, reg p7:p(V +), reg normalizedValues:*, reg normalizedValues1:V, reg p8:p(V +), reg r24:V, reg __:cls, reg r25:V, reg exact_matches2:*, reg exact_matches3:V |
    mkenv;
    st pattern = pattern;
    st values = values;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r3 = `!`(r1);
    c1 = `as.logical`(r3);
    if c1 then L10() else L1();
  L6():
    rc_getOption = ldf `rc.getOption`;
    check L8() else D0();
  L7():
    r = dyn base(<lang `<-`(ffun, rc.getOption("fuzzy.match.fun"))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1():
    findExactMatches = ldf findExactMatches;
    check L15() else D4();
  L8():
    r2 = dyn rc_getOption("fuzzy.match.fun");
    check L9() else D1();
  L10():
    ffun = ldf ffun;
    check L11() else D2();
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 17 [];
  L9():
    st ffun = r2;
    c = `==`(r2, NULL);
    goto L0(c);
  L11():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      values1 = ld values;
      values2 = force? values1;
      checkMissing(values2);
      return values2;
    };
    r6 = dyn ffun(p, p1);
    check L12() else D3();
  L15():
    p2 = prom<V +>{
      pattern3 = ld pattern;
      pattern4 = force? pattern3;
      checkMissing(pattern4);
      return pattern4;
    };
    p3 = prom<V +>{
      values3 = ld values;
      values4 = force? values3;
      checkMissing(values4);
      return values4;
    };
    r11 = dyn findExactMatches(p2, p3);
    check L16() else D5();
  D3():
    deopt 12 [r6];
  D5():
    deopt 20 [r11];
  L12():
    popenv;
    return r6;
  L16():
    st `exact.matches` = r11;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(r13):
    r15 = `==`(r13, 0.0);
    c2 = `as.logical`(r15);
    if c2 then L21() else L4();
  L17():
    exact_matches = ld `exact.matches`;
    check L19() else D6();
  L18():
    r12 = dyn base1(<sym exact.matches>);
    goto L3(r12);
  D6():
    deopt 24 [exact_matches];
  L4():
    exact_matches2 = ld `exact.matches`;
    check L35() else D17();
  L19():
    exact_matches1 = force? exact_matches;
    checkMissing(exact_matches1);
    length = ldf length in base;
    r14 = dyn length(exact_matches1);
    check L20() else D7();
  L21():
    gsub = ldf gsub;
    check L22() else D8();
  D7():
    deopt 27 [r14];
  D8():
    deopt 31 [];
  D17():
    deopt 65 [exact_matches2];
  L20():
    goto L3(r14);
  L22():
    p4 = prom<V +>{
      pattern5 = ld pattern;
      pattern6 = force? pattern5;
      checkMissing(pattern6);
      return pattern6;
    };
    r17 = dyn gsub[, , , perl]("(?<!\\^)(?<=.)(\\\\\\.|_)(?!$)", "", p4, TRUE);
    check L23() else D9();
  L35():
    exact_matches3 = force? exact_matches2;
    checkMissing(exact_matches3);
    popenv;
    return exact_matches3;
  D9():
    deopt 37 [r17];
  L23():
    st normalizedPattern = r17;
    gsub1 = ldf gsub;
    check L24() else D10();
  D10():
    deopt 40 [];
  L24():
    p5 = prom<V +>{
      normalizedPattern = ld normalizedPattern;
      normalizedPattern1 = force? normalizedPattern;
      checkMissing(normalizedPattern1);
      return normalizedPattern1;
    };
    r19 = dyn gsub1("(\\\\\\.|_)$", ".", p5);
    check L25() else D11();
  D11():
    deopt 44 [r19];
  L25():
    st normalizedPattern = r19;
    gsub2 = ldf gsub;
    check L26() else D12();
  D12():
    deopt 47 [];
  L26():
    p6 = prom<V +>{
      values5 = ld values;
      values6 = force? values5;
      checkMissing(values6);
      return values6;
    };
    r21 = dyn gsub2[, , , perl]("(?<=.)[._]", "", p6, TRUE);
    check L27() else D13();
  D13():
    deopt 53 [r21];
  L27():
    st normalizedValues = r21;
    values7 = ld values;
    check L28() else D14();
  D14():
    deopt 55 [values7];
  L28():
    values8 = force? values7;
    checkMissing(values8);
    c3 = `is.object`(values8);
    if c3 then L29() else L30(values8);
  L5(dx1):
    popenv;
    return dx1;
  L29():
    dr = tryDispatchBuiltin.1("[", values8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(values10):
    grep = ldf grep;
    check L32() else D15();
  D15():
    deopt 58 [values10];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L32():
    p7 = prom<V +>{
      normalizedPattern2 = ld normalizedPattern;
      normalizedPattern3 = force? normalizedPattern2;
      checkMissing(normalizedPattern3);
      return normalizedPattern3;
    };
    p8 = prom<V +>{
      normalizedValues = ld normalizedValues;
      normalizedValues1 = force? normalizedValues;
      checkMissing(normalizedValues1);
      return normalizedValues1;
    };
    r24 = dyn grep[, , `ignore.case`](p7, p8, TRUE);
    check L33() else D16();
  D16():
    deopt 63 [values10, r24];
  L33():
    __ = ldf `[` in base;
    r25 = dyn __(values10, r24);
    goto L5(r25);
  }
}