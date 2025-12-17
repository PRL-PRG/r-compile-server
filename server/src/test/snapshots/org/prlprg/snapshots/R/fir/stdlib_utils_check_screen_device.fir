fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner907579597;
    st check_screen_device = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner907579597(where) {
  (reg where:*) -+> V { var where:*, reg where_isMissing:L, reg where_orDefault:*, reg Sys_getenv:cls, reg r:V, reg sprintf:cls, reg where1:*, reg where2:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg check:*, reg check1:V, reg identical:cls, reg r5:V, reg c:L, reg stop:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg check2:*, reg check3:V, reg identical1:cls, reg r10:V, reg c1:L, reg warning:cls, reg msg2:*, reg msg3:V, reg p2:p(V +), reg r12:V |
    mkenv;
    where_isMissing = missing.0(where);
    if where_isMissing then L0("screen devices") else L0(where);
  L0(where_orDefault):
    st where = where_orDefault;
    Sys_getenv = ldf `Sys.getenv`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn Sys_getenv("_R_CHECK_SCREEN_DEVICE_", "");
    check L6() else D1();
  D1():
    deopt 4 [r];
  L6():
    st check = r;
    sprintf = ldf sprintf;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn sprintf("%s should not be used in examples etc", p);
    check L8() else D3();
  D3():
    deopt 10 [r2];
  L8():
    st msg = r2;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r4):
    c = `as.logical`(r4);
    if c then L13() else L2();
  L9():
    check = ld check;
    check L11() else D4();
  L10():
    r3 = dyn base(<sym check>, "stop");
    goto L1(r3);
  D4():
    deopt 14 [check];
  L2():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L11():
    check1 = force? check;
    checkMissing(check1);
    identical = ldf identical in base;
    r5 = dyn identical(check1, "stop", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L12() else D5();
  L13():
    stop = ldf stop;
    check L14() else D6();
  D5():
    deopt 25 [r5];
  D6():
    deopt 27 [];
  L3(r9):
    c1 = `as.logical`(r9);
    if c1 then L21() else L4();
  L12():
    goto L1(r5);
  L14():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r7 = dyn stop[, domain](p1, NA_LGL);
    check L15() else D7();
  L17():
    check2 = ld check;
    check L19() else D8();
  L18():
    r8 = dyn base1(<sym check>, "warn");
    goto L3(r8);
  D7():
    deopt 31 [r7];
  D8():
    deopt 34 [check2];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L15():
    popenv;
    return r7;
  L19():
    check3 = force? check2;
    checkMissing(check3);
    identical1 = ldf identical in base;
    r10 = dyn identical1(check3, "warn", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L20() else D9();
  L21():
    warning = ldf warning;
    check L22() else D10();
  D9():
    deopt 45 [r10];
  D10():
    deopt 47 [];
  L20():
    goto L3(r10);
  L22():
    p2 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r12 = dyn warning[, `immediate.`, `noBreaks.`, domain](p2, TRUE, TRUE, NA_LGL);
    check L23() else D11();
  D11():
    deopt 55 [r12];
  L23():
    popenv;
    return r12;
  }
}