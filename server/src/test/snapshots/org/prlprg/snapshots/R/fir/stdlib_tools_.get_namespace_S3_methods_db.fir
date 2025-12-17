fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044979827;
    st `.get_namespace_S3_methods_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044979827(nsInfo) {
  (reg nsInfo:*) -+> V { var nsInfo:*, reg nsInfo1:*, reg nsInfo2:V, reg c:L, reg nsInfo4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg S3_methods_db:*, reg S3_methods_db1:V, reg length:cls, reg r3:V, reg r4:V, reg c1:L, reg matrix:cls, reg character:cls, reg r5:V, reg p:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg S3_methods_db2:*, reg S3_methods_db3:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r12:V, reg is_na:cls, reg r13:V, reg paste:cls, reg S3_methods_db6:*, reg S3_methods_db7:V, reg c3:L, reg S3_methods_db9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg idx:*, reg idx1:V, reg __1:cls, reg r14:V, reg p1:p(V +), reg S3_methods_db10:*, reg S3_methods_db11:V, reg c4:L, reg S3_methods_db13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg idx2:*, reg idx3:V, reg __2:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg l:*, reg c5:L, reg r20:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg idx4:*, reg idx5:V, reg ___:cls, reg r23:V, reg S3_methods_db14:*, reg S3_methods_db15:V |
    mkenv;
    st nsInfo = nsInfo;
    nsInfo1 = ld nsInfo;
    check L6() else D0();
  D0():
    deopt 0 [nsInfo1];
  L6():
    nsInfo2 = force? nsInfo1;
    checkMissing(nsInfo2);
    c = `is.object`(nsInfo2);
    if c then L8() else L9(nsInfo2);
  L7(dx1):
    st S3_methods_db = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L8():
    dr = tryDispatchBuiltin.1("$", nsInfo2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(nsInfo4):
    r = `$`(nsInfo4, <sym S3methods>);
    goto L7(r);
  L0(r2):
    r4 = `!`(r2);
    c1 = `as.logical`(r4);
    if c1 then L15() else L1();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    S3_methods_db = ld S3_methods_db;
    check L13() else D1();
  L12():
    r1 = dyn base(<sym S3_methods_db>);
    goto L0(r1);
  D1():
    deopt 6 [S3_methods_db];
  L1():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L13():
    S3_methods_db1 = force? S3_methods_db;
    checkMissing(S3_methods_db1);
    length = ldf length in base;
    r3 = dyn length(S3_methods_db1);
    check L14() else D2();
  L15():
    matrix = ldf matrix;
    check L16() else D3();
  D2():
    deopt 9 [r3];
  D3():
    deopt 12 [];
  L3(r11):
    st idx = r11;
    paste = ldf paste;
    check L27() else D7();
  L14():
    goto L0(r3);
  L16():
    p = prom<V +>{
      character = ldf character;
      r5 = dyn character();
      return r5;
    };
    r7 = dyn matrix[, ncol](p, 4);
    check L17() else D4();
  L20():
    S3_methods_db2 = ld S3_methods_db;
    check L22() else D5();
  L21():
    r10 = dyn base1(<lang `[`(S3_methods_db, , 3)>);
    goto L3(r10);
  D4():
    deopt 16 [r7];
  D5():
    deopt 22 [S3_methods_db2];
  D7():
    deopt 32 [];
  L17():
    popenv;
    return r7;
  L22():
    S3_methods_db3 = force? S3_methods_db2;
    checkMissing(S3_methods_db3);
    c2 = `is.object`(S3_methods_db3);
    if c2 then L23() else L24();
  L27():
    p1 = prom<V +>{
      S3_methods_db6 = ld S3_methods_db;
      S3_methods_db7 = force? S3_methods_db6;
      checkMissing(S3_methods_db7);
      c3 = `is.object`(S3_methods_db7);
      if c3 then L1() else L2(S3_methods_db7);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", S3_methods_db7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(S3_methods_db9):
      idx = ld idx;
      idx1 = force? idx;
      __1 = ldf `[` in base;
      r14 = dyn __1(S3_methods_db9, idx1, 1);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p2 = prom<V +>{
      S3_methods_db10 = ld S3_methods_db;
      S3_methods_db11 = force? S3_methods_db10;
      checkMissing(S3_methods_db11);
      c4 = `is.object`(S3_methods_db11);
      if c4 then L1() else L2(S3_methods_db11);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", S3_methods_db11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(S3_methods_db13):
      idx2 = ld idx;
      idx3 = force? idx2;
      __2 = ldf `[` in base;
      r16 = dyn __2(S3_methods_db13, idx3, 2);
      goto L0(r16);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r18 = dyn paste[, , sep](p1, p2, ".");
    check L28() else D8();
  D8():
    deopt 37 [r18];
  L4(dx3):
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(dx3);
    check L26() else D6();
  L23():
    dr2 = tryDispatchBuiltin.1("[", S3_methods_db3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24();
  L24():
    __ = ldf `[` in base;
    r12 = dyn __(S3_methods_db3, <missing>, 3);
    goto L4(r12);
  L28():
    l = ld S3_methods_db;
    c5 = `is.object`(l);
    if c5 then L29() else L30(r18, l);
  D6():
    deopt 29 [r13];
  L5(dx9):
    st S3_methods_db = dx9;
    S3_methods_db14 = ld S3_methods_db;
    check L33() else D10();
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L26():
    goto L3(r13);
  L29():
    dr8 = tryDispatchBuiltin.0("[<-", l, r18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L31() else L30(r18, dr8);
  L30(r20, l2):
    idx4 = ld idx;
    check L32() else D9();
  D9():
    deopt 39 [r20, l2, r18, idx4];
  D10():
    deopt 44 [S3_methods_db14];
  L31():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx8);
  L32():
    idx5 = force? idx4;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, r18, idx5, 3);
    goto L5(r23);
  L33():
    S3_methods_db15 = force? S3_methods_db14;
    checkMissing(S3_methods_db15);
    popenv;
    return S3_methods_db15;
  }
}