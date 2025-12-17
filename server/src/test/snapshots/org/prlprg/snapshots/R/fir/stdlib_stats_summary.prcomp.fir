fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.prcomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg chkDots:cls, reg ddd1:dots?, reg r:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg r2:V, reg vars:*, reg vars1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg vars4:V, reg r4:V, reg vars5:*, reg vars6:V, reg sum:cls, reg r5:V, reg r6:V, reg rbind:cls, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg round:cls, reg r11:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg round1:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg ncol:cls, reg object9:*, reg object10:V, reg c2:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r18:V, reg p3:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg colnames:cls, reg object13:*, reg object14:V, reg c3:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r23:V, reg p4:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg rep:cls, reg r28:V, reg c4:cls, reg r29:V, reg l:*, reg colnames__:cls, reg r30:V, reg importance:*, reg importance1:V, reg l1:*, reg c5:L, reg importance3:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r31:V, reg l4:*, reg class__:cls, reg r32:V, reg object17:*, reg object18:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    chkDots = ldf chkDots;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    ddd1 = ld `...`;
    r = dyn chkDots[`...`](ddd1);
    check L4() else D1();
  D1():
    deopt 3 [r];
  L4():
    object1 = ld object;
    check L5() else D2();
  D2():
    deopt 4 [object1];
  L5():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L7() else L8(object2);
  L6(dx1):
    r2 = `^`(dx1, 2.0);
    st vars = r2;
    vars = ld vars;
    check L10() else D3();
  L7():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(object4):
    r1 = `$`(object4, <sym sdev>);
    goto L6(r1);
  D3():
    deopt 10 [vars];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    vars1 = force? vars;
    checkMissing(vars1);
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(vars4, r4):
    r6 = `/`(vars4, r4);
    st vars = r6;
    rbind = ldf rbind;
    check L15() else D6();
  L11():
    vars5 = ld vars;
    check L13() else D4();
  L12():
    r3 = dyn base(<sym vars>);
    goto L0(vars1, r3);
  D4():
    deopt 13 [vars1, vars5];
  D6():
    deopt 20 [];
  L13():
    vars6 = force? vars5;
    checkMissing(vars6);
    sum = ldf sum in base;
    r5 = dyn sum(vars6);
    check L14() else D5();
  L15():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c1 = `is.object`(object6);
      if c1 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r7 = `$`(object8, <sym sdev>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      sym1 = ldf round;
      base1 = ldf round in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      round = ldf round in base;
      r11 = dyn round(<sym vars>, 5.0);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym vars>, 5.0);
      goto L0(r9);
    };
    p2 = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      round1 = ldf round in base;
      r15 = dyn round1(<lang cumsum(vars)>, 5.0);
      goto L0(r15);
    L2():
      r13 = dyn base2(<lang cumsum(vars)>, 5.0);
      goto L0(r13);
    };
    r17 = dyn rbind[`Standard deviation`, `Proportion of Variance`, `Cumulative Proportion`](p, p1, p2);
    check L16() else D7();
  D5():
    deopt 16 [vars1, r5];
  D7():
    deopt 27 [r17];
  L14():
    goto L0(vars1, r5);
  L16():
    st importance = r17;
    ncol = ldf ncol;
    check L17() else D8();
  D8():
    deopt 30 [];
  L17():
    p3 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c2 = `is.object`(object10);
      if c2 then L1() else L2(object10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object12):
      r18 = `$`(object12, <sym rotation>);
      goto L0(r18);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r20 = dyn ncol(p3);
    check L18() else D9();
  D9():
    deopt 32 [r20];
  L18():
    st k = r20;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L1(r22):
    l = ld importance;
    colnames__ = ldf `colnames<-`;
    check L26() else D13();
  L19():
    colnames = ldf colnames;
    check L21() else D10();
  L20():
    r21 = dyn base3(<lang colnames(`$`(object, rotation))>, <lang rep("", `-`(length(vars), k))>);
    goto L1(r21);
  D10():
    deopt 37 [];
  D13():
    deopt 46 [r22, l, r22];
  L21():
    p4 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c3 = `is.object`(object14);
      if c3 then L1() else L2(object14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object16):
      r23 = `$`(object16, <sym rotation>);
      goto L0(r23);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r25 = dyn colnames(p4);
    check L22() else D11();
  L26():
    r30 = dyn colnames__(l, NULL, r22);
    check L27() else D14();
  D11():
    deopt 39 [r25];
  D14():
    deopt 48 [r22, r30];
  L22():
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L27():
    st importance = r30;
    importance = ld importance;
    check L28() else D15();
  D15():
    deopt 50 [importance];
  L2(r27):
    c4 = ldf c in base;
    r29 = dyn c4(r25, r27);
    check L25() else D12();
  L23():
    rep = ldf rep in base;
    r28 = dyn rep("", <lang `-`(length(vars), k)>);
    goto L2(r28);
  L24():
    r26 = dyn base4("", <lang `-`(length(vars), k)>);
    goto L2(r26);
  L28():
    importance1 = force? importance;
    checkMissing(importance1);
    l1 = ld object;
    c5 = `is.object`(l1);
    if c5 then L30() else L31(importance1, l1);
  D12():
    deopt 44 [r29];
  L25():
    goto L1(r29);
  L29(dx9):
    st object = dx9;
    l4 = ld object;
    class__ = ldf `class<-`;
    check L33() else D16();
  L30():
    dr8 = tryDispatchBuiltin.0("$<-", l1, importance1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L32() else L31(importance1, dr8);
  L31(importance3, l3):
    r31 = `$<-`(l3, <sym importance>, importance1);
    goto L29(r31);
  D16():
    deopt 58 ["summary.prcomp", l4, "summary.prcomp"];
  L32():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L29(dx8);
  L33():
    r32 = dyn class__(l4, NULL, "summary.prcomp");
    check L34() else D17();
  D17():
    deopt 60 ["summary.prcomp", r32];
  L34():
    st object = r32;
    object17 = ld object;
    check L35() else D18();
  D18():
    deopt 62 [object17];
  L35():
    object18 = force? object17;
    checkMissing(object18);
    popenv;
    return object18;
  }
}