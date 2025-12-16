fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-10332881`;
    st rep_len = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-10332881`(x, `length.out`) {
  (reg x:*, reg length_out:*) -+> V { var x:*, var `length.out`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length_out1:*, reg length_out2:V, reg rep_len:cls, reg r2:V |
    mkenv;
    st x = x;
    st `length.out` = length_out;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang rep_len(x, length.out)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    length_out1 = ld `length.out`;
    check L4() else D1();
  D1():
    deopt 4 [length_out1];
  L4():
    length_out2 = force? length_out1;
    checkMissing(length_out2);
    rep_len = ldf rep_len in base;
    r2 = dyn rep_len(x2, length_out2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}