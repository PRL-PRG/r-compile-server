fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2945516096;
    st `.simpleExtCoerce` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2945516096(from, strict) {
  (reg from:*, reg strict:*) -+> V { var from:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg from1:*, reg from2:V |
    mkenv;
    st from = from;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    from1 = ld from;
    check L1() else D0();
  D0():
    deopt 0 [from1];
  L1():
    from2 = force? from1;
    checkMissing(from2);
    popenv;
    return from2;
  }
}