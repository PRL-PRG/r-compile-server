fun main() {
  () -+> V { reg r:cls, reg prmatrix:cls, reg diag:cls, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg rep:cls, reg r5:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg rep1:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg matrix:cls, reg scan:cls, reg system_file:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg chm:*, reg chm1:V, reg prmatrix1:cls, reg chm2:*, reg chm3:V, reg p5:p(V +), reg paste:cls, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V |
    mkenv;
    r = clos `inner-1892979445`;
    st prmatrix = r;
    prmatrix = ldf prmatrix;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      diag = ldf diag;
      r1 = dyn diag(6.0);
      st m6 = r1;
      invisible.0();
      return r1;
    };
    p1 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      rep = ldf rep in base;
      r5 = dyn rep("", 6.0);
      goto L0(r5);
    L2():
      r3 = dyn base("", 6.0);
      goto L0(r3);
    };
    p2 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      rep1 = ldf rep in base;
      r9 = dyn rep1("", 6.0);
      goto L0(r9);
    L2():
      r7 = dyn base1("", 6.0);
      goto L0(r7);
    };
    r11 = dyn prmatrix[, rowlab, collab](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 10 [r11];
  L1():
    matrix = ldf matrix;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p4 = prom<V +>{
      scan = ldf scan;
      p3 = prom<V +>{
        system_file = ldf `system.file`;
        r12 = dyn system_file[, , package]("help", "AnIndex", "splines");
        return r12;
      };
      r14 = dyn scan[, what](p3, "");
      return r14;
    };
    r16 = dyn matrix[, , , byrow](p4, <missing>, 2.0, TRUE);
    check L3() else D3();
  D3():
    deopt 18 [r16];
  L3():
    st chm = r16;
    chm = ld chm;
    check L4() else D4();
  D4():
    deopt 20 [chm];
  L4():
    chm1 = force? chm;
    checkMissing(chm1);
    prmatrix1 = ldf prmatrix;
    check L5() else D5();
  D5():
    deopt 23 [];
  L5():
    p5 = prom<V +>{
      chm2 = ld chm;
      chm3 = force? chm2;
      checkMissing(chm3);
      return chm3;
    };
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r19 = dyn paste("Column", p6);
      return r19;
    };
    r21 = dyn prmatrix1[, collab, right, quote](p5, p7, TRUE, FALSE);
    check L6() else D6();
  D6():
    deopt 31 [r21];
  L6():
    popenv;
    return r21;
  }
}
fun `inner-1892979445`(x, rowlab, collab, quote, right, `na.print`, `...`) {
  (reg x:*, reg rowlab:*, reg collab:*, reg quote:*, reg right:*, reg na_print:*, reg ddd:dots) -+> V { var x:*, var rowlab:*, reg rowlab_isMissing:L, reg rowlab_orDefault:*, reg dn:*, reg dn1:V, reg c:L, reg dn3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), var collab:*, reg collab_isMissing:L, reg collab_orDefault:*, reg dn4:*, reg dn5:V, reg c1:L, reg dn7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r2:V, reg p1:p(V +), var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `na.print`:*, reg na_print_isMissing:L, reg na_print_orDefault:*, var `...`:dots?, reg as_matrix:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg rowlab1:*, reg rowlab2:V, reg collab1:*, reg collab2:V, reg quote1:*, reg quote2:V, reg right1:*, reg right2:V, reg na_print1:*, reg na_print2:V, reg prmatrix:cls, reg r11:V |
    mkenv;
    st x = x;
    rowlab_isMissing = missing.0(rowlab);
    if rowlab_isMissing then L0() else L1(rowlab);
  L0():
    p = prom<V +>{
      dn = ld dn;
      dn1 = force? dn;
      checkMissing(dn1);
      c = `is.object`(dn1);
      if c then L1() else L2(dn1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", dn1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(dn3):
      __ = ldf `[[` in base;
      r = dyn __(dn3, 1.0);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(rowlab_orDefault):
    st rowlab = rowlab_orDefault;
    collab_isMissing = missing.0(collab);
    if collab_isMissing then L2() else L3(collab);
  L2():
    p1 = prom<V +>{
      dn4 = ld dn;
      dn5 = force? dn4;
      checkMissing(dn5);
      c1 = `is.object`(dn5);
      if c1 then L1() else L2(dn5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", dn5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(dn7):
      __1 = ldf `[[` in base;
      r2 = dyn __1(dn7, 2.0);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L3(p1);
  L3(collab_orDefault):
    st collab = collab_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L4(TRUE) else L4(quote);
  L4(quote_orDefault):
    st quote = quote_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L5(FALSE) else L5(right);
  L5(right_orDefault):
    st right = right_orDefault;
    na_print_isMissing = missing.0(na_print);
    if na_print_isMissing then L6(NULL) else L6(na_print);
  L6(na_print_orDefault):
    st `na.print` = na_print_orDefault;
    st `...` = ddd;
    as_matrix = ldf `as.matrix`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn as_matrix(p2);
    check L10() else D1();
  D1():
    deopt 3 [r5];
  L10():
    st x = r5;
    sym = ldf dimnames;
    base = ldf dimnames in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L7(r7):
    st dn = r7;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L11():
    x3 = ld x;
    check L13() else D2();
  L12():
    r6 = dyn base(<sym x>);
    goto L7(r6);
  D2():
    deopt 7 [x3];
  L8(r10):
    popenv;
    return r10;
  L13():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r8 = dyn dimnames(x4);
    check L14() else D3();
  L15():
    x5 = ld x;
    check L17() else D4();
  L16():
    r9 = dyn base1(<lang prmatrix(x, rowlab, collab, quote, right, na.print)>);
    goto L8(r9);
  D3():
    deopt 10 [r8];
  D4():
    deopt 14 [x5];
  L14():
    goto L7(r8);
  L17():
    x6 = force? x5;
    checkMissing(x6);
    rowlab1 = ld rowlab;
    check L18() else D5();
  D5():
    deopt 16 [rowlab1];
  L18():
    rowlab2 = force? rowlab1;
    checkMissing(rowlab2);
    collab1 = ld collab;
    check L19() else D6();
  D6():
    deopt 18 [collab1];
  L19():
    collab2 = force? collab1;
    checkMissing(collab2);
    quote1 = ld quote;
    check L20() else D7();
  D7():
    deopt 20 [quote1];
  L20():
    quote2 = force? quote1;
    checkMissing(quote2);
    right1 = ld right;
    check L21() else D8();
  D8():
    deopt 22 [right1];
  L21():
    right2 = force? right1;
    checkMissing(right2);
    na_print1 = ld `na.print`;
    check L22() else D9();
  D9():
    deopt 24 [na_print1];
  L22():
    na_print2 = force? na_print1;
    checkMissing(na_print2);
    prmatrix = ldf prmatrix in base;
    r11 = dyn prmatrix(x6, rowlab2, collab2, quote2, right2, na_print2);
    check L23() else D10();
  D10():
    deopt 27 [r11];
  L23():
    goto L8(r11);
  }
}