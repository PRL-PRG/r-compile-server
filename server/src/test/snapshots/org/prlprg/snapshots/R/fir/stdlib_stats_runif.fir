fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4062176093;
    st runif = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4062176093(n, min, max) {
  (reg n:*, reg min:*, reg max:*) -+> V { var n:*, var min:*, reg min_isMissing:L, reg min_orDefault:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_runif:*, reg C_runif1:V, reg n1:*, reg n2:V, reg min1:*, reg min2:V, reg max1:*, reg max2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    min_isMissing = missing.0(min);
    if min_isMissing then L0(0.0) else L0(min);
  L0(min_orDefault):
    st min = min_orDefault;
    max_isMissing = missing.0(max);
    if max_isMissing then L1(1.0) else L1(max);
  L1(max_orDefault):
    st max = max_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_runif = ld C_runif;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_runif>, <sym n>, <sym min>, <sym max>);
    goto L2(r);
  D0():
    deopt 1 [C_runif];
  L5():
    C_runif1 = force? C_runif;
    checkMissing(C_runif1);
    n1 = ld n;
    check L6() else D1();
  D1():
    deopt 2 [C_runif1, n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    min1 = ld min;
    check L7() else D2();
  D2():
    deopt 3 [C_runif1, n2, min1];
  L7():
    min2 = force? min1;
    checkMissing(min2);
    max1 = ld max;
    check L8() else D3();
  D3():
    deopt 4 [C_runif1, n2, min2, max1];
  L8():
    max2 = force? max1;
    checkMissing(max2);
    vargs = dots[n2, min2, max2];
    r2 = `.Call`(C_runif1, vargs, <missing>);
    goto L2(r2);
  }
}