fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `df.residual.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg w:*, reg w1:V, reg c1:V, reg r3:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg w2:*, reg w3:V, reg r6:V, reg sum:cls, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r11:V, reg dx8:cls, reg r12:V, reg length:cls, reg r13:V, reg n:*, reg n1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg n4:V, reg r15:V, reg coef:cls, reg object9:*, reg object10:V, reg p:p(V +), reg r17:V, reg length1:cls, reg r18:V, reg r19:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    object1 = ld object;
    check L5() else D0();
  D0():
    deopt 0 [object1];
  L5():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L7() else L8(object2);
  L6(dx1):
    st w = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L7():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(object4):
    r = `$`(object4, <sym weights>);
    goto L6(r);
  L0(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L13() else L1();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    w = ld w;
    check L12() else D1();
  L11():
    r1 = dyn base(<sym w>);
    goto L0(r1);
  D1():
    deopt 5 [w];
  L1():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L3(r8):
    st n = r8;
    n = ld n;
    check L32() else D7();
  L12():
    w1 = force? w;
    checkMissing(w1);
    c1 = `==`(w1, NULL);
    goto L0(c1);
  L13():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D7():
    deopt 28 [n];
  L2(r5):
    goto L3(r5);
  L14():
    w2 = ld w;
    check L16() else D2();
  L15():
    r4 = dyn base1(<lang `!=`(w, 0.0)>);
    goto L2(r4);
  L19():
    object5 = ld object;
    check L21() else D4();
  L20():
    r9 = dyn base2(<lang `$`(`$`(object, m), resid)()>);
    goto L3(r9);
  L32():
    n1 = force? n;
    checkMissing(n1);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  D2():
    deopt 11 [w2];
  D4():
    deopt 19 [object5];
  L4(n4, r15):
    r19 = `-`(n4, r15);
    popenv;
    return r19;
  L16():
    w3 = force? w2;
    checkMissing(w3);
    r6 = `!=`(w3, 0.0);
    sum = ldf sum in base;
    r7 = dyn sum(r6);
    check L17() else D3();
  L21():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L23() else L24(object6);
  L33():
    coef = ldf coef;
    check L35() else D8();
  L34():
    r14 = dyn base3(<lang coef(object)>);
    goto L4(n1, r14);
  D3():
    deopt 16 [r7];
  D8():
    deopt 32 [n1];
  L17():
    goto L2(r7);
  L22(dx3):
    c4 = `is.object`(dx3);
    if c4 then L27() else L28(dx3);
  L23():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(object8):
    r10 = `$`(object8, <sym m>);
    goto L22(r10);
  L35():
    p = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r17 = dyn coef(p);
    check L36() else D9();
  D9():
    deopt 34 [n1, r17];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx2);
  L26(dx7):
    checkFun.0(dx7);
    dx8 = dx7 as cls;
    r12 = dyn dx8();
    check L30() else D5();
  L27():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dr4);
  L28(dx5):
    r11 = `$`(dx5, <sym resid>);
    goto L26(r11);
  L36():
    length1 = ldf length in base;
    r18 = dyn length1(r17);
    check L37() else D10();
  D5():
    deopt 24 [r12];
  D10():
    deopt 36 [n1, r18];
  L29():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx6);
  L30():
    length = ldf length in base;
    r13 = dyn length(r12);
    check L31() else D6();
  L37():
    goto L4(n1, r18);
  D6():
    deopt 26 [r13];
  L31():
    goto L3(r13);
  }
}