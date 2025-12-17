fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner535632477;
    st clear_rownames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner535632477(val) {
  (reg val:*) -+> V { var val:*, reg l:*, reg rownames__:cls, reg r:V, reg val1:*, reg val2:V |
    mkenv;
    st val = val;
    l = ld val;
    rownames__ = ldf `rownames<-`;
    check L0() else D0();
  D0():
    deopt 3 [NULL, l, NULL];
  L0():
    r = dyn rownames__(l, NULL, NULL);
    check L1() else D1();
  D1():
    deopt 5 [NULL, r];
  L1():
    st val = r;
    val1 = ld val;
    check L2() else D2();
  D2():
    deopt 7 [val1];
  L2():
    val2 = force? val1;
    checkMissing(val2);
    popenv;
    return val2;
  }
}