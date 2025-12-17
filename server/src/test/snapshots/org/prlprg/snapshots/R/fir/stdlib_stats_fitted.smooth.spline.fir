fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `fitted.smooth.spline` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg is_list:cls, reg r3:V, reg r4:V, reg c1:L, reg stop:cls, reg r5:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg c3:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg dx10:V, reg r9:V, reg dat:*, reg dat1:V, reg c4:L, reg dx12:V, reg dat3:V, reg dr6:V, reg dc3:L, reg dx14:V, reg dx15:V, reg dx16:V, reg r10:V, reg object9:*, reg object10:V, reg c5:L, reg dx18:V, reg object12:V, reg dr8:V, reg dc4:L, reg dx20:V, reg dx21:V, reg dx22:V, reg r11:V, reg match:cls, reg r12:V, reg __:cls, reg r13:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L13() else L1();
  L5():
    object1 = ld object;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(dat, `$`(object, data))>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    goto L2();
  L2():
    object5 = ld object;
    check L17() else D4();
  L7():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L9() else L10(object2);
  L13():
    stop = ldf stop;
    check L14() else D2();
  D2():
    deopt 10 [];
  D4():
    deopt 15 [object5];
  L8(dx1):
    st dat = dx1;
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(dx1);
    check L12() else D1();
  L9():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(object4):
    r2 = `$`(object4, <sym data>);
    goto L8(r2);
  L14():
    r5 = dyn stop("need result of smooth.spline(keep.data = TRUE)");
    check L15() else D3();
  L17():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L19() else L20(object6);
  D1():
    deopt 7 [r3];
  D3():
    deopt 12 [r5];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    goto L0(r3);
  L15():
    goto L2();
  L18(dx3):
    c3 = `is.object`(dx3);
    if c3 then L22() else L23(dx3);
  L19():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(object8):
    r7 = `$`(object8, <sym y>);
    goto L18(r7);
  L3(dx7):
    popenv;
    return dx7;
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L22():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dr4);
  L23(dx5):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L4(dx10, r9):
    __ = ldf `[` in base;
    r13 = dyn __(dx10, r9);
    goto L3(r13);
  L24():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx6);
  L25():
    dat = ld dat;
    check L27() else D5();
  L26():
    r8 = dyn base1(<lang `$`(dat, x)>, <lang `$`(object, x)>);
    goto L4(dx5, r8);
  D5():
    deopt 20 [dx5, dat];
  L27():
    dat1 = force? dat;
    checkMissing(dat1);
    c4 = `is.object`(dat1);
    if c4 then L29() else L30(dx5, dat1);
  L28(dx15, dx16):
    object9 = ld object;
    check L32() else D6();
  L29():
    dr6 = tryDispatchBuiltin.1("$", dat1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(dx5, dr6);
  L30(dx12, dat3):
    r10 = `$`(dat3, <sym x>);
    goto L28(dx12, r10);
  D6():
    deopt 23 [dx15, object9];
  L31():
    dx14 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx5, dx14);
  L32():
    object10 = force? object9;
    checkMissing(object10);
    c5 = `is.object`(object10);
    if c5 then L34() else L35(dx15, object10);
  L33(dx21, dx22):
    match = ldf match in base;
    r12 = dyn match(dx16, dx22, NA_INT, NULL);
    check L37() else D7();
  L34():
    dr8 = tryDispatchBuiltin.1("$", object10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L36() else L35(dx15, dr8);
  L35(dx18, object12):
    r11 = `$`(object12, <sym x>);
    goto L33(dx18, r11);
  D7():
    deopt 29 [dx21, r12];
  L36():
    dx20 = getTryDispatchBuiltinValue(dr8);
    goto L33(dx15, dx20);
  L37():
    goto L4(dx21, r12);
  }
}