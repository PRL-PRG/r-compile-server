fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3595382568;
    st getAllSuperClasses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3595382568(ClassDef, simpleOnly) {
  (reg ClassDef:*, reg simpleOnly:*) -+> V { var ClassDef:*, var simpleOnly:*, reg simpleOnly_isMissing:L, reg simpleOnly_orDefault:*, reg superClassDepth:cls, reg ClassDef1:*, reg ClassDef2:V, reg p:p(V +), reg simpleOnly1:*, reg simpleOnly2:V, reg p1:p(V +), reg r2:V, reg unique:cls, reg temp:*, reg temp1:V, reg c:L, reg temp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg sort_list:cls, reg temp4:*, reg temp5:V, reg c2:L, reg temp7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r4:V, reg p2:p(V +), reg r6:V, reg __:cls, reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st ClassDef = ClassDef;
    simpleOnly_isMissing = missing.0(simpleOnly);
    if simpleOnly_isMissing then L0(TRUE) else L0(simpleOnly);
  L0(simpleOnly_orDefault):
    st simpleOnly = simpleOnly_orDefault;
    superClassDepth = ldf superClassDepth;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      ClassDef1 = ld ClassDef;
      ClassDef2 = force? ClassDef1;
      checkMissing(ClassDef2);
      return ClassDef2;
    };
    p1 = prom<V +>{
      simpleOnly1 = ld simpleOnly;
      simpleOnly2 = force? simpleOnly1;
      checkMissing(simpleOnly2);
      return simpleOnly2;
    };
    r2 = dyn superClassDepth[, simpleOnly](p, p1);
    check L2() else D1();
  D1():
    deopt 5 [r2];
  L2():
    st temp = r2;
    unique = ldf unique;
    check L3() else D2();
  D2():
    deopt 8 [];
  L3():
    p3 = prom<V +>{
      temp = ld temp;
      temp1 = force? temp;
      checkMissing(temp1);
      c = `is.object`(temp1);
      if c then L2() else L3(temp1);
    L1(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", temp1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(temp3):
      r3 = `$`(temp3, <sym label>);
      goto L1(r3);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      sort_list = ldf `sort.list`;
      p2 = prom<V +>{
        temp4 = ld temp;
        temp5 = force? temp4;
        checkMissing(temp5);
        c2 = `is.object`(temp5);
        if c2 then L1() else L2(temp5);
      L0(dx7):
        return dx7;
      L1():
        dr4 = tryDispatchBuiltin.1("$", temp5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(temp7):
        r4 = `$`(temp7, <sym depth>);
        goto L0(r4);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx6);
      };
      r6 = dyn sort_list(p2);
      __ = ldf `[` in base;
      r7 = dyn __(dx3, r6);
      goto L0(r7);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    r9 = dyn unique(p3);
    check L4() else D3();
  D3():
    deopt 10 [r9];
  L4():
    popenv;
    return r9;
  }
}