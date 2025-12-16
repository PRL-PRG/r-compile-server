fun main() {
  () -+> V { reg r:cls, reg Sys_info:cls, reg r1:V, reg Sys_getenv:cls, reg r2:V |
    mkenv;
    r = clos inner560854305;
    st `Sys.info` = r;
    Sys_info = ldf `Sys.info`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn Sys_info();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    Sys_getenv = ldf `Sys.getenv`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    r2 = dyn Sys_getenv("LOGNAME");
    check L3() else D3();
  D3():
    deopt 9 [r2];
  L3():
    popenv;
    return r2;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_info:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    Sys_info = ldf `Sys.info` in base;
    r2 = dyn Sys_info();
    check L3() else D0();
  L2():
    r = dyn base(<lang Sys.info()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}