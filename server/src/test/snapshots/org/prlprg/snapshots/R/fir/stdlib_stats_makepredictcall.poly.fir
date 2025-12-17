fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3784084085;
    st `makepredictcall.poly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3784084085(var, call) {
  (reg var:*, reg call:*) -+> V { var var:*, var call:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg call1:*, reg call2:V, reg as_character:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg r6:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c6:L, reg r8:V, reg call3:*, reg call4:V, reg is_call:cls, reg r9:V, reg c7:L, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c16:L, reg c17:L, reg r11:V, reg eval:cls, reg call5:*, reg call6:V, reg c18:L, reg call8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p:p(V +), reg r14:V, reg poly:*, reg poly1:V, reg identical:cls, reg r15:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg var1:*, reg var2:V, reg attr:cls, reg r18:V, reg l:*, reg c27:L, reg r20:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r22:V, reg dx5:V, reg r23:V, reg call9:*, reg call10:V |
    mkenv;
    st var = var;
    st call = call;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c = `is.object`(r1);
    if c then L13() else L14(r1);
  L9():
    call1 = ld call;
    check L11() else D0();
  L10():
    r = dyn base(<sym call>);
    goto L0(r);
  D0():
    deopt 2 [call1];
  L1(dx1):
    r6 = `==`(dx1, "poly");
    c1 = `as.logical`(r6);
    if c1 then L2(c1) else L16();
  L11():
    call2 = force? call1;
    checkMissing(call2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(call2);
    check L12() else D1();
  L13():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(r4):
    __ = ldf `[` in base;
    r5 = dyn __(r4, 1);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  L2(c2):
    c26 = `as.logical`(c2);
    if c26 then L30() else L6();
  L12():
    goto L0(r2);
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L16():
    sym1 = ldf `is.call`;
    base1 = ldf `is.call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(c6, r8):
    c7 = `as.logical`(r8);
    if c7 then L21() else L4(c6, c7);
  L6():
    goto L8();
  L8():
    call9 = ld call;
    check L40() else D10();
  L17():
    call3 = ld call;
    check L19() else D2();
  L18():
    r7 = dyn base1(<sym call>);
    goto L3(c1, r7);
  L30():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  D2():
    deopt 13 [c1, call3];
  D10():
    deopt 48 [call9];
  L4(c10, c11):
    c23 = `as.logical`(c11);
    c24 = `||`(c10, c23);
    goto L2(c24);
  L7(r17):
    l = ld call;
    c27 = `is.object`(l);
    if c27 then L36() else L37(r17, l);
  L19():
    call4 = force? call3;
    checkMissing(call4);
    is_call = ldf `is.call` in base;
    r9 = dyn is_call(call4);
    check L20() else D3();
  L21():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L31():
    var1 = ld var;
    check L33() else D8();
  L32():
    r16 = dyn base3(<sym var>, "coefs");
    goto L7(r16);
  L40():
    call10 = force? call9;
    checkMissing(call10);
    popenv;
    return call10;
  D3():
    deopt 16 [c1, r9];
  D8():
    deopt 38 [var1];
  L5(c16, c17, r11):
    c19 = `as.logical`(r11);
    c20 = `&&`(c17, c19);
    goto L4(c16, c20);
  L20():
    goto L3(c1, r9);
  L22():
    eval = ldf eval;
    check L24() else D4();
  L23():
    r10 = dyn base2(<lang eval(`[[`(call, 1))>, <sym poly>);
    goto L5(c6, c7, r10);
  L33():
    var2 = force? var1;
    checkMissing(var2);
    attr = ldf attr in base;
    r18 = dyn attr(var2, "coefs");
    check L34() else D9();
  L35(r22, dx5):
    st call = dx5;
    goto L8();
  L36():
    dr4 = tryDispatchBuiltin.0("$<-", l, r17);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(r17, dr4);
  L37(r20, l2):
    r23 = `$<-`(l2, <sym coefs>, r17);
    goto L35(r20, r23);
  D4():
    deopt 20 [c6, c7];
  D9():
    deopt 42 [r18];
  L24():
    p = prom<V +>{
      call5 = ld call;
      call6 = force? call5;
      checkMissing(call6);
      c18 = `is.object`(call6);
      if c18 then L1() else L2(call6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", call6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(call8):
      __1 = ldf `[[` in base;
      r12 = dyn __1(call8, 1);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r14 = dyn eval(p);
    check L25() else D5();
  L34():
    goto L7(r18);
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(r17, dx4);
  D5():
    deopt 22 [c6, c7, r14];
  L25():
    poly = ld poly;
    check L26() else D6();
  D6():
    deopt 23 [c6, c7, poly];
  L26():
    poly1 = force? poly;
    checkMissing(poly1);
    identical = ldf identical in base;
    r15 = dyn identical(r14, poly1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L27() else D7();
  D7():
    deopt 33 [c6, c7, r15];
  L27():
    goto L5(c6, c7, r15);
  }
}