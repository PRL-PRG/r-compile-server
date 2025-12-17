fun main() {
  () -+> V { reg r:cls, reg Puromycin:*, reg Puromycin1:V, reg c:L, reg Puromycin3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg Puromycin4:*, reg Puromycin5:V, reg c1:L, reg Puromycin8:V, reg Puromycin9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg print:cls, reg getInitial:cls, reg __1:cls, reg r4:V, reg p:p(V +), reg PurTrt:*, reg PurTrt1:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V |
    mkenv;
    r = clos inner851005753;
    st getInitial = r;
    Puromycin = ld Puromycin;
    check L1() else D0();
  D0():
    deopt 3 [Puromycin];
  L1():
    Puromycin1 = force? Puromycin;
    checkMissing(Puromycin1);
    c = `is.object`(Puromycin1);
    if c then L2() else L3(Puromycin1);
  L0(dx1):
    st PurTrt = dx1;
    print = ldf print;
    check L10() else D2();
  L2():
    dr = tryDispatchBuiltin.1("[", Puromycin1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(Puromycin3):
    Puromycin4 = ld Puromycin;
    check L5() else D1();
  D1():
    deopt 5 [Puromycin3, Puromycin4];
  D2():
    deopt 15 [];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    Puromycin5 = force? Puromycin4;
    checkMissing(Puromycin5);
    c1 = `is.object`(Puromycin5);
    if c1 then L7() else L8(Puromycin3, Puromycin5);
  L10():
    p2 = prom<V +>{
      getInitial = ldf getInitial;
      p = prom<V +>{
        __1 = ldf `~` in base;
        r4 = dyn __1(<sym rate>, <lang SSmicmen(conc, Vm, K)>);
        return r4;
      };
      p1 = prom<V +>{
        PurTrt = ld PurTrt;
        PurTrt1 = force? PurTrt;
        checkMissing(PurTrt1);
        return PurTrt1;
      };
      r7 = dyn getInitial(p, p1);
      return r7;
    };
    r9 = dyn print[, digits](p2, 3.0);
    check L11() else D3();
  D3():
    deopt 19 [r9];
  L6(dx3):
    r2 = `==`(dx3, "treated");
    __ = ldf `[` in base;
    r3 = dyn __(Puromycin1, r2, <missing>);
    goto L0(r3);
  L7():
    dr2 = tryDispatchBuiltin.1("$", Puromycin5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(Puromycin3, dr2);
  L8(Puromycin8, Puromycin9):
    r1 = `$`(Puromycin9, <sym state>);
    goto L6(r1);
  L11():
    popenv;
    return r9;
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  }
}
fun inner851005753(object, data, `...`) {
  (reg object:*, reg data:*, reg ddd:dots) -+> V { var object:*, var data:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st data = data;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("getInitial");
    goto L0(r2);
  L2():
    r = dyn base("getInitial");
    goto L0(r);
  }
}