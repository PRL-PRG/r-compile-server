fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg as_matrix:cls, reg p:p(V +), reg r4:V, reg is_matrix:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg warpbreaks:*, reg warpbreaks1:V, reg is_matrix1:cls, reg r8:V, reg warpbreaks2:*, reg warpbreaks3:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r10:V, reg as_matrix1:cls, reg warpbreaks6:*, reg warpbreaks7:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg matrix:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg c3:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg c4:cls, reg r25:V, reg list:cls, reg r26:V, reg p3:p(V +), reg r28:V, reg mdat:*, reg mdat1:V |
    mkenv;
    r = clos `inner-555817054`;
    st matrix = r;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L3():
    as_matrix = ldf `as.matrix`;
    check L5() else D0();
  L4():
    r1 = dyn base(<lang as.matrix(`:`(1.0, 10.0))>);
    goto L0();
  D0():
    deopt 6 [];
  L1(r7):
    `!`(r7);
    warpbreaks2 = ld warpbreaks;
    check L12() else D5();
  L5():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r4 = dyn as_matrix(p);
    check L6() else D1();
  L8():
    warpbreaks = ld warpbreaks;
    check L10() else D3();
  L9():
    r6 = dyn base1(<sym warpbreaks>);
    goto L1(r6);
  D1():
    deopt 8 [r4];
  D3():
    deopt 13 [warpbreaks];
  D5():
    deopt 18 [warpbreaks2];
  L6():
    is_matrix = ldf `is.matrix` in base;
    r5 = dyn is_matrix(r4);
    check L7() else D2();
  L10():
    warpbreaks1 = force? warpbreaks;
    checkMissing(warpbreaks1);
    is_matrix1 = ldf `is.matrix` in base;
    r8 = dyn is_matrix1(warpbreaks1);
    check L11() else D4();
  L12():
    warpbreaks3 = force? warpbreaks2;
    checkMissing(warpbreaks3);
    c = `is.object`(warpbreaks3);
    if c then L13() else L14();
  D2():
    deopt 10 [r5];
  D4():
    deopt 16 [r8];
  L2():
    as_matrix1 = ldf `as.matrix`;
    check L16() else D6();
  L7():
    goto L0();
  L11():
    goto L1(r8);
  L13():
    dr = tryDispatchBuiltin.1("[", warpbreaks3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14();
  L14():
    __ = ldf `[` in base;
    r10 = dyn __(warpbreaks3, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, <missing>);
    goto L2();
  D6():
    deopt 26 [];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L16():
    p1 = prom<V +>{
      warpbreaks6 = ld warpbreaks;
      warpbreaks7 = force? warpbreaks6;
      checkMissing(warpbreaks7);
      c1 = `is.object`(warpbreaks7);
      if c1 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", warpbreaks7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r11 = dyn __1(warpbreaks7, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, <missing>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn as_matrix1(p1);
    check L17() else D7();
  D7():
    deopt 28 [r13];
  L17():
    matrix = ldf matrix;
    check L18() else D8();
  D8():
    deopt 30 [];
  L18():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c2 = ldf c in base;
      r16 = dyn c2(1.0, 2.0, 3.0, 11.0, 12.0, 13.0);
      goto L0(r16);
    L2():
      r14 = dyn base2(1.0, 2.0, 3.0, 11.0, 12.0, 13.0);
      goto L0(r14);
    };
    p3 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r19):
      return r19;
    L3():
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L4():
      r18 = dyn base3(<lang c("row1", "row2")>, <lang c("C.1", "C.2", "C.3")>);
      goto L0(r18);
    L1(r21):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L7() else L8();
    L5():
      c3 = ldf c in base;
      r22 = dyn c3("row1", "row2");
      goto L1(r22);
    L6():
      r20 = dyn base4("row1", "row2");
      goto L1(r20);
    L2(r24):
      list = ldf list in base;
      r26 = dyn list(r21, r24);
      goto L0(r26);
    L7():
      c4 = ldf c in base;
      r25 = dyn c4("C.1", "C.2", "C.3");
      goto L2(r25);
    L8():
      r23 = dyn base5("C.1", "C.2", "C.3");
      goto L2(r23);
    };
    r28 = dyn matrix[, nrow, ncol, byrow, dimnames](p2, 2.0, 3.0, TRUE, p3);
    check L19() else D9();
  D9():
    deopt 40 [r28];
  L19():
    st mdat = r28;
    mdat = ld mdat;
    check L20() else D10();
  D10():
    deopt 42 [mdat];
  L20():
    mdat1 = force? mdat;
    checkMissing(mdat1);
    popenv;
    return mdat1;
  }
}
fun `inner-555817054`(data, nrow, ncol, byrow, dimnames) {
  (reg data:*, reg nrow:*, reg ncol:*, reg byrow:*, reg dimnames:*) -+> V { var data:*, reg data_isMissing:L, reg data_orDefault:*, var nrow:*, reg nrow_isMissing:L, reg nrow_orDefault:*, var ncol:*, reg ncol_isMissing:L, reg ncol_orDefault:*, var byrow:*, reg byrow_isMissing:L, reg byrow_orDefault:*, var dimnames:*, reg dimnames_isMissing:L, reg dimnames_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg data1:*, reg data2:V, reg c:L, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg data3:*, reg data4:V, reg is_atomic:cls, reg r4:V, reg r5:V, reg c7:L, reg c8:V, reg c10:L, reg as_vector:cls, reg data5:*, reg data6:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg data7:*, reg data8:V, reg nrow1:*, reg nrow2:V, reg ncol1:*, reg ncol2:V, reg byrow1:*, reg byrow2:V, reg dimnames1:*, reg dimnames2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg missing1:cls, reg r16:V, reg matrix:cls, reg r17:V |
    mkenv;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NA_LGL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    nrow_isMissing = missing.0(nrow);
    if nrow_isMissing then L1(1.0) else L1(nrow);
  L1(nrow_orDefault):
    st nrow = nrow_orDefault;
    ncol_isMissing = missing.0(ncol);
    if ncol_isMissing then L2(1.0) else L2(ncol);
  L2(ncol_orDefault):
    st ncol = ncol_orDefault;
    byrow_isMissing = missing.0(byrow);
    if byrow_isMissing then L3(FALSE) else L3(byrow);
  L3(byrow_orDefault):
    st byrow = byrow_orDefault;
    dimnames_isMissing = missing.0(dimnames);
    if dimnames_isMissing then L4(NULL) else L4(dimnames);
  L4(dimnames_orDefault):
    st dimnames = dimnames_orDefault;
    sym = ldf `is.object`;
    base = ldf `is.object` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L5(r1):
    c1 = `as.logical`(r1);
    if c1 then L6(c1) else L16();
  L13():
    data1 = ld data;
    check L15() else D0();
  L14():
    r = dyn base(<sym data>);
    goto L5(r);
  D0():
    deopt 1 [data1];
  L6(c2):
    c10 = `as.logical`(c2);
    if c10 then L22() else L8();
  L15():
    data2 = force? data1;
    checkMissing(data2);
    c = `is.object`(data2);
    goto L5(c);
  L16():
    sym1 = ldf `is.atomic`;
    base1 = ldf `is.atomic` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L7(c6, r3):
    r5 = `!`(r3);
    c7 = `as.logical`(r5);
    c8 = `||`(c6, c7);
    goto L6(c8);
  L8():
    goto L9();
  L9():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L17():
    data3 = ld data;
    check L19() else D1();
  L18():
    r2 = dyn base1(<sym data>);
    goto L7(c1, r2);
  L22():
    as_vector = ldf `as.vector`;
    check L23() else D3();
  D1():
    deopt 6 [c1, data3];
  D3():
    deopt 13 [];
  L10(r10):
    popenv;
    return r10;
  L19():
    data4 = force? data3;
    checkMissing(data4);
    is_atomic = ldf `is.atomic` in base;
    r4 = dyn is_atomic(data4);
    check L20() else D2();
  L23():
    p = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r7 = dyn as_vector(p);
    check L24() else D4();
  L26():
    data7 = ld data;
    check L28() else D5();
  L27():
    r9 = dyn base2(<lang matrix(data, nrow, ncol, byrow, dimnames, missing(nrow), missing(ncol))>);
    goto L10(r9);
  D2():
    deopt 9 [c1, r4];
  D4():
    deopt 15 [r7];
  D5():
    deopt 21 [data7];
  L20():
    goto L7(c1, r4);
  L24():
    st data = r7;
    goto L9();
  L28():
    data8 = force? data7;
    checkMissing(data8);
    nrow1 = ld nrow;
    check L29() else D6();
  D6():
    deopt 23 [nrow1];
  L29():
    nrow2 = force? nrow1;
    checkMissing(nrow2);
    ncol1 = ld ncol;
    check L30() else D7();
  D7():
    deopt 25 [ncol1];
  L30():
    ncol2 = force? ncol1;
    checkMissing(ncol2);
    byrow1 = ld byrow;
    check L31() else D8();
  D8():
    deopt 27 [byrow1];
  L31():
    byrow2 = force? byrow1;
    checkMissing(byrow2);
    dimnames1 = ld dimnames;
    check L32() else D9();
  D9():
    deopt 29 [dimnames1];
  L32():
    dimnames2 = force? dimnames1;
    checkMissing(dimnames2);
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L11(r12):
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L33():
    missing = ldf missing in base;
    r13 = dyn missing(<sym nrow>);
    goto L11(r13);
  L34():
    r11 = dyn base3(<sym nrow>);
    goto L11(r11);
  L12(r15):
    matrix = ldf matrix in base;
    r17 = dyn matrix(data8, nrow2, ncol2, byrow2, dimnames2, r12, r15);
    check L37() else D10();
  L35():
    missing1 = ldf missing in base;
    r16 = dyn missing1(<sym ncol>);
    goto L12(r16);
  L36():
    r14 = dyn base4(<sym ncol>);
    goto L12(r14);
  D10():
    deopt 38 [r17];
  L37():
    goto L10(r17);
  }
}