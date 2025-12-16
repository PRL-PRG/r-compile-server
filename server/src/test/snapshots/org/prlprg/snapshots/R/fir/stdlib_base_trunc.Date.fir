fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-940155143`;
    st `trunc.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-940155143`(x, units, `...`) {
  (reg x:*, reg units:*, reg ddd:dots) -+> V { var x:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg units1:*, reg units2:V, reg p1:p(V +), reg r5:V, reg units3:*, reg units4:V, reg r6:V, reg c1:L, reg c2:V, reg units5:*, reg units6:V, reg r7:V, reg c4:L, reg c5:V, reg c7:L, reg as_Date:cls, reg trunc_POSIXt:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg units7:*, reg units8:V, reg p3:p(V +), reg ddd1:dots?, reg r10:V, reg p4:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg round:cls, reg r15:V |
    mkenv;
    st x = x;
    units_isMissing = missing.0(units);
    if units_isMissing then L0() else L1(units);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("secs", "mins", "hours", "days", "months", "years");
      goto L0(r2);
    L2():
      r = dyn base("secs", "mins", "hours", "days", "months", "years");
      goto L0(r);
    };
    goto L1(p);
  L1(units_orDefault):
    st units = units_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      units1 = ld units;
      units2 = force? units1;
      checkMissing(units2);
      return units2;
    };
    r5 = dyn match_arg(p1);
    check L6() else D1();
  D1():
    deopt 3 [r5];
  L6():
    st units = r5;
    units3 = ld units;
    check L7() else D2();
  D2():
    deopt 5 [units3];
  L7():
    units4 = force? units3;
    checkMissing(units4);
    r6 = `==`(units4, "months");
    c1 = `as.logical`(r6);
    if c1 then L2(c1) else L8();
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L11() else L3();
  L8():
    units5 = ld units;
    check L9() else D3();
  D3():
    deopt 9 [c1, units5];
  L3():
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L9():
    units6 = force? units5;
    checkMissing(units6);
    r7 = `==`(units6, "years");
    c4 = `as.logical`(r7);
    c5 = `||`(c1, c4);
    goto L2(c5);
  L11():
    as_Date = ldf `as.Date`;
    check L12() else D4();
  D4():
    deopt 15 [];
  L4(r14):
    popenv;
    return r14;
  L12():
    p4 = prom<V +>{
      trunc_POSIXt = ldf `trunc.POSIXt`;
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p3 = prom<V +>{
        units7 = ld units;
        units8 = force? units7;
        checkMissing(units8);
        return units8;
      };
      ddd1 = ld `...`;
      r10 = dyn trunc_POSIXt[, , `...`](p2, p3, ddd1);
      return r10;
    };
    r12 = dyn as_Date(p4);
    check L13() else D5();
  L15():
    round = ldf round in base;
    r15 = dyn round(<lang `-`(x, 0.4999999)>);
    goto L4(r15);
  L16():
    r13 = dyn base1(<lang `-`(x, 0.4999999)>);
    goto L4(r13);
  D5():
    deopt 17 [r12];
  L13():
    popenv;
    return r12;
  }
}