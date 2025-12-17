fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner259452048;
    st `.predicate_for_calls_with_names` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner259452048(nms) {
  (reg nms:*) -+> V { var nms:*, reg r:cls |
    mkenv;
    st nms = nms;
    r = clos inner3708401697;
    popenv;
    return r;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg c6:L, reg c8:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r5:V, reg c11:L, reg c12:L, reg c15:L, reg c16:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x:*, reg x1:V, reg as_character:cls, reg r8:V, reg p:p(V +), reg nms:*, reg nms1:V, reg p1:p(V +), reg r11:V, reg c17:L, reg c18:V, reg c21:L, reg c22:V, reg c24:L, reg c25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg c29:L, reg r13:V, reg e7:*, reg e8:V, reg c30:L, reg c32:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c34:L, reg dx3:V, reg __1:cls, reg r14:V, reg is_call1:cls, reg r15:V, reg c35:L, reg c38:L, reg c39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg c44:L, reg c45:L, reg r17:V, reg x2:*, reg x3:V, reg c46:L, reg c49:L, reg c50:L, reg x5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c53:L, reg c54:L, reg dx5:V, reg __2:cls, reg r18:V, reg c55:L, reg c56:L, reg c57:V, reg c60:L, reg c63:L, reg c64:V, reg _in_1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg x6:*, reg x7:V, reg c65:L, reg x9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r21:V, reg as_character1:cls, reg r22:V, reg p2:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg c66:cls, reg r26:V, reg p3:p(V +), reg r28:V, reg c67:L, reg c68:V, reg c71:L, reg c74:L, reg c75:V, reg _in_2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg x10:*, reg x11:V, reg c76:L, reg x13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r31:V, reg as_character2:cls, reg r32:V, reg p4:p(V +), reg nms2:*, reg nms3:V, reg p5:p(V +), reg r35:V, reg c77:L, reg c78:V, reg c81:L, reg c82:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    c = `as.logical`(r1);
    if c then L17() else L1(c);
  L13():
    e1 = ld e;
    check L15() else D0();
  L14():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c24 = `as.logical`(c2);
    if c24 then L5(c24) else L29();
  L15():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L16() else D1();
  L17():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c12 = `as.logical`(r4);
    if c12 then L24() else L4(c5, c12);
  L5(c25):
    visible.0();
    popenv;
    return c25;
  L16():
    goto L0(r2);
  L18():
    e3 = ld e;
    check L20() else D2();
  L19():
    r3 = dyn base1(<lang `<-`(x, `[[`(e, 1))>);
    goto L2(c, r3);
  L29():
    sym3 = ldf `is.call`;
    base3 = ldf `is.call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  D2():
    deopt 7 [c, e3];
  L4(c15, c16):
    c21 = `as.logical`(c16);
    c22 = `&&`(c15, c21);
    goto L1(c22);
  L6(c29, r13):
    c35 = `as.logical`(r13);
    if c35 then L37() else L8(c29, c35);
  L20():
    e4 = force? e3;
    checkMissing(e4);
    c6 = `is.object`(e4);
    if c6 then L21() else L22(c, e4);
  L24():
    _in_ = ldf `%in%`;
    check L25() else D3();
  L30():
    e7 = ld e;
    check L32() else D5();
  L31():
    r12 = dyn base3(<lang `<-`(x, `[[`(e, 1))>);
    goto L6(c24, r12);
  D3():
    deopt 15 [c5, c12];
  D5():
    deopt 23 [c24, e7];
  L3(c10, dx1):
    st x = dx1;
    c11 = `is.symbol`(dx1);
    goto L2(c10, c11);
  L8(c38, c39):
    c60 = `as.logical`(c39);
    if c60 then L45() else L11(c38, c60);
  L21():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(c, dr);
  L22(c8, e6):
    __ = ldf `[[` in base;
    r5 = dyn __(e6, 1);
    goto L3(c8, r5);
  L25():
    p = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      as_character = ldf `as.character` in base;
      r8 = dyn as_character(x1);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym x>);
      goto L0(r6);
    };
    p1 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r11 = dyn _in_(p, p1);
    check L26() else D4();
  L32():
    e8 = force? e7;
    checkMissing(e8);
    c30 = `is.object`(e8);
    if c30 then L33() else L34(c24, e8);
  L37():
    sym4 = ldf `is.name`;
    base4 = ldf `is.name` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  D4():
    deopt 18 [c5, c12, r11];
  L7(c34, dx3):
    st x = dx3;
    is_call1 = ldf `is.call` in base;
    r15 = dyn is_call1(dx3);
    check L36() else D6();
  L9(c44, c45, r17):
    c56 = `as.logical`(r17);
    c57 = `&&`(c45, c56);
    goto L8(c44, c57);
  L11(c63, c64):
    c71 = `as.logical`(c64);
    if c71 then L49() else L12(c63, c71);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L26():
    c17 = `as.logical`(r11);
    c18 = `&&`(c12, c17);
    goto L4(c5, c18);
  L33():
    dr2 = tryDispatchBuiltin.1("[[", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(c24, dr2);
  L34(c32, e10):
    __1 = ldf `[[` in base;
    r14 = dyn __1(e10, 1);
    goto L7(c32, r14);
  L38():
    x2 = ld x;
    check L40() else D7();
  L39():
    r16 = dyn base4(<lang `[[`(x, 1)>);
    goto L9(c29, c35, r16);
  L45():
    _in_1 = ldf `%in%`;
    check L46() else D8();
  D6():
    deopt 30 [c34, r15];
  D7():
    deopt 32 [c29, c35, x2];
  D8():
    deopt 40 [c38, c60];
  L12(c74, c75):
    c81 = `as.logical`(c75);
    c82 = `||`(c74, c81);
    goto L5(c82);
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(c24, dx2);
  L36():
    goto L6(c34, r15);
  L40():
    x3 = force? x2;
    checkMissing(x3);
    c46 = `is.object`(x3);
    if c46 then L41() else L42(c29, c35, x3);
  L46():
    p2 = prom<V +>{
      sym5 = ldf `as.character`;
      base5 = ldf `as.character` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r20):
      return r20;
    L2():
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c65 = `is.object`(x7);
      if c65 then L4() else L5(x7);
    L3():
      r19 = dyn base5(<lang `[[`(x, 1)>);
      goto L0(r19);
    L1(dx7):
      as_character1 = ldf `as.character` in base;
      r22 = dyn as_character1(dx7);
      goto L0(r22);
    L4():
      dr6 = tryDispatchBuiltin.1("[[", x7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(dr6);
    L5(x9):
      __3 = ldf `[[` in base;
      r21 = dyn __3(x9, 1);
      goto L1(r21);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    p3 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      c66 = ldf c in base;
      r26 = dyn c66("::", ":::");
      goto L0(r26);
    L2():
      r24 = dyn base6("::", ":::");
      goto L0(r24);
    };
    r28 = dyn _in_1(p2, p3);
    check L47() else D9();
  L49():
    _in_2 = ldf `%in%`;
    check L50() else D10();
  D9():
    deopt 43 [c38, c60, r28];
  D10():
    deopt 46 [c63, c71];
  L10(c53, c54, dx5):
    c55 = `is.symbol`(dx5);
    goto L9(c53, c54, c55);
  L41():
    dr4 = tryDispatchBuiltin.1("[[", x3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L43() else L42(c29, c35, dr4);
  L42(c49, c50, x5):
    __2 = ldf `[[` in base;
    r18 = dyn __2(x5, 1);
    goto L10(c49, c50, r18);
  L47():
    c67 = `as.logical`(r28);
    c68 = `&&`(c60, c67);
    goto L11(c38, c68);
  L50():
    p4 = prom<V +>{
      sym7 = ldf `as.character`;
      base7 = ldf `as.character` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r30):
      return r30;
    L2():
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c76 = `is.object`(x11);
      if c76 then L4() else L5(x11);
    L3():
      r29 = dyn base7(<lang `[[`(x, 3)>);
      goto L0(r29);
    L1(dx9):
      as_character2 = ldf `as.character` in base;
      r32 = dyn as_character2(dx9);
      goto L0(r32);
    L4():
      dr8 = tryDispatchBuiltin.1("[[", x11);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(x13):
      __4 = ldf `[[` in base;
      r31 = dyn __4(x13, 3);
      goto L1(r31);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    p5 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    r35 = dyn _in_2(p4, p5);
    check L51() else D11();
  D11():
    deopt 49 [c63, c71, r35];
  L43():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(c29, c35, dx4);
  L51():
    c77 = `as.logical`(r35);
    c78 = `&&`(c71, c77);
    goto L12(c63, c78);
  }
}