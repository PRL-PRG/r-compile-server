fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-390776348`;
    st `sink.number` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-390776348`(type) {
  (reg type:*) -+> V { var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg type3:*, reg type4:V, reg r8:V, reg sink_number:cls, reg r9:V |
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
      r2 = dyn c("output", "message");
      goto L0(r2);
    L2():
      r = dyn base("output", "message");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    match_arg = ldf `match.arg`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L4() else D1();
  D1():
    deopt 3 [r5];
  L4():
    st type = r5;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2(r7):
    popenv;
    return r7;
  L5():
    type3 = ld type;
    check L7() else D2();
  L6():
    r6 = dyn base1(<lang sink.number(`!=`(type, "message"))>);
    goto L2(r6);
  D2():
    deopt 7 [type3];
  L7():
    type4 = force? type3;
    checkMissing(type4);
    r8 = `!=`(type4, "message");
    sink_number = ldf `sink.number` in base;
    r9 = dyn sink_number(r8);
    check L8() else D3();
  D3():
    deopt 12 [r9];
  L8():
    goto L2(r9);
  }
}