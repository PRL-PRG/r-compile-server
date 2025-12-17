fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1471137731;
    st `range.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1471137731(`...`, `na.rm`, finite) {
  (reg ddd:dots, reg na_rm:*, reg finite:*) -+> V { var `...`:dots?, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var finite:*, reg finite_isMissing:L, reg finite_orDefault:*, reg _rangeNum:cls, reg ddd1:dots?, reg na_rm1:*, reg na_rm2:V, reg p:p(V +), reg finite1:*, reg finite2:V, reg p1:p(V +), reg r2:cls, reg p2:p(V +), reg r4:V |
    mkenv;
    st `...` = ddd;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    finite_isMissing = missing.0(finite);
    if finite_isMissing then L1(FALSE) else L1(finite);
  L1(finite_orDefault):
    st finite = finite_orDefault;
    _rangeNum = ldf `.rangeNum`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    ddd1 = ld `...`;
    p = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    p1 = prom<V +>{
      finite1 = ld finite;
      finite2 = force? finite1;
      checkMissing(finite2);
      return finite2;
    };
    p2 = prom<V +>{
      r2 = clos inner2680913962;
      return r2;
    };
    r4 = dyn _rangeNum[`...`, `na.rm`, finite, isNumeric](ddd1, p, p1, p2);
    check L3() else D1();
  D1():
    deopt 9 [r4];
  L3():
    popenv;
    return r4;
  }
}
fun inner2680913962(`.`) {
  (reg __:*) -+> V { var `.`:* |
    mkenv;
    st `.` = __;
    popenv;
    return TRUE;
  }
}