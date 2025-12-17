fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1778122203;
    st `Sys.umask` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1778122203(mode) {
  (reg mode:*) -+> V { var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg mode1:*, reg mode2:V, reg is_na:cls, reg r4:V, reg c:L, reg r5:V, reg as_octmode:cls, reg mode3:*, reg mode4:V, reg p:p(V +), reg r7:V, reg Sys_umask:cls, reg r8:V |
    mkenv;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0(NA_LGL) else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    popenv;
    return r1;
  L5():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang Sys.umask(if(is.na(mode), NA_INT, as.octmode(mode)))>);
    goto L1(r);
  L2(r3):
    c = `as.logical`(r3);
    if c then L11() else L3();
  L7():
    mode1 = ld mode;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym mode>);
    goto L2(r2);
  D0():
    deopt 4 [mode1];
  L3():
    as_octmode = ldf `as.octmode`;
    check L13() else D2();
  L4(r5):
    Sys_umask = ldf `Sys.umask` in base;
    r8 = dyn Sys_umask(r5);
    check L15() else D4();
  L9():
    mode2 = force? mode1;
    checkMissing(mode2);
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(mode2);
    check L10() else D1();
  L11():
    goto L4(NA_INT);
  D1():
    deopt 7 [r4];
  D2():
    deopt 11 [];
  D4():
    deopt 15 [r8];
  L10():
    goto L2(r4);
  L13():
    p = prom<V +>{
      mode3 = ld mode;
      mode4 = force? mode3;
      checkMissing(mode4);
      return mode4;
    };
    r7 = dyn as_octmode(p);
    check L14() else D3();
  L15():
    goto L1(r8);
  D3():
    deopt 13 [r7];
  L14():
    goto L4(r7);
  }
}