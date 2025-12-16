fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner183766727;
    st `Sys.setFileTime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner183766727(path, time) {
  (reg path:*, reg time:*) -+> V { var path:*, var time:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg c:L, reg r2:V, reg c1:L, reg stop:cls, reg r3:V, reg as_POSIXct:cls, reg time1:*, reg time2:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg time3:*, reg time4:V, reg anyNA:cls, reg r9:V, reg c2:L, reg stop1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg path3:*, reg path4:V, reg time5:*, reg time6:V, reg setFileTime:cls, reg r14:V |
    mkenv;
    st path = path;
    st time = time;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L10() else L1();
  L7():
    path1 = ld path;
    check L9() else D0();
  L8():
    r = dyn base(<sym path>);
    goto L0(r);
  D0():
    deopt 1 [path1];
  L1():
    goto L2();
  L2():
    as_POSIXct = ldf `as.POSIXct`;
    check L14() else D3();
  L9():
    path2 = force? path1;
    checkMissing(path2);
    c = `is.character`(path2);
    goto L0(c);
  L10():
    stop = ldf stop;
    check L11() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 12 [];
  L11():
    r3 = dyn stop("invalid 'path' argument");
    check L12() else D2();
  L14():
    p = prom<V +>{
      time1 = ld time;
      time2 = force? time1;
      checkMissing(time2);
      return time2;
    };
    r6 = dyn as_POSIXct(p);
    check L15() else D4();
  D2():
    deopt 8 [r3];
  D4():
    deopt 14 [r6];
  L12():
    goto L2();
  L15():
    st time = r6;
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L3(r8):
    c2 = `as.logical`(r8);
    if c2 then L20() else L4();
  L16():
    time3 = ld time;
    check L18() else D5();
  L17():
    r7 = dyn base1(<sym time>);
    goto L3(r7);
  D5():
    deopt 18 [time3];
  L4():
    goto L5();
  L5():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L18():
    time4 = force? time3;
    checkMissing(time4);
    anyNA = ldf anyNA in base;
    r9 = dyn anyNA(time4);
    check L19() else D6();
  L20():
    stop1 = ldf stop;
    check L21() else D7();
  D6():
    deopt 21 [r9];
  D7():
    deopt 23 [];
  L6(r13):
    popenv;
    return r13;
  L19():
    goto L3(r9);
  L21():
    r10 = dyn stop1("invalid 'time' argument");
    check L22() else D8();
  L24():
    path3 = ld path;
    check L26() else D9();
  L25():
    r12 = dyn base2(<lang setFileTime(path, time)>);
    goto L6(r12);
  D8():
    deopt 25 [r10];
  D9():
    deopt 30 [path3];
  L22():
    goto L5();
  L26():
    path4 = force? path3;
    checkMissing(path4);
    time5 = ld time;
    check L27() else D10();
  D10():
    deopt 32 [time5];
  L27():
    time6 = force? time5;
    checkMissing(time6);
    setFileTime = ldf setFileTime in base;
    r14 = dyn setFileTime(path4, time6);
    check L28() else D11();
  D11():
    deopt 35 [r14];
  L28():
    goto L6(r14);
  }
}