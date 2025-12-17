fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:R, reg r5:V, reg c:cls, reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg x:*, reg x1:V, reg as_integer:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c1:L, reg r13:cls, reg is_wholenumber:cls, reg r14:V, reg seq:cls, reg r15:V, reg is_wholenumber1:cls, reg x2:*, reg x3:V, reg p:p(V +), reg r17:V |
    mkenv;
    r = clos inner1649981529;
    st integer = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r4, r5):
    r7 = `*`(r4, r5);
    st x = r7;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L3():
    c = ldf c in base;
    r6 = dyn c(<int -1, 0, 1>, 10.0);
    check L5() else D0();
  L4():
    r3 = dyn base(<lang `:`(`-`(1.0), 1.0)>, 10.0);
    goto L0(3.141592653589793, r3);
  D0():
    deopt 10 [3.141592653589793, r6];
  L1():
    sym2 = ldf `is.integer`;
    base2 = ldf `is.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L5():
    goto L0(3.141592653589793, r6);
  L6():
    x = ld x;
    check L8() else D1();
  L7():
    r8 = dyn base1(<sym x>);
    goto L1();
  D1():
    deopt 15 [x];
  L2():
    r13 = clos inner2880227513;
    st `is.wholenumber` = r13;
    is_wholenumber = ldf `is.wholenumber`;
    check L12() else D3();
  L8():
    x1 = force? x;
    checkMissing(x1);
    as_integer = ldf `as.integer` in base;
    r10 = dyn as_integer(x1);
    check L9() else D2();
  L10():
    c1 = `is.integer`(1.0);
    goto L2();
  L11():
    r11 = dyn base2(1.0);
    goto L2();
  D2():
    deopt 18 [r10];
  D3():
    deopt 27 [];
  L9():
    goto L1();
  L12():
    r14 = dyn is_wholenumber(1.0);
    check L13() else D4();
  D4():
    deopt 29 [r14];
  L13():
    seq = ldf seq;
    check L14() else D5();
  D5():
    deopt 31 [];
  L14():
    r15 = dyn seq[, , by](1.0, 5.0, 0.5);
    check L15() else D6();
  D6():
    deopt 36 [r15];
  L15():
    st x = r15;
    is_wholenumber1 = ldf `is.wholenumber`;
    check L16() else D7();
  D7():
    deopt 39 [];
  L16():
    p = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r17 = dyn is_wholenumber1(p);
    check L17() else D8();
  D8():
    deopt 41 [r17];
  L17():
    popenv;
    return r17;
  }
}
fun inner1649981529(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    length1 = ld length;
    check L4() else D0();
  L3():
    r = dyn base(<lang vector("integer", length)>);
    goto L1(r);
  D0():
    deopt 3 [length1];
  L4():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector("integer", length2);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    goto L1(r2);
  }
}
fun inner2880227513(x, tol) {
  (reg x:*, reg tol:*) -+> V { var x:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg x5:V, reg r6:V, reg round:cls, reg r7:V, reg r8:V, reg abs:cls, reg r9:V, reg tol1:*, reg tol2:V, reg r10:V |
    mkenv;
    st x = x;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0() else L1(tol);
  L0():
    p = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(_Machine1);
    L0(dx1):
      r1 = `^`(dx1, 0.5);
      return r1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Machine3):
      r = `$`(_Machine3, <sym double.eps>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(tol_orDefault):
    st tol = tol_orDefault;
    sym = ldf abs;
    base = ldf abs in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r4):
    tol1 = ld tol;
    check L10() else D2();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r3 = dyn base(<lang `-`(x, round(x))>);
    goto L2(r3);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [r4, tol1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L10():
    tol2 = force? tol1;
    checkMissing(tol2);
    r10 = `<`(r4, tol2);
    popenv;
    return r10;
  L3(x5, r6):
    r8 = `-`(x5, r6);
    abs = ldf abs in base;
    r9 = dyn abs(r8);
    check L9() else D1();
  L7():
    round = ldf round in base;
    r7 = dyn round(<sym x>);
    goto L3(x2, r7);
  L8():
    r5 = dyn base1(<sym x>);
    goto L3(x2, r5);
  D1():
    deopt 8 [r9];
  L9():
    goto L2(r9);
  }
}