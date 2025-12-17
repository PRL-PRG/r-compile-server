fun main() {
  () -+> V { reg r:cls, reg IQR:cls, reg rivers:*, reg rivers1:V, reg p:p(V +), reg r2:V |
    mkenv;
    r = clos inner2710654842;
    st IQR = r;
    IQR = ldf IQR;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      rivers = ld rivers;
      rivers1 = force? rivers;
      checkMissing(rivers1);
      return rivers1;
    };
    r2 = dyn IQR(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner2710654842(x, `na.rm`, type) {
  (reg x:*, reg na_rm:*, reg type:*) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg diff:cls, reg quantile:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_numeric:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), reg na_rm1:*, reg na_rm2:V, reg p2:p(V +), reg type1:*, reg type2:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1(7.0) else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    diff = ldf diff;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p4 = prom<V +>{
      quantile = ldf quantile;
      p = prom<V +>{
        sym = ldf `as.numeric`;
        base = ldf `as.numeric` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        as_numeric = ldf `as.numeric` in base;
        r2 = dyn as_numeric(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      p1 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        c = ldf c in base;
        r6 = dyn c(0.25, 0.75);
        goto L0(r6);
      L2():
        r4 = dyn base1(0.25, 0.75);
        goto L0(r4);
      };
      p2 = prom<V +>{
        na_rm1 = ld `na.rm`;
        na_rm2 = force? na_rm1;
        checkMissing(na_rm2);
        return na_rm2;
      };
      p3 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r10 = dyn quantile[, , `na.rm`, names, type](p, p1, p2, FALSE, p3);
      return r10;
    };
    r12 = dyn diff(p4);
    check L3() else D1();
  D1():
    deopt 3 [r12];
  L3():
    popenv;
    return r12;
  }
}