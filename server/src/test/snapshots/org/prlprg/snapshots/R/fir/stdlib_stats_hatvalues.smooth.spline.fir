fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058661841;
    st `hatvalues.smooth.spline` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058661841(model, `...`) {
  (reg model:*, reg ddd:dots) -+> V { var model:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg model1:*, reg model2:V, reg c:L, reg model4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg is_list:cls, reg r3:V, reg r4:V, reg c1:L, reg stop:cls, reg r5:V, reg model5:*, reg model6:V, reg c2:L, reg model8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg l:*, reg c3:L, reg r9:R, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg hat:*, reg hat1:V, reg _Machine:*, reg _Machine1:V, reg c4:L, reg r16:R, reg l4:*, reg r17:R, reg hat3:V, reg r18:R, reg r19:R, reg _Machine3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r24:R, reg l6:*, reg r25:R, reg hat5:V, reg r26:R, reg r27:R, reg dx7:V, reg r28:V, reg r29:V, reg r30:V, reg r31:V, reg ___:cls, reg r32:V, reg hat6:*, reg hat7:V, reg c5:L, reg hat9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg hat12:V, reg r34:V, reg dat:*, reg dat1:V, reg c6:L, reg hat14:V, reg dat3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg hat16:V, reg dx11:V, reg r35:V, reg model9:*, reg model10:V, reg c7:L, reg hat18:V, reg model12:V, reg dr12:V, reg dc6:L, reg dx12:V, reg hat20:V, reg dx13:V, reg r36:V, reg match:cls, reg r37:V, reg __:cls, reg r38:V |
    mkenv;
    st model = model;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L14() else L1();
  L6():
    model1 = ld model;
    check L8() else D0();
  L7():
    r = dyn base(<lang `<-`(dat, `$`(model, data))>);
    goto L0(r);
  D0():
    deopt 2 [model1];
  L1():
    goto L2();
  L2():
    model5 = ld model;
    check L18() else D4();
  L8():
    model2 = force? model1;
    checkMissing(model2);
    c = `is.object`(model2);
    if c then L10() else L11(model2);
  L14():
    stop = ldf stop;
    check L15() else D2();
  D2():
    deopt 10 [];
  D4():
    deopt 15 [model5];
  L9(dx1):
    st dat = dx1;
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(dx1);
    check L13() else D1();
  L10():
    dr = tryDispatchBuiltin.1("$", model2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(model4):
    r2 = `$`(model4, <sym data>);
    goto L9(r2);
  L15():
    r5 = dyn stop("need result of smooth.spline(keep.data = TRUE)");
    check L16() else D3();
  L18():
    model6 = force? model5;
    checkMissing(model6);
    c2 = `is.object`(model6);
    if c2 then L20() else L21(model6);
  D1():
    deopt 7 [r3];
  D3():
    deopt 12 [r5];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    goto L0(r3);
  L16():
    goto L2();
  L19(dx3):
    st hat = dx3;
    l = ld hat;
    c3 = `is.object`(l);
    if c3 then L23() else L24(1.0, l);
  L20():
    dr2 = tryDispatchBuiltin.1("$", model6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(model8):
    r7 = `$`(model8, <sym lev>);
    goto L19(r7);
  L3(dx5):
    st hat = dx5;
    hat6 = ld hat;
    check L32() else D7();
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L23():
    dr4 = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(1.0, dr4);
  L24(r9, l2):
    hat = ld hat;
    check L26() else D5();
  D5():
    deopt 22 [r9, l2, 1.0, hat];
  D7():
    deopt 33 [hat6];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L26():
    hat1 = force? hat;
    checkMissing(hat1);
    _Machine = ld `.Machine`;
    check L27() else D6();
  L32():
    hat7 = force? hat6;
    checkMissing(hat7);
    c5 = `is.object`(hat7);
    if c5 then L33() else L34(hat7);
  D6():
    deopt 25 [r9, l2, 1.0, hat1, 1.0, 10.0, _Machine];
  L4(dx9):
    popenv;
    return dx9;
  L27():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c4 = `is.object`(_Machine1);
    if c4 then L29() else L30(r9, l2, 1.0, hat1, 1.0, 10.0, _Machine1);
  L33():
    dr8 = tryDispatchBuiltin.1("[", hat7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L35() else L34(dr8);
  L34(hat9):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L5(hat12, r34):
    __ = ldf `[` in base;
    r38 = dyn __(hat12, r34);
    goto L4(r38);
  L28(r24, l6, r25, hat5, r26, r27, dx7):
    r29 = `*`(r27, dx7);
    r30 = `-`(r26, r29);
    r31 = `>`(hat5, r30);
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l6, r25, r31);
    goto L3(r32);
  L29():
    dr6 = tryDispatchBuiltin.1("$", _Machine1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(r9, l2, 1.0, hat1, 1.0, 10.0, dr6);
  L30(r16, l4, r17, hat3, r18, r19, _Machine3):
    r28 = `$`(_Machine3, <sym double.eps>);
    goto L28(r16, l4, r17, hat3, r18, r19, r28);
  L35():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx8);
  L36():
    dat = ld dat;
    check L38() else D8();
  L37():
    r33 = dyn base1(<lang `$`(dat, x)>, <lang `$`(model, x)>);
    goto L5(hat9, r33);
  D8():
    deopt 37 [hat9, dat];
  L31():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L28(r9, l2, 1.0, hat1, 1.0, 10.0, dx6);
  L38():
    dat1 = force? dat;
    checkMissing(dat1);
    c6 = `is.object`(dat1);
    if c6 then L40() else L41(hat9, dat1);
  L39(hat16, dx11):
    model9 = ld model;
    check L43() else D9();
  L40():
    dr10 = tryDispatchBuiltin.1("$", dat1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L42() else L41(hat9, dr10);
  L41(hat14, dat3):
    r35 = `$`(dat3, <sym x>);
    goto L39(hat14, r35);
  D9():
    deopt 40 [hat16, model9];
  L42():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L39(hat9, dx10);
  L43():
    model10 = force? model9;
    checkMissing(model10);
    c7 = `is.object`(model10);
    if c7 then L45() else L46(hat16, model10);
  L44(hat20, dx13):
    match = ldf match in base;
    r37 = dyn match(dx11, dx13, NA_INT, NULL);
    check L48() else D10();
  L45():
    dr12 = tryDispatchBuiltin.1("$", model10);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L47() else L46(hat16, dr12);
  L46(hat18, model12):
    r36 = `$`(model12, <sym x>);
    goto L44(hat18, r36);
  D10():
    deopt 46 [hat20, r37];
  L47():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L44(hat16, dx12);
  L48():
    goto L5(hat20, r37);
  }
}