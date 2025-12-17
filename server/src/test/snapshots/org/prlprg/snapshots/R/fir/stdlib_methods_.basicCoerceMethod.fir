fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4073031665;
    st `.basicCoerceMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4073031665(from, to, strict) {
  (reg from:*, reg to:*, reg strict:*) -+> V { var from:*, var to:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg stop:cls, reg r:V |
    mkenv;
    st from = from;
    st to = to;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    stop = ldf stop;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn stop("undefined 'coerce' method");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    popenv;
    return r;
  }
}