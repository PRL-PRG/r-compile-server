fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3464747981;
    st `ts.intersect` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3464747981(`...`, dframe) {
  (reg ddd:dots, reg dframe:*) -+> V { var `...`:dots?, var dframe:*, reg dframe_isMissing:L, reg dframe_orDefault:*, reg _cbind_ts:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg _makeNamesTs:cls, reg ddd2:dots?, reg r4:V, reg p1:p(V +), reg dframe1:*, reg dframe2:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st `...` = ddd;
    dframe_isMissing = missing.0(dframe);
    if dframe_isMissing then L0(FALSE) else L0(dframe);
  L0(dframe_orDefault):
    st dframe = dframe_orDefault;
    _cbind_ts = ldf `.cbind.ts`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r2 = dyn list[`...`](ddd1);
      goto L0(r2);
    L2():
      r = dyn base(<sym ...>);
      goto L0(r);
    };
    p1 = prom<V +>{
      _makeNamesTs = ldf `.makeNamesTs`;
      ddd2 = ld `...`;
      r4 = dyn _makeNamesTs[`...`](ddd2);
      return r4;
    };
    p2 = prom<V +>{
      dframe1 = ld dframe;
      dframe2 = force? dframe1;
      checkMissing(dframe2);
      return dframe2;
    };
    r7 = dyn _cbind_ts[, , dframe, union](p, p1, p2, FALSE);
    check L2() else D1();
  D1():
    deopt 8 [r7];
  L2():
    popenv;
    return r7;
  }
}