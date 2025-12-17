fun main() {
  () -+> V { reg r:cls, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg paste:cls, reg i5:*, reg i6:V, reg p:p(V +), reg r2:V, reg assign:cls, reg nam:*, reg nam1:V, reg p1:p(V +), reg i7:*, reg i8:V, reg r4:V, reg p2:p(V +), reg r6:V, reg ls:cls, reg r7:V, reg r8:cls, reg myf:cls, reg r9:V, reg Global_res:*, reg Global_res1:V, reg assign1:cls, reg r10:V, reg a:*, reg a1:V, reg c1:L, reg a3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg get:cls, reg r13:V, reg r14:V |
    mkenv;
    r = clos inner1954164474;
    st assign = r;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L3() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    paste = ldf paste;
    check L4() else D0();
  L3():
    ls = ldf ls;
    check L8() else D4();
  D0():
    deopt 6 [i2];
  D4():
    deopt 22 [];
  L4():
    p = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r2 = dyn paste[, , sep]("r", p, ".");
    check L5() else D1();
  L8():
    r7 = dyn ls[pattern]("^r..$");
    check L9() else D5();
  D1():
    deopt 11 [i2, r2];
  D5():
    deopt 25 [r7];
  L5():
    st nam = r2;
    assign = ldf assign;
    check L6() else D2();
  L9():
    r8 = clos inner2501545716;
    st myf = r8;
    myf = ldf myf;
    check L10() else D6();
  D2():
    deopt 14 [i2];
  D6():
    deopt 30 [];
  L6():
    p1 = prom<V +>{
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      return nam1;
    };
    p2 = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      r4 = `:`(1.0, i8);
      return r4;
    };
    r6 = dyn assign(p1, p2);
    check L7() else D3();
  L10():
    r9 = dyn myf(3.0);
    check L11() else D7();
  D3():
    deopt 17 [i2, r6];
  D7():
    deopt 32 [r9];
  L7():
    goto L0(i2);
  L11():
    Global_res = ld `Global.res`;
    check L12() else D8();
  D8():
    deopt 33 [Global_res];
  L12():
    Global_res1 = force? Global_res;
    checkMissing(Global_res1);
    st a = <int 1, 2, 3, 4>;
    assign1 = ldf assign;
    check L13() else D9();
  D9():
    deopt 39 [];
  L13():
    r10 = dyn assign1("a[1]", 2.0);
    check L14() else D10();
  D10():
    deopt 42 [r10];
  L14():
    a = ld a;
    check L15() else D11();
  D11():
    deopt 43 [a];
  L15():
    a1 = force? a;
    checkMissing(a1);
    c1 = `is.object`(a1);
    if c1 then L16() else L17(a1);
  L2(dx1):
    `==`(dx1, 2.0);
    get = ldf get;
    check L19() else D12();
  L16():
    dr = tryDispatchBuiltin.1("[", a1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(a3):
    __ = ldf `[` in base;
    r11 = dyn __(a3, 1.0);
    goto L2(r11);
  D12():
    deopt 51 [];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L19():
    r13 = dyn get("a[1]");
    check L20() else D13();
  D13():
    deopt 53 [r13];
  L20():
    r14 = `==`(r13, 2.0);
    popenv;
    return r14;
  }
}
fun inner1954164474(x, value, pos, envir, inherits, immediate) {
  (reg x:*, reg value:*, reg pos:*, reg envir:*, reg inherits:*, reg immediate:*) -+> V { var x:*, var value:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r3:V, reg p1:p(V +), var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, var immediate:*, reg immediate_isMissing:L, reg immediate_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg value1:*, reg value2:V, reg envir1:*, reg envir2:V, reg inherits1:*, reg inherits2:V, reg assign:cls, reg r7:V |
    mkenv;
    st x = x;
    st value = value;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p1 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r3 = dyn as_environment(pos2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym pos>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L4(FALSE) else L4(inherits);
  L4(inherits_orDefault):
    st inherits = inherits_orDefault;
    immediate_isMissing = missing.0(immediate);
    if immediate_isMissing then L5(TRUE) else L5(immediate);
  L5(immediate_orDefault):
    st immediate = immediate_orDefault;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6(r6):
    popenv;
    return r6;
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r5 = dyn base1(<lang assign(x, value, envir, inherits)>);
    goto L6(r5);
  D0():
    deopt 2 [x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    value1 = ld value;
    check L10() else D1();
  D1():
    deopt 4 [value1];
  L10():
    value2 = force? value1;
    checkMissing(value2);
    envir1 = ld envir;
    check L11() else D2();
  D2():
    deopt 6 [envir1];
  L11():
    envir2 = force? envir1;
    checkMissing(envir2);
    inherits1 = ld inherits;
    check L12() else D3();
  D3():
    deopt 8 [inherits1];
  L12():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    assign = ldf assign in base;
    r7 = dyn assign(x2, value2, envir2, inherits2);
    check L13() else D4();
  D4():
    deopt 11 [r7];
  L13():
    goto L6(r7);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg innerf:cls, reg x1:*, reg x2:V, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    st x = x;
    r = clos inner2501545716;
    st innerf = r;
    innerf = ldf innerf;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r1 = `+`(x2, 1.0);
      return r1;
    };
    r3 = dyn innerf(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    popenv;
    return r3;
  }
}