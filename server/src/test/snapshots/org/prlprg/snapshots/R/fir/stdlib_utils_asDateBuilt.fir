fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner44671866;
    st asDateBuilt = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner44671866(built) {
  (reg built:*) -+> V { var built:*, reg as_Date:cls, reg strsplit:cls, reg built1:*, reg built2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    st built = built;
    as_Date = ldf `as.Date`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        built1 = ld built;
        built2 = force? built1;
        checkMissing(built2);
        return built2;
      };
      r1 = dyn strsplit[, split, fixed](p, "; ", TRUE);
      c = `is.object`(r1);
      if c then L2() else L3(r1);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r3):
      __ = ldf `[[` in base;
      r4 = dyn __(r3, 1);
      goto L0(r4);
    L1(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __1 = ldf `[[` in base;
      r5 = dyn __1(dx3, 3);
      goto L1(r5);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx4);
    };
    r7 = dyn as_Date[, format](p1, "%Y-%m-%d");
    check L1() else D1();
  D1():
    deopt 5 [r7];
  L1():
    popenv;
    return r7;
  }
}