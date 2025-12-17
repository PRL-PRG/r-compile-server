fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3609555180;
    st psnice = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3609555180(pid, value) {
  (reg pid:*, reg value:*) -+> V { var pid:*, reg pid_isMissing:L, reg pid_orDefault:*, reg Sys_getpid:cls, reg r:V, reg p:p(V +), var value:*, reg value_isMissing:L, reg value_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg C_ps_priority:*, reg C_ps_priority1:V, reg pid1:*, reg pid2:V, reg value1:*, reg value2:V, reg vargs:dots, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg value3:*, reg value4:V, reg is_na:cls, reg r7:V, reg c:L, reg res:*, reg res1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg res2:*, reg res3:V, reg invisible:cls, reg r10:V |
    mkenv;
    pid_isMissing = missing.0(pid);
    if pid_isMissing then L0() else L1(pid);
  L0():
    p = prom<V +>{
      Sys_getpid = ldf `Sys.getpid`;
      r = dyn Sys_getpid();
      return r;
    };
    goto L1(p);
  L1(pid_orDefault):
    st pid = pid_orDefault;
    value_isMissing = missing.0(value);
    if value_isMissing then L2(NA_INT) else L2(value);
  L2(value_orDefault):
    st value = value_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r3):
    st res = r3;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    C_ps_priority = ld C_ps_priority;
    check L9() else D0();
  L8():
    r2 = dyn base(<sym C_ps_priority>, <sym pid>, <sym value>);
    goto L3(r2);
  D0():
    deopt 1 [C_ps_priority];
  L4(r6):
    c = `as.logical`(r6);
    if c then L16() else L5();
  L9():
    C_ps_priority1 = force? C_ps_priority;
    checkMissing(C_ps_priority1);
    pid1 = ld pid;
    check L10() else D1();
  L12():
    value3 = ld value;
    check L14() else D3();
  L13():
    r5 = dyn base1(<sym value>);
    goto L4(r5);
  D1():
    deopt 2 [C_ps_priority1, pid1];
  D3():
    deopt 9 [value3];
  L5():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L10():
    pid2 = force? pid1;
    checkMissing(pid2);
    value1 = ld value;
    check L11() else D2();
  L14():
    value4 = force? value3;
    checkMissing(value4);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(value4);
    check L15() else D4();
  L16():
    res = ld res;
    check L17() else D5();
  D2():
    deopt 3 [C_ps_priority1, pid2, value1];
  D4():
    deopt 12 [r7];
  D5():
    deopt 13 [res];
  L6(r9):
    popenv;
    return r9;
  L11():
    value2 = force? value1;
    checkMissing(value2);
    vargs = dots[pid2, value2];
    r4 = `.Call`(C_ps_priority1, vargs, <missing>);
    goto L3(r4);
  L15():
    goto L4(r7);
  L17():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L19():
    res2 = ld res;
    check L21() else D6();
  L20():
    r8 = dyn base2(<sym res>);
    goto L6(r8);
  D6():
    deopt 17 [res2];
  L21():
    res3 = force? res2;
    checkMissing(res3);
    invisible = ldf invisible in base;
    r10 = dyn invisible(res3);
    check L22() else D7();
  D7():
    deopt 20 [r10];
  L22():
    goto L6(r10);
  }
}