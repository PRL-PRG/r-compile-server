fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `nobs.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg w:*, reg w1:V, reg r6:V, reg sum:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg length:cls, reg r11:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L11() else L1();
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(w, `$`(object, prior.weights))>);
    goto L0(r);
  D0():
    deopt 1 [object1];
  L1():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L6():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L8() else L9(object2);
  L11():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(r5):
    popenv;
    return r5;
  L3(r9):
    popenv;
    return r9;
  L7(dx1):
    st w = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L8():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(object4):
    r2 = `$`(object4, <sym prior.weights>);
    goto L7(r2);
  L12():
    w = ld w;
    check L14() else D1();
  L13():
    r4 = dyn base1(<lang `!=`(w, 0.0)>);
    goto L2(r4);
  L17():
    object5 = ld object;
    check L19() else D3();
  L18():
    r8 = dyn base2(<lang `$`(object, residuals)>);
    goto L3(r8);
  D1():
    deopt 9 [w];
  D3():
    deopt 17 [object5];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L14():
    w1 = force? w;
    checkMissing(w1);
    r6 = `!=`(w1, 0.0);
    sum = ldf sum in base;
    r7 = dyn sum(r6);
    check L15() else D2();
  L19():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L21() else L22(object6);
  D2():
    deopt 14 [r7];
  L15():
    goto L2(r7);
  L20(dx3):
    length = ldf length in base;
    r11 = dyn length(dx3);
    check L24() else D4();
  L21():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(object8):
    r10 = `$`(object8, <sym residuals>);
    goto L20(r10);
  D4():
    deopt 21 [r11];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L24():
    goto L3(r11);
  }
}