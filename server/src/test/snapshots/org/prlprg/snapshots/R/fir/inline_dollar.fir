fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg list1:cls, reg r5:V, reg xs:*, reg xs1:V, reg c:L, reg xs3:V, reg dr:V, reg dc:L, reg dx:V, reg r6:V, reg xs4:*, reg xs5:V, reg c1:L, reg xs7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r7:V, reg xs8:*, reg xs9:V, reg c2:L, reg xs11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg c3:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg r9:V, reg xs12:*, reg xs13:V, reg c4:L, reg xs15:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r10:V, reg c5:L, reg dx13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg r11:V, reg xs16:*, reg xs17:V, reg c6:L, reg xs19:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r12:V, reg c7:L, reg dx19:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r13:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st xs = r1;
    xs = ld xs;
    check L8() else D2();
  L2():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base[a, b](1.0, <lang list(c=2.0)>);
    goto L0(r);
  D2():
    deopt 14 [xs];
  L1(r3):
    list1 = ldf list in base;
    r5 = dyn list1(1.0, r3);
    check L7() else D1();
  L4():
    list = ldf list in base;
    r4 = dyn list(2.0);
    check L6() else D0();
  L5():
    r2 = dyn base1[c](2.0);
    goto L1(r2);
  L8():
    xs1 = force? xs;
    checkMissing(xs1);
    c = `is.object`(xs1);
    if c then L10() else L11(xs1);
  D0():
    deopt 9 [r4];
  D1():
    deopt 12 [r5];
  L6():
    goto L1(r4);
  L7():
    goto L0(r5);
  L9():
    xs4 = ld xs;
    check L13() else D3();
  L10():
    dr = tryDispatchBuiltin.1("$", xs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(xs3):
    r6 = `$`(xs3, <sym a>);
    goto L9();
  D3():
    deopt 17 [xs4];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9();
  L13():
    xs5 = force? xs4;
    checkMissing(xs5);
    c1 = `is.object`(xs5);
    if c1 then L15() else L16(xs5);
  L14():
    xs8 = ld xs;
    check L18() else D4();
  L15():
    dr2 = tryDispatchBuiltin.1("$", xs5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(xs7):
    r7 = `$`(xs7, <sym a>);
    goto L14();
  D4():
    deopt 20 [xs8];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14();
  L18():
    xs9 = force? xs8;
    checkMissing(xs9);
    c2 = `is.object`(xs9);
    if c2 then L20() else L21(xs9);
  L19(dx5):
    c3 = `is.object`(dx5);
    if c3 then L24() else L25(dx5);
  L20():
    dr4 = tryDispatchBuiltin.1("$", xs9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(xs11):
    r8 = `$`(xs11, <sym b>);
    goto L19(r8);
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L23():
    xs12 = ld xs;
    check L27() else D5();
  L24():
    dr6 = tryDispatchBuiltin.1("$", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L26() else L25(dr6);
  L25(dx7):
    r9 = `$`(dx7, <sym c>);
    goto L23();
  D5():
    deopt 24 [xs12];
  L26():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L23();
  L27():
    xs13 = force? xs12;
    checkMissing(xs13);
    c4 = `is.object`(xs13);
    if c4 then L29() else L30(xs13);
  L28(dx11):
    c5 = `is.object`(dx11);
    if c5 then L33() else L34(dx11);
  L29():
    dr8 = tryDispatchBuiltin.1("$", xs13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L31() else L30(dr8);
  L30(xs15):
    r10 = `$`(xs15, <sym b>);
    goto L28(r10);
  L31():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L28(dx10);
  L32():
    xs16 = ld xs;
    check L36() else D6();
  L33():
    dr10 = tryDispatchBuiltin.1("$", dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L35() else L34(dr10);
  L34(dx13):
    r11 = `$`(dx13, <sym c>);
    goto L32();
  D6():
    deopt 28 [xs16];
  L35():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L32();
  L36():
    xs17 = force? xs16;
    checkMissing(xs17);
    c6 = `is.object`(xs17);
    if c6 then L38() else L39(xs17);
  L37(dx17):
    c7 = `is.object`(dx17);
    if c7 then L42() else L43(dx17);
  L38():
    dr12 = tryDispatchBuiltin.1("$", xs17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L40() else L39(dr12);
  L39(xs19):
    r12 = `$`(xs19, <sym b>);
    goto L37(r12);
  L40():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L37(dx16);
  L41(dx21):
    popenv;
    return dx21;
  L42():
    dr14 = tryDispatchBuiltin.1("$", dx17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L44() else L43(dr14);
  L43(dx19):
    r13 = `$`(dx19, <sym c>);
    goto L41(r13);
  L44():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L41(dx20);
  }
}