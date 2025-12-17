fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg aregexec:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg aregexec1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r7:V, reg aregexec2:cls, reg x4:*, reg x5:V, reg p2:p(V +), reg r9:V, reg aregexec3:cls, reg x6:*, reg x7:V, reg p3:p(V +), reg r11:V, reg regmatches:cls, reg x8:*, reg x9:V, reg p4:p(V +), reg m:*, reg m1:V, reg p5:p(V +), reg r14:V |
    mkenv;
    r = clos inner1258743374;
    st aregexec = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    st x = r2;
    aregexec = ldf aregexec;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r3 = dyn c("1 lazy", "1", "1 LAZY");
    check L3() else D0();
  L2():
    r1 = dyn base("1 lazy", "1", "1 LAZY");
    goto L0(r1);
  D0():
    deopt 9 [r3];
  D1():
    deopt 12 [];
  L3():
    goto L0(r3);
  L4():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn aregexec[, , `max.distance`]("laysy", p, 2.0);
    check L5() else D2();
  D2():
    deopt 17 [r5];
  L5():
    aregexec1 = ldf aregexec;
    check L6() else D3();
  D3():
    deopt 19 [];
  L6():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r7 = dyn aregexec1[, , `max.distance`]("(lay)(sy)", p1, 2.0);
    check L7() else D4();
  D4():
    deopt 24 [r7];
  L7():
    aregexec2 = ldf aregexec;
    check L8() else D5();
  D5():
    deopt 26 [];
  L8():
    p2 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r9 = dyn aregexec2[, , `max.distance`, `ignore.case`]("(lay)(sy)", p2, 2.0, TRUE);
    check L9() else D6();
  D6():
    deopt 33 [r9];
  L9():
    aregexec3 = ldf aregexec;
    check L10() else D7();
  D7():
    deopt 35 [];
  L10():
    p3 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r11 = dyn aregexec3[, , `max.distance`]("(lay)(sy)", p3, 2.0);
    check L11() else D8();
  D8():
    deopt 40 [r11];
  L11():
    st m = r11;
    regmatches = ldf regmatches;
    check L12() else D9();
  D9():
    deopt 43 [];
  L12():
    p4 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    p5 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r14 = dyn regmatches(p4, p5);
    check L13() else D10();
  D10():
    deopt 46 [r14];
  L13():
    popenv;
    return r14;
  }
}
fun inner1258743374(pattern, text, `max.distance`, costs, `ignore.case`, fixed, useBytes) {
  (reg pattern:*, reg text:*, reg max_distance:*, reg costs:*, reg ignore_case:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var text:*, var `max.distance`:*, reg max_distance_isMissing:L, reg max_distance_orDefault:*, var costs:*, reg costs_isMissing:L, reg costs_orDefault:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _amatch_costs:cls, reg costs1:*, reg costs2:V, reg p:p(V +), reg r3:V, reg as_integer:cls, reg r4:V, reg _amatch_bounds:cls, reg max_distance1:*, reg max_distance2:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg pattern1:*, reg pattern2:V, reg as_character:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg text1:*, reg text2:V, reg as_character1:cls, reg r14:V, reg bounds:*, reg bounds1:V, reg costs3:*, reg costs4:V, reg ignore_case1:*, reg ignore_case2:V, reg fixed1:*, reg fixed2:V, reg useBytes1:*, reg useBytes2:V, reg aregexec:cls, reg r15:V |
    mkenv;
    st pattern = pattern;
    st text = text;
    max_distance_isMissing = missing.0(max_distance);
    if max_distance_isMissing then L0(0.1) else L0(max_distance);
  L0(max_distance_orDefault):
    st `max.distance` = max_distance_orDefault;
    costs_isMissing = missing.0(costs);
    if costs_isMissing then L1(NULL) else L1(costs);
  L1(costs_orDefault):
    st costs = costs_orDefault;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L2(FALSE) else L2(ignore_case);
  L2(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L3(FALSE) else L3(fixed);
  L3(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L4(FALSE) else L4(useBytes);
  L4(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L5(r1):
    st costs = r1;
    _amatch_bounds = ldf `.amatch_bounds`;
    check L14() else D3();
  L9():
    _amatch_costs = ldf `.amatch_costs`;
    check L11() else D0();
  L10():
    r = dyn base(<lang .amatch_costs(costs)>);
    goto L5(r);
  D0():
    deopt 3 [];
  D3():
    deopt 10 [];
  L11():
    p = prom<V +>{
      costs1 = ld costs;
      costs2 = force? costs1;
      checkMissing(costs2);
      return costs2;
    };
    r3 = dyn _amatch_costs(p);
    check L12() else D1();
  L14():
    p1 = prom<V +>{
      max_distance1 = ld `max.distance`;
      max_distance2 = force? max_distance1;
      checkMissing(max_distance2);
      return max_distance2;
    };
    r6 = dyn _amatch_bounds(p1);
    check L15() else D4();
  D1():
    deopt 5 [r3];
  D4():
    deopt 12 [r6];
  L12():
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(r3);
    check L13() else D2();
  L15():
    st bounds = r6;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D2():
    deopt 7 [r4];
  L6(r8):
    popenv;
    return r8;
  L13():
    goto L5(r4);
  L16():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L17():
    r7 = dyn base1(<lang aregexec(as.character(pattern), as.character(text), bounds, costs, ignore.case, fixed, useBytes)>);
    goto L6(r7);
  L7(r10):
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L18():
    pattern1 = ld pattern;
    check L20() else D5();
  L19():
    r9 = dyn base2(<sym pattern>);
    goto L7(r9);
  D5():
    deopt 18 [pattern1];
  L8(r13):
    bounds = ld bounds;
    check L26() else D9();
  L20():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(pattern2);
    check L21() else D6();
  L22():
    text1 = ld text;
    check L24() else D7();
  L23():
    r12 = dyn base3(<sym text>);
    goto L8(r12);
  D6():
    deopt 21 [r11];
  D7():
    deopt 24 [text1];
  D9():
    deopt 28 [bounds];
  L21():
    goto L7(r11);
  L24():
    text2 = force? text1;
    checkMissing(text2);
    as_character1 = ldf `as.character` in base;
    r14 = dyn as_character1(text2);
    check L25() else D8();
  L26():
    bounds1 = force? bounds;
    checkMissing(bounds1);
    costs3 = ld costs;
    check L27() else D10();
  D8():
    deopt 27 [r14];
  D10():
    deopt 30 [costs3];
  L25():
    goto L8(r14);
  L27():
    costs4 = force? costs3;
    checkMissing(costs4);
    ignore_case1 = ld `ignore.case`;
    check L28() else D11();
  D11():
    deopt 32 [ignore_case1];
  L28():
    ignore_case2 = force? ignore_case1;
    checkMissing(ignore_case2);
    fixed1 = ld fixed;
    check L29() else D12();
  D12():
    deopt 34 [fixed1];
  L29():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    useBytes1 = ld useBytes;
    check L30() else D13();
  D13():
    deopt 36 [useBytes1];
  L30():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    aregexec = ldf aregexec in base;
    r15 = dyn aregexec(r10, r13, bounds1, costs4, ignore_case2, fixed2, useBytes2);
    check L31() else D14();
  D14():
    deopt 39 [r15];
  L31():
    goto L6(r15);
  }
}