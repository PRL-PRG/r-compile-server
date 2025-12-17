fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2167627821;
    st `Sys.sleep` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2167627821(time) {
  (reg time:*) -+> V { var time:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg time1:*, reg time2:V, reg Sys_sleep:cls, reg r2:V |
    mkenv;
    st time = time;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    time1 = ld time;
    check L3() else D0();
  L2():
    r = dyn base(<lang Sys.sleep(time)>);
    goto L0(r);
  D0():
    deopt 2 [time1];
  L3():
    time2 = force? time1;
    checkMissing(time2);
    Sys_sleep = ldf `Sys.sleep` in base;
    r2 = dyn Sys_sleep(time2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}