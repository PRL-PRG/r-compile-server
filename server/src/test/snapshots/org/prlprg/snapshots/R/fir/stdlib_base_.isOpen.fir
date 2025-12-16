fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-944765091`;
    st `.isOpen` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-944765091`(srcfile) {
  (reg srcfile:*) -+> V { var srcfile:*, reg srcfile1:*, reg srcfile2:V, reg c:L, reg srcfile4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg conn:*, reg conn1:V, reg c1:V, reg r3:V, reg c2:L, reg c4:V, reg isOpen:cls, reg conn2:*, reg conn3:V, reg p:p(V +), reg r5:V, reg c5:L, reg c6:V |
    mkenv;
    st srcfile = srcfile;
    srcfile1 = ld srcfile;
    check L2() else D0();
  D0():
    deopt 0 [srcfile1];
  L2():
    srcfile2 = force? srcfile1;
    checkMissing(srcfile2);
    c = `is.object`(srcfile2);
    if c then L4() else L5(srcfile2);
  L3(dx1):
    st conn = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L4():
    dr = tryDispatchBuiltin.1("$", srcfile2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(srcfile4):
    r = `$`(srcfile4, <sym conn>);
    goto L3(r);
  L0(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L10() else L1(c2);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    conn = ld conn;
    check L9() else D1();
  L8():
    r1 = dyn base(<sym conn>);
    goto L0(r1);
  D1():
    deopt 5 [conn];
  L1(c4):
    popenv;
    return c4;
  L9():
    conn1 = force? conn;
    checkMissing(conn1);
    c1 = `==`(conn1, NULL);
    goto L0(c1);
  L10():
    isOpen = ldf isOpen;
    check L11() else D2();
  D2():
    deopt 10 [c2];
  L11():
    p = prom<V +>{
      conn2 = ld conn;
      conn3 = force? conn2;
      checkMissing(conn3);
      return conn3;
    };
    r5 = dyn isOpen(p);
    check L12() else D3();
  D3():
    deopt 12 [c2, r5];
  L12():
    c5 = `as.logical`(r5);
    c6 = `&&`(c2, c5);
    goto L1(c6);
  }
}