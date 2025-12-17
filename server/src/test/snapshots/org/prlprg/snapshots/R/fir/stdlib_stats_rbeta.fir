fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3735441797;
    st rbeta = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3735441797(n, shape1, shape2, ncp) {
  (reg n:*, reg shape1:*, reg shape2:*, reg ncp:*) -+> V { var n:*, var shape1:*, var shape2:*, var ncp:*, reg ncp_isMissing:L, reg ncp_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_rbeta:*, reg C_rbeta1:V, reg n1:*, reg n2:V, reg shape3:*, reg shape4:V, reg shape5:*, reg shape6:V, reg vargs:dots, reg r5:V, reg rchisq:cls, reg n3:*, reg n4:V, reg p:p(V +), reg shape7:*, reg shape8:V, reg r7:V, reg p1:p(V +), reg ncp1:*, reg ncp2:V, reg p2:p(V +), reg r10:V, reg X:*, reg X1:V, reg X2:*, reg X3:V, reg rchisq1:cls, reg n5:*, reg n6:V, reg p3:p(V +), reg shape9:*, reg shape10:V, reg r12:V, reg p4:p(V +), reg r14:V, reg r15:V, reg r16:V |
    mkenv;
    st n = n;
    st shape1 = shape1;
    st shape2 = shape2;
    ncp_isMissing = missing.0(ncp);
    if ncp_isMissing then L0(0.0) else L0(ncp);
  L0(ncp_orDefault):
    st ncp = ncp_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c = `as.logical`(r1);
    if c then L6() else L2();
  L4():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L1(r2);
  L5():
    r = dyn base(<sym ncp>);
    goto L1(r);
  L2():
    rchisq = ldf rchisq;
    check L14() else D4();
  L6():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  D4():
    deopt 11 [];
  L3(r4):
    popenv;
    return r4;
  L7():
    C_rbeta = ld C_rbeta;
    check L9() else D0();
  L8():
    r3 = dyn base1(<sym C_rbeta>, <sym n>, <sym shape1>, <sym shape2>);
    goto L3(r3);
  L14():
    p = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p1 = prom<V +>{
      shape7 = ld shape1;
      shape8 = force? shape7;
      checkMissing(shape8);
      r7 = `*`(2.0, shape8);
      return r7;
    };
    p2 = prom<V +>{
      ncp1 = ld ncp;
      ncp2 = force? ncp1;
      checkMissing(ncp2);
      return ncp2;
    };
    r10 = dyn rchisq[, , ncp](p, p1, p2);
    check L15() else D5();
  D0():
    deopt 4 [C_rbeta];
  D5():
    deopt 16 [r10];
  L9():
    C_rbeta1 = force? C_rbeta;
    checkMissing(C_rbeta1);
    n1 = ld n;
    check L10() else D1();
  L15():
    st X = r10;
    X = ld X;
    check L16() else D6();
  D1():
    deopt 5 [C_rbeta1, n1];
  D6():
    deopt 18 [X];
  L10():
    n2 = force? n1;
    checkMissing(n2);
    shape3 = ld shape1;
    check L11() else D2();
  L16():
    X1 = force? X;
    checkMissing(X1);
    X2 = ld X;
    check L17() else D7();
  D2():
    deopt 6 [C_rbeta1, n2, shape3];
  D7():
    deopt 19 [X1, X2];
  L11():
    shape4 = force? shape3;
    checkMissing(shape4);
    shape5 = ld shape2;
    check L12() else D3();
  L17():
    X3 = force? X2;
    checkMissing(X3);
    rchisq1 = ldf rchisq;
    check L18() else D8();
  D3():
    deopt 7 [C_rbeta1, n2, shape4, shape5];
  D8():
    deopt 21 [X1, X3];
  L12():
    shape6 = force? shape5;
    checkMissing(shape6);
    vargs = dots[n2, shape4, shape6];
    r5 = `.Call`(C_rbeta1, vargs, <missing>);
    goto L3(r5);
  L18():
    p3 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    p4 = prom<V +>{
      shape9 = ld shape2;
      shape10 = force? shape9;
      checkMissing(shape10);
      r12 = `*`(2.0, shape10);
      return r12;
    };
    r14 = dyn rchisq1(p3, p4);
    check L19() else D9();
  D9():
    deopt 24 [X1, X3, r14];
  L19():
    r15 = `+`(X3, r14);
    r16 = `/`(X1, r15);
    popenv;
    return r16;
  }
}