fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `model.matrix.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg names:cls, reg r4:V, reg match:cls, reg r5:V, reg c:L, reg object3:*, reg object4:V, reg c1:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n_match:*, reg n_match1:V, reg __:cls, reg r6:V, reg model_frame:cls, reg object7:*, reg object8:V, reg p:p(V +), reg object9:*, reg object10:V, reg c2:L, reg object12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p1:p(V +), reg ddd1:dots?, reg r10:V, reg exists:cls, reg r11:V, reg c3:L, reg NextMethod:cls, reg data:*, reg data1:V, reg p2:p(V +), reg object13:*, reg object14:V, reg c4:L, reg object16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg list:cls, reg ddd2:dots?, reg r18:V, reg l:*, reg c5:L, reg r20:dots, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r22:dots, reg dx7:V, reg r23:V, reg l3:*, reg c6:L, reg r25:dots, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r28:V, reg do_call:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg object17:*, reg object18:V, reg data2:*, reg data3:V, reg object19:*, reg object20:V, reg c7:L, reg object22:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r33:V, reg list1:cls, reg r34:V, reg dots:*, reg dots1:V, reg c8:cls, reg r35:V, reg p4:p(V +), reg r37:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st n_match = r1;
    c = `as.logical`(r1);
    if c then L13() else L2();
  L6():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r = dyn base("x", <lang names(object)>, 0);
    goto L0(r);
  L1(r3):
    match = ldf match in base;
    r5 = dyn match("x", r3, 0, NULL);
    check L12() else D2();
  L2():
    model_frame = ldf `model.frame`;
    check L20() else D5();
  L8():
    object1 = ld object;
    check L10() else D0();
  L9():
    r2 = dyn base1(<sym object>);
    goto L1(r2);
  L13():
    object3 = ld object;
    check L14() else D3();
  D0():
    deopt 5 [object1];
  D2():
    deopt 12 [r5];
  D3():
    deopt 14 [object3];
  D5():
    deopt 20 [];
  L10():
    object2 = force? object1;
    checkMissing(object2);
    names = ldf names in base;
    r4 = dyn names(object2);
    check L11() else D1();
  L12():
    goto L0(r5);
  L14():
    object4 = force? object3;
    checkMissing(object4);
    c1 = `is.object`(object4);
    if c1 then L15() else L16(object4);
  L20():
    p = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    p1 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c2 = `is.object`(object10);
      if c2 then L1() else L2(object10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object12):
      r8 = `$`(object12, <sym xlevels>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    ddd1 = ld `...`;
    r10 = dyn model_frame[, xlev, `...`](p, p1, ddd1);
    check L21() else D6();
  D1():
    deopt 8 [r4];
  D6():
    deopt 25 [r10];
  L3(dx1):
    popenv;
    return dx1;
  L11():
    goto L1(r4);
  L15():
    dr = tryDispatchBuiltin.1("[[", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(object6):
    n_match = ld n_match;
    check L18() else D4();
  L21():
    st data = r10;
    exists = ldf exists;
    check L22() else D7();
  D4():
    deopt 16 [object6, n_match];
  D7():
    deopt 28 [];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    n_match1 = force? n_match;
    __ = ldf `[[` in base;
    r6 = dyn __(object6, n_match1);
    goto L3(r6);
  L22():
    r11 = dyn exists[, inherits](".GenericCallEnv", FALSE);
    check L23() else D8();
  D8():
    deopt 32 [r11];
  L23():
    c3 = `as.logical`(r11);
    if c3 then L24() else L4();
  L4():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L24():
    NextMethod = ldf NextMethod;
    check L25() else D9();
  D9():
    deopt 34 [];
  L5(r17):
    st dots = r17;
    l = ld dots;
    c5 = `is.object`(l);
    if c5 then L33() else L34(NULL, l);
  L25():
    p2 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      return data1;
    };
    p3 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c4 = `is.object`(object14);
      if c4 then L1() else L2(object14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object16):
      r13 = `$`(object16, <sym contrasts>);
      goto L0(r13);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r15 = dyn NextMethod[, data, `contrasts.arg`]("model.matrix", p2, p3);
    check L26() else D10();
  L28():
    list = ldf list;
    check L30() else D11();
  L29():
    r16 = dyn base2(<sym ...>);
    goto L5(r16);
  D10():
    deopt 40 [r15];
  D11():
    deopt 43 [];
  L26():
    popenv;
    return r15;
  L30():
    ddd2 = ld `...`;
    r18 = dyn list[`...`](ddd2);
    check L31() else D12();
  L32(r22, dx7):
    st dots = dx7;
    l3 = ld dots;
    c6 = `is.object`(l3);
    if c6 then L37() else L38(r22, l3);
  L33():
    dr6 = tryDispatchBuiltin.0("$<-", l, NULL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(NULL, dr6);
  L34(r20, l2):
    r23 = `$<-`(l2, <sym contrasts.arg>, NULL);
    goto L32(r20, r23);
  D12():
    deopt 45 [r18];
  L31():
    goto L5(r18);
  L35():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L32(NULL, dx6);
  L36(dx9):
    st dots = dx9;
    do_call = ldf `do.call`;
    check L40() else D13();
  L37():
    dr8 = tryDispatchBuiltin.0("$<-", l3, r22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L39() else L38(r22, dr8);
  L38(r25, l5):
    r28 = `$<-`(l5, <sym data>, r22);
    goto L36(r28);
  D13():
    deopt 56 [];
  L39():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L36(dx8);
  L40():
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r30):
      return r30;
    L2():
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r29 = dyn base3(<lang list(object=object, data=data, contrasts.arg=`$`(object, contrasts))>, <sym dots>);
      goto L0(r29);
    L1(r32):
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      c8 = ldf c in base;
      r35 = dyn c8(r32, dots1);
      goto L0(r35);
    L4():
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      data2 = ld data;
      data3 = force? data2;
      checkMissing(data3);
      object19 = ld object;
      object20 = force? object19;
      checkMissing(object20);
      c7 = `is.object`(object20);
      if c7 then L7() else L8(object20);
    L5():
      r31 = dyn base4[object, data, `contrasts.arg`](<sym object>, <sym data>, <lang `$`(object, contrasts)>);
      goto L1(r31);
    L6(dx11):
      list1 = ldf list in base;
      r34 = dyn list1(object18, data3, dx11);
      goto L1(r34);
    L7():
      dr10 = tryDispatchBuiltin.1("$", object20);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L9() else L8(dr10);
    L8(object22):
      r33 = `$`(object22, <sym contrasts>);
      goto L6(r33);
    L9():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L6(dx10);
    };
    r37 = dyn do_call("model.matrix.default", p4);
    check L41() else D14();
  D14():
    deopt 59 [r37];
  L41():
    popenv;
    return r37;
  }
}