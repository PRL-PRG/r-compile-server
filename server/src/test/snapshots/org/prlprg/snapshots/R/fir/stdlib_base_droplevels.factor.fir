fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3584029351;
    st `droplevels.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3584029351(x, exclude, `...`) {
  (reg x:*, reg exclude:*, reg ddd:dots) -+> V { var x:*, var exclude:*, reg exclude_isMissing:L, reg exclude_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg anyNA:cls, reg r4:V, reg c:L, reg p1:p(V +), var `...`:dots?, reg factor:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg exclude1:*, reg exclude2:V, reg p3:p(V +), reg r8:V |
    mkenv;
    st x = x;
    exclude_isMissing = missing.0(exclude);
    if exclude_isMissing then L0() else L1(exclude);
  L0():
    p1 = prom<V +>{
      sym = ldf anyNA;
      base = ldf anyNA in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `as.logical`(r1);
      if c then L4() else L1();
    L2():
      levels = ldf levels;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r3 = dyn levels(p);
      anyNA = ldf anyNA in base;
      r4 = dyn anyNA(r3);
      goto L0(r4);
    L3():
      r = dyn base(<lang levels(x)>);
      goto L0(r);
    L1():
      return NA_LGL;
    L4():
      return NULL;
    };
    goto L1(p1);
  L1(exclude_orDefault):
    st exclude = exclude_orDefault;
    st `...` = ddd;
    factor = ldf factor;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      exclude1 = ld exclude;
      exclude2 = force? exclude1;
      checkMissing(exclude2);
      return exclude2;
    };
    r8 = dyn factor[, exclude](p2, p3);
    check L3() else D1();
  D1():
    deopt 5 [r8];
  L3():
    popenv;
    return r8;
  }
}