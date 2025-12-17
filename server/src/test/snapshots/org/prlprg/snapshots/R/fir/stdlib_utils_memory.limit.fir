fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3513620029;
    st `memory.limit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3513620029(size) {
  (reg size:*) -+> V { var size:*, reg size_isMissing:L, reg size_orDefault:*, reg warning:cls, reg r:V |
    mkenv;
    size_isMissing = missing.0(size);
    if size_isMissing then L0(NA_LGL) else L0(size);
  L0(size_orDefault):
    st size = size_orDefault;
    warning = ldf warning;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn warning[, `call.`]("'memory.limit()' is Windows-specific", FALSE);
    check L2() else D1();
  D1():
    deopt 5 [r];
  L2():
    popenv;
    return +Infinity;
  }
}