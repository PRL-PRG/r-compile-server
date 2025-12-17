fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner902236742;
    st `memory.size` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner902236742(max) {
  (reg max:*) -+> V { var max:*, reg max_isMissing:L, reg max_orDefault:*, reg warning:cls, reg r:V |
    mkenv;
    max_isMissing = missing.0(max);
    if max_isMissing then L0(FALSE) else L0(max);
  L0(max_orDefault):
    st max = max_orDefault;
    warning = ldf warning;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn warning[, `call.`]("'memory.size()' is Windows-specific", FALSE);
    check L2() else D1();
  D1():
    deopt 5 [r];
  L2():
    popenv;
    return +Infinity;
  }
}