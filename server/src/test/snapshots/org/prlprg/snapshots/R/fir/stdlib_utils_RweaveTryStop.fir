fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2830270533;
    st RweaveTryStop = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2830270533(err, options) {
  (reg err:*, reg options:*) -+> V { var err:*, var options:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg err1:*, reg err2:V, reg inherits:cls, reg r2:V, reg c:L, reg cat:cls, reg r3:V, reg paste:cls, reg options1:*, reg options2:V, reg c1:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg options5:*, reg options6:V, reg c2:L, reg options8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg c3:V, reg r10:V, reg c4:L, reg paste1:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg options9:*, reg options10:V, reg c5:L, reg options12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p2:p(V +), reg r14:V, reg paste2:cls, reg msg2:*, reg msg3:V, reg p3:p(V +), reg r17:V, reg stop:cls, reg msg4:*, reg msg5:V, reg p4:p(V +), reg err3:*, reg err4:V, reg p5:p(V +), reg r20:V |
    mkenv;
    st err = err;
    st options = options;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1();
  L5():
    err1 = ld err;
    check L7() else D0();
  L6():
    r = dyn base(<sym err>, "try-error");
    goto L0(r);
  D0():
    deopt 2 [err1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L7():
    err2 = force? err1;
    checkMissing(err2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(err2, "try-error", FALSE);
    check L8() else D1();
  L9():
    cat = ldf cat;
    check L10() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  L8():
    goto L0(r2);
  L10():
    r3 = dyn cat("\n");
    check L11() else D3();
  D3():
    deopt 11 [r3];
  L11():
    paste = ldf paste;
    check L12() else D4();
  D4():
    deopt 13 [];
  L12():
    p = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      c1 = `is.object`(options2);
      if c1 then L1() else L2(options2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", options2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(options4):
      r4 = `$`(options4, <sym chunknr>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn paste(" chunk", p);
    check L13() else D5();
  D5():
    deopt 16 [r6];
  L13():
    st msg = r6;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(r8):
    r10 = `!`(r8);
    c4 = `as.logical`(r10);
    if c4 then L21() else L3();
  L14():
    options5 = ld options;
    check L16() else D6();
  L15():
    r7 = dyn base1(<lang `$`(options, label)>);
    goto L2(r7);
  D6():
    deopt 19 [options5];
  L3():
    goto L4();
  L4():
    paste2 = ldf paste;
    check L25() else D9();
  L16():
    options6 = force? options5;
    checkMissing(options6);
    c2 = `is.object`(options6);
    if c2 then L18() else L19(options6);
  L21():
    paste1 = ldf paste0;
    check L22() else D7();
  D7():
    deopt 25 [];
  D9():
    deopt 35 [];
  L17(dx3):
    c3 = `==`(dx3, NULL);
    goto L2(c3);
  L18():
    dr2 = tryDispatchBuiltin.1("$", options6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(options8):
    r9 = `$`(options8, <sym label>);
    goto L17(r9);
  L22():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p2 = prom<V +>{
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
      r12 = `$`(options12, <sym label>);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r14 = dyn paste1(p1, " (label = ", p2, ")");
    check L23() else D8();
  L25():
    p3 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r17 = dyn paste2(p3, "\n");
    check L26() else D10();
  D8():
    deopt 30 [r14];
  D10():
    deopt 38 [r17];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L23():
    st msg = r14;
    goto L4();
  L26():
    st msg = r17;
    stop = ldf stop;
    check L27() else D11();
  D11():
    deopt 41 [];
  L27():
    p4 = prom<V +>{
      msg4 = ld msg;
      msg5 = force? msg4;
      checkMissing(msg5);
      return msg5;
    };
    p5 = prom<V +>{
      err3 = ld err;
      err4 = force? err3;
      checkMissing(err4);
      return err4;
    };
    r20 = dyn stop[, , `call.`](p4, p5, FALSE);
    check L28() else D12();
  D12():
    deopt 46 [r20];
  L28():
    popenv;
    return r20;
  }
}