fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2389055996;
    st `.Rd_get_section` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2389055996(x, which, predefined) {
  (reg x:*, reg which:*, reg predefined:*) -+> V { var x:*, var which:*, var predefined:*, reg predefined_isMissing:L, reg predefined_orDefault:*, reg predefined1:*, reg predefined2:V, reg c:L, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r1:V, reg paste0:cls, reg which1:*, reg which2:V, reg p1:p(V +), reg r3:V, reg r4:V, reg __:cls, reg r5:V, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg RdTags1:cls, reg x11:*, reg x12:V, reg p2:p(V +), reg r7:V, reg r8:V, reg __1:cls, reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg x13:*, reg x14:V, reg length:cls, reg r12:V, reg c3:L, reg sapply:cls, reg x15:*, reg x16:V, reg p3:p(V +), reg r14:cls, reg p4:p(V +), reg r16:V, reg which3:*, reg which4:V, reg r17:V, reg lapply:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ind:*, reg ind1:V, reg __2:cls, reg r18:V, reg p5:p(V +), reg __3:*, reg __4:V, reg p6:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg x21:*, reg x22:V, reg length1:cls, reg r24:V, reg r25:V, reg c5:L, reg x23:*, reg x24:V, reg structure:cls, reg x25:*, reg x26:V, reg c6:L, reg x28:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __5:cls, reg r26:V, reg p7:p(V +), reg r28:V |
    mkenv;
    st x = x;
    st which = which;
    predefined_isMissing = missing.0(predefined);
    if predefined_isMissing then L0(TRUE) else L0(predefined);
  L0(predefined_orDefault):
    st predefined = predefined_orDefault;
    predefined1 = ld predefined;
    check L9() else D0();
  D0():
    deopt 0 [predefined1];
  L9():
    predefined2 = force? predefined1;
    checkMissing(predefined2);
    c = `as.logical`(predefined2);
    if c then L10() else L1();
  L1():
    x7 = ld x;
    check L20() else D6();
  L3():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L10():
    x1 = ld x;
    check L11() else D1();
  D1():
    deopt 2 [x1];
  D6():
    deopt 15 [x7];
  L7(r23):
    r25 = `!`(r23);
    c5 = `as.logical`(r25);
    if c5 then L41() else L8();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.object`(x2);
    if c1 then L12() else L13(x2);
  L20():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.object`(x8);
    if c2 then L21() else L22(x8);
  L37():
    x21 = ld x;
    check L39() else D16();
  L38():
    r22 = dyn base1(<sym x>);
    goto L7(r22);
  D16():
    deopt 50 [x21];
  L2(dx1):
    st x = dx1;
    goto L3();
  L4(dx4):
    st x = dx4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L8():
    structure = ldf structure;
    check L44() else D19();
  L12():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(x4):
    RdTags = ldf RdTags;
    check L15() else D2();
  L21():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(x10):
    RdTags1 = ldf RdTags;
    check L24() else D7();
  L39():
    x22 = force? x21;
    checkMissing(x22);
    length1 = ldf length in base;
    r24 = dyn length1(x22);
    check L40() else D17();
  L41():
    x23 = ld x;
    check L42() else D18();
  D2():
    deopt 5 [x4];
  D7():
    deopt 18 [x10];
  D17():
    deopt 53 [r24];
  D18():
    deopt 55 [x23];
  D19():
    deopt 58 [];
  L5(r11):
    c3 = `as.logical`(r11);
    if c3 then L30() else L6();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L15():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r1 = dyn RdTags(p);
    check L16() else D3();
  L23():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx3);
  L24():
    p2 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r7 = dyn RdTags1(p2);
    check L25() else D8();
  L26():
    x13 = ld x;
    check L28() else D9();
  L27():
    r10 = dyn base(<sym x>);
    goto L5(r10);
  L40():
    goto L7(r24);
  L42():
    x24 = force? x23;
    checkMissing(x24);
    popenv;
    return x24;
  L44():
    p7 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c6 = `is.object`(x26);
      if c6 then L1() else L2(x26);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", x26);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x28):
      __5 = ldf `[[` in base;
      r26 = dyn __5(x28, 1);
      goto L0(r26);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r28 = dyn structure[, class](p7, "Rd");
    check L45() else D20();
  D3():
    deopt 7 [x4, r1];
  D8():
    deopt 20 [x10, r7];
  D9():
    deopt 27 [x13];
  D20():
    deopt 62 [r28];
  L6():
    goto L3();
  L16():
    paste0 = ldf paste0;
    check L17() else D4();
  L25():
    r8 = `==`(r7, "\\section");
    __1 = ldf `[` in base;
    r9 = dyn __1(x10, r8);
    goto L4(r9);
  L28():
    x14 = force? x13;
    checkMissing(x14);
    length = ldf length in base;
    r12 = dyn length(x14);
    check L29() else D10();
  L30():
    sapply = ldf sapply;
    check L31() else D11();
  L45():
    popenv;
    return r28;
  D4():
    deopt 8 [x4, r1];
  D10():
    deopt 30 [r12];
  D11():
    deopt 32 [];
  L17():
    p1 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    r3 = dyn paste0("\\", p1);
    check L18() else D5();
  L29():
    goto L5(r12);
  L31():
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p4 = prom<V +>{
      r14 = clos inner3708401697;
      return r14;
    };
    r16 = dyn sapply(p3, p4);
    check L32() else D12();
  D5():
    deopt 11 [x4, r1, r3];
  D12():
    deopt 35 [r16];
  L18():
    r4 = `==`(r1, r3);
    __ = ldf `[` in base;
    r5 = dyn __(x4, r4);
    goto L2(r5);
  L32():
    which3 = ld which;
    check L33() else D13();
  D13():
    deopt 35 [r16, which3];
  L33():
    which4 = force? which3;
    checkMissing(which4);
    r17 = `==`(r16, which4);
    st ind = r17;
    lapply = ldf lapply;
    check L34() else D14();
  D14():
    deopt 40 [];
  L34():
    p5 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c4 = `is.object`(x18);
      if c4 then L1() else L2(x18);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x18);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x20):
      ind = ld ind;
      ind1 = force? ind;
      __2 = ldf `[` in base;
      r18 = dyn __2(x20, ind1);
      goto L0(r18);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p6 = prom<V +>{
      __3 = ld `[[`;
      __4 = force? __3;
      checkMissing(__4);
      return __4;
    };
    r21 = dyn lapply(p5, p6, 2);
    check L35() else D15();
  D15():
    deopt 44 [r21];
  L35():
    st x = r21;
    goto L3();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg _Rd_get_text:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st e = e;
    _Rd_get_text = ldf `.Rd_get_text`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2(e2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e4):
      __ = ldf `[[` in base;
      r = dyn __(e4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn _Rd_get_text(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}