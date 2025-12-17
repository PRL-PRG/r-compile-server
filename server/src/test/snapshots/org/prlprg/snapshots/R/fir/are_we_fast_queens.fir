fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg r2:cls, reg queens:cls, reg r3:V |
    mkenv;
    r = clos inner4266987626;
    st queens = r;
    r1 = clos inner139384502;
    st solve_queens = r1;
    r2 = clos inner69251918;
    st is_safe = r2;
    queens = ldf queens;
    check L0() else D0();
  D0():
    deopt 10 [];
  L0():
    r3 = dyn queens(4.0);
    check L1() else D1();
  D1():
    deopt 12 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg solve_queens:cls, reg board:*, reg board1:V, reg p:p(V +), reg n1:*, reg n2:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st n = n;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st board = r1;
    solve_queens = ldf solve_queens;
    check L3() else D0();
  L1():
    rep = ldf rep in base;
    r2 = dyn rep(0.0, <sym n>);
    goto L0(r2);
  L2():
    r = dyn base(0.0, <sym n>);
    goto L0(r);
  D0():
    deopt 5 [];
  L3():
    p = prom<V +>{
      board = ld board;
      board1 = force? board;
      checkMissing(board1);
      return board1;
    };
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r5 = dyn solve_queens(p, 1.0, p1);
    check L4() else D1();
  D1():
    deopt 9 [r5];
  L4():
    popenv;
    return r5;
  }
}
fun inner139384502(board, row, n) {
  (reg board:*, reg row:*, reg n:*) -+> V { var board:*, var row:*, var n:*, reg row1:*, reg row2:V, reg n1:*, reg n2:V, reg r:V, reg r1:V, reg c:L, reg n3:*, reg n4:V, reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg is_safe:cls, reg board1:*, reg board2:V, reg p:p(V +), reg row3:*, reg row4:V, reg p1:p(V +), reg col:*, reg col1:V, reg p2:p(V +), reg n5:*, reg n6:V, reg p3:p(V +), reg r9:V, reg c2:L, reg col2:*, reg col3:V, reg l1:*, reg c3:L, reg i8:I, reg col5:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i10:I, reg dx1:V, reg row5:*, reg row6:V, reg ___:cls, reg r10:V, reg count:*, reg count1:V, reg solve_queens:cls, reg board3:*, reg board4:V, reg p4:p(V +), reg row7:*, reg row8:V, reg r12:V, reg p5:p(V +), reg n7:*, reg n8:V, reg p6:p(V +), reg r15:V, reg r16:V, reg i11:I, reg count2:*, reg count3:V |
    mkenv;
    st board = board;
    st row = row;
    st n = n;
    row1 = ld row;
    check L7() else D0();
  D0():
    deopt 0 [row1];
  L7():
    row2 = force? row1;
    checkMissing(row2);
    n1 = ld n;
    check L8() else D1();
  D1():
    deopt 1 [row2, n1];
  L8():
    n2 = force? n1;
    checkMissing(n2);
    r = `+`(n2, 1.0);
    r1 = `==`(row2, r);
    c = `as.logical`(r1);
    if c then L9() else L0();
  L0():
    st count = 0.0;
    n3 = ld n;
    check L12() else D2();
  L9():
    popenv;
    return 1.0;
  D2():
    deopt 15 [1.0, n3];
  L12():
    n4 = force? n3;
    checkMissing(n4);
    r4 = `:`(1.0, n4);
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L13() else L6();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st col = x;
    is_safe = ldf is_safe;
    check L14() else D3();
  L13():
    count2 = ld count;
    check L26() else D10();
  D3():
    deopt 19 [i2];
  D10():
    deopt 46 [count2];
  L14():
    p = prom<V +>{
      board1 = ld board;
      board2 = force? board1;
      checkMissing(board2);
      return board2;
    };
    p1 = prom<V +>{
      row3 = ld row;
      row4 = force? row3;
      checkMissing(row4);
      return row4;
    };
    p2 = prom<V +>{
      col = ld col;
      col1 = force? col;
      checkMissing(col1);
      return col1;
    };
    p3 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    r9 = dyn is_safe(p, p1, p2, p3);
    check L15() else D4();
  L26():
    count3 = force? count2;
    checkMissing(count3);
    popenv;
    return count3;
  D4():
    deopt 24 [i2, r9];
  L15():
    c2 = `as.logical`(r9);
    if c2 then L16() else L3();
  L3():
    goto L5(i2);
  L5(i11):
    goto L2(i11);
  L16():
    col2 = ld col;
    check L17() else D5();
  D5():
    deopt 25 [i2, col2];
  L17():
    col3 = force? col2;
    checkMissing(col3);
    l1 = ld board;
    c3 = `is.object`(l1);
    if c3 then L18() else L19(i2, col3, l1);
  L4(i10, dx1):
    st board = dx1;
    count = ld count;
    check L22() else D7();
  L18():
    dr = tryDispatchBuiltin.0("[<-", l1, col3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(i2, col3, dr);
  L19(i8, col5, l3):
    row5 = ld row;
    check L21() else D6();
  D6():
    deopt 28 [i8, col5, l3, col3, row5];
  D7():
    deopt 32 [i10, count];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L21():
    row6 = force? row5;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l3, col3, row6);
    goto L4(i8, r10);
  L22():
    count1 = force? count;
    checkMissing(count1);
    solve_queens = ldf solve_queens;
    check L23() else D8();
  D8():
    deopt 34 [i10, count1];
  L23():
    p4 = prom<V +>{
      board3 = ld board;
      board4 = force? board3;
      checkMissing(board4);
      return board4;
    };
    p5 = prom<V +>{
      row7 = ld row;
      row8 = force? row7;
      checkMissing(row8);
      r12 = `+`(row8, 1.0);
      return r12;
    };
    p6 = prom<V +>{
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      return n8;
    };
    r15 = dyn solve_queens(p4, p5, p6);
    check L24() else D9();
  D9():
    deopt 38 [i10, count1, r15];
  L24():
    r16 = `+`(count1, r15);
    st count = r16;
    goto L5(i10);
  }
}
fun inner69251918(board, row, col, n) {
  (reg board:*, reg row:*, reg col:*, reg n:*) -+> V { var board:*, var row:*, var col:*, var n:*, reg row1:*, reg row2:V, reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg board1:*, reg board2:V, reg c1:L, reg i6:I, reg board4:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r1:V, reg col1:*, reg col2:V, reg r2:V, reg c2:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg i17:I, reg r6:V, reg board5:*, reg board6:V, reg c3:L, reg i19:I, reg board8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i21:I, reg dx3:V, reg i22:*, reg i23:V, reg __1:cls, reg r7:V, reg col3:*, reg col4:V, reg r8:V, reg abs:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg i26:I, reg r13:V, reg r14:V, reg i27:*, reg i28:V, reg r15:V, reg row3:*, reg row4:V, reg r16:V, reg abs1:cls, reg r17:V, reg r18:V, reg c4:L |
    mkenv;
    st board = board;
    st row = row;
    st col = col;
    st n = n;
    row1 = ld row;
    check L10() else D0();
  D0():
    deopt 1 [1.0, row1];
  L10():
    row2 = force? row1;
    checkMissing(row2);
    r = `:`(1.0, row2);
    s = toForSeq(r);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L11() else L9();
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    board1 = ld board;
    check L12() else D1();
  L11():
    popenv;
    return TRUE;
  D1():
    deopt 4 [i2, board1];
  L12():
    board2 = force? board1;
    checkMissing(board2);
    c1 = `is.object`(board2);
    if c1 then L13() else L14(i2, board2);
  L1(i8, dx1):
    col1 = ld col;
    check L17() else D3();
  L13():
    dr = tryDispatchBuiltin.1("[", board2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(i2, dr);
  L14(i6, board4):
    i9 = ld i;
    check L16() else D2();
  D2():
    deopt 6 [i6, board4, i9];
  D3():
    deopt 8 [i8, dx1, col1];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(i2, dx);
  L16():
    i10 = force? i9;
    __ = ldf `[` in base;
    r1 = dyn __(board4, i10);
    goto L1(i6, r1);
  L17():
    col2 = force? col1;
    checkMissing(col2);
    r2 = `==`(dx1, col2);
    c2 = `as.logical`(r2);
    if c2 then L18() else L2();
  L2():
    sym = ldf abs;
    base = ldf abs in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L18():
    popenv;
    return FALSE;
  L4(i17, r6):
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L21():
    board5 = ld board;
    check L23() else D4();
  L22():
    r5 = dyn base(<lang `-`(`[`(board, i), col)>);
    goto L4(i8, r5);
  D4():
    deopt 18 [i8, board5];
  L6(i26, r13, r14):
    r18 = `==`(r13, r14);
    c4 = `as.logical`(r18);
    if c4 then L35() else L7();
  L23():
    board6 = force? board5;
    checkMissing(board6);
    c3 = `is.object`(board6);
    if c3 then L24() else L25(i8, board6);
  L30():
    i27 = ld i;
    check L32() else D8();
  L31():
    r12 = dyn base1(<lang `-`(`-`(i, 1.0), row)>);
    goto L6(i17, r6, r12);
  D8():
    deopt 28 [i17, r6, i27];
  L5(i21, dx3):
    col3 = ld col;
    check L28() else D6();
  L7():
    goto L0(i26);
  L24():
    dr2 = tryDispatchBuiltin.1("[", board6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(i8, dr2);
  L25(i19, board8):
    i22 = ld i;
    check L27() else D5();
  L32():
    i28 = force? i27;
    checkMissing(i28);
    r15 = `-`(i28, 1.0);
    row3 = ld row;
    check L33() else D9();
  L35():
    popenv;
    return FALSE;
  D5():
    deopt 20 [i19, board8, i22];
  D6():
    deopt 22 [i21, dx3, col3];
  D9():
    deopt 31 [i17, r6, r15, row3];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i8, dx2);
  L27():
    i23 = force? i22;
    __1 = ldf `[` in base;
    r7 = dyn __1(board8, i23);
    goto L5(i19, r7);
  L28():
    col4 = force? col3;
    checkMissing(col4);
    r8 = `-`(dx3, col4);
    abs = ldf abs in base;
    r9 = dyn abs(r8);
    check L29() else D7();
  L33():
    row4 = force? row3;
    checkMissing(row4);
    r16 = `-`(r15, row4);
    abs1 = ldf abs in base;
    r17 = dyn abs1(r16);
    check L34() else D10();
  D7():
    deopt 26 [i21, r9];
  D10():
    deopt 35 [i17, r6, r17];
  L29():
    goto L4(i21, r9);
  L34():
    goto L6(i17, r6, r17);
  }
}