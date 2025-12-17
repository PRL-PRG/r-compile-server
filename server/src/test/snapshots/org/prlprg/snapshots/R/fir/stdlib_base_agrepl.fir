fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1552684980;
    st agrepl = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1552684980(pattern, x, `max.distance`, costs, `ignore.case`, fixed, useBytes) {
  (reg pattern:*, reg x:*, reg max_distance:*, reg costs:*, reg ignore_case:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var x:*, var `max.distance`:*, reg max_distance_isMissing:L, reg max_distance_orDefault:*, var costs:*, reg costs_isMissing:L, reg costs_orDefault:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pattern1:*, reg pattern2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg r5:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg as_character1:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg _amatch_costs:cls, reg costs1:*, reg costs2:V, reg p:p(V +), reg r13:V, reg as_integer:cls, reg r14:V, reg _amatch_bounds:cls, reg max_distance1:*, reg max_distance2:V, reg p1:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg pattern3:*, reg pattern4:V, reg x5:*, reg x6:V, reg ignore_case1:*, reg ignore_case2:V, reg costs3:*, reg costs4:V, reg bounds:*, reg bounds1:V, reg useBytes1:*, reg useBytes2:V, reg fixed1:*, reg fixed2:V, reg agrepl:cls, reg r19:V |
    mkenv;
    st pattern = pattern;
    st x = x;
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
    if fixed_isMissing then L3(TRUE) else L3(fixed);
  L3(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L4(FALSE) else L4(useBytes);
  L4(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L5(r1):
    st pattern = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    pattern1 = ld pattern;
    check L14() else D0();
  L13():
    r = dyn base(<sym pattern>);
    goto L5(r);
  D0():
    deopt 2 [pattern1];
  L6(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L19() else L7();
  L14():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(pattern2);
    check L15() else D1();
  L16():
    x1 = ld x;
    check L18() else D2();
  L17():
    r3 = dyn base1(<sym x>);
    goto L6(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [x1];
  L7():
    goto L9();
  L9():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L15():
    goto L5(r2);
  L18():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L6(c);
  L19():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L8(r7):
    st x = r7;
    goto L9();
  L10(r11):
    st costs = r11;
    _amatch_bounds = ldf `.amatch_bounds`;
    check L30() else D8();
  L20():
    x3 = ld x;
    check L22() else D3();
  L21():
    r6 = dyn base2(<sym x>);
    goto L8(r6);
  L25():
    _amatch_costs = ldf `.amatch_costs`;
    check L27() else D5();
  L26():
    r10 = dyn base3(<lang .amatch_costs(costs)>);
    goto L10(r10);
  D3():
    deopt 14 [x3];
  D5():
    deopt 24 [];
  D8():
    deopt 31 [];
  L22():
    x4 = force? x3;
    checkMissing(x4);
    as_character1 = ldf `as.character` in base;
    r8 = dyn as_character1(x4);
    check L23() else D4();
  L27():
    p = prom<V +>{
      costs1 = ld costs;
      costs2 = force? costs1;
      checkMissing(costs2);
      return costs2;
    };
    r13 = dyn _amatch_costs(p);
    check L28() else D6();
  L30():
    p1 = prom<V +>{
      max_distance1 = ld `max.distance`;
      max_distance2 = force? max_distance1;
      checkMissing(max_distance2);
      return max_distance2;
    };
    r16 = dyn _amatch_bounds(p1);
    check L31() else D9();
  D4():
    deopt 17 [r8];
  D6():
    deopt 26 [r13];
  D9():
    deopt 33 [r16];
  L23():
    goto L8(r8);
  L28():
    as_integer = ldf `as.integer` in base;
    r14 = dyn as_integer(r13);
    check L29() else D7();
  L31():
    st bounds = r16;
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  D7():
    deopt 28 [r14];
  L11(r18):
    popenv;
    return r18;
  L29():
    goto L10(r14);
  L32():
    pattern3 = ld pattern;
    check L34() else D10();
  L33():
    r17 = dyn base4(<lang agrepl(pattern, x, ignore.case, FALSE, costs, bounds, useBytes, fixed)>);
    goto L11(r17);
  D10():
    deopt 37 [pattern3];
  L34():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    x5 = ld x;
    check L35() else D11();
  D11():
    deopt 39 [x5];
  L35():
    x6 = force? x5;
    checkMissing(x6);
    ignore_case1 = ld `ignore.case`;
    check L36() else D12();
  D12():
    deopt 41 [ignore_case1];
  L36():
    ignore_case2 = force? ignore_case1;
    checkMissing(ignore_case2);
    costs3 = ld costs;
    check L37() else D13();
  D13():
    deopt 44 [costs3];
  L37():
    costs4 = force? costs3;
    checkMissing(costs4);
    bounds = ld bounds;
    check L38() else D14();
  D14():
    deopt 46 [bounds];
  L38():
    bounds1 = force? bounds;
    checkMissing(bounds1);
    useBytes1 = ld useBytes;
    check L39() else D15();
  D15():
    deopt 48 [useBytes1];
  L39():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    fixed1 = ld fixed;
    check L40() else D16();
  D16():
    deopt 50 [fixed1];
  L40():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    agrepl = ldf agrepl in base;
    r19 = dyn agrepl(pattern4, x6, ignore_case2, FALSE, costs4, bounds1, useBytes2, fixed2);
    check L41() else D17();
  D17():
    deopt 53 [r19];
  L41():
    goto L11(r19);
  }
}