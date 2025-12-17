fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4129521850;
    st `pmin.int` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4129521850(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg pmin:cls, reg na_rm1:*, reg na_rm2:V, reg p:p(V +), reg ddd1:dots?, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st `...` = ddd;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    _Internal = ldf `.Internal`;
    check L4() else D0();
  L3():
    r = dyn base(<lang pmin(na.rm, ...)>);
    goto L1(r);
  D0():
    deopt 2 [];
  L4():
    p1 = prom<V +>{
      pmin = ldf pmin;
      p = prom<V +>{
        na_rm1 = ld `na.rm`;
        na_rm2 = force? na_rm1;
        checkMissing(na_rm2);
        return na_rm2;
      };
      ddd1 = ld `...`;
      r3 = dyn pmin[, `...`](p, ddd1);
      return r3;
    };
    r5 = dyn _Internal(p1);
    check L5() else D1();
  D1():
    deopt 4 [r5];
  L5():
    goto L1(r5);
  }
}