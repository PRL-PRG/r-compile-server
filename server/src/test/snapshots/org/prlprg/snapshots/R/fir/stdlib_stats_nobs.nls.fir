fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `nobs.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r6:V, reg dx8:cls, reg r7:V, reg length:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg w:*, reg w1:V, reg r11:V, reg sum:cls, reg r12:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L11() else L1();
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(w, `$`(object, weights))>);
    goto L0(r);
  D0():
    deopt 1 [object1];
  L1():
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L6():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L8() else L9(object2);
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(r4):
    popenv;
    return r4;
  L3(r10):
    popenv;
    return r10;
  L7(dx1):
    st w = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L8():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(object4):
    r2 = `$`(object4, <sym weights>);
    goto L7(r2);
  L12():
    object5 = ld object;
    check L14() else D1();
  L13():
    r3 = dyn base1(<lang `$`(`$`(object, m), resid)()>);
    goto L2(r3);
  L26():
    w = ld w;
    check L28() else D4();
  L27():
    r9 = dyn base2(<lang `!=`(w, 0.0)>);
    goto L3(r9);
  D1():
    deopt 8 [object5];
  D4():
    deopt 18 [w];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L14():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L16() else L17(object6);
  L28():
    w1 = force? w;
    checkMissing(w1);
    r11 = `!=`(w1, 0.0);
    sum = ldf sum in base;
    r12 = dyn sum(r11);
    check L29() else D5();
  D5():
    deopt 23 [r12];
  L15(dx3):
    c4 = `is.object`(dx3);
    if c4 then L20() else L21(dx3);
  L16():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(object8):
    r5 = `$`(object8, <sym m>);
    goto L15(r5);
  L29():
    goto L3(r12);
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L19(dx7):
    checkFun.0(dx7);
    dx8 = dx7 as cls;
    r7 = dyn dx8();
    check L23() else D2();
  L20():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(dx5):
    r6 = `$`(dx5, <sym resid>);
    goto L19(r6);
  D2():
    deopt 13 [r7];
  L22():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx6);
  L23():
    length = ldf length in base;
    r8 = dyn length(r7);
    check L24() else D3();
  D3():
    deopt 15 [r8];
  L24():
    goto L2(r8);
  }
}