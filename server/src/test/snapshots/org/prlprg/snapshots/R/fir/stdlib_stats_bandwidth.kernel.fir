fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2649136551;
    st `bandwidth.kernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg k1:*, reg k2:V, reg c:L, reg k4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg k5:*, reg k6:V, reg c1:L, reg r3:V, reg k8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r5:V, reg dx3:V, reg r6:V, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg i:*, reg i1:V, reg r12:V, reg r13:V, reg k9:*, reg k10:V, reg c2:L, reg r15:V, reg k12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r17:V, reg dx5:V, reg i2:*, reg i3:V, reg __:cls, reg r18:V, reg r19:V, reg sum:cls, reg r20:V, reg r21:V |
    mkenv;
    st k = k;
    k1 = ld k;
    check L3() else D0();
  D0():
    deopt 0 [k1];
  L3():
    k2 = force? k1;
    checkMissing(k2);
    c = `is.object`(k2);
    if c then L5() else L6(k2);
  L4(dx1):
    r1 = `-`(<missing>, dx1);
    k5 = ld k;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("$", k2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(k4):
    r = `$`(k4, <sym m>);
    goto L4(r);
  D1():
    deopt 3 [r1, k5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    k6 = force? k5;
    checkMissing(k6);
    c1 = `is.object`(k6);
    if c1 then L10() else L11(r1, k6);
  L9(r5, dx3):
    r7 = `:`(r5, dx3);
    st i = r7;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L10():
    dr2 = tryDispatchBuiltin.1("$", k6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(r1, dr2);
  L11(r3, k8):
    r6 = `$`(k8, <sym m>);
    goto L9(r3, r6);
  L0(r9):
    popenv;
    return r9;
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(r1, dx2);
  L13():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L14():
    r8 = dyn base(<lang sum(`*`(`(`(`+`(`/`(1.0, 12.0), `^`(i, 2.0))), `[`(k, i)))>);
    goto L0(r8);
  L1(r11):
    r21 = sqrt(r11);
    goto L0(r21);
  L15():
    i = ld i;
    check L17() else D2();
  L16():
    r10 = dyn base1(<lang `*`(`(`(`+`(`/`(1.0, 12.0), `^`(i, 2.0))), `[`(k, i))>);
    goto L1(r10);
  D2():
    deopt 12 [0.08333333333333333, i];
  L17():
    i1 = force? i;
    checkMissing(i1);
    r12 = `^`(i1, 2.0);
    r13 = `+`(0.08333333333333333, r12);
    k9 = ld k;
    check L18() else D3();
  D3():
    deopt 16 [r13, k9];
  L18():
    k10 = force? k9;
    checkMissing(k10);
    c2 = `is.object`(k10);
    if c2 then L19() else L20(r13, k10);
  L2(r17, dx5):
    r19 = `*`(r17, dx5);
    sum = ldf sum in base;
    r20 = dyn sum(r19);
    check L23() else D5();
  L19():
    dr4 = tryDispatchBuiltin.1("[", k10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L21() else L20(r13, dr4);
  L20(r15, k12):
    i2 = ld i;
    check L22() else D4();
  D4():
    deopt 18 [r15, k12, i2];
  D5():
    deopt 23 [r20];
  L21():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(r13, dx4);
  L22():
    i3 = force? i2;
    __ = ldf `[` in base;
    r18 = dyn __(k12, i3);
    goto L2(r15, r18);
  L23():
    goto L1(r20);
  }
}