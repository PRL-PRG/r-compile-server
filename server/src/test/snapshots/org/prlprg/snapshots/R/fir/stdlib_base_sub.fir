fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3465270383;
    st sub = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3465270383(pattern, replacement, x, `ignore.case`, perl, fixed, useBytes) {
  (reg pattern:*, reg replacement:*, reg x:*, reg ignore_case:*, reg perl:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var replacement:*, var x:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg levels:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r5:V, reg length:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c8:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg length1:cls, reg r12:V, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg sub:cls, reg pattern1:*, reg pattern2:V, reg p2:p(V +), reg replacement1:*, reg replacement2:V, reg p3:p(V +), reg levels1:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p6:p(V +), reg perl1:*, reg perl2:V, reg p7:p(V +), reg fixed1:*, reg fixed2:V, reg p8:p(V +), reg useBytes1:*, reg useBytes2:V, reg p9:p(V +), reg r23:V, reg c13:L, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x9:*, reg x10:V, reg __:cls, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg x11:*, reg x12:V, reg c14:L, reg r29:V, reg c15:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg x13:*, reg x14:V, reg as_character:cls, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg pattern3:*, reg pattern4:V, reg as_character1:cls, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg replacement3:*, reg replacement4:V, reg as_character2:cls, reg r41:V, reg x15:*, reg x16:V, reg ignore_case3:*, reg ignore_case4:V, reg perl3:*, reg perl4:V, reg fixed3:*, reg fixed4:V, reg useBytes3:*, reg useBytes4:V, reg sub1:cls, reg r42:V |
    mkenv;
    st pattern = pattern;
    st replacement = replacement;
    st x = x;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L2(FALSE) else L2(fixed);
  L2(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    is_factor = ldf `is.factor`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_factor(p);
    check L17() else D1();
  D1():
    deopt 3 [r1];
  L17():
    c = `as.logical`(r1);
    if c then L18() else L4(c);
  L4(c2):
    c12 = `as.logical`(c2);
    if c12 then L29() else L7();
  L18():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L5(c5, r3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L7():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L19():
    levels = ldf levels;
    check L21() else D2();
  L20():
    r2 = dyn base(<lang levels(x)>);
    goto L5(c, r2);
  L29():
    sub = ldf sub;
    check L30() else D7();
  D2():
    deopt 7 [c];
  D7():
    deopt 20 [];
  L6(c8, r10, r11):
    r13 = `<`(r10, r11);
    c9 = `as.logical`(r13);
    c10 = `&&`(c8, c9);
    goto L4(c10);
  L9(r28):
    r29 = `!`(r28);
    c15 = `as.logical`(r29);
    if c15 then L40() else L10();
  L21():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn levels(p1);
    check L22() else D3();
  L24():
    x5 = ld x;
    check L26() else D5();
  L25():
    r9 = dyn base1(<sym x>);
    goto L6(c5, r3, r9);
  L30():
    p2 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p3 = prom<V +>{
      replacement1 = ld replacement;
      replacement2 = force? replacement1;
      checkMissing(replacement2);
      return replacement2;
    };
    p5 = prom<V +>{
      levels1 = ldf levels;
      p4 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r17 = dyn levels1(p4);
      return r17;
    };
    p6 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    p7 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p8 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p9 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r23 = dyn sub(p2, p3, p5, p6, p7, p8, p9);
    check L31() else D8();
  L37():
    x11 = ld x;
    check L39() else D10();
  L38():
    r27 = dyn base2(<sym x>);
    goto L9(r27);
  D3():
    deopt 9 [c, r5];
  D5():
    deopt 13 [c5, r3, x5];
  D8():
    deopt 28 [r23];
  D10():
    deopt 33 [x11];
  L10():
    goto L12();
  L12():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L22():
    length = ldf length in base;
    r6 = dyn length(r5);
    check L23() else D4();
  L26():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r12 = dyn length1(x6);
    check L27() else D6();
  L31():
    c13 = `is.object`(r23);
    if c13 then L32() else L33(r23);
  L39():
    x12 = force? x11;
    checkMissing(x12);
    c14 = `is.character`(x12);
    goto L9(c14);
  L40():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  D4():
    deopt 11 [c, r6];
  D6():
    deopt 16 [c5, r3, r12];
  L8(dx1):
    popenv;
    return dx1;
  L11(r31):
    st x = r31;
    goto L12();
  L13(r35):
    popenv;
    return r35;
  L23():
    goto L5(c, r6);
  L27():
    goto L6(c5, r3, r12);
  L32():
    dr = tryDispatchBuiltin.1("[", r23);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(r25):
    x9 = ld x;
    check L35() else D9();
  L41():
    x13 = ld x;
    check L43() else D11();
  L42():
    r30 = dyn base3(<sym x>);
    goto L11(r30);
  L46():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L47():
    r34 = dyn base4(<lang sub(as.character(pattern), as.character(replacement), x, ignore.case, perl, fixed, useBytes)>);
    goto L13(r34);
  D9():
    deopt 29 [r25, x9];
  D11():
    deopt 39 [x13];
  L14(r37):
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L35():
    x10 = force? x9;
    __ = ldf `[` in base;
    r26 = dyn __(r25, x10);
    goto L8(r26);
  L43():
    x14 = force? x13;
    checkMissing(x14);
    as_character = ldf `as.character` in base;
    r32 = dyn as_character(x14);
    check L44() else D12();
  L48():
    pattern3 = ld pattern;
    check L50() else D13();
  L49():
    r36 = dyn base5(<sym pattern>);
    goto L14(r36);
  D12():
    deopt 42 [r32];
  D13():
    deopt 50 [pattern3];
  L15(r40):
    x15 = ld x;
    check L56() else D17();
  L44():
    goto L11(r32);
  L50():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    as_character1 = ldf `as.character` in base;
    r38 = dyn as_character1(pattern4);
    check L51() else D14();
  L52():
    replacement3 = ld replacement;
    check L54() else D15();
  L53():
    r39 = dyn base6(<sym replacement>);
    goto L15(r39);
  D14():
    deopt 53 [r38];
  D15():
    deopt 56 [replacement3];
  D17():
    deopt 60 [x15];
  L51():
    goto L14(r38);
  L54():
    replacement4 = force? replacement3;
    checkMissing(replacement4);
    as_character2 = ldf `as.character` in base;
    r41 = dyn as_character2(replacement4);
    check L55() else D16();
  L56():
    x16 = force? x15;
    checkMissing(x16);
    ignore_case3 = ld `ignore.case`;
    check L57() else D18();
  D16():
    deopt 59 [r41];
  D18():
    deopt 62 [ignore_case3];
  L55():
    goto L15(r41);
  L57():
    ignore_case4 = force? ignore_case3;
    checkMissing(ignore_case4);
    perl3 = ld perl;
    check L58() else D19();
  D19():
    deopt 64 [perl3];
  L58():
    perl4 = force? perl3;
    checkMissing(perl4);
    fixed3 = ld fixed;
    check L59() else D20();
  D20():
    deopt 66 [fixed3];
  L59():
    fixed4 = force? fixed3;
    checkMissing(fixed4);
    useBytes3 = ld useBytes;
    check L60() else D21();
  D21():
    deopt 68 [useBytes3];
  L60():
    useBytes4 = force? useBytes3;
    checkMissing(useBytes4);
    sub1 = ldf sub in base;
    r42 = dyn sub1(r37, r40, x16, ignore_case4, perl4, fixed4, useBytes4);
    check L61() else D22();
  D22():
    deopt 71 [r42];
  L61():
    goto L13(r42);
  }
}