fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner611997541;
    st rpois = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner611997541(n, lambda) {
  (reg n:*, reg lambda:*) -+> V { var n:*, var lambda:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rpois:*, reg C_rpois1:V, reg n1:*, reg n2:V, reg lambda1:*, reg lambda2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    st lambda = lambda;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_rpois = ld C_rpois;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_rpois>, <sym n>, <sym lambda>);
    goto L0(r);
  D0():
    deopt 1 [C_rpois];
  L3():
    C_rpois1 = force? C_rpois;
    checkMissing(C_rpois1);
    n1 = ld n;
    check L4() else D1();
  D1():
    deopt 2 [C_rpois1, n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    lambda1 = ld lambda;
    check L5() else D2();
  D2():
    deopt 3 [C_rpois1, n2, lambda1];
  L5():
    lambda2 = force? lambda1;
    checkMissing(lambda2);
    vargs = dots[n2, lambda2];
    r2 = `.Call`(C_rpois1, vargs, <missing>);
    goto L0(r2);
  }
}