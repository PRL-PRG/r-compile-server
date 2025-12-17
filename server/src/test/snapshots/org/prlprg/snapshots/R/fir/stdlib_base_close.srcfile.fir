fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3958450520;
    st `close.srcfile` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3958450520(con, `...`) {
  (reg con:*, reg ddd:dots) -+> V { var con:*, var `...`:dots?, reg con1:*, reg con2:V, reg srcfile:*, reg srcfile1:V, reg c:L, reg srcfile3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg conn:*, reg conn1:V, reg c1:V, reg c2:L, reg close:cls, reg conn2:*, reg conn3:V, reg p:p(V +), reg r4:V, reg rm:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c3:cls, reg r7:V, reg p1:p(V +), reg srcfile4:*, reg srcfile5:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st con = con;
    st `...` = ddd;
    con1 = ld con;
    check L2() else D0();
  D0():
    deopt 0 [con1];
  L2():
    con2 = force? con1;
    checkMissing(con2);
    st srcfile = con2;
    srcfile = ld srcfile;
    check L3() else D1();
  D1():
    deopt 3 [srcfile];
  L3():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    c = `is.object`(srcfile1);
    if c then L5() else L6(srcfile1);
  L4(dx1):
    st conn = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L5():
    dr = tryDispatchBuiltin.1("$", srcfile1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(srcfile3):
    r = `$`(srcfile3, <sym conn>);
    goto L4(r);
  L0(r2):
    c2 = `as.logical`(r2);
    if c2 then L11() else L1();
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    conn = ld conn;
    check L10() else D2();
  L9():
    r1 = dyn base(<sym conn>);
    goto L0(r1);
  D2():
    deopt 8 [conn];
  L1():
    close = ldf close;
    check L13() else D3();
  L10():
    conn1 = force? conn;
    checkMissing(conn1);
    c1 = `==`(conn1, NULL);
    goto L0(c1);
  L11():
    popenv;
    return NULL;
  D3():
    deopt 14 [];
  L13():
    p = prom<V +>{
      conn2 = ld conn;
      conn3 = force? conn2;
      checkMissing(conn3);
      return conn3;
    };
    r4 = dyn close(p);
    check L14() else D4();
  D4():
    deopt 16 [r4];
  L14():
    rm = ldf rm;
    check L15() else D5();
  D5():
    deopt 18 [];
  L15():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c3 = ldf c in base;
      r7 = dyn c3("conn", "line");
      goto L0(r7);
    L2():
      r5 = dyn base1("conn", "line");
      goto L0(r5);
    };
    p2 = prom<V +>{
      srcfile4 = ld srcfile;
      srcfile5 = force? srcfile4;
      checkMissing(srcfile5);
      return srcfile5;
    };
    r10 = dyn rm[list, envir](p1, p2);
    check L16() else D6();
  D6():
    deopt 23 [r10];
  L16():
    popenv;
    return r10;
  }
}