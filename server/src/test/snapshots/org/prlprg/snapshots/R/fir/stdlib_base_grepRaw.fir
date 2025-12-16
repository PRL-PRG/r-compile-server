fun main() {
  () -+> V { reg r:cls, reg grepRaw:cls, reg r1:V, reg grepRaw1:cls, reg r2:V, reg grepRaw2:cls, reg r3:V |
    mkenv;
    r = clos inner1569775090;
    st grepRaw = r;
    grepRaw = ldf grepRaw;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn grepRaw("no match", "textText");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    grepRaw1 = ldf grepRaw;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    r2 = dyn grepRaw1("adf", "adadfadfdfadadf");
    check L3() else D3();
  D3():
    deopt 12 [r2];
  L3():
    grepRaw2 = ldf grepRaw;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    r3 = dyn grepRaw2[, , all, fixed]("adf", "adadfadfdfadadf", TRUE, TRUE);
    check L5() else D5();
  D5():
    deopt 21 [r3];
  L5():
    popenv;
    return r3;
  }
}
fun inner1569775090(pattern, x, offset, `ignore.case`, value, fixed, all, invert) {
  (reg pattern:*, reg x:*, reg offset:*, reg ignore_case:*, reg value:*, reg fixed:*, reg all:*, reg invert:*) -+> V { var pattern:*, var x:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var value:*, reg value_isMissing:L, reg value_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var invert:*, reg invert_isMissing:L, reg invert_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pattern1:*, reg pattern2:V, reg is_raw:cls, reg r2:V, reg r3:V, reg c:L, reg charToRaw:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg pattern3:*, reg pattern4:V, reg as_character:cls, reg r6:V, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg is_raw1:cls, reg r12:V, reg r13:V, reg c1:L, reg charToRaw1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg as_character1:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg pattern5:*, reg pattern6:V, reg x5:*, reg x6:V, reg offset1:*, reg offset2:V, reg ignore_case1:*, reg ignore_case2:V, reg fixed1:*, reg fixed2:V, reg value1:*, reg value2:V, reg all1:*, reg all2:V, reg invert1:*, reg invert2:V, reg grepRaw:cls, reg r22:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L0(1) else L0(offset);
  L0(offset_orDefault):
    st offset = offset_orDefault;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L1(FALSE) else L1(ignore_case);
  L1(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    value_isMissing = missing.0(value);
    if value_isMissing then L2(FALSE) else L2(value);
  L2(value_orDefault):
    st value = value_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L3(FALSE) else L3(fixed);
  L3(fixed_orDefault):
    st fixed = fixed_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L4(FALSE) else L4(all);
  L4(all_orDefault):
    st all = all_orDefault;
    invert_isMissing = missing.0(invert);
    if invert_isMissing then L5(FALSE) else L5(invert);
  L5(invert_orDefault):
    st invert = invert_orDefault;
    sym = ldf `is.raw`;
    base = ldf `is.raw` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L6(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L17() else L7();
  L13():
    pattern1 = ld pattern;
    check L15() else D0();
  L14():
    r = dyn base(<sym pattern>);
    goto L6(r);
  D0():
    deopt 2 [pattern1];
  L7():
    goto L8();
  L8():
    sym2 = ldf `is.raw`;
    base2 = ldf `is.raw` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L15():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    is_raw = ldf `is.raw` in base;
    r2 = dyn is_raw(pattern2);
    check L16() else D1();
  L17():
    charToRaw = ldf charToRaw;
    check L18() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L9(r11):
    r13 = `!`(r11);
    c1 = `as.logical`(r13);
    if c1 then L25() else L10();
  L16():
    goto L6(r2);
  L18():
    p = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      pattern3 = ld pattern;
      pattern4 = force? pattern3;
      checkMissing(pattern4);
      as_character = ldf `as.character` in base;
      r6 = dyn as_character(pattern4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym pattern>);
      goto L0(r4);
    };
    r8 = dyn charToRaw(p);
    check L19() else D3();
  L21():
    x1 = ld x;
    check L23() else D4();
  L22():
    r10 = dyn base2(<sym x>);
    goto L9(r10);
  D3():
    deopt 10 [r8];
  D4():
    deopt 16 [x1];
  L10():
    goto L11();
  L11():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L19():
    st pattern = r8;
    goto L8();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    is_raw1 = ldf `is.raw` in base;
    r12 = dyn is_raw1(x2);
    check L24() else D5();
  L25():
    charToRaw1 = ldf charToRaw;
    check L26() else D6();
  D5():
    deopt 19 [r12];
  D6():
    deopt 22 [];
  L12(r21):
    popenv;
    return r21;
  L24():
    goto L9(r12);
  L26():
    p1 = prom<V +>{
      sym3 = ldf `as.character`;
      base3 = ldf `as.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      as_character1 = ldf `as.character` in base;
      r16 = dyn as_character1(x4);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym x>);
      goto L0(r14);
    };
    r18 = dyn charToRaw1(p1);
    check L27() else D7();
  L29():
    pattern5 = ld pattern;
    check L31() else D8();
  L30():
    r20 = dyn base4(<lang grepRaw(pattern, x, offset, ignore.case, fixed, value, all, invert)>);
    goto L12(r20);
  D7():
    deopt 24 [r18];
  D8():
    deopt 30 [pattern5];
  L27():
    st x = r18;
    goto L11();
  L31():
    pattern6 = force? pattern5;
    checkMissing(pattern6);
    x5 = ld x;
    check L32() else D9();
  D9():
    deopt 32 [x5];
  L32():
    x6 = force? x5;
    checkMissing(x6);
    offset1 = ld offset;
    check L33() else D10();
  D10():
    deopt 34 [offset1];
  L33():
    offset2 = force? offset1;
    checkMissing(offset2);
    ignore_case1 = ld `ignore.case`;
    check L34() else D11();
  D11():
    deopt 36 [ignore_case1];
  L34():
    ignore_case2 = force? ignore_case1;
    checkMissing(ignore_case2);
    fixed1 = ld fixed;
    check L35() else D12();
  D12():
    deopt 38 [fixed1];
  L35():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    value1 = ld value;
    check L36() else D13();
  D13():
    deopt 40 [value1];
  L36():
    value2 = force? value1;
    checkMissing(value2);
    all1 = ld all;
    check L37() else D14();
  D14():
    deopt 42 [all1];
  L37():
    all2 = force? all1;
    checkMissing(all2);
    invert1 = ld invert;
    check L38() else D15();
  D15():
    deopt 44 [invert1];
  L38():
    invert2 = force? invert1;
    checkMissing(invert2);
    grepRaw = ldf grepRaw in base;
    r22 = dyn grepRaw(pattern6, x6, offset2, ignore_case2, fixed2, value2, all2, invert2);
    check L39() else D16();
  D16():
    deopt 47 [r22];
  L39():
    goto L12(r22);
  }
}