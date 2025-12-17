fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner431752210;
    st `contr.SAS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner431752210(n, contrasts, sparse) {
  (reg n:*, reg contrasts:*, reg sparse:*) -+> V { var n:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, reg contr_treatment:cls, reg n1:*, reg n2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg n3:*, reg n4:V, reg is_numeric:cls, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg n5:*, reg n6:V, reg length:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg n7:*, reg n8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg n9:*, reg n10:V, reg length1:cls, reg r10:V, reg p1:p(V +), reg contrasts1:*, reg contrasts2:V, reg p2:p(V +), reg sparse1:*, reg sparse2:V, reg p3:p(V +), reg r14:V |
    mkenv;
    st n = n;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L0(TRUE) else L0(contrasts);
  L0(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    sparse_isMissing = missing.0(sparse);
    if sparse_isMissing then L1(FALSE) else L1(sparse);
  L1(sparse_orDefault):
    st sparse = sparse_orDefault;
    contr_treatment = ldf `contr.treatment`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p1 = prom<V +>{
      sym = ldf `is.numeric`;
      base = ldf `is.numeric` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L0(r2):
      c = `as.logical`(r2);
      if c then L7() else L1(c);
    L5():
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      is_numeric = ldf `is.numeric` in base;
      r3 = dyn is_numeric(n4);
      goto L0(r3);
    L6():
      r1 = dyn base(<sym n>);
      goto L0(r1);
    L1(c2):
      c9 = `as.logical`(c2);
      if c9 then L11() else L3();
    L7():
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(c5, r5):
      r7 = `==`(r5, 1);
      c6 = `as.logical`(r7);
      c7 = `&&`(c5, c6);
      goto L1(c7);
    L3():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L13() else L14();
    L8():
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      length = ldf length in base;
      r6 = dyn length(n6);
      goto L2(c, r6);
    L9():
      r4 = dyn base1(<sym n>);
      goto L2(c, r4);
    L11():
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      return n8;
    L4(r9):
      return r9;
    L13():
      n9 = ld n;
      n10 = force? n9;
      checkMissing(n10);
      length1 = ldf length in base;
      r10 = dyn length1(n10);
      goto L4(r10);
    L14():
      r8 = dyn base2(<sym n>);
      goto L4(r8);
    };
    p2 = prom<V +>{
      contrasts1 = ld contrasts;
      contrasts2 = force? contrasts1;
      checkMissing(contrasts2);
      return contrasts2;
    };
    p3 = prom<V +>{
      sparse1 = ld sparse;
      sparse2 = force? sparse1;
      checkMissing(sparse2);
      return sparse2;
    };
    r14 = dyn contr_treatment[, base, contrasts, sparse](p, p1, p2, p3);
    check L3() else D1();
  D1():
    deopt 9 [r14];
  L3():
    popenv;
    return r14;
  }
}