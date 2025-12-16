fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1311582776;
    st `file.path` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1311582776(`...`, fsep) {
  (reg ddd:dots, reg fsep:*) -+> V { var `...`:dots?, var fsep:*, reg fsep_isMissing:L, reg fsep_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg ddd1:dots?, reg r6:V, reg fsep1:*, reg fsep2:V, reg file_path:cls, reg r7:V |
    mkenv;
    st `...` = ddd;
    fsep_isMissing = missing.0(fsep);
    if fsep_isMissing then L0() else L1(fsep);
  L0():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym file.sep>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(fsep_orDefault):
    st fsep = fsep_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r3):
    popenv;
    return r3;
  L4():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r2 = dyn base(<lang file.path(list(...), fsep)>);
    goto L2(r2);
  L3(r5):
    fsep1 = ld fsep;
    check L10() else D2();
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r4 = dyn base1(<sym ...>);
    goto L3(r4);
  D0():
    deopt 4 [];
  D2():
    deopt 7 [fsep1];
  L8():
    ddd1 = ld `...`;
    r6 = dyn list[`...`](ddd1);
    check L9() else D1();
  L10():
    fsep2 = force? fsep1;
    checkMissing(fsep2);
    file_path = ldf `file.path` in base;
    r7 = dyn file_path(r5, fsep2);
    check L11() else D3();
  D1():
    deopt 6 [r6];
  D3():
    deopt 10 [r7];
  L9():
    goto L3(r6);
  L11():
    goto L2(r7);
  }
}