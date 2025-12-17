fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `tsSmooth.StructTS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg KalmanSmooth:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg p2:p(V +), reg r5:V, reg c2:L, reg r7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg fitted:cls, reg object9:*, reg object10:V, reg p3:p(V +), reg r12:V, reg dim:cls, reg r13:V, reg res:*, reg res1:V, reg c3:L, reg res3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg dn:*, reg dn1:V, reg c4:L, reg res5:V, reg r15:I, reg dn3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r17:I, reg dx9:V, reg __:cls, reg r18:V, reg r19:V, reg __1:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg fitted1:cls, reg object11:*, reg object12:V, reg p4:p(V +), reg r24:V, reg dimnames:cls, reg r25:V, reg l:*, reg dimnames__:cls, reg r26:V, reg ts:cls, reg res8:*, reg res9:V, reg p5:p(V +), reg object13:*, reg object14:V, reg c5:L, reg object16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r28:V, reg c6:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __2:cls, reg r29:V, reg p6:p(V +), reg object17:*, reg object18:V, reg c7:L, reg object20:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r31:V, reg c8:L, reg dx19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg __3:cls, reg r32:V, reg p7:p(V +), reg r34:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    KalmanSmooth = ldf KalmanSmooth;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym data>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
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
      r2 = `$`(object8, <sym model0>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      return -1.0;
    };
    r5 = dyn KalmanSmooth(p, p1, p2);
    check L5() else D1();
  D1():
    deopt 5 [r5];
  L5():
    c2 = `is.object`(r5);
    if c2 then L7() else L8(r5);
  L6(dx5):
    st res = dx5;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L7():
    dr4 = tryDispatchBuiltin.1("$", r5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L9() else L8(dr4);
  L8(r7):
    r8 = `$`(r7, <sym smooth>);
    goto L6(r8);
  L0(r10):
    st dn = r10;
    res = ld res;
    check L15() else D5();
  L9():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L10():
    fitted = ldf fitted;
    check L12() else D2();
  L11():
    r9 = dyn base(<lang fitted(object)>);
    goto L0(r9);
  D2():
    deopt 11 [];
  D5():
    deopt 17 [res];
  L12():
    p3 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r12 = dyn fitted(p3);
    check L13() else D3();
  L15():
    res1 = force? res;
    checkMissing(res1);
    c3 = `is.object`(res1);
    if c3 then L16() else L17(res1);
  D3():
    deopt 13 [r12];
  L1(dx7):
    st res = dx7;
    sym1 = ldf dimnames;
    base1 = ldf dimnames in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L13():
    dim = ldf dim in base;
    r13 = dyn dim(r12);
    check L14() else D4();
  L16():
    dr6 = tryDispatchBuiltin.1("[", res1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L18() else L17(dr6);
  L17(res3):
    dn = ld dn;
    check L19() else D6();
  D4():
    deopt 15 [r13];
  D6():
    deopt 21 [res3, 1, dn];
  L3(r22):
    l = ld res;
    dimnames__ = ldf `dimnames<-`;
    check L28() else D10();
  L14():
    goto L0(r13);
  L18():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L1(dx6);
  L19():
    dn1 = force? dn;
    checkMissing(dn1);
    c4 = `is.object`(dn1);
    if c4 then L20() else L21(res3, 1, dn1);
  L23():
    fitted1 = ldf fitted;
    check L25() else D7();
  L24():
    r21 = dyn base1(<lang fitted(object)>);
    goto L3(r21);
  D7():
    deopt 35 [];
  D10():
    deopt 41 [r22, l, r22];
  L2(r17, dx9):
    r19 = `:`(r17, dx9);
    __1 = ldf `[` in base;
    r20 = dyn __1(res1, <missing>, r19, FALSE);
    goto L1(r20);
  L20():
    dr8 = tryDispatchBuiltin.1("[", dn1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L22() else L21(res3, 1, dr8);
  L21(res5, r15, dn3):
    __ = ldf `[` in base;
    r18 = dyn __(dn3, 2);
    goto L2(r15, r18);
  L25():
    p4 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      return object12;
    };
    r24 = dyn fitted1(p4);
    check L26() else D8();
  L28():
    r26 = dyn dimnames__(l, NULL, r22);
    check L29() else D11();
  D8():
    deopt 37 [r24];
  D11():
    deopt 43 [r22, r26];
  L22():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L2(1, dx8);
  L26():
    dimnames = ldf dimnames in base;
    r25 = dyn dimnames(r24);
    check L27() else D9();
  L29():
    st res = r26;
    ts = ldf ts;
    check L30() else D12();
  D9():
    deopt 39 [r25];
  D12():
    deopt 46 [];
  L27():
    goto L3(r25);
  L30():
    p5 = prom<V +>{
      res8 = ld res;
      res9 = force? res8;
      checkMissing(res9);
      return res9;
    };
    p6 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c5 = `is.object`(object14);
      if c5 then L2() else L3(object14);
    L1(dx11):
      c6 = `is.object`(dx11);
      if c6 then L5() else L6(dx11);
    L2():
      dr10 = tryDispatchBuiltin.1("$", object14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(object16):
      r28 = `$`(object16, <sym xtsp>);
      goto L1(r28);
    L0(dx15):
      return dx15;
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx13):
      __2 = ldf `[` in base;
      r29 = dyn __2(dx13, 1);
      goto L0(r29);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p7 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c7 = `is.object`(object18);
      if c7 then L2() else L3(object18);
    L1(dx17):
      c8 = `is.object`(dx17);
      if c8 then L5() else L6(dx17);
    L2():
      dr14 = tryDispatchBuiltin.1("$", object18);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(object20):
      r31 = `$`(object20, <sym xtsp>);
      goto L1(r31);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx16);
    L5():
      dr16 = tryDispatchBuiltin.1("[", dx17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(dr16);
    L6(dx19):
      __3 = ldf `[` in base;
      r32 = dyn __3(dx19, 3);
      goto L0(r32);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    };
    r34 = dyn ts[, start, frequency](p5, p6, p7);
    check L31() else D13();
  D13():
    deopt 52 [r34];
  L31():
    popenv;
    return r34;
  }
}