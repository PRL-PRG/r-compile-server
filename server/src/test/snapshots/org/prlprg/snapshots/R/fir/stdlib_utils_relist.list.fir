fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3929323065;
    st `relist.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3929323065(flesh, skeleton) {
  (reg flesh:*, reg skeleton:*) -+> V { var flesh:*, var skeleton:*, reg skeleton_isMissing:L, reg skeleton_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg flesh1:*, reg flesh2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg skeleton1:*, reg skeleton2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg skeleton3:*, reg skeleton4:V, reg r6:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg result:*, reg result1:V, reg c1:L, reg i6:I, reg result3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg i13:I, reg r9:V, reg skel_i:*, reg skel_i1:V, reg c2:V, reg c3:L, reg flesh3:*, reg flesh4:V, reg c4:L, reg i17:I, reg flesh6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg __1:cls, reg r10:V, reg i20:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg i23:I, reg r12:V, reg unlist:cls, reg skel_i2:*, reg skel_i3:V, reg p1:p(V +), reg r14:V, reg length:cls, reg r15:V, reg relist:cls, reg flesh7:*, reg flesh8:V, reg c5:L, reg flesh10:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg flesh13:V, reg r17:V, reg ind:*, reg ind1:V, reg size:*, reg size1:V, reg seq_int:cls, reg r18:V, reg __2:cls, reg r19:V, reg p2:p(V +), reg skel_i4:*, reg skel_i5:V, reg p3:p(V +), reg r22:V, reg l1:*, reg c6:L, reg i25:I, reg r24:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx7:V, reg i27:I, reg dx8:V, reg i28:*, reg i29:V, reg ____:cls, reg r27:V, reg ind2:*, reg ind3:V, reg size2:*, reg size3:V, reg r28:V, reg result4:*, reg result5:V |
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
    st ind = 1;
    skeleton1 = ld skeleton;
    check L12() else D0();
  D0():
    deopt 3 [skeleton1];
  L12():
    skeleton2 = force? skeleton1;
    checkMissing(skeleton2);
    st result = skeleton2;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r5):
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L3(i);
  L13():
    skeleton3 = ld skeleton;
    check L15() else D1();
  L14():
    r4 = dyn base1(<sym skeleton>);
    goto L2(r4);
  D1():
    deopt 7 [skeleton3];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L16() else L11();
  L15():
    skeleton4 = force? skeleton3;
    checkMissing(skeleton4);
    r6 = seq_along(skeleton4);
    goto L2(r6);
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    result = ld result;
    check L17() else D2();
  L16():
    result4 = ld result;
    check L44() else D14();
  D2():
    deopt 10 [i2, result];
  D14():
    deopt 55 [result4];
  L17():
    result1 = force? result;
    checkMissing(result1);
    c1 = `is.object`(result1);
    if c1 then L18() else L19(i2, result1);
  L44():
    result5 = force? result4;
    checkMissing(result5);
    popenv;
    return result5;
  L4(i8, dx1):
    st skel_i = dx1;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L18():
    dr = tryDispatchBuiltin.1("[[", result1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(i2, dr);
  L19(i6, result3):
    i9 = ld i;
    check L21() else D3();
  D3():
    deopt 12 [i6, result3, i9];
  L5(i13, r9):
    c3 = `as.logical`(r9);
    if c3 then L25() else L6();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L21():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r7 = dyn __(result3, i10);
    goto L4(i6, r7);
  L22():
    skel_i = ld skel_i;
    check L24() else D4();
  L23():
    r8 = dyn base2(<sym skel_i>);
    goto L5(i8, r8);
  D4():
    deopt 17 [i8, skel_i];
  L6():
    goto L8(i13);
  L8(i20):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L24():
    skel_i1 = force? skel_i;
    checkMissing(skel_i1);
    c2 = `==`(skel_i1, NULL);
    goto L5(i8, c2);
  L25():
    flesh3 = ld flesh;
    check L26() else D5();
  D5():
    deopt 20 [i13, flesh3];
  L9(i23, r12):
    st size = r12;
    relist = ldf relist;
    check L36() else D9();
  L26():
    flesh4 = force? flesh3;
    checkMissing(flesh4);
    c4 = `is.object`(flesh4);
    if c4 then L27() else L28(i13, flesh4);
  L31():
    unlist = ldf unlist;
    check L33() else D6();
  L32():
    r11 = dyn base3(<lang unlist(skel_i)>);
    goto L9(i20, r11);
  D6():
    deopt 31 [i20];
  D9():
    deopt 38 [i23];
  L7(i19, dx3):
    st skel_i = dx3;
    goto L8(i19);
  L27():
    dr2 = tryDispatchBuiltin.1("[", flesh4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(i13, dr2);
  L28(i17, flesh6):
    __1 = ldf `[` in base;
    r10 = dyn __1(flesh6, 0.0);
    goto L7(i17, r10);
  L33():
    p1 = prom<V +>{
      skel_i2 = ld skel_i;
      skel_i3 = force? skel_i2;
      checkMissing(skel_i3);
      return skel_i3;
    };
    r14 = dyn unlist(p1);
    check L34() else D7();
  L36():
    p2 = prom<V +>{
      flesh7 = ld flesh;
      flesh8 = force? flesh7;
      checkMissing(flesh8);
      c5 = `is.object`(flesh8);
      if c5 then L2() else L3(flesh8);
    L0(dx6):
      return dx6;
    L2():
      dr4 = tryDispatchBuiltin.1("[", flesh8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(flesh10):
      sym4 = ldf `seq.int`;
      base4 = ldf `seq.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(flesh13, r17):
      __2 = ldf `[` in base;
      r19 = dyn __2(flesh13, r17);
      goto L0(r19);
    L4():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    L5():
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      size = ld size;
      size1 = force? size;
      checkMissing(size1);
      seq_int = ldf `seq.int` in base;
      r18 = dyn seq_int(ind1, size1);
      goto L1(flesh10, r18);
    L6():
      r16 = dyn base4[, `length.out`](<sym ind>, <sym size>);
      goto L1(flesh10, r16);
    };
    p3 = prom<V +>{
      skel_i4 = ld skel_i;
      skel_i5 = force? skel_i4;
      checkMissing(skel_i5);
      return skel_i5;
    };
    r22 = dyn relist(p2, p3);
    check L37() else D10();
  D7():
    deopt 33 [i20, r14];
  D10():
    deopt 41 [i23, r22];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i13, dx2);
  L34():
    length = ldf length in base;
    r15 = dyn length(r14);
    check L35() else D8();
  L37():
    l1 = ld result;
    c6 = `is.object`(l1);
    if c6 then L38() else L39(i23, r22, l1);
  D8():
    deopt 35 [i20, r15];
  L10(i27, dx8):
    st result = dx8;
    ind2 = ld ind;
    check L42() else D12();
  L35():
    goto L9(i20, r15);
  L38():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, r22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L40() else L39(i23, r22, dr6);
  L39(i25, r24, l3):
    i28 = ld i;
    check L41() else D11();
  D11():
    deopt 43 [i25, r24, l3, r22, i28];
  D12():
    deopt 47 [i27, ind2];
  L40():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L10(i23, dx7);
  L41():
    i29 = force? i28;
    ____ = ldf `[[<-` in base;
    r27 = dyn ____(l3, r22, i29);
    goto L10(i25, r27);
  L42():
    ind3 = force? ind2;
    checkMissing(ind3);
    size2 = ld size;
    check L43() else D13();
  D13():
    deopt 48 [i27, ind3, size2];
  L43():
    size3 = force? size2;
    checkMissing(size3);
    r28 = `+`(ind3, size3);
    st ind = r28;
    goto L3(i27);
  }
}