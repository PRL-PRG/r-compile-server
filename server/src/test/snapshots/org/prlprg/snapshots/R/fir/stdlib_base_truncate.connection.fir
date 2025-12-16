fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1810966873;
    st `truncate.connection` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1810966873(con, `...`) {
  (reg con:*, reg ddd:dots) -+> V { var con:*, var `...`:dots?, reg isOpen:cls, reg con1:*, reg con2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg con3:*, reg con4:V, reg truncate:cls, reg r7:V |
    mkenv;
    st con = con;
    st `...` = ddd;
    isOpen = ldf isOpen;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    r1 = dyn isOpen(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L5() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L5():
    stop = ldf stop;
    check L6() else D2();
  D2():
    deopt 6 [];
  L2(r6):
    popenv;
    return r6;
  L6():
    r3 = dyn stop("can only truncate an open connection");
    check L7() else D3();
  L9():
    con3 = ld con;
    check L11() else D4();
  L10():
    r5 = dyn base(<lang truncate(con)>);
    goto L2(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 13 [con3];
  L7():
    goto L1();
  L11():
    con4 = force? con3;
    checkMissing(con4);
    truncate = ldf truncate in base;
    r7 = dyn truncate(con4);
    check L12() else D5();
  D5():
    deopt 16 [r7];
  L12():
    goto L2(r7);
  }
}