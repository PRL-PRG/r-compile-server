fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2525057051;
    st `vcov.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2525057051(object, complete, names, `...`) {
  (reg object:*, reg complete:*, reg names:*, reg ddd:dots) -+> V { var object:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var names:*, reg names_isMissing:L, reg names_orDefault:*, var `...`:dots?, reg summary_mlm:cls, reg object1:*, reg object2:V, reg p:p(V +), reg names1:*, reg names2:V, reg p1:p(V +), reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg kronecker:cls, reg estVar:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg _vcov_aliased:cls, reg so:*, reg so1:V, reg c1:L, reg so3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg p4:p(V +), reg so4:*, reg so5:V, reg c2:L, reg so7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p5:p(V +), reg complete1:*, reg complete2:V, reg p6:p(V +), reg r14:V, reg p7:p(V +), reg r16:V |
    mkenv;
    st object = object;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(TRUE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    names_isMissing = missing.0(names);
    if names_isMissing then L1(FALSE) else L1(names);
  L1(names_orDefault):
    st names = names_orDefault;
    st `...` = ddd;
    summary_mlm = ldf `summary.mlm`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p1 = prom<V +>{
      names1 = ld names;
      names2 = force? names1;
      checkMissing(names2);
      return names2;
    };
    r2 = dyn summary_mlm[, ny, names](p, 1, p1);
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    c = `is.object`(r2);
    if c then L5() else L6(r2);
  L2(dx1):
    st so = dx1;
    kronecker = ldf kronecker;
    check L8() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[[", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(r4):
    __ = ldf `[[` in base;
    r5 = dyn __(r4, 1);
    goto L2(r5);
  D2():
    deopt 13 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L8():
    p3 = prom<V +>{
      estVar = ldf estVar;
      p2 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      r7 = dyn estVar(p2);
      return r7;
    };
    p7 = prom<V +>{
      _vcov_aliased = ldf `.vcov.aliased`;
      p4 = prom<V +>{
        so = ld so;
        so1 = force? so;
        checkMissing(so1);
        c1 = `is.object`(so1);
        if c1 then L1() else L2(so1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", so1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(so3):
        r9 = `$`(so3, <sym aliased>);
        goto L0(r9);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p5 = prom<V +>{
        so4 = ld so;
        so5 = force? so4;
        checkMissing(so5);
        c2 = `is.object`(so5);
        if c2 then L1() else L2(so5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", so5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(so7):
        r11 = `$`(so7, <sym cov.unscaled>);
        goto L0(r11);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p6 = prom<V +>{
        complete1 = ld complete;
        complete2 = force? complete1;
        checkMissing(complete2);
        return complete2;
      };
      r14 = dyn _vcov_aliased[, , complete](p4, p5, p6);
      return r14;
    };
    r16 = dyn kronecker[, , `make.dimnames`](p3, p7, TRUE);
    check L9() else D3();
  D3():
    deopt 18 [r16];
  L9():
    popenv;
    return r16;
  }
}