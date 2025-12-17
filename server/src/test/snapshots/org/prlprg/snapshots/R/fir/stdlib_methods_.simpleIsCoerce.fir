fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1697196618;
    st `.simpleIsCoerce` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1697196618(from) {
  (reg from:*) -+> V { var from:*, reg from1:*, reg from2:V |
    mkenv;
    st from = from;
    from1 = ld from;
    check L0() else D0();
  D0():
    deopt 0 [from1];
  L0():
    from2 = force? from1;
    checkMissing(from2);
    popenv;
    return from2;
  }
}