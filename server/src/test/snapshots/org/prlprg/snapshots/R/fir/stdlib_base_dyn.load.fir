fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg is_loaded:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg is_loaded1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg is_loaded2:cls, reg r9:V |
    mkenv;
    r = clos inner63814310;
    st `dyn.load` = r;
    sym = ldf `is.loaded`;
    base = ldf `is.loaded` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf `is.loaded`;
    base1 = ldf `is.loaded` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L3():
    is_loaded = ldf `is.loaded` in base;
    r3 = dyn is_loaded("supsmu", "", "");
    check L5() else D0();
  L4():
    r1 = dyn base("supsmu");
    goto L0();
  D0():
    deopt 9 [r3];
  L1():
    sym2 = ldf `is.loaded`;
    base2 = ldf `is.loaded` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L5():
    goto L0();
  L6():
    is_loaded1 = ldf `is.loaded` in base;
    r6 = dyn is_loaded1("supsmu", "stats", "Fortran");
    check L8() else D1();
  L7():
    r4 = dyn base1("supsmu", "stats", "Fortran");
    goto L1();
  D1():
    deopt 16 [r6];
  L2(r8):
    popenv;
    return r8;
  L8():
    goto L1();
  L9():
    is_loaded2 = ldf `is.loaded` in base;
    r9 = dyn is_loaded2("PDF", "", "External");
    check L11() else D2();
  L10():
    r7 = dyn base2[, type]("PDF", "External");
    goto L2(r7);
  D2():
    deopt 23 [r9];
  L11():
    goto L2(r9);
  }
}
fun inner63814310(x, local, now, `...`) {
  (reg x:*, reg local:*, reg now:*, reg ddd:dots) -+> V { var x:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, var now:*, reg now_isMissing:L, reg now_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg local1:*, reg local2:V, reg as_logical:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg now1:*, reg now2:V, reg as_logical1:cls, reg r7:V, reg dyn_load:cls, reg r8:V |
    mkenv;
    st x = x;
    local_isMissing = missing.0(local);
    if local_isMissing then L0(TRUE) else L0(local);
  L0(local_orDefault):
    st local = local_orDefault;
    now_isMissing = missing.0(now);
    if now_isMissing then L1(TRUE) else L1(now);
  L1(now_orDefault):
    st now = now_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r1):
    popenv;
    return r1;
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<lang dyn.load(x, as.logical(local), as.logical(now), "")>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L3(r3):
    sym2 = ldf `as.logical`;
    base2 = ldf `as.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L8():
    local1 = ld local;
    check L10() else D1();
  L9():
    r2 = dyn base1(<sym local>);
    goto L3(r2);
  D1():
    deopt 6 [local1];
  L4(r6):
    dyn_load = ldf `dyn.load` in base;
    r8 = dyn dyn_load(x2, r3, r6, "");
    check L16() else D5();
  L10():
    local2 = force? local1;
    checkMissing(local2);
    as_logical = ldf `as.logical` in base;
    r4 = dyn as_logical(local2);
    check L11() else D2();
  L12():
    now1 = ld now;
    check L14() else D3();
  L13():
    r5 = dyn base2(<sym now>);
    goto L4(r5);
  D2():
    deopt 9 [r4];
  D3():
    deopt 12 [now1];
  D5():
    deopt 18 [r8];
  L11():
    goto L3(r4);
  L14():
    now2 = force? now1;
    checkMissing(now2);
    as_logical1 = ldf `as.logical` in base;
    r7 = dyn as_logical1(now2);
    check L15() else D4();
  L16():
    goto L2(r8);
  D4():
    deopt 15 [r7];
  L15():
    goto L4(r7);
  }
}