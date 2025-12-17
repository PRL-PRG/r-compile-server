fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner480698839;
    st RtangleFinish = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner480698839(object, error) {
  (reg object:*, reg error:*) -+> V { var object:*, var error:*, reg error_isMissing:L, reg error_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg c4:V, reg object5:*, reg object6:V, reg c5:L, reg c7:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c9:L, reg dx3:V, reg r4:V, reg r5:V, reg c10:L, reg c11:V, reg c13:L, reg close:cls, reg object9:*, reg object10:V, reg c14:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg p:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg object13:*, reg object14:V, reg c15:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg length:cls, reg r13:V, reg c16:L, reg object17:*, reg object18:V, reg c17:L, reg object20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r14:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c18:L, reg x:V, reg close1:cls, reg con:*, reg con1:V, reg p1:p(V +), reg r16:V |
    mkenv;
    st object = object;
    error_isMissing = missing.0(error);
    if error_isMissing then L0(FALSE) else L0(error);
  L0(error_orDefault):
    st error = error_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L16() else L2(c2);
  L9():
    object1 = ld object;
    check L11() else D0();
  L10():
    r = dyn base(<lang `$`(object, output)>);
    goto L1(r);
  D0():
    deopt 1 [object1];
  L2(c4):
    c13 = `as.logical`(c4);
    if c13 then L23() else L3();
  L11():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L13() else L14(object2);
  L16():
    object5 = ld object;
    check L17() else D1();
  D1():
    deopt 6 [c2, object5];
  L3():
    goto L4();
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L12(dx1):
    c1 = `==`(dx1, NULL);
    goto L1(c1);
  L13():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(object4):
    r2 = `$`(object4, <sym output>);
    goto L12(r2);
  L17():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.object`(object6);
    if c5 then L19() else L20(c2, object6);
  L23():
    close = ldf close;
    check L24() else D2();
  D2():
    deopt 13 [];
  L5(r11):
    c16 = `as.logical`(r11);
    if c16 then L35() else L6();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L18(c9, dx3):
    r5 = `>=`(dx3, 3.0);
    c10 = `as.logical`(r5);
    c11 = `&&`(c9, c10);
    goto L2(c11);
  L19():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(c2, dr2);
  L20(c7, object8):
    r4 = `$`(object8, <sym output>);
    goto L18(c7, r4);
  L24():
    p = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c14 = `is.object`(object10);
      if c14 then L1() else L2(object10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object12):
      r6 = `$`(object12, <sym output>);
      goto L0(r6);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r8 = dyn close(p);
    check L25() else D3();
  L27():
    object13 = ld object;
    check L29() else D4();
  L28():
    r10 = dyn base1(<lang `$`(object, chunkout)>);
    goto L5(r10);
  D3():
    deopt 15 [r8];
  D4():
    deopt 20 [object13];
  L6():
    invisible.0();
    popenv;
    return NULL;
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(c2, dx2);
  L25():
    goto L4();
  L29():
    object14 = force? object13;
    checkMissing(object14);
    c15 = `is.object`(object14);
    if c15 then L31() else L32(object14);
  L35():
    object17 = ld object;
    check L36() else D6();
  D6():
    deopt 25 [object17];
  L30(dx7):
    length = ldf length in base;
    r13 = dyn length(dx7);
    check L34() else D5();
  L31():
    dr6 = tryDispatchBuiltin.1("$", object14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L33() else L32(dr6);
  L32(object16):
    r12 = `$`(object16, <sym chunkout>);
    goto L30(r12);
  L36():
    object18 = force? object17;
    checkMissing(object18);
    c17 = `is.object`(object18);
    if c17 then L38() else L39(object18);
  D5():
    deopt 24 [r13];
  L33():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L30(dx6);
  L34():
    goto L5(r13);
  L37(dx9):
    s = toForSeq(dx9);
    l = length(s);
    i = 0;
    goto L7(i);
  L38():
    dr8 = tryDispatchBuiltin.1("$", object18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L40() else L39(dr8);
  L39(object20):
    r14 = `$`(object20, <sym chunkout>);
    goto L37(r14);
  L7(i1):
    i2 = `+`.1(i1, 1);
    c18 = `<`.1(l, i2);
    if c18 then L41() else L8();
  L40():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L37(dx8);
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st con = x;
    close1 = ldf close;
    check L42() else D7();
  L41():
    invisible.0();
    popenv;
    return i2;
  D7():
    deopt 29 [i2];
  L42():
    p1 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r16 = dyn close1(p1);
    check L43() else D8();
  D8():
    deopt 31 [i2, r16];
  L43():
    goto L7(i2);
  }
}