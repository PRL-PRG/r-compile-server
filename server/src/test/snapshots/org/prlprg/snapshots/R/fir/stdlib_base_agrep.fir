fun main() {
  () -+> V { reg r:cls, reg agrep:cls, reg r1:V, reg agrep1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg list:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg agrep2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg agrep3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c2:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg agrep4:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg c3:cls, reg r23:V, reg p4:p(V +), reg r25:V |
    mkenv;
    r = clos inner2290263485;
    st agrep = r;
    agrep = ldf agrep;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn agrep("lasy", "1 lazy 2");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    agrep1 = ldf agrep;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(" 1 lazy 2", "1 lasy 2");
      goto L0(r4);
    L2():
      r2 = dyn base(" 1 lazy 2", "1 lasy 2");
      goto L0(r2);
    };
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      list = ldf list in base;
      r8 = dyn list(0.0);
      goto L0(r8);
    L2():
      r6 = dyn base1[sub](0.0);
      goto L0(r6);
    };
    r10 = dyn agrep1[, , `max.distance`]("lasy", p, p1);
    check L3() else D3();
  D3():
    deopt 14 [r10];
  L3():
    agrep2 = ldf agrep;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c1 = ldf c in base;
      r13 = dyn c1("1 lazy", "1", "1 LAZY");
      goto L0(r13);
    L2():
      r11 = dyn base2("1 lazy", "1", "1 LAZY");
      goto L0(r11);
    };
    r15 = dyn agrep2[, , `max.distance`]("laysy", p2, 2.0);
    check L5() else D5();
  D5():
    deopt 21 [r15];
  L5():
    agrep3 = ldf agrep;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c2 = ldf c in base;
      r18 = dyn c2("1 lazy", "1", "1 LAZY");
      goto L0(r18);
    L2():
      r16 = dyn base3("1 lazy", "1", "1 LAZY");
      goto L0(r16);
    };
    r20 = dyn agrep3[, , `max.distance`, value]("laysy", p3, 2.0, TRUE);
    check L7() else D7();
  D7():
    deopt 30 [r20];
  L7():
    agrep4 = ldf agrep;
    check L8() else D8();
  D8():
    deopt 32 [];
  L8():
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c3 = ldf c in base;
      r23 = dyn c3("1 lazy", "1", "1 LAZY");
      goto L0(r23);
    L2():
      r21 = dyn base4("1 lazy", "1", "1 LAZY");
      goto L0(r21);
    };
    r25 = dyn agrep4[, , `max.distance`, `ignore.case`]("laysy", p4, 2.0, TRUE);
    check L9() else D9();
  D9():
    deopt 39 [r25];
  L9():
    popenv;
    return r25;
  }
}
fun inner2290263485(pattern, x, `max.distance`, costs, `ignore.case`, value, fixed, useBytes) {
  (reg pattern:*, reg x:*, reg max_distance:*, reg costs:*, reg ignore_case:*, reg value:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var x:*, var `max.distance`:*, reg max_distance_isMissing:L, reg max_distance_orDefault:*, var costs:*, reg costs_isMissing:L, reg costs_orDefault:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var value:*, reg value_isMissing:L, reg value_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pattern1:*, reg pattern2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg r5:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg as_character1:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg _amatch_costs:cls, reg costs1:*, reg costs2:V, reg p:p(V +), reg r13:V, reg as_integer:cls, reg r14:V, reg _amatch_bounds:cls, reg max_distance1:*, reg max_distance2:V, reg p1:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg pattern3:*, reg pattern4:V, reg x5:*, reg x6:V, reg ignore_case1:*, reg ignore_case2:V, reg value1:*, reg value2:V, reg costs3:*, reg costs4:V, reg bounds:*, reg bounds1:V, reg useBytes1:*, reg useBytes2:V, reg fixed1:*, reg fixed2:V, reg agrep:cls, reg r19:V |
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
    value_isMissing = missing.0(value);
    if value_isMissing then L3(FALSE) else L3(value);
  L3(value_orDefault):
    st value = value_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L4(TRUE) else L4(fixed);
  L4(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L5(FALSE) else L5(useBytes);
  L5(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L6(r1):
    st pattern = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    pattern1 = ld pattern;
    check L15() else D0();
  L14():
    r = dyn base(<sym pattern>);
    goto L6(r);
  D0():
    deopt 2 [pattern1];
  L7(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L20() else L8();
  L15():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(pattern2);
    check L16() else D1();
  L17():
    x1 = ld x;
    check L19() else D2();
  L18():
    r3 = dyn base1(<sym x>);
    goto L7(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [x1];
  L8():
    goto L10();
  L10():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L16():
    goto L6(r2);
  L19():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L7(c);
  L20():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L9(r7):
    st x = r7;
    goto L10();
  L11(r11):
    st costs = r11;
    _amatch_bounds = ldf `.amatch_bounds`;
    check L31() else D8();
  L21():
    x3 = ld x;
    check L23() else D3();
  L22():
    r6 = dyn base2(<sym x>);
    goto L9(r6);
  L26():
    _amatch_costs = ldf `.amatch_costs`;
    check L28() else D5();
  L27():
    r10 = dyn base3(<lang .amatch_costs(costs)>);
    goto L11(r10);
  D3():
    deopt 14 [x3];
  D5():
    deopt 24 [];
  D8():
    deopt 31 [];
  L23():
    x4 = force? x3;
    checkMissing(x4);
    as_character1 = ldf `as.character` in base;
    r8 = dyn as_character1(x4);
    check L24() else D4();
  L28():
    p = prom<V +>{
      costs1 = ld costs;
      costs2 = force? costs1;
      checkMissing(costs2);
      return costs2;
    };
    r13 = dyn _amatch_costs(p);
    check L29() else D6();
  L31():
    p1 = prom<V +>{
      max_distance1 = ld `max.distance`;
      max_distance2 = force? max_distance1;
      checkMissing(max_distance2);
      return max_distance2;
    };
    r16 = dyn _amatch_bounds(p1);
    check L32() else D9();
  D4():
    deopt 17 [r8];
  D6():
    deopt 26 [r13];
  D9():
    deopt 33 [r16];
  L24():
    goto L9(r8);
  L29():
    as_integer = ldf `as.integer` in base;
    r14 = dyn as_integer(r13);
    check L30() else D7();
  L32():
    st bounds = r16;
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  D7():
    deopt 28 [r14];
  L12(r18):
    popenv;
    return r18;
  L30():
    goto L11(r14);
  L33():
    pattern3 = ld pattern;
    check L35() else D10();
  L34():
    r17 = dyn base4(<lang agrep(pattern, x, ignore.case, value, costs, bounds, useBytes, fixed)>);
    goto L12(r17);
  D10():
    deopt 37 [pattern3];
  L35():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    x5 = ld x;
    check L36() else D11();
  D11():
    deopt 39 [x5];
  L36():
    x6 = force? x5;
    checkMissing(x6);
    ignore_case1 = ld `ignore.case`;
    check L37() else D12();
  D12():
    deopt 41 [ignore_case1];
  L37():
    ignore_case2 = force? ignore_case1;
    checkMissing(ignore_case2);
    value1 = ld value;
    check L38() else D13();
  D13():
    deopt 43 [value1];
  L38():
    value2 = force? value1;
    checkMissing(value2);
    costs3 = ld costs;
    check L39() else D14();
  D14():
    deopt 45 [costs3];
  L39():
    costs4 = force? costs3;
    checkMissing(costs4);
    bounds = ld bounds;
    check L40() else D15();
  D15():
    deopt 47 [bounds];
  L40():
    bounds1 = force? bounds;
    checkMissing(bounds1);
    useBytes1 = ld useBytes;
    check L41() else D16();
  D16():
    deopt 49 [useBytes1];
  L41():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    fixed1 = ld fixed;
    check L42() else D17();
  D17():
    deopt 51 [fixed1];
  L42():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    agrep = ldf agrep in base;
    r19 = dyn agrep(pattern4, x6, ignore_case2, value2, costs4, bounds1, useBytes2, fixed2);
    check L43() else D18();
  D18():
    deopt 54 [r19];
  L43():
    goto L12(r19);
  }
}