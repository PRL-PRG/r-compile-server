fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3295070213;
    st config_val_to_logical = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3295070213(val, `na.ok`) {
  (reg val:*, reg na_ok:*) -+> V { var val:*, var `na.ok`:*, reg na_ok_isMissing:L, reg na_ok_orDefault:*, reg ___:cls, reg r:V, reg r1:cls, reg val1:*, reg val2:V, reg p:p(V +), reg na_ok1:*, reg na_ok2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st val = val;
    na_ok_isMissing = missing.0(na_ok);
    if na_ok_isMissing then L0(TRUE) else L0(na_ok);
  L0(na_ok_orDefault):
    st `na.ok` = na_ok_orDefault;
    ___ = ldf `:::`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn ___("utils", "str2logical");
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      val1 = ld val;
      val2 = force? val1;
      checkMissing(val2);
      return val2;
    };
    p1 = prom<V +>{
      na_ok1 = ld `na.ok`;
      na_ok2 = force? na_ok1;
      checkMissing(na_ok2);
      return na_ok2;
    };
    r4 = dyn r1[, `na.ok`](p, p1);
    check L3() else D2();
  D2():
    deopt 9 [r4];
  L3():
    popenv;
    return r4;
  }
}