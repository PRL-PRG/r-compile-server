fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3929323065;
    st `relist.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3929323065(flesh, skeleton) {
  (reg flesh:*, reg skeleton:*) -+> V { var flesh:*, var skeleton:*, reg skeleton_isMissing:L, reg skeleton_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg flesh1:*, reg flesh2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg nrow:cls, reg skeleton1:*, reg skeleton2:V, reg p1:p(V +), reg r5:V, reg ncol:cls, reg skeleton3:*, reg skeleton4:V, reg p2:p(V +), reg r7:V, reg n:*, reg n1:V, reg c:L, reg c2:V, reg m:*, reg m1:V, reg c3:L, reg c4:V, reg c6:L, reg c8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c11:L, reg r9:V, reg skeleton5:*, reg skeleton6:V, reg c12:L, reg c14:L, reg skeleton8:V, reg dr:V, reg dc:L, reg dx:V, reg c16:L, reg dx1:V, reg __:cls, reg r10:V, reg is_numeric:cls, reg r11:V, reg c17:L, reg c18:V, reg c20:L, reg matrix:cls, reg flesh3:*, reg flesh4:V, reg p3:p(V +), reg n2:*, reg n3:V, reg p4:p(V +), reg m2:*, reg m3:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg skeleton9:*, reg skeleton10:V, reg dimnames:cls, reg r17:V, reg p6:p(V +), reg r19:V, reg skeleton11:*, reg skeleton12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg m4:*, reg m5:V, reg r24:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c21:L, reg x:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg i7:I, reg r26:V, reg n4:*, reg n5:V, reg r27:I, reg s1:V, reg l1:I, reg i8:I, reg i9:I, reg i10:I, reg i11:I, reg c22:L, reg x1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg i20:I, reg i21:I, reg r29:V, reg unlist:cls, reg skeleton13:*, reg skeleton14:V, reg c23:L, reg skeleton16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i22:*, reg i23:V, reg j:*, reg j1:V, reg __1:cls, reg r30:V, reg p7:p(V +), reg r32:V, reg length:cls, reg r33:V, reg relist:cls, reg flesh5:*, reg flesh6:V, reg c24:L, reg flesh8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg flesh11:V, reg r35:V, reg ind:*, reg ind1:V, reg size:*, reg size1:V, reg seq_int:cls, reg r36:V, reg __2:cls, reg r37:V, reg p8:p(V +), reg skeleton17:*, reg skeleton18:V, reg c25:L, reg skeleton20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i24:*, reg i25:V, reg j2:*, reg j3:V, reg __3:cls, reg r39:V, reg p9:p(V +), reg r41:V, reg l2:*, reg c26:L, reg i28:I, reg i29:I, reg r43:V, reg l4:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i32:I, reg i33:I, reg dx9:V, reg i34:*, reg i35:V, reg j4:*, reg j5:V, reg ____:cls, reg r46:V, reg ind2:*, reg ind3:V, reg size2:*, reg size3:V, reg r47:V, reg result:*, reg result1:V |
    mkenv;
    st flesh = flesh;
    skeleton_isMissing = missing.0(skeleton);
    if skeleton_isMissing then L0() else L1(skeleton);
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      flesh1 = ld flesh;
      flesh2 = force? flesh1;
      checkMissing(flesh2);
      attr = ldf attr in base;
      r2 = dyn attr(flesh2, "skeleton");
      goto L0(r2);
    L2():
      r = dyn base(<sym flesh>, "skeleton");
      goto L0(r);
    };
    goto L1(p);
  L1(skeleton_orDefault):
    st skeleton = skeleton_orDefault;
    nrow = ldf nrow;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p1 = prom<V +>{
      skeleton1 = ld skeleton;
      skeleton2 = force? skeleton1;
      checkMissing(skeleton2);
      return skeleton2;
    };
    r5 = dyn nrow(p1);
    check L17() else D1();
  D1():
    deopt 3 [r5];
  L17():
    st n = r5;
    ncol = ldf ncol;
    check L18() else D2();
  D2():
    deopt 6 [];
  L18():
    p2 = prom<V +>{
      skeleton3 = ld skeleton;
      skeleton4 = force? skeleton3;
      checkMissing(skeleton4);
      return skeleton4;
    };
    r7 = dyn ncol(p2);
    check L19() else D3();
  D3():
    deopt 8 [r7];
  L19():
    st m = r7;
    n = ld n;
    check L20() else D4();
  D4():
    deopt 10 [n];
  L20():
    n1 = force? n;
    checkMissing(n1);
    c = `as.logical`(n1);
    if c then L21() else L2(c);
  L2(c2):
    c6 = `as.logical`(c2);
    if c6 then L24() else L3(c6);
  L21():
    m = ld m;
    check L22() else D5();
  D5():
    deopt 12 [c, m];
  L3(c8):
    c20 = `as.logical`(c8);
    if c20 then L33() else L6();
  L22():
    m1 = force? m;
    checkMissing(m1);
    c3 = `as.logical`(m1);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L24():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L4(c11, r9):
    c17 = `as.logical`(r9);
    c18 = `&&`(c11, c17);
    goto L3(c18);
  L6():
    skeleton11 = ld skeleton;
    check L38() else D10();
  L25():
    skeleton5 = ld skeleton;
    check L27() else D6();
  L26():
    r8 = dyn base1(<lang `[`(skeleton, 1.0, 1.0)>);
    goto L4(c6, r8);
  L33():
    matrix = ldf matrix;
    check L34() else D8();
  D6():
    deopt 17 [c6, skeleton5];
  D8():
    deopt 27 [];
  D10():
    deopt 39 [skeleton11];
  L27():
    skeleton6 = force? skeleton5;
    checkMissing(skeleton6);
    c12 = `is.object`(skeleton6);
    if c12 then L28() else L29(c6, skeleton6);
  L34():
    p3 = prom<V +>{
      flesh3 = ld flesh;
      flesh4 = force? flesh3;
      checkMissing(flesh4);
      return flesh4;
    };
    p4 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    p5 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    p6 = prom<V +>{
      sym2 = ldf dimnames;
      base2 = ldf dimnames in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      skeleton9 = ld skeleton;
      skeleton10 = force? skeleton9;
      checkMissing(skeleton10);
      dimnames = ldf dimnames in base;
      r17 = dyn dimnames(skeleton10);
      goto L0(r17);
    L2():
      r15 = dyn base2(<sym skeleton>);
      goto L0(r15);
    };
    r19 = dyn matrix[, nrow, ncol, dimnames](p3, p4, p5, p6);
    check L35() else D9();
  L38():
    skeleton12 = force? skeleton11;
    checkMissing(skeleton12);
    st result = skeleton12;
    st ind = 1;
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  D9():
    deopt 35 [r19];
  L5(c16, dx1):
    is_numeric = ldf `is.numeric` in base;
    r11 = dyn is_numeric(dx1);
    check L31() else D7();
  L8(r23):
    s = toForSeq(r23);
    l = length(s);
    i = 0;
    goto L9(i);
  L28():
    dr = tryDispatchBuiltin.1("[", skeleton6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(c6, dr);
  L29(c14, skeleton8):
    __ = ldf `[` in base;
    r10 = dyn __(skeleton8, 1.0, 1.0);
    goto L5(c14, r10);
  L35():
    popenv;
    return r19;
  L39():
    m4 = ld m;
    check L41() else D11();
  L40():
    r22 = dyn base3(<sym m>);
    goto L8(r22);
  D7():
    deopt 24 [c16, r11];
  D11():
    deopt 46 [m4];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c21 = `<`.1(l, i2);
    if c21 then L42() else L15();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(c6, dx);
  L31():
    goto L4(c16, r11);
  L41():
    m5 = force? m4;
    checkMissing(m5);
    r24 = seq_len(m5);
    goto L8(r24);
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L42():
    result = ld result;
    check L61() else D22();
  D22():
    deopt 84 [result];
  L10(i7, r26):
    s1 = toForSeq(r26);
    l1 = length(s1);
    i8 = 0;
    goto L11(i7, i8);
  L43():
    n4 = ld n;
    check L45() else D12();
  L44():
    r25 = dyn base4(<sym n>);
    goto L10(i2, r25);
  L61():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  D12():
    deopt 50 [i2, n4];
  L11(i9, i10):
    i11 = `+`.1(i10, 1);
    c22 = `<`.1(l1, i11);
    if c22 then L46() else L14();
  L45():
    n5 = force? n4;
    checkMissing(n5);
    r27 = seq_len(n5);
    goto L10(i2, r27);
  L14():
    x1 = `[[`(s1, i11, NULL, TRUE);
    st i = x1;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L46():
    goto L9(i9);
  L12(i20, i21, r29):
    st size = r29;
    relist = ldf relist;
    check L52() else D16();
  L47():
    unlist = ldf unlist;
    check L49() else D13();
  L48():
    r28 = dyn base5(<lang unlist(`[[`(skeleton, i, j))>);
    goto L12(i9, i11, r28);
  D13():
    deopt 56 [i9, i11];
  D16():
    deopt 63 [i20, i21];
  L49():
    p7 = prom<V +>{
      skeleton13 = ld skeleton;
      skeleton14 = force? skeleton13;
      checkMissing(skeleton14);
      c23 = `is.object`(skeleton14);
      if c23 then L1() else L2(skeleton14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", skeleton14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(skeleton16):
      i22 = ld i;
      i23 = force? i22;
      j = ld j;
      j1 = force? j;
      __1 = ldf `[[` in base;
      r30 = dyn __1(skeleton16, i23, j1);
      goto L0(r30);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r32 = dyn unlist(p7);
    check L50() else D14();
  L52():
    p8 = prom<V +>{
      flesh5 = ld flesh;
      flesh6 = force? flesh5;
      checkMissing(flesh6);
      c24 = `is.object`(flesh6);
      if c24 then L2() else L3(flesh6);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", flesh6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(flesh8):
      sym6 = ldf `seq.int`;
      base6 = ldf `seq.int` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L1(flesh11, r35):
      __2 = ldf `[` in base;
      r37 = dyn __2(flesh11, r35);
      goto L0(r37);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      size = ld size;
      size1 = force? size;
      checkMissing(size1);
      seq_int = ldf `seq.int` in base;
      r36 = dyn seq_int(ind1, size1);
      goto L1(flesh8, r36);
    L6():
      r34 = dyn base6[, `length.out`](<sym ind>, <sym size>);
      goto L1(flesh8, r34);
    };
    p9 = prom<V +>{
      skeleton17 = ld skeleton;
      skeleton18 = force? skeleton17;
      checkMissing(skeleton18);
      c25 = `is.object`(skeleton18);
      if c25 then L1() else L2(skeleton18);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", skeleton18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(skeleton20):
      i24 = ld i;
      i25 = force? i24;
      j2 = ld j;
      j3 = force? j2;
      __3 = ldf `[[` in base;
      r39 = dyn __3(skeleton20, i25, j3);
      goto L0(r39);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r41 = dyn relist(p8, p9);
    check L53() else D17();
  D14():
    deopt 58 [i9, i11, r32];
  D17():
    deopt 66 [i20, i21, r41];
  L50():
    length = ldf length in base;
    r33 = dyn length(r32);
    check L51() else D15();
  L53():
    l2 = ld result;
    c26 = `is.object`(l2);
    if c26 then L54() else L55(i20, i21, r41, l2);
  D15():
    deopt 60 [i9, i11, r33];
  L13(i32, i33, dx9):
    st result = dx9;
    ind2 = ld ind;
    check L59() else D20();
  L51():
    goto L12(i9, i11, r33);
  L54():
    dr8 = tryDispatchBuiltin.0("[[<-", l2, r41);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(i20, i21, r41, dr8);
  L55(i28, i29, r43, l4):
    i34 = ld i;
    check L57() else D18();
  D18():
    deopt 68 [i28, i29, r43, l4, r41, i34];
  D20():
    deopt 73 [i32, i33, ind2];
  L56():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(i20, i21, dx8);
  L57():
    i35 = force? i34;
    j4 = ld j;
    check L58() else D19();
  L59():
    ind3 = force? ind2;
    checkMissing(ind3);
    size2 = ld size;
    check L60() else D21();
  D19():
    deopt 69 [i28, i29, r43, l4, r41, i35, j4];
  D21():
    deopt 74 [i32, i33, ind3, size2];
  L58():
    j5 = force? j4;
    ____ = ldf `[[<-` in base;
    r46 = dyn ____(l4, r41, i35, j5);
    goto L13(i28, i29, r46);
  L60():
    size3 = force? size2;
    checkMissing(size3);
    r47 = `+`(ind3, size3);
    st ind = r47;
    goto L11(i32, i33);
  }
}