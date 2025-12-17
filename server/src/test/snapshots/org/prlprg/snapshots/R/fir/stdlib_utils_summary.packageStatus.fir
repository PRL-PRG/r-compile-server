fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.packageStatus` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg levels:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg p:p(V +), reg r3:V, reg levels1:cls, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r4:V, reg c3:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r5:V, reg p1:p(V +), reg r7:V, reg lapply:cls, reg split:cls, reg object9:*, reg object10:V, reg c4:L, reg object12:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r8:V, reg p2:p(V +), reg object13:*, reg object14:V, reg c5:L, reg object16:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r10:V, reg c6:L, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r11:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:cls, reg p5:p(V +), reg r17:V, reg lapply1:cls, reg split1:cls, reg object17:*, reg object18:V, reg c7:L, reg object20:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r18:V, reg p6:p(V +), reg object21:*, reg object22:V, reg c8:L, reg object24:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r20:V, reg c9:L, reg dx25:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg r21:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:cls, reg p9:p(V +), reg r27:V, reg Libs:*, reg Libs1:V, reg l:*, reg c10:L, reg Libs3:V, reg l2:*, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg r28:V, reg Repos:*, reg Repos1:V, reg l3:*, reg c11:L, reg Repos3:V, reg l5:*, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r29:V, reg sym:cls, reg base:cls, reg guard:L, reg r30:V, reg r31:V, reg c12:cls, reg r32:V, reg l6:*, reg class__:cls, reg r33:V, reg object25:*, reg object26:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    levels = ldf levels;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym inst>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      return dx5;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r1 = `$`(dx3, <sym LibPath>);
      goto L4(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    r3 = dyn levels(p);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    st Libs = r3;
    levels1 = ldf levels;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c2 = `is.object`(object6);
      if c2 then L1() else L2(object6);
    L0(dx7):
      c3 = `is.object`(dx7);
      if c3 then L5() else L6(dx7);
    L1():
      dr4 = tryDispatchBuiltin.1("$", object6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object8):
      r4 = `$`(object8, <sym avail>);
      goto L0(r4);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    L4(dx11):
      return dx11;
    L5():
      dr6 = tryDispatchBuiltin.1("$", dx7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx9):
      r5 = `$`(dx9, <sym Repository>);
      goto L4(r5);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L4(dx10);
    };
    r7 = dyn levels1(p1);
    check L4() else D3();
  D3():
    deopt 8 [r7];
  L4():
    st Repos = r7;
    lapply = ldf lapply;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    p4 = prom<V +>{
      split = ldf split;
      p2 = prom<V +>{
        object9 = ld object;
        object10 = force? object9;
        checkMissing(object10);
        c4 = `is.object`(object10);
        if c4 then L1() else L2(object10);
      L0(dx13):
        return dx13;
      L1():
        dr8 = tryDispatchBuiltin.1("$", object10);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(object12):
        r8 = `$`(object12, <sym inst>);
        goto L0(r8);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx12);
      };
      p3 = prom<V +>{
        object13 = ld object;
        object14 = force? object13;
        checkMissing(object14);
        c5 = `is.object`(object14);
        if c5 then L1() else L2(object14);
      L0(dx15):
        c6 = `is.object`(dx15);
        if c6 then L5() else L6(dx15);
      L1():
        dr10 = tryDispatchBuiltin.1("$", object14);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(object16):
        r10 = `$`(object16, <sym inst>);
        goto L0(r10);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx14);
      L4(dx19):
        return dx19;
      L5():
        dr12 = tryDispatchBuiltin.1("$", dx15);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L7() else L6(dr12);
      L6(dx17):
        r11 = `$`(dx17, <sym LibPath>);
        goto L4(r11);
      L7():
        dx18 = getTryDispatchBuiltinValue(dr12);
        goto L4(dx18);
      };
      r13 = dyn split(p2, p3);
      return r13;
    };
    p5 = prom<V +>{
      r15 = clos inner2501545716;
      return r15;
    };
    r17 = dyn lapply(p4, p5);
    check L6() else D5();
  D5():
    deopt 14 [r17];
  L6():
    st Libs = r17;
    lapply1 = ldf lapply;
    check L7() else D6();
  D6():
    deopt 17 [];
  L7():
    p8 = prom<V +>{
      split1 = ldf split;
      p6 = prom<V +>{
        object17 = ld object;
        object18 = force? object17;
        checkMissing(object18);
        c7 = `is.object`(object18);
        if c7 then L1() else L2(object18);
      L0(dx21):
        return dx21;
      L1():
        dr14 = tryDispatchBuiltin.1("$", object18);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(object20):
        r18 = `$`(object20, <sym avail>);
        goto L0(r18);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx20);
      };
      p7 = prom<V +>{
        object21 = ld object;
        object22 = force? object21;
        checkMissing(object22);
        c8 = `is.object`(object22);
        if c8 then L1() else L2(object22);
      L0(dx23):
        c9 = `is.object`(dx23);
        if c9 then L5() else L6(dx23);
      L1():
        dr16 = tryDispatchBuiltin.1("$", object22);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(object24):
        r20 = `$`(object24, <sym avail>);
        goto L0(r20);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx22);
      L4(dx27):
        return dx27;
      L5():
        dr18 = tryDispatchBuiltin.1("$", dx23);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L7() else L6(dr18);
      L6(dx25):
        r21 = `$`(dx25, <sym Repository>);
        goto L4(r21);
      L7():
        dx26 = getTryDispatchBuiltinValue(dr18);
        goto L4(dx26);
      };
      r23 = dyn split1(p6, p7);
      return r23;
    };
    p9 = prom<V +>{
      r25 = clos inner2501545716;
      return r25;
    };
    r27 = dyn lapply1(p8, p9);
    check L8() else D7();
  D7():
    deopt 20 [r27];
  L8():
    st Repos = r27;
    Libs = ld Libs;
    check L9() else D8();
  D8():
    deopt 22 [Libs];
  L9():
    Libs1 = force? Libs;
    checkMissing(Libs1);
    l = ld object;
    c10 = `is.object`(l);
    if c10 then L11() else L12(Libs1, l);
  L10(dx29):
    st object = dx29;
    Repos = ld Repos;
    check L14() else D9();
  L11():
    dr20 = tryDispatchBuiltin.0("$<-", l, Libs1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L13() else L12(Libs1, dr20);
  L12(Libs3, l2):
    r28 = `$<-`(l2, <sym Libs>, Libs1);
    goto L10(r28);
  D9():
    deopt 27 [Repos];
  L13():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L10(dx28);
  L14():
    Repos1 = force? Repos;
    checkMissing(Repos1);
    l3 = ld object;
    c11 = `is.object`(l3);
    if c11 then L16() else L17(Repos1, l3);
  L15(dx31):
    st object = dx31;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L16():
    dr22 = tryDispatchBuiltin.0("$<-", l3, Repos1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L18() else L17(Repos1, dr22);
  L17(Repos3, l5):
    r29 = `$<-`(l5, <sym Repos>, Repos1);
    goto L15(r29);
  L0(r31):
    l6 = ld object;
    class__ = ldf `class<-`;
    check L22() else D11();
  L18():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L15(dx30);
  L19():
    c12 = ldf c in base;
    r32 = dyn c12("summary.packageStatus", "packageStatus");
    check L21() else D10();
  L20():
    r30 = dyn base("summary.packageStatus", "packageStatus");
    goto L0(r30);
  D10():
    deopt 37 [r32];
  D11():
    deopt 39 [r31, l6, r31];
  L21():
    goto L0(r32);
  L22():
    r33 = dyn class__(l6, NULL, r31);
    check L23() else D12();
  D12():
    deopt 41 [r31, r33];
  L23():
    st object = r33;
    object25 = ld object;
    check L24() else D13();
  D13():
    deopt 43 [object25];
  L24():
    object26 = force? object25;
    checkMissing(object26);
    popenv;
    return object26;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg tapply:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg r4:cls, reg p2:p(V +), reg r6:V |
    mkenv;
    st x = x;
    tapply = ldf tapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r = `$`(x4, <sym Package>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r2 = `$`(x8, <sym Status>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      r4 = clos inner2501545716;
      return r4;
    };
    r6 = dyn tapply[, , , simplify](p, p1, p2, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    popenv;
    return r6;
  }
}