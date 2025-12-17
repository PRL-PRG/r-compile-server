fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4227816699;
    st `head.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4227816699(x, n, `...`) {
  (reg x:*, reg n:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `...`:dots?, reg _checkHT:cls, reg n1:*, reg n2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg dim:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg rep:cls, reg r8:V, reg which:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg n3:*, reg n4:V, reg c:L, reg n6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg n9:V, reg r12:V, reg d:*, reg d1:V, reg r13:I, reg __:cls, reg r14:V, reg is_na:cls, reg r15:V, reg r16:V, reg p2:p(V +), reg r18:V, reg lapply:cls, reg ii:*, reg ii1:V, reg p3:p(V +), reg r20:cls, reg p4:p(V +), reg r22:V, reg l:*, reg c1:L, reg r24:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ii2:*, reg ii3:V, reg r27:V, reg ___:cls, reg r28:V, reg do_call:cls, reg __1:*, reg __2:V, reg p5:p(V +), reg args:*, reg args1:V, reg p6:p(V +), reg r31:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    st `...` = ddd;
    _checkHT = ldf `.checkHT`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p1 = prom<V +>{
      sym = ldf dim;
      base = ldf dim in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      st d = r2;
      invisible.0();
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dim = ldf dim in base;
      r3 = dyn dim(x2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    r5 = dyn _checkHT(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r5];
  L4():
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L1(r7):
    st args = r7;
    which = ldf which;
    check L7() else D2();
  L5():
    rep = ldf rep in base;
    r8 = dyn rep(<lang alist(x, , drop=FALSE)>, <lang c(1, length(d), 1)>);
    goto L1(r8);
  L6():
    r6 = dyn base1(<lang alist(x, , drop=FALSE)>, <lang c(1, length(d), 1)>);
    goto L1(r6);
  D2():
    deopt 10 [];
  L7():
    p2 = prom<V +>{
      sym2 = ldf `is.na`;
      base2 = ldf `is.na` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r10):
      r16 = `!`(r10);
      return r16;
    L3():
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      c = `is.object`(n4);
      if c then L5() else L6(n4);
    L4():
      r9 = dyn base2(<lang `[`(n, seq_along(d))>);
      goto L0(r9);
    L1(dx1):
      is_na = ldf `is.na` in base;
      r15 = dyn is_na(dx1);
      goto L0(r15);
    L5():
      dr = tryDispatchBuiltin.1("[", n4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(n6):
      sym3 = ldf seq_along;
      base3 = ldf seq_along in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L2(n9, r12):
      __ = ldf `[` in base;
      r14 = dyn __(n9, r12);
      goto L1(r14);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      r13 = seq_along(d1);
      goto L2(n6, r13);
    L9():
      r11 = dyn base3(<sym d>);
      goto L2(n6, r11);
    };
    r18 = dyn which(p2);
    check L8() else D3();
  D3():
    deopt 12 [r18];
  L8():
    st ii = r18;
    lapply = ldf lapply;
    check L9() else D4();
  D4():
    deopt 15 [];
  L9():
    p3 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      return ii1;
    };
    p4 = prom<V +>{
      r20 = clos inner3002224933;
      return r20;
    };
    r22 = dyn lapply(p3, p4);
    check L10() else D5();
  D5():
    deopt 18 [r22];
  L10():
    l = ld args;
    c1 = `is.object`(l);
    if c1 then L11() else L12(r22, l);
  L2(dx3):
    st args = dx3;
    do_call = ldf `do.call`;
    check L15() else D7();
  L11():
    dr2 = tryDispatchBuiltin.0("[<-", l, r22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(r22, dr2);
  L12(r24, l2):
    ii2 = ld ii;
    check L14() else D6();
  D6():
    deopt 21 [r24, l2, r22, 1, ii2];
  D7():
    deopt 27 [];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L14():
    ii3 = force? ii2;
    checkMissing(ii3);
    r27 = `+`(1, ii3);
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l2, r22, r27);
    goto L2(r28);
  L15():
    p5 = prom<V +>{
      __1 = ld `[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    p6 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r31 = dyn do_call(p5, p6);
    check L16() else D8();
  D8():
    deopt 30 [r31];
  L16():
    popenv;
    return r31;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n:*, reg n1:V, reg c:L, reg n3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg r3:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg d:*, reg d1:V, reg c2:L, reg d3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r6:V, reg ni:*, reg ni1:V, reg r7:V, reg max:cls, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg ni2:*, reg ni3:V, reg d4:*, reg d5:V, reg c3:L, reg d7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r11:V, reg min:cls, reg r12:V, reg r13:I |
    mkenv;
    st i = i;
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    popenv;
    return r1;
  L7():
    n = ld n;
    check L9() else D0();
  L8():
    r = dyn base(<lang if(`<`(`(`(`<-`(ni, `[`(n, i))), 0), max(`+`(`[`(d, i), ni), 0), min(ni, `[`(d, i)))>);
    goto L0(r);
  D0():
    deopt 1 [n];
  L9():
    n1 = force? n;
    checkMissing(n1);
    c = `is.object`(n1);
    if c then L10() else L11(n1);
  L1(dx1):
    st ni = dx1;
    r3 = `<`(dx1, 0);
    c1 = `as.logical`(r3);
    if c1 then L14() else L2();
  L10():
    dr = tryDispatchBuiltin.1("[", n1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(n3):
    i1 = ld i;
    check L13() else D1();
  D1():
    deopt 3 [n3, i1];
  L2():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L5(r9):
    r13 = seq_len(r9);
    goto L0(r13);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    i2 = force? i1;
    __ = ldf `[` in base;
    r2 = dyn __(n3, i2);
    goto L1(r2);
  L14():
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r5):
    goto L5(r5);
  L15():
    d = ld d;
    check L17() else D2();
  L16():
    r4 = dyn base1(<lang `+`(`[`(d, i), ni)>, 0);
    goto L3(r4);
  L25():
    ni2 = ld ni;
    check L27() else D6();
  L26():
    r10 = dyn base2(<sym ni>, <lang `[`(d, i)>);
    goto L5(r10);
  D2():
    deopt 11 [d];
  D6():
    deopt 23 [ni2];
  L17():
    d1 = force? d;
    checkMissing(d1);
    c2 = `is.object`(d1);
    if c2 then L18() else L19(d1);
  L27():
    ni3 = force? ni2;
    checkMissing(ni3);
    d4 = ld d;
    check L28() else D7();
  D7():
    deopt 25 [d4];
  L4(dx3):
    ni = ld ni;
    check L22() else D4();
  L18():
    dr2 = tryDispatchBuiltin.1("[", d1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(d3):
    i3 = ld i;
    check L21() else D3();
  L28():
    d5 = force? d4;
    checkMissing(d5);
    c3 = `is.object`(d5);
    if c3 then L29() else L30(d5);
  D3():
    deopt 13 [d3, i3];
  D4():
    deopt 15 [dx3, ni];
  L6(dx5):
    min = ldf min in base;
    r12 = dyn min(ni3, dx5);
    check L33() else D9();
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L21():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r6 = dyn __1(d3, i4);
    goto L4(r6);
  L22():
    ni1 = force? ni;
    checkMissing(ni1);
    r7 = `+`(dx3, ni1);
    max = ldf max in base;
    r8 = dyn max(r7, 0);
    check L23() else D5();
  L29():
    dr4 = tryDispatchBuiltin.1("[", d5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(dr4);
  L30(d7):
    i5 = ld i;
    check L32() else D8();
  D5():
    deopt 20 [r8];
  D8():
    deopt 27 [d7, i5];
  D9():
    deopt 31 [r12];
  L23():
    goto L3(r8);
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L32():
    i6 = force? i5;
    __2 = ldf `[` in base;
    r11 = dyn __2(d7, i6);
    goto L6(r11);
  L33():
    goto L5(r12);
  }
}