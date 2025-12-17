fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.stepfun.isoreg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg stepfun:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg dx4:V, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r2:V, reg c4:L, reg dx8:V, reg dr6:V, reg dc3:L, reg dx9:V, reg x13:*, reg x14:V, reg c5:L, reg dx11:V, reg x16:V, reg dr8:V, reg dc4:L, reg dx13:V, reg dx14:V, reg dx15:V, reg r3:V, reg __:cls, reg r4:V, reg c6:L, reg dx17:V, reg dr10:V, reg dc5:L, reg dx18:V, reg dx19:V, reg x17:*, reg x18:V, reg c7:L, reg dx21:V, reg x20:V, reg dr12:V, reg dc6:L, reg dx23:V, reg dx24:V, reg dx25:V, reg r5:V, reg __1:cls, reg r6:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg x21:*, reg x22:V, reg c8:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx26:V, reg dx27:V, reg r10:V, reg c9:L, reg dx29:V, reg dr16:V, reg dc8:L, reg dx30:V, reg dx31:V, reg x25:*, reg x26:V, reg c10:L, reg dx33:V, reg x28:V, reg dr18:V, reg dc9:L, reg dx35:V, reg dx36:V, reg dx37:V, reg r11:V, reg __2:cls, reg r12:V, reg x29:*, reg x30:V, reg c11:L, reg x32:V, reg dr20:V, reg dc10:L, reg dx38:V, reg dx39:V, reg r13:V, reg c12:L, reg dx41:V, reg dr22:V, reg dc11:L, reg dx42:V, reg dx43:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg dx46:V, reg r15:V, reg x33:*, reg x34:V, reg c13:L, reg dx48:V, reg x36:V, reg dr24:V, reg dc12:L, reg dx50:V, reg dx51:V, reg dx52:V, reg r16:V, reg length:cls, reg r17:V, reg __3:cls, reg r18:V, reg c14:cls, reg r19:V, reg p1:p(V +), reg r21:V, reg x37:*, reg x38:V, reg c15:L, reg x40:V, reg dr26:V, reg dc13:L, reg dx53:V, reg dx54:V, reg r22:V, reg l:*, reg attr__:cls, reg r23:V, reg sf:*, reg sf1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    stepfun = ldf stepfun;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L4() else L5(x2);
    L3(dx1):
      c1 = `as.logical`(dx1);
      if c1 then L7() else L0();
    L4():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(x4):
      r = `$`(x4, <sym isOrd>);
      goto L3(r);
    L0():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L14() else L15(x10);
    L1(dx4):
      c6 = `is.object`(dx4);
      if c6 then L24() else L25(dx4);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    L7():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L9() else L10(x6);
    L2(dx19):
      return dx19;
    L8(dx3):
      goto L1(dx3);
    L9():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L11() else L10(dr2);
    L10(x8):
      r1 = `$`(x8, <sym x>);
      goto L8(r1);
    L13(dx6):
      c4 = `is.object`(dx6);
      if c4 then L17() else L18(dx6);
    L14():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L16() else L15(dr4);
    L15(x12):
      r2 = `$`(x12, <sym x>);
      goto L13(r2);
    L24():
      dr10 = tryDispatchBuiltin.1("[", dx4);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L26() else L25(dr10);
    L25(dx17):
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c7 = `is.object`(x18);
      if c7 then L28() else L29(dx17, x18);
    L11():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L8(dx2);
    L16():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L13(dx5);
    L17():
      dr6 = tryDispatchBuiltin.1("[", dx6);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L19() else L18(dr6);
    L18(dx8):
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c5 = `is.object`(x14);
      if c5 then L21() else L22(dx8, x14);
    L26():
      dx18 = getTryDispatchBuiltinValue(dr10);
      goto L2(dx18);
    L27(dx24, dx25):
      __1 = ldf `[` in base;
      r6 = dyn __1(dx24, dx25);
      goto L2(r6);
    L28():
      dr12 = tryDispatchBuiltin.1("$", x18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L30() else L29(dx17, dr12);
    L29(dx21, x20):
      r5 = `$`(x20, <sym iKnots>);
      goto L27(dx21, r5);
    L19():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx9);
    L20(dx14, dx15):
      __ = ldf `[` in base;
      r4 = dyn __(dx14, dx15);
      goto L1(r4);
    L21():
      dr8 = tryDispatchBuiltin.1("$", x14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L23() else L22(dx8, dr8);
    L22(dx11, x16):
      r3 = `$`(x16, <sym ord>);
      goto L20(dx11, r3);
    L30():
      dx23 = getTryDispatchBuiltinValue(dr12);
      goto L27(dx17, dx23);
    L23():
      dx13 = getTryDispatchBuiltinValue(dr8);
      goto L20(dx8, dx13);
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r9):
      return r9;
    L4():
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c8 = `is.object`(x22);
      if c8 then L7() else L8(x22);
    L5():
      r8 = dyn base(<lang `[`(`$`(x, yf), `$`(x, iKnots))>, <lang `[`(`$`(x, yf), length(`$`(x, yf)))>);
      goto L0(r8);
    L6(dx27):
      c9 = `is.object`(dx27);
      if c9 then L10() else L11(dx27);
    L7():
      dr14 = tryDispatchBuiltin.1("$", x22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L9() else L8(dr14);
    L8(x24):
      r10 = `$`(x24, <sym yf>);
      goto L6(r10);
    L1(dx31):
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c11 = `is.object`(x30);
      if c11 then L18() else L19(x30);
    L9():
      dx26 = getTryDispatchBuiltinValue(dr14);
      goto L6(dx26);
    L10():
      dr16 = tryDispatchBuiltin.1("[", dx27);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L12() else L11(dr16);
    L11(dx29):
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c10 = `is.object`(x26);
      if c10 then L14() else L15(dx29, x26);
    L12():
      dx30 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx30);
    L13(dx36, dx37):
      __2 = ldf `[` in base;
      r12 = dyn __2(dx36, dx37);
      goto L1(r12);
    L14():
      dr18 = tryDispatchBuiltin.1("$", x26);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L16() else L15(dx29, dr18);
    L15(dx33, x28):
      r11 = `$`(x28, <sym iKnots>);
      goto L13(dx33, r11);
    L17(dx39):
      c12 = `is.object`(dx39);
      if c12 then L21() else L22(dx39);
    L18():
      dr20 = tryDispatchBuiltin.1("$", x30);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L20() else L19(dr20);
    L19(x32):
      r13 = `$`(x32, <sym yf>);
      goto L17(r13);
    L2(dx43):
      c14 = ldf c in base;
      r19 = dyn c14(dx31, dx43);
      goto L0(r19);
    L16():
      dx35 = getTryDispatchBuiltinValue(dr18);
      goto L13(dx29, dx35);
    L20():
      dx38 = getTryDispatchBuiltinValue(dr20);
      goto L17(dx38);
    L21():
      dr22 = tryDispatchBuiltin.1("[", dx39);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L23() else L22(dr22);
    L22(dx41):
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L24() else L25();
    L3(dx46, r15):
      __3 = ldf `[` in base;
      r18 = dyn __3(dx46, r15);
      goto L2(r18);
    L23():
      dx42 = getTryDispatchBuiltinValue(dr22);
      goto L2(dx42);
    L24():
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c13 = `is.object`(x34);
      if c13 then L27() else L28(dx41, x34);
    L25():
      r14 = dyn base1(<lang `$`(x, yf)>);
      goto L3(dx41, r14);
    L26(dx51, dx52):
      length = ldf length in base;
      r17 = dyn length(dx52);
      goto L3(dx51, r17);
    L27():
      dr24 = tryDispatchBuiltin.1("$", x34);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L29() else L28(dx41, dr24);
    L28(dx48, x36):
      r16 = `$`(x36, <sym yf>);
      goto L26(dx48, r16);
    L29():
      dx50 = getTryDispatchBuiltinValue(dr24);
      goto L26(dx41, dx50);
    };
    r21 = dyn stepfun[x, y, right](p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 8 [r21];
  L1():
    st sf = r21;
    x37 = ld x;
    check L2() else D2();
  D2():
    deopt 10 [x37];
  L2():
    x38 = force? x37;
    checkMissing(x38);
    c15 = `is.object`(x38);
    if c15 then L4() else L5(x38);
  L3(dx54):
    l = ld sf;
    attr__ = ldf `attr<-`;
    check L7() else D3();
  L4():
    dr26 = tryDispatchBuiltin.1("$", x38);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L6() else L5(dr26);
  L5(x40):
    r22 = `$`(x40, <sym call>);
    goto L3(r22);
  D3():
    deopt 14 [dx54, l, dx54];
  L6():
    dx53 = getTryDispatchBuiltinValue(dr26);
    goto L3(dx53);
  L7():
    r23 = dyn attr__(l, NULL, "call", dx54);
    check L8() else D4();
  D4():
    deopt 17 [dx54, r23];
  L8():
    st sf = r23;
    sf = ld sf;
    check L9() else D5();
  D5():
    deopt 19 [sf];
  L9():
    sf1 = force? sf;
    checkMissing(sf1);
    popenv;
    return sf1;
  }
}