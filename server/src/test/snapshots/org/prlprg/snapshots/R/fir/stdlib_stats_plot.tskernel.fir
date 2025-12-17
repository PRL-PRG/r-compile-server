fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner990196274;
    st `plot.tskernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner990196274(x, type, xlab, ylab, main, `...`) {
  (reg x:*, reg type:*, reg xlab:*, reg ylab:*, reg main:*, reg ddd:dots) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg r5:V, reg x7:*, reg x8:V, reg c1:L, reg r7:V, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r9:V, reg dx3:V, reg r10:V, reg r11:V, reg plot:cls, reg i:*, reg i1:V, reg p1:p(V +), reg x11:*, reg x12:V, reg c2:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i2:*, reg i3:V, reg __:cls, reg r13:V, reg p2:p(V +), reg type1:*, reg type2:V, reg p3:p(V +), reg xlab1:*, reg xlab2:V, reg p4:p(V +), reg ylab1:*, reg ylab2:V, reg p5:p(V +), reg main1:*, reg main2:V, reg p6:p(V +), reg ddd1:dots?, reg r19:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("h") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1("k") else L1(xlab);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2("W[k]") else L2(ylab);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L3() else L4(main);
  L3():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "name");
      goto L0(r2);
    L2():
      r = dyn base(<sym x>, "name");
      goto L0(r);
    };
    goto L4(p);
  L4(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    x3 = ld x;
    check L5() else D0();
  D0():
    deopt 0 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L7() else L8(x4);
  L6(dx1):
    r5 = `-`(<missing>, dx1);
    x7 = ld x;
    check L10() else D1();
  L7():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(x6):
    r4 = `$`(x6, <sym m>);
    goto L6(r4);
  D1():
    deopt 3 [r5, x7];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    x8 = force? x7;
    checkMissing(x8);
    c1 = `is.object`(x8);
    if c1 then L12() else L13(r5, x8);
  L11(r9, dx3):
    r11 = `:`(r9, dx3);
    st i = r11;
    plot = ldf plot;
    check L15() else D2();
  L12():
    dr2 = tryDispatchBuiltin.1("$", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(r5, dr2);
  L13(r7, x10):
    r10 = `$`(x10, <sym m>);
    goto L11(r7, r10);
  D2():
    deopt 9 [];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(r5, dx2);
  L15():
    p1 = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      return i1;
    };
    p2 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c2 = `is.object`(x12);
      if c2 then L1() else L2(x12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x14):
      i2 = ld i;
      i3 = force? i2;
      __ = ldf `[` in base;
      r13 = dyn __(x14, i3);
      goto L0(r13);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p4 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p5 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p6 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    ddd1 = ld `...`;
    r19 = dyn plot[, , type, xlab, ylab, main, `...`](p1, p2, p3, p4, p5, p6, ddd1);
    check L16() else D3();
  D3():
    deopt 21 [r19];
  L16():
    popenv;
    return r19;
  }
}