fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3218163522;
    st isOpen = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3218163522(con, rw) {
  (reg con:*, reg rw:*) -+> V { var con:*, var rw:*, reg rw_isMissing:L, reg rw_orDefault:*, reg pmatch:cls, reg rw1:*, reg rw2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg con1:*, reg con2:V, reg rw3:*, reg rw4:V, reg isOpen:cls, reg r8:V |
    mkenv;
    st con = con;
    rw_isMissing = missing.0(rw);
    if rw_isMissing then L0("") else L0(rw);
  L0(rw_orDefault):
    st rw = rw_orDefault;
    pmatch = ldf pmatch;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      rw1 = ld rw;
      rw2 = force? rw1;
      checkMissing(rw2);
      return rw2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("read", "write");
      goto L0(r3);
    L2():
      r1 = dyn base("read", "write");
      goto L0(r1);
    };
    r5 = dyn pmatch(p, p1, 0);
    check L3() else D1();
  D1():
    deopt 5 [r5];
  L3():
    st rw = r5;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L1(r7):
    popenv;
    return r7;
  L4():
    con1 = ld con;
    check L6() else D2();
  L5():
    r6 = dyn base1(<lang isOpen(con, rw)>);
    goto L1(r6);
  D2():
    deopt 9 [con1];
  L6():
    con2 = force? con1;
    checkMissing(con2);
    rw3 = ld rw;
    check L7() else D3();
  D3():
    deopt 11 [rw3];
  L7():
    rw4 = force? rw3;
    checkMissing(rw4);
    isOpen = ldf isOpen in base;
    r8 = dyn isOpen(con2, rw4);
    check L8() else D4();
  D4():
    deopt 14 [r8];
  L8():
    goto L1(r8);
  }
}