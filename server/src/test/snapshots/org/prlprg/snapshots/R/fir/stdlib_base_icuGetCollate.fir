fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2035141204`;
    st icuGetCollate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2035141204`(type) {
  (reg type:*) -+> V { var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg type3:*, reg type4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg match:cls, reg r13:V, reg icuGetCollate:cls, reg r14:V |
    mkenv;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
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
      r2 = dyn c("actual", "valid");
      goto L0(r2);
    L2():
      r = dyn base("actual", "valid");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    match_arg = ldf `match.arg`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L6() else D1();
  D1():
    deopt 3 [r5];
  L6():
    st type = r5;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r7):
    popenv;
    return r7;
  L7():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L8():
    r6 = dyn base1(<lang icuGetCollate(match(type, c("actual", "valid")))>);
    goto L2(r6);
  L3(r9):
    icuGetCollate = ldf icuGetCollate in base;
    r14 = dyn icuGetCollate(r9);
    check L16() else D5();
  L9():
    type3 = ld type;
    check L11() else D2();
  L10():
    r8 = dyn base2(<sym type>, <lang c("actual", "valid")>);
    goto L3(r8);
  D2():
    deopt 9 [type3];
  D5():
    deopt 22 [r14];
  L11():
    type4 = force? type3;
    checkMissing(type4);
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L12() else L13();
  L16():
    goto L2(r14);
  L4(r11):
    match = ldf match in base;
    r13 = dyn match(type4, r11, NA_INT, NULL);
    check L15() else D4();
  L12():
    c1 = ldf c in base;
    r12 = dyn c1("actual", "valid");
    check L14() else D3();
  L13():
    r10 = dyn base3("actual", "valid");
    goto L4(r10);
  D3():
    deopt 16 [r12];
  D4():
    deopt 20 [r13];
  L14():
    goto L4(r12);
  L15():
    goto L3(r13);
  }
}