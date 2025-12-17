fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1161255751;
    st close_virtual_X11_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1161255751(pid) {
  (reg pid:*) -+> V { var pid:*, reg pskill:cls, reg pid1:*, reg pid2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg pid3:*, reg pid4:V, reg attr:cls, reg r6:V, reg is_na:cls, reg r7:V, reg c:L, reg Sys_unsetenv:cls, reg r8:V, reg Sys_setenv:cls, reg dis:*, reg dis1:V, reg p1:p(V +), reg r10:V |
    mkenv;
    st pid = pid;
    pskill = ldf pskill;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      pid1 = ld pid;
      pid2 = force? pid1;
      checkMissing(pid2);
      return pid2;
    };
    r1 = dyn pskill(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    c = `as.logical`(r3);
    if c then L12() else L2();
  L5():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r2 = dyn base(<lang `<-`(dis, attr(pid, "display"))>);
    goto L0(r2);
  L1(r5):
    st dis = r5;
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(r5);
    check L11() else D4();
  L2():
    Sys_setenv = ldf `Sys.setenv`;
    check L16() else D7();
  L7():
    pid3 = ld pid;
    check L9() else D2();
  L8():
    r4 = dyn base1(<sym pid>, "display");
    goto L1(r4);
  L12():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L13() else D5();
  D2():
    deopt 8 [pid3];
  D4():
    deopt 15 [r7];
  D5():
    deopt 17 [];
  D7():
    deopt 21 [];
  L9():
    pid4 = force? pid3;
    checkMissing(pid4);
    attr = ldf attr in base;
    r6 = dyn attr(pid4, "display");
    check L10() else D3();
  L11():
    goto L0(r7);
  L13():
    r8 = dyn Sys_unsetenv("DISPLAY");
    check L14() else D6();
  L16():
    p1 = prom<V +>{
      dis = ld dis;
      dis1 = force? dis;
      checkMissing(dis1);
      return dis1;
    };
    r10 = dyn Sys_setenv[DISPLAY](p1);
    check L17() else D8();
  D3():
    deopt 12 [r6];
  D6():
    deopt 19 [r8];
  D8():
    deopt 24 [r10];
  L10():
    goto L1(r6);
  L14():
    popenv;
    return r8;
  L17():
    popenv;
    return r10;
  }
}