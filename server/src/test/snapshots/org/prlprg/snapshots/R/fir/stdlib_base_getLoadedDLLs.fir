fun main() {
  () -+> V { reg r:cls, reg getLoadedDLLs:cls, reg r1:V, reg __:cls, reg r2:V, reg r3:cls, reg getLoadedDLLs1:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    r = clos inner560854305;
    st getLoadedDLLs = r;
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
    __ = ldf `::`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    r2 = dyn __("utils", "tail");
    check L3() else D3();
  D3():
    deopt 10 [r2];
  L3():
    checkFun.0(r2);
    r3 = r2 as cls;
    p = prom<V +>{
      getLoadedDLLs1 = ldf getLoadedDLLs;
      r4 = dyn getLoadedDLLs1();
      return r4;
    };
    r6 = dyn r3(p, 2.0);
    check L4() else D4();
  D4():
    deopt 14 [r6];
  L4():
    popenv;
    return r6;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getLoadedDLLs:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    getLoadedDLLs = ldf getLoadedDLLs in base;
    r2 = dyn getLoadedDLLs();
    check L3() else D0();
  L2():
    r = dyn base(<lang getLoadedDLLs()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}