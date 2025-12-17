fun main() {
  () -+> V { reg r:cls, reg getLoadedDLLs:cls, reg r1:V, reg getDLLRegisteredRoutines:cls, reg dlls:*, reg dlls1:V, reg c:L, reg dlls3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p:p(V +), reg r4:V, reg getDLLRegisteredRoutines1:cls, reg r5:V |
    mkenv;
    r = clos inner3692009932;
    st getDLLRegisteredRoutines = r;
    getLoadedDLLs = ldf getLoadedDLLs;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn getLoadedDLLs();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st dlls = r1;
    getDLLRegisteredRoutines = ldf getDLLRegisteredRoutines;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p = prom<V +>{
      dlls = ld dlls;
      dlls1 = force? dlls;
      checkMissing(dlls1);
      c = `is.object`(dlls1);
      if c then L1() else L2(dlls1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", dlls1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(dlls3):
      __ = ldf `[[` in base;
      r2 = dyn __(dlls3, "base");
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn getDLLRegisteredRoutines(p);
    check L3() else D3();
  D3():
    deopt 10 [r4];
  L3():
    getDLLRegisteredRoutines1 = ldf getDLLRegisteredRoutines;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    r5 = dyn getDLLRegisteredRoutines1("stats");
    check L5() else D5();
  D5():
    deopt 14 [r5];
  L5():
    popenv;
    return r5;
  }
}
fun inner3692009932(dll, addNames) {
  (reg dll:*, reg addNames:*) -+> V { var dll:*, var addNames:*, reg addNames_isMissing:L, reg addNames_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st dll = dll;
    addNames_isMissing = missing.0(addNames);
    if addNames_isMissing then L0(TRUE) else L0(addNames);
  L0(addNames_orDefault):
    st addNames = addNames_orDefault;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("getDLLRegisteredRoutines");
    goto L1(r2);
  L3():
    r = dyn base("getDLLRegisteredRoutines");
    goto L1(r);
  }
}