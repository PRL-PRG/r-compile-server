fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1385503804;
    st `cbind.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1385503804(`...`, `deparse.level`) {
  (reg ddd:dots, reg deparse_level:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, reg deparse_level1:*, reg deparse_level2:V, reg r:V, reg c:L, reg _NotYetUsed:cls, reg r1:V, reg _cbind_ts:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg list:cls, reg ddd1:dots?, reg r5:V, reg p:p(V +), reg _makeNamesTs:cls, reg ddd2:dots?, reg r7:V, reg p1:p(V +), reg r9:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    deparse_level1 = ld `deparse.level`;
    check L3() else D0();
  D0():
    deopt 0 [deparse_level1];
  L3():
    deparse_level2 = force? deparse_level1;
    checkMissing(deparse_level2);
    r = `!=`(deparse_level2, 1.0);
    c = `as.logical`(r);
    if c then L4() else L1();
  L1():
    goto L2();
  L2():
    _cbind_ts = ldf `.cbind.ts`;
    check L8() else D3();
  L4():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L5() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  L5():
    r1 = dyn _NotYetUsed("deparse.level != 1");
    check L6() else D2();
  L8():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r5 = dyn list[`...`](ddd1);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym ...>);
      goto L0(r3);
    };
    p1 = prom<V +>{
      _makeNamesTs = ldf `.makeNamesTs`;
      ddd2 = ld `...`;
      r7 = dyn _makeNamesTs[`...`](ddd2);
      return r7;
    };
    r9 = dyn _cbind_ts[, , dframe, union](p, p1, FALSE, TRUE);
    check L9() else D4();
  D2():
    deopt 7 [r1];
  D4():
    deopt 18 [r9];
  L6():
    goto L2();
  L9():
    popenv;
    return r9;
  }
}