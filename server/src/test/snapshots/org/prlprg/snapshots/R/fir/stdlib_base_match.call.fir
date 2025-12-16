fun main() {
  () -+> V { reg r:cls, reg match_call:cls, reg get:*, reg get1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg call:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg r7:cls, reg fun:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:R, reg r12:V, reg r13:V, reg r14:V, reg p2:p(V +), reg p3:p(V +), reg r17:V |
    mkenv;
    r = clos inner448155536;
    st `match.call` = r;
    match_call = ldf `match.call`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      get = ld get;
      get1 = force? get;
      checkMissing(get1);
      return get1;
    };
    p1 = prom<V +>{
      sym = ldf call;
      base = ldf call in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      call = ldf call in base;
      r4 = dyn call("get", "abc", FALSE, 3.0);
      goto L0(r4);
    L2():
      r2 = dyn base[, , i, p]("get", "abc", FALSE, 3.0);
      goto L0(r2);
    };
    r6 = dyn match_call(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    r7 = clos `inner-1620632937`;
    st fun = r7;
    fun = ldf fun;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p2 = prom<V +>{
      sym1 = ldf atan;
      base1 = ldf atan in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11, r12):
      r14 = `*`(r11, r12);
      return r14;
    L1():
      r13 = atan(1.0);
      goto L0(4.0, r13);
    L2():
      r10 = dyn base1(1.0);
      goto L0(4.0, r10);
    };
    p3 = prom<V +>{
      return 3.141592653589793;
    };
    r17 = dyn fun[, u](p2, p3);
    check L3() else D3();
  D3():
    deopt 16 [r17];
  L3():
    popenv;
    return r17;
  }
}
fun inner448155536(definition, call, `expand.dots`, envir) {
  (reg definition:*, reg call:*, reg expand_dots:*, reg envir:*) -+> V { var definition:*, reg definition_isMissing:L, reg definition_orDefault:*, reg sys_function:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var call:*, reg call_isMissing:L, reg call_orDefault:*, reg sys_call:cls, reg sys_parent1:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), var `expand.dots`:*, reg expand_dots_isMissing:L, reg expand_dots_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r8:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg missing:cls, reg r12:V, reg r13:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg c5:L, reg r15:V, reg definition1:*, reg definition2:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg sys_function1:cls, reg sys_parent2:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg definition3:*, reg definition4:V, reg call1:*, reg call2:V, reg expand_dots1:*, reg expand_dots2:V, reg envir1:*, reg envir2:V, reg match_call:cls, reg r22:V |
    mkenv;
    definition_isMissing = missing.0(definition);
    if definition_isMissing then L0() else L1(definition);
  L0():
    p1 = prom<V +>{
      sys_function = ldf `sys.function`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r = dyn sys_parent();
        return r;
      };
      r2 = dyn sys_function(p);
      return r2;
    };
    goto L1(p1);
  L1(definition_orDefault):
    st definition = definition_orDefault;
    call_isMissing = missing.0(call);
    if call_isMissing then L2() else L3(call);
  L2():
    p3 = prom<V +>{
      sys_call = ldf `sys.call`;
      p2 = prom<V +>{
        sys_parent1 = ldf `sys.parent`;
        r4 = dyn sys_parent1();
        return r4;
      };
      r6 = dyn sys_call(p2);
      return r6;
    };
    goto L3(p3);
  L3(call_orDefault):
    st call = call_orDefault;
    expand_dots_isMissing = missing.0(expand_dots);
    if expand_dots_isMissing then L4(TRUE) else L4(expand_dots);
  L4(expand_dots_orDefault):
    st `expand.dots` = expand_dots_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L5() else L6(envir);
  L5():
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r8 = dyn parent_frame(2);
      return r8;
    };
    goto L6(p4);
  L6(envir_orDefault):
    st envir = envir_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L7(r11):
    r13 = `!`(r11);
    c = `as.logical`(r13);
    if c then L15() else L8(c);
  L13():
    missing = ldf missing in base;
    r12 = dyn missing(<sym definition>);
    goto L7(r12);
  L14():
    r10 = dyn base(<sym definition>);
    goto L7(r10);
  L8(c2):
    c10 = `as.logical`(c2);
    if c10 then L20() else L10();
  L15():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L9(c5, r15):
    c7 = `as.logical`(r15);
    c8 = `&&`(c5, c7);
    goto L8(c8);
  L10():
    goto L11();
  L11():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L16():
    definition1 = ld definition;
    check L18() else D0();
  L17():
    r14 = dyn base1(<sym definition>);
    goto L9(c, r14);
  L20():
    sys_function1 = ldf `sys.function`;
    check L21() else D1();
  D0():
    deopt 5 [c, definition1];
  D1():
    deopt 10 [];
  L12(r21):
    popenv;
    return r21;
  L18():
    definition2 = force? definition1;
    checkMissing(definition2);
    c6 = `==`(definition2, NULL);
    goto L9(c, c6);
  L21():
    p5 = prom<V +>{
      sys_parent2 = ldf `sys.parent`;
      r16 = dyn sys_parent2();
      return r16;
    };
    r18 = dyn sys_function1(p5);
    check L22() else D2();
  L24():
    definition3 = ld definition;
    check L26() else D3();
  L25():
    r20 = dyn base2(<lang match.call(definition, call, expand.dots, envir)>);
    goto L12(r20);
  D2():
    deopt 12 [r18];
  D3():
    deopt 18 [definition3];
  L22():
    st definition = r18;
    goto L11();
  L26():
    definition4 = force? definition3;
    checkMissing(definition4);
    call1 = ld call;
    check L27() else D4();
  D4():
    deopt 20 [call1];
  L27():
    call2 = force? call1;
    checkMissing(call2);
    expand_dots1 = ld `expand.dots`;
    check L28() else D5();
  D5():
    deopt 22 [expand_dots1];
  L28():
    expand_dots2 = force? expand_dots1;
    checkMissing(expand_dots2);
    envir1 = ld envir;
    check L29() else D6();
  D6():
    deopt 24 [envir1];
  L29():
    envir2 = force? envir1;
    checkMissing(envir2);
    match_call = ldf `match.call` in base;
    r22 = dyn match_call(definition4, call2, expand_dots2, envir2);
    check L30() else D7();
  D7():
    deopt 27 [r22];
  L30():
    goto L12(r22);
  }
}
fun `inner-1620632937`(x, lower, upper) {
  (reg x:*, reg lower:*, reg upper:*) -+> V { var x:*, var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg structure:cls, reg x1:*, reg x2:V, reg lower1:*, reg lower2:V, reg r:V, reg upper1:*, reg upper2:V, reg lower3:*, reg lower4:V, reg r1:V, reg r2:V, reg p:p(V +), reg match_call:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    lower_isMissing = missing.0(lower);
    if lower_isMissing then L0(0.0) else L0(lower);
  L0(lower_orDefault):
    st lower = lower_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L1(1.0) else L1(upper);
  L1(upper_orDefault):
    st upper = upper_orDefault;
    structure = ldf structure;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      lower1 = ld lower;
      lower2 = force? lower1;
      checkMissing(lower2);
      r = `-`(x2, lower2);
      upper1 = ld upper;
      upper2 = force? upper1;
      checkMissing(upper2);
      lower3 = ld lower;
      lower4 = force? lower3;
      checkMissing(lower4);
      r1 = `-`(upper2, lower4);
      r2 = `/`(r, r1);
      return r2;
    };
    p1 = prom<V +>{
      match_call = ldf `match.call`;
      r4 = dyn match_call();
      return r4;
    };
    r6 = dyn structure[, CALL](p, p1);
    check L3() else D1();
  D1():
    deopt 5 [r6];
  L3():
    popenv;
    return r6;
  }
}