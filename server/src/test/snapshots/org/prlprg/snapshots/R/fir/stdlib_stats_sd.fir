fun main() {
  () -+> V { reg r:cls, reg sd:cls, reg p:p(V +), reg r2:V, reg r3:V |
    mkenv;
    r = clos inner388897008;
    st sd = r;
    sd = ldf sd;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2>;
    };
    r2 = dyn sd(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    r3 = `^`(r2, 2.0);
    popenv;
    return r3;
  }
}
fun inner388897008(x, `na.rm`) {
  (reg x:*, reg na_rm:*) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg var:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg is_vector:cls, reg r4:V, reg c:L, reg c1:V, reg is_factor:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r6:V, reg c3:L, reg c4:V, reg c6:L, reg x5:*, reg x6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x7:*, reg x8:V, reg as_double:cls, reg r9:V, reg p1:p(V +), reg na_rm1:*, reg na_rm2:V, reg p2:p(V +), reg r12:V, reg r13:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    var = ldf var;
    check L4() else D0();
  L3():
    r = dyn base(<lang var(if(`||`(is.vector(x), is.factor(x)), x, as.double(x)), na.rm=na.rm)>);
    goto L1(r);
  D0():
    deopt 2 [];
  L4():
    p1 = prom<V +>{
      sym1 = ldf `is.vector`;
      base1 = ldf `is.vector` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L0(r3):
      c = `as.logical`(r3);
      if c then L1(c) else L6();
    L4():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_vector = ldf `is.vector` in base;
      r4 = dyn is_vector(x2, "any");
      goto L0(r4);
    L5():
      r2 = dyn base1(<sym x>);
      goto L0(r2);
    L1(c1):
      c6 = `as.logical`(c1);
      if c6 then L8() else L2();
    L6():
      is_factor = ldf `is.factor`;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r6 = dyn is_factor(p);
      c3 = `as.logical`(r6);
      c4 = `||`(c, c3);
      goto L1(c4);
    L2():
      sym2 = ldf `as.double`;
      base2 = ldf `as.double` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L10() else L11();
    L8():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    L3(r8):
      return r8;
    L10():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      as_double = ldf `as.double` in base;
      r9 = dyn as_double(x8);
      goto L3(r9);
    L11():
      r7 = dyn base2(<sym x>);
      goto L3(r7);
    };
    p2 = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    r12 = dyn var[, `na.rm`](p1, p2);
    check L5() else D1();
  D1():
    deopt 6 [r12];
  L5():
    r13 = sqrt(r12);
    goto L1(r13);
  }
}