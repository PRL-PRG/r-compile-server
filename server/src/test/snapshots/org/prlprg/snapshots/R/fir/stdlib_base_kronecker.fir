fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg p:p(V +), reg r2:V, reg kronecker:cls, reg M:*, reg M1:V, reg p1:p(V +), reg r4:V, reg kronecker1:cls, reg diag:cls, reg r5:V, reg p2:p(V +), reg M2:*, reg M3:V, reg p3:p(V +), reg r8:V, reg matrix1:cls, reg r9:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg LETTERS4:*, reg LETTERS5:V, reg c1:L, reg LETTERS7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg list:cls, reg r15:V, reg p5:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c2:cls, reg r20:V, reg kronecker2:cls, reg fred:*, reg fred1:V, reg p6:p(V +), reg bill:*, reg bill1:V, reg p7:p(V +), reg r23:V, reg outer:cls, reg bill2:*, reg bill3:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg p9:p(V +), reg r29:V, reg kronecker3:cls, reg fred2:*, reg fred3:V, reg p10:p(V +), reg bill4:*, reg bill5:V, reg p11:p(V +), reg r32:V |
    mkenv;
    r = clos inner1626172927;
    st kronecker = r;
    matrix = ldf matrix;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    r2 = dyn matrix[, ncol](p, 2.0);
    check L2() else D1();
  D1():
    deopt 8 [r2];
  L2():
    st M = r2;
    kronecker = ldf kronecker;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p1 = prom<V +>{
      M = ld M;
      M1 = force? M;
      checkMissing(M1);
      return M1;
    };
    r4 = dyn kronecker(4.0, p1);
    check L4() else D3();
  D3():
    deopt 14 [r4];
  L4():
    kronecker1 = ldf kronecker;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p2 = prom<V +>{
      diag = ldf diag;
      r5 = dyn diag(1.0, 3.0);
      return r5;
    };
    p3 = prom<V +>{
      M2 = ld M;
      M3 = force? M2;
      checkMissing(M3);
      return M3;
    };
    r8 = dyn kronecker1(p2, p3);
    check L6() else D5();
  D5():
    deopt 19 [r8];
  L6():
    matrix1 = ldf matrix;
    check L7() else D6();
  D6():
    deopt 21 [];
  L7():
    p4 = prom<V +>{
      r9 = `:`(1.0, 12.0);
      return r9;
    };
    p5 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r12):
      return r12;
    L3():
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c = `is.object`(LETTERS1);
      if c then L5() else L6(LETTERS1);
    L4():
      r11 = dyn base(<lang `[`(LETTERS, `:`(1.0, 3.0))>, <lang `[`(LETTERS, `:`(4.0, 7.0))>);
      goto L0(r11);
    L1(dx1):
      LETTERS4 = ld LETTERS;
      LETTERS5 = force? LETTERS4;
      checkMissing(LETTERS5);
      c1 = `is.object`(LETTERS5);
      if c1 then L8() else L9(LETTERS5);
    L5():
      dr = tryDispatchBuiltin.1("[", LETTERS1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(LETTERS3):
      __ = ldf `[` in base;
      r13 = dyn __(LETTERS3, <int 1, 2, 3>);
      goto L1(r13);
    L2(dx3):
      list = ldf list in base;
      r15 = dyn list(dx1, dx3);
      goto L0(r15);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      dr2 = tryDispatchBuiltin.1("[", LETTERS5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(LETTERS7):
      __1 = ldf `[` in base;
      r14 = dyn __1(LETTERS7, <int 4, 5, 6, 7>);
      goto L2(r14);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    r17 = dyn matrix1[, , , dimnames](p4, 3.0, 4.0, p5);
    check L8() else D7();
  D7():
    deopt 27 [r17];
  L8():
    st fred = r17;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L0(r19):
    st bill = r19;
    kronecker2 = ldf kronecker;
    check L12() else D9();
  L9():
    c2 = ldf c in base;
    r20 = dyn c2(100.0, 1000.0);
    check L11() else D8();
  L10():
    r18 = dyn base1[happy, sad](100.0, 1000.0);
    goto L0(r18);
  D8():
    deopt 36 [r20];
  D9():
    deopt 39 [];
  L11():
    goto L0(r20);
  L12():
    p6 = prom<V +>{
      fred = ld fred;
      fred1 = force? fred;
      checkMissing(fred1);
      return fred1;
    };
    p7 = prom<V +>{
      bill = ld bill;
      bill1 = force? bill;
      checkMissing(bill1);
      return bill1;
    };
    r23 = dyn kronecker2[, , `make.dimnames`](p6, p7, TRUE);
    check L13() else D10();
  D10():
    deopt 44 [r23];
  L13():
    outer = ldf outer;
    check L14() else D11();
  D11():
    deopt 46 [];
  L14():
    p8 = prom<V +>{
      bill2 = ld bill;
      bill3 = force? bill2;
      checkMissing(bill3);
      return bill3;
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c3 = ldf c in base;
      r27 = dyn c3(3.0, 4.0);
      goto L0(r27);
    L2():
      r25 = dyn base2[cat, dog](3.0, 4.0);
      goto L0(r25);
    };
    r29 = dyn outer(p8, p9);
    check L15() else D12();
  D12():
    deopt 49 [r29];
  L15():
    st bill = r29;
    kronecker3 = ldf kronecker;
    check L16() else D13();
  D13():
    deopt 52 [];
  L16():
    p10 = prom<V +>{
      fred2 = ld fred;
      fred3 = force? fred2;
      checkMissing(fred3);
      return fred3;
    };
    p11 = prom<V +>{
      bill4 = ld bill;
      bill5 = force? bill4;
      checkMissing(bill5);
      return bill5;
    };
    r32 = dyn kronecker3[, , `make.dimnames`](p10, p11, TRUE);
    check L17() else D14();
  D14():
    deopt 57 [r32];
  L17():
    popenv;
    return r32;
  }
}
fun inner1626172927(X, Y, FUN, `make.dimnames`, `...`) {
  (reg X:*, reg Y:*, reg FUN:*, reg make_dimnames:*, reg ddd:dots) -+> V { var X:*, var Y:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var `make.dimnames`:*, reg make_dimnames_isMissing:L, reg make_dimnames_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _isMethodsDispatchOn:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg X1:*, reg X2:V, reg isS4:cls, reg r5:V, reg c6:L, reg c7:L, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c15:L, reg c16:L, reg r7:V, reg Y1:*, reg Y2:V, reg isS5:cls, reg r8:V, reg c17:L, reg c18:V, reg c21:L, reg c22:V, reg c24:L, reg __:cls, reg r9:V, reg r10:cls, reg X3:*, reg X4:V, reg p:p(V +), reg Y3:*, reg Y4:V, reg p1:p(V +), reg FUN1:*, reg FUN2:V, reg p2:p(V +), reg make_dimnames1:*, reg make_dimnames2:V, reg p3:p(V +), reg ddd1:dots?, reg r15:V, reg _kronecker:cls, reg X5:*, reg X6:V, reg p4:p(V +), reg Y5:*, reg Y6:V, reg p5:p(V +), reg FUN3:*, reg FUN4:V, reg p6:p(V +), reg make_dimnames3:*, reg make_dimnames4:V, reg p7:p(V +), reg ddd2:dots?, reg r22:V |
    mkenv;
    st X = X;
    st Y = Y;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0("*") else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    make_dimnames_isMissing = missing.0(make_dimnames);
    if make_dimnames_isMissing then L1(FALSE) else L1(make_dimnames);
  L1(make_dimnames_orDefault):
    st `make.dimnames` = make_dimnames_orDefault;
    st `...` = ddd;
    sym = ldf `.isMethodsDispatchOn`;
    base = ldf `.isMethodsDispatchOn` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r1):
    c = `as.logical`(r1);
    if c then L12() else L3(c);
  L9():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r2 = dyn _isMethodsDispatchOn();
    check L11() else D0();
  L10():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  L3(c2):
    c24 = `as.logical`(c2);
    if c24 then L24() else L7();
  L11():
    goto L2(r2);
  L12():
    sym1 = ldf isS4;
    base1 = ldf isS4 in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L4(c5, r4):
    c6 = `as.logical`(r4);
    if c6 then L5(c5, c6) else L17();
  L7():
    _kronecker = ldf `.kronecker`;
    check L30() else D8();
  L13():
    X1 = ld X;
    check L15() else D1();
  L14():
    r3 = dyn base1(<sym X>);
    goto L4(c, r3);
  L24():
    __ = ldf `::`;
    check L25() else D5();
  D1():
    deopt 6 [c, X1];
  D5():
    deopt 19 [];
  D8():
    deopt 36 [];
  L5(c7, c8):
    c21 = `as.logical`(c8);
    c22 = `&&`(c7, c21);
    goto L3(c22);
  L15():
    X2 = force? X1;
    checkMissing(X2);
    isS4 = ldf isS4 in base;
    r5 = dyn isS4(X2);
    check L16() else D2();
  L17():
    sym2 = ldf isS4;
    base2 = ldf isS4 in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L25():
    r9 = dyn __("methods", "kronecker");
    check L26() else D6();
  L30():
    p4 = prom<V +>{
      X5 = ld X;
      X6 = force? X5;
      checkMissing(X6);
      return X6;
    };
    p5 = prom<V +>{
      Y5 = ld Y;
      Y6 = force? Y5;
      checkMissing(Y6);
      return Y6;
    };
    p6 = prom<V +>{
      FUN3 = ld FUN;
      FUN4 = force? FUN3;
      checkMissing(FUN4);
      return FUN4;
    };
    p7 = prom<V +>{
      make_dimnames3 = ld `make.dimnames`;
      make_dimnames4 = force? make_dimnames3;
      checkMissing(make_dimnames4);
      return make_dimnames4;
    };
    ddd2 = ld `...`;
    r22 = dyn _kronecker[, , FUN, `make.dimnames`, `...`](p4, p5, p6, p7, ddd2);
    check L31() else D9();
  D2():
    deopt 9 [c, r5];
  D6():
    deopt 22 [r9];
  D9():
    deopt 44 [r22];
  L6(c15, c16, r7):
    c17 = `as.logical`(r7);
    c18 = `||`(c16, c17);
    goto L5(c15, c18);
  L16():
    goto L4(c, r5);
  L18():
    Y1 = ld Y;
    check L20() else D3();
  L19():
    r6 = dyn base2(<sym Y>);
    goto L6(c5, c6, r6);
  L26():
    checkFun.0(r9);
    r10 = r9 as cls;
    p = prom<V +>{
      X3 = ld X;
      X4 = force? X3;
      checkMissing(X4);
      return X4;
    };
    p1 = prom<V +>{
      Y3 = ld Y;
      Y4 = force? Y3;
      checkMissing(Y4);
      return Y4;
    };
    p2 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    p3 = prom<V +>{
      make_dimnames1 = ld `make.dimnames`;
      make_dimnames2 = force? make_dimnames1;
      checkMissing(make_dimnames2);
      return make_dimnames2;
    };
    ddd1 = ld `...`;
    r15 = dyn r10[, , FUN, `make.dimnames`, `...`](p, p1, p2, p3, ddd1);
    check L27() else D7();
  L31():
    popenv;
    return r22;
  D3():
    deopt 12 [c5, c6, Y1];
  D7():
    deopt 31 [r15];
  L20():
    Y2 = force? Y1;
    checkMissing(Y2);
    isS5 = ldf isS4 in base;
    r8 = dyn isS5(Y2);
    check L21() else D4();
  L27():
    popenv;
    return r15;
  D4():
    deopt 15 [c5, c6, r8];
  L21():
    goto L6(c5, c6, r8);
  }
}