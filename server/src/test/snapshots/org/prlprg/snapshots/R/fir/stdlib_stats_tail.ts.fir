fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4227816699;
    st `tail.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4227816699(x, n, `...`) {
  (reg x:*, reg n:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `...`:dots?, reg _checkHT:cls, reg n1:*, reg n2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg dim:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg time:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r9:V, reg as_numeric:cls, reg r10:V, reg tail:cls, reg tmx:*, reg tmx1:V, reg p3:p(V +), reg n3:*, reg n4:V, reg c:L, reg n6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg d:*, reg d1:V, reg c1:V, reg r17:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg c7:L, reg r19:V, reg n7:*, reg n8:V, reg length:cls, reg r20:V, reg r21:V, reg c8:L, reg c9:V, reg c11:L, reg head:cls, reg d2:*, reg d3:V, reg c12:L, reg r23:R, reg d5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r25:R, reg dx3:V, reg __1:cls, reg r26:V, reg r27:V, reg p5:p(V +), reg n9:*, reg n10:V, reg c13:L, reg n12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r29:V, reg p6:p(V +), reg r31:V, reg x5:*, reg x6:V, reg c14:L, reg x8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg cols:*, reg cols1:V, reg c15:L, reg x10:V, reg cols3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg x12:V, reg dx9:V, reg __3:cls, reg r32:V, reg tail1:cls, reg cols4:*, reg cols5:V, reg p7:p(V +), reg r34:V, reg r35:V, reg __4:cls, reg r36:V, reg window:cls, reg x13:*, reg x14:V, reg p8:p(V +), reg lastn:*, reg lastn1:V, reg c16:L, reg lastn3:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r38:V, reg p9:p(V +), reg tail2:cls, reg lastn4:*, reg lastn5:V, reg p10:p(V +), reg r41:V, reg p11:p(V +), reg r43:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    st `...` = ddd;
    _checkHT = ldf `.checkHT`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
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
    check L10() else D1();
  D1():
    deopt 4 [r5];
  L10():
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L1(r7):
    st tmx = r7;
    tail = ldf tail;
    check L16() else D5();
  L11():
    time = ldf time;
    check L13() else D2();
  L12():
    r6 = dyn base1(<lang time(x)>);
    goto L1(r6);
  D2():
    deopt 8 [];
  D5():
    deopt 15 [];
  L13():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn time(p2);
    check L14() else D3();
  L16():
    p3 = prom<V +>{
      tmx = ld tmx;
      tmx1 = force? tmx;
      checkMissing(tmx1);
      return tmx1;
    };
    p4 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      c = `is.object`(n4);
      if c then L1() else L2(n4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", n4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(n6):
      __ = ldf `[` in base;
      r12 = dyn __(n6, 1);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn tail(p3, p4);
    check L17() else D6();
  D3():
    deopt 10 [r9];
  D6():
    deopt 18 [r14];
  L14():
    as_numeric = ldf `as.numeric` in base;
    r10 = dyn as_numeric(r9);
    check L15() else D4();
  L17():
    st lastn = r14;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D4():
    deopt 12 [r10];
  L2(r16):
    r17 = `!`(r16);
    c2 = `as.logical`(r17);
    if c2 then L21() else L3(c2);
  L15():
    goto L1(r10);
  L18():
    d = ld d;
    check L20() else D7();
  L19():
    r15 = dyn base2(<sym d>);
    goto L2(r15);
  D7():
    deopt 21 [d];
  L3(c4):
    c11 = `as.logical`(c4);
    if c11 then L27() else L5();
  L20():
    d1 = force? d;
    checkMissing(d1);
    c1 = `==`(d1, NULL);
    goto L2(c1);
  L21():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L4(c7, r19):
    r21 = `>=`(r19, 2);
    c8 = `as.logical`(r21);
    c9 = `&&`(c7, c8);
    goto L3(c9);
  L5():
    goto L8();
  L8():
    window = ldf window;
    check L41() else D16();
  L22():
    n7 = ld n;
    check L24() else D8();
  L23():
    r18 = dyn base3(<sym n>);
    goto L4(c2, r18);
  L27():
    head = ldf head;
    check L28() else D10();
  D8():
    deopt 27 [c2, n7];
  D10():
    deopt 35 [];
  D16():
    deopt 61 [];
  L24():
    n8 = force? n7;
    checkMissing(n8);
    length = ldf length in base;
    r20 = dyn length(n8);
    check L25() else D9();
  L28():
    p5 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      c12 = `is.object`(d3);
      if c12 then L1() else L2(1.0, d3);
    L0(r25, dx3):
      r27 = `:`(r25, dx3);
      return r27;
    L1():
      dr2 = tryDispatchBuiltin.1("[", d3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(1.0, dr2);
    L2(r23, d5):
      __1 = ldf `[` in base;
      r26 = dyn __1(d5, 2.0);
      goto L0(r23, r26);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(1.0, dx2);
    };
    p6 = prom<V +>{
      n9 = ld n;
      n10 = force? n9;
      checkMissing(n10);
      c13 = `is.object`(n10);
      if c13 then L1() else L2(n10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", n10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(n12):
      __2 = ldf `[` in base;
      r29 = dyn __2(n12, 2);
      goto L0(r29);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r31 = dyn head(p5, p6);
    check L29() else D11();
  L41():
    p8 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p9 = prom<V +>{
      lastn = ld lastn;
      lastn1 = force? lastn;
      checkMissing(lastn1);
      c16 = `is.object`(lastn1);
      if c16 then L1() else L2(lastn1);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[", lastn1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(lastn3):
      __5 = ldf `[` in base;
      r38 = dyn __5(lastn3, 1);
      goto L0(r38);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p11 = prom<V +>{
      tail2 = ldf tail;
      p10 = prom<V +>{
        lastn4 = ld lastn;
        lastn5 = force? lastn4;
        checkMissing(lastn5);
        return lastn5;
      };
      r41 = dyn tail2(p10, 1);
      return r41;
    };
    r43 = dyn window(p8, p9, p11);
    check L42() else D17();
  D9():
    deopt 30 [c2, r20];
  D11():
    deopt 38 [r31];
  D17():
    deopt 65 [r43];
  L25():
    goto L4(c2, r20);
  L29():
    st cols = r31;
    x5 = ld x;
    check L30() else D12();
  L42():
    popenv;
    return r43;
  D12():
    deopt 40 [x5];
  L30():
    x6 = force? x5;
    checkMissing(x6);
    c14 = `is.object`(x6);
    if c14 then L31() else L32(x6);
  L6(dx7):
    st x = dx7;
    goto L8();
  L31():
    dr6 = tryDispatchBuiltin.1("[", x6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L33() else L32(dr6);
  L32(x8):
    cols = ld cols;
    check L34() else D13();
  D13():
    deopt 43 [x8, cols];
  L33():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L34():
    cols1 = force? cols;
    checkMissing(cols1);
    c15 = `is.object`(cols1);
    if c15 then L35() else L36(x8, cols1);
  L7(x12, dx9):
    tail1 = ldf tail;
    check L38() else D14();
  L35():
    dr8 = tryDispatchBuiltin.1("[", cols1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L37() else L36(x8, dr8);
  L36(x10, cols3):
    __3 = ldf `[` in base;
    r32 = dyn __3(cols3, 1);
    goto L7(x10, r32);
  D14():
    deopt 48 [x12, dx9];
  L37():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(x8, dx8);
  L38():
    p7 = prom<V +>{
      cols4 = ld cols;
      cols5 = force? cols4;
      checkMissing(cols5);
      return cols5;
    };
    r34 = dyn tail1(p7, 1);
    check L39() else D15();
  D15():
    deopt 51 [x12, dx9, r34];
  L39():
    r35 = `:`(dx9, r34);
    __4 = ldf `[` in base;
    r36 = dyn __4(x6, <missing>, r35, FALSE);
    goto L6(r36);
  }
}