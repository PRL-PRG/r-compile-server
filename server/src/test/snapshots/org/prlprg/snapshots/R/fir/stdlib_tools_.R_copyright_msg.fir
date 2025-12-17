fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2098303389;
    st `.R_copyright_msg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2098303389(year) {
  (reg year:*) -+> V { var year:*, reg sprintf:cls, reg year1:*, reg year2:V, reg p:p(V +), reg R_version:*, reg R_version1:V, reg c:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st year = year;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      year1 = ld year;
      year2 = force? year1;
      checkMissing(year2);
      return year2;
    };
    p1 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c = `is.object`(R_version1);
      if c then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r1 = `$`(R_version3, <sym year>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn sprintf("Copyright (C) %s-%s The R Core Team.", p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}