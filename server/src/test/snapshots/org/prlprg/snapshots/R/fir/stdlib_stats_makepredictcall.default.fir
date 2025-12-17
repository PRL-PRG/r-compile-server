fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3784084085;
    st `makepredictcall.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3784084085(var, call) {
  (reg var:*, reg call:*) -+> V { var var:*, var call:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg call1:*, reg call2:V, reg as_character:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg r6:V, reg c1:L, reg call3:*, reg call4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg var1:*, reg var2:V, reg attr:cls, reg r13:V, reg c2:V, reg r14:V, reg c3:L, reg z:*, reg z1:V, reg l:*, reg c4:L, reg z3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg z5:V, reg dx3:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg var3:*, reg var4:V, reg attr1:cls, reg r20:V, reg c5:V, reg r21:V, reg c6:L, reg z7:*, reg z8:V, reg l3:*, reg c7:L, reg z10:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg z12:V, reg dx5:V, reg r22:V, reg call5:*, reg call6:V |
    mkenv;
    st var = var;
    st call = call;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    c = `is.object`(r1);
    if c then L16() else L17(r1);
  L12():
    call1 = ld call;
    check L14() else D0();
  L13():
    r = dyn base(<sym call>);
    goto L0(r);
  D0():
    deopt 2 [call1];
  L1(dx1):
    r6 = `!=`(dx1, "scale");
    c1 = `as.logical`(r6);
    if c1 then L19() else L2();
  L14():
    call2 = force? call1;
    checkMissing(call2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(call2);
    check L15() else D1();
  L16():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r4):
    __ = ldf `[` in base;
    r5 = dyn __(r4, 1);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  L2():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L15():
    goto L0(r2);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L19():
    call3 = ld call;
    check L20() else D2();
  D2():
    deopt 11 [call3];
  L4(r10):
    r14 = `!`(r10);
    c3 = `as.logical`(r14);
    if c3 then L29() else L6();
  L20():
    call4 = force? call3;
    checkMissing(call4);
    popenv;
    return call4;
  L23():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L24():
    r9 = dyn base1(<lang `<-`(z, attr(var, "scaled:center"))>);
    goto L4(r9);
  L5(r12):
    st z = r12;
    c2 = `==`(r12, NULL);
    goto L4(c2);
  L6():
    goto L7();
  L7():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L25():
    var1 = ld var;
    check L27() else D3();
  L26():
    r11 = dyn base2(<sym var>, "scaled:center");
    goto L5(r11);
  L29():
    z = ld z;
    check L30() else D5();
  D3():
    deopt 19 [var1];
  D5():
    deopt 27 [z];
  L8(r17):
    r21 = `!`(r17);
    c6 = `as.logical`(r21);
    if c6 then L42() else L10();
  L27():
    var2 = force? var1;
    checkMissing(var2);
    attr = ldf attr in base;
    r13 = dyn attr(var2, "scaled:center");
    check L28() else D4();
  L30():
    z1 = force? z;
    checkMissing(z1);
    l = ld call;
    c4 = `is.object`(l);
    if c4 then L32() else L33(z1, l);
  L36():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L37():
    r16 = dyn base3(<lang `<-`(z, attr(var, "scaled:scale"))>);
    goto L8(r16);
  D4():
    deopt 23 [r13];
  L9(r19):
    st z = r19;
    c5 = `==`(r19, NULL);
    goto L8(c5);
  L10():
    goto L11();
  L11():
    call5 = ld call;
    check L49() else D9();
  L28():
    goto L5(r13);
  L31(z5, dx3):
    st call = dx3;
    goto L7();
  L32():
    dr2 = tryDispatchBuiltin.0("$<-", l, z1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(z1, dr2);
  L33(z3, l2):
    r15 = `$<-`(l2, <sym center>, z1);
    goto L31(z3, r15);
  L38():
    var3 = ld var;
    check L40() else D6();
  L39():
    r18 = dyn base4(<sym var>, "scaled:scale");
    goto L9(r18);
  L42():
    z7 = ld z;
    check L43() else D8();
  D6():
    deopt 37 [var3];
  D8():
    deopt 45 [z7];
  D9():
    deopt 52 [call5];
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(z1, dx2);
  L40():
    var4 = force? var3;
    checkMissing(var4);
    attr1 = ldf attr in base;
    r20 = dyn attr1(var4, "scaled:scale");
    check L41() else D7();
  L43():
    z8 = force? z7;
    checkMissing(z8);
    l3 = ld call;
    c7 = `is.object`(l3);
    if c7 then L45() else L46(z8, l3);
  L49():
    call6 = force? call5;
    checkMissing(call6);
    popenv;
    return call6;
  D7():
    deopt 41 [r20];
  L41():
    goto L9(r20);
  L44(z12, dx5):
    st call = dx5;
    goto L11();
  L45():
    dr4 = tryDispatchBuiltin.0("$<-", l3, z8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(z8, dr4);
  L46(z10, l5):
    r22 = `$<-`(l5, <sym scale>, z8);
    goto L44(z10, r22);
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L44(z8, dx4);
  }
}