fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1385503804;
    st `cbind.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1385503804(`...`, `deparse.level`) {
  (reg ddd:dots, reg deparse_level:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, reg data_frame:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    data_frame = ldf `data.frame`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    ddd1 = ld `...`;
    r = dyn data_frame[`...`, `check.names`](ddd1, FALSE);
    check L2() else D1();
  D1():
    deopt 5 [r];
  L2():
    popenv;
    return r;
  }
}