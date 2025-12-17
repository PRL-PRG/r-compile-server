fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3855282202;
    st RweaveChunkPrefix = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3855282202(options) {
  (reg options:*) -+> V { var options:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg options1:*, reg options2:V, reg c:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg options5:*, reg options6:V, reg c3:L, reg options8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg c4:L, reg paste0:cls, reg options9:*, reg options10:V, reg c5:L, reg options12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r5:V, reg p:p(V +), reg options13:*, reg options14:V, reg c6:L, reg options16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r7:V, reg p1:p(V +), reg r9:V, reg options17:*, reg options18:V, reg c7:L, reg options20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r10:V, reg paste1:cls, reg options21:*, reg options22:V, reg c8:L, reg options24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r11:V, reg p2:p(V +), reg formatC:cls, reg options25:*, reg options26:V, reg c9:L, reg options28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V |
    mkenv;
    st options = options;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L10() else L1();
  L3():
    options1 = ld options;
    check L5() else D0();
  L4():
    r = dyn base(<lang `$`(options, label)>);
    goto L0(r);
  D0():
    deopt 1 [options1];
  L1():
    paste1 = ldf paste0;
    check L26() else D5();
  L5():
    options2 = force? options1;
    checkMissing(options2);
    c = `is.object`(options2);
    if c then L7() else L8(options2);
  L10():
    options5 = ld options;
    check L11() else D1();
  D1():
    deopt 6 [options5];
  D5():
    deopt 19 [];
  L6(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L7():
    dr = tryDispatchBuiltin.1("$", options2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(options4):
    r2 = `$`(options4, <sym label>);
    goto L6(r2);
  L11():
    options6 = force? options5;
    checkMissing(options6);
    c3 = `is.object`(options6);
    if c3 then L13() else L14(options6);
  L26():
    p2 = prom<V +>{
      options21 = ld options;
      options22 = force? options21;
      checkMissing(options22);
      c8 = `is.object`(options22);
      if c8 then L1() else L2(options22);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", options22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(options24):
      r11 = `$`(options24, <sym prefix.string>);
      goto L0(r11);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p4 = prom<V +>{
      formatC = ldf formatC;
      p3 = prom<V +>{
        options25 = ld options;
        options26 = force? options25;
        checkMissing(options26);
        c9 = `is.object`(options26);
        if c9 then L1() else L2(options26);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", options26);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(options28):
        r13 = `$`(options28, <sym chunknr>);
        goto L0(r13);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r15 = dyn formatC[, flag, width](p3, "0", 3.0);
      return r15;
    };
    r17 = dyn paste1(p2, "-", p4);
    check L27() else D6();
  D6():
    deopt 23 [r17];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L12(dx3):
    c4 = `as.logical`(dx3);
    if c4 then L16() else L2();
  L13():
    dr2 = tryDispatchBuiltin.1("$", options6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(options8):
    r4 = `$`(options8, <sym prefix>);
    goto L12(r4);
  L27():
    popenv;
    return r17;
  L2():
    options17 = ld options;
    check L20() else D4();
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    paste0 = ldf paste0;
    check L17() else D2();
  D2():
    deopt 10 [];
  D4():
    deopt 15 [options17];
  L17():
    p = prom<V +>{
      options9 = ld options;
      options10 = force? options9;
      checkMissing(options10);
      c5 = `is.object`(options10);
      if c5 then L1() else L2(options10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", options10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(options12):
      r5 = `$`(options12, <sym prefix.string>);
      goto L0(r5);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p1 = prom<V +>{
      options13 = ld options;
      options14 = force? options13;
      checkMissing(options14);
      c6 = `is.object`(options14);
      if c6 then L1() else L2(options14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", options14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(options16):
      r7 = `$`(options16, <sym label>);
      goto L0(r7);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r9 = dyn paste0(p, "-", p1);
    check L18() else D3();
  L20():
    options18 = force? options17;
    checkMissing(options18);
    c7 = `is.object`(options18);
    if c7 then L22() else L23(options18);
  D3():
    deopt 14 [r9];
  L18():
    popenv;
    return r9;
  L21(dx9):
    popenv;
    return dx9;
  L22():
    dr8 = tryDispatchBuiltin.1("$", options18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L24() else L23(dr8);
  L23(options20):
    r10 = `$`(options20, <sym label>);
    goto L21(r10);
  L24():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx8);
  }
}