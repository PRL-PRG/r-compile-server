fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-901363989`;
    st `file.mtime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-901363989`(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg file_info:cls, reg ddd1:dots?, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V |
    mkenv;
    st `...` = ddd;
    file_info = ldf `file.info`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn file_info[`...`, extra_cols](ddd1, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r];
  L1():
    c = `is.object`(r);
    if c then L3() else L4(r);
  L2(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("$", r);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r2):
    r3 = `$`(r2, <sym mtime>);
    goto L2(r3);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  }
}