fun main() {
  () -+> V { reg r:cls, reg chol:cls, reg cbind:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg ma:*, reg ma1:V, reg chol2inv:cls, reg cma:*, reg cma1:V, reg p3:p(V +), reg r10:V, reg ___:cls, reg r11:V |
    mkenv;
    r = clos inner2494736165;
    st chol2inv = r;
    chol = ldf chol;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p2 = prom<V +>{
      cbind = ldf cbind;
      p = prom<V +>{
        return <int 1, 2, 3>;
      };
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        c = ldf c in base;
        r4 = dyn c(1.0, 3.0, 7.0);
        goto L0(r4);
      L2():
        r2 = dyn base(1.0, 3.0, 7.0);
        goto L0(r2);
      };
      r6 = dyn cbind(1.0, p, p1);
      st ma = r6;
      invisible.0();
      return r6;
    };
    r8 = dyn chol(p2);
    check L1() else D1();
  D1():
    deopt 6 [r8];
  L1():
    st cma = r8;
    ma = ld ma;
    check L2() else D2();
  D2():
    deopt 9 [ma];
  L2():
    ma1 = force? ma;
    checkMissing(ma1);
    chol2inv = ldf chol2inv;
    check L3() else D3();
  D3():
    deopt 12 [];
  L3():
    p3 = prom<V +>{
      cma = ld cma;
      cma1 = force? cma;
      checkMissing(cma1);
      return cma1;
    };
    r10 = dyn chol2inv(p3);
    check L4() else D4();
  D4():
    deopt 14 [r10];
  L4():
    ___ = ldf `%*%` in base;
    r11 = dyn ___(ma1, r10);
    check L5() else D5();
  D5():
    deopt 16 [r11];
  L5():
    popenv;
    return r11;
  }
}
fun inner2494736165(x, size, LINPACK) {
  (reg x:*, reg size:*, reg LINPACK:*) -+> V { var x:*, var size:*, reg size_isMissing:L, reg size_orDefault:*, reg NCOL:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var LINPACK:*, reg LINPACK_isMissing:L, reg LINPACK_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg size1:*, reg size2:V, reg La_chol2inv:cls, reg r11:V |
    mkenv;
    st x = x;
    size_isMissing = missing.0(size);
    if size_isMissing then L0() else L1(size);
  L0():
    p1 = prom<V +>{
      NCOL = ldf NCOL;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn NCOL(p);
      return r1;
    };
    goto L1(p1);
  L1(size_orDefault):
    st size = size_orDefault;
    LINPACK_isMissing = missing.0(LINPACK);
    if LINPACK_isMissing then L2(FALSE) else L2(LINPACK);
  L2(LINPACK_orDefault):
    st LINPACK = LINPACK_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L9() else L4();
  L7():
    missing = ldf missing in base;
    r5 = dyn missing(<sym LINPACK>);
    goto L3(r5);
  L8():
    r3 = dyn base(<sym LINPACK>);
    goto L3(r3);
  L4():
    goto L5();
  L5():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L9():
    stop = ldf stop;
    check L10() else D0();
  D0():
    deopt 5 [];
  L6(r10):
    popenv;
    return r10;
  L10():
    r7 = dyn stop("the LINPACK argument has been defunct since R 3.1.0");
    check L11() else D1();
  L13():
    x3 = ld x;
    check L15() else D2();
  L14():
    r9 = dyn base1(<lang La_chol2inv(x, size)>);
    goto L6(r9);
  D1():
    deopt 7 [r7];
  D2():
    deopt 12 [x3];
  L11():
    goto L5();
  L15():
    x4 = force? x3;
    checkMissing(x4);
    size1 = ld size;
    check L16() else D3();
  D3():
    deopt 14 [size1];
  L16():
    size2 = force? size1;
    checkMissing(size2);
    La_chol2inv = ldf La_chol2inv in base;
    r11 = dyn La_chol2inv(x4, size2);
    check L17() else D4();
  D4():
    deopt 17 [r11];
  L17():
    goto L6(r11);
  }
}