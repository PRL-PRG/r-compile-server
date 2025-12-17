fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner417981748;
    st `.doTrace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner417981748(expr, msg) {
  (reg expr:*, reg msg:*) -+> V { var expr:*, var msg:*, reg tracingState:cls, reg r:V, reg on:*, reg on1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c1:L, reg deparse:cls, reg sys_call:cls, reg sys_parent:cls, reg r8:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg call:*, reg call1:V, reg length:cls, reg r15:V, reg r16:V, reg c2:L, reg paste:cls, reg call2:*, reg call3:V, reg c3:L, reg call5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg cat:cls, reg call6:*, reg call7:V, reg p3:p(V +), reg msg1:*, reg msg2:V, reg p4:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg substitute:cls, reg r27:V, reg eval_parent:cls, reg exprObj:*, reg exprObj1:V, reg p5:p(V +), reg r29:V |
    mkenv;
    st expr = expr;
    st msg = msg;
    tracingState = ldf tracingState;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    r = dyn tracingState(FALSE);
    check L11() else D1();
  D1():
    deopt 3 [r];
  L11():
    st on = r;
    on = ld on;
    check L12() else D2();
  D2():
    deopt 5 [on];
  L12():
    on1 = force? on;
    checkMissing(on1);
    c = `as.logical`(on1);
    if c then L13() else L0();
  L0():
    goto L9();
  L9():
    popenv;
    return NULL;
  L13():
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L1():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L14():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang tracingState(TRUE)>);
    goto L1();
  L15():
    r1 = dyn base(<lang tracingState(TRUE)>);
    goto L1();
  L2(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L18() else L3();
  L16():
    missing = ldf missing in base;
    r6 = dyn missing(<sym msg>);
    goto L2(r6);
  L17():
    r4 = dyn base1(<sym msg>);
    goto L2(r4);
  L3():
    goto L7();
  L7():
    sym3 = ldf substitute;
    base3 = ldf substitute in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L18():
    deparse = ldf deparse;
    check L19() else D3();
  D3():
    deopt 15 [];
  L8(r26):
    st exprObj = r26;
    eval_parent = ldf `eval.parent`;
    check L34() else D11();
  L19():
    p1 = prom<V +>{
      sys_call = ldf `sys.call`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r8 = dyn sys_parent(1);
        return r8;
      };
      r10 = dyn sys_call(p);
      return r10;
    };
    r12 = dyn deparse(p1);
    check L20() else D4();
  L32():
    substitute = ldf substitute in base;
    r27 = dyn substitute(<sym expr>);
    goto L8(r27);
  L33():
    r25 = dyn base3(<sym expr>);
    goto L8(r25);
  D4():
    deopt 17 [r12];
  D11():
    deopt 49 [];
  L20():
    st call = r12;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L34():
    p5 = prom<V +>{
      exprObj = ld exprObj;
      exprObj1 = force? exprObj;
      checkMissing(exprObj1);
      return exprObj1;
    };
    r29 = dyn eval_parent(p5);
    check L35() else D12();
  D12():
    deopt 51 [r29];
  L4(r14):
    r16 = `>`(r14, 1);
    c2 = `as.logical`(r16);
    if c2 then L25() else L5();
  L21():
    call = ld call;
    check L23() else D5();
  L22():
    r13 = dyn base2(<sym call>);
    goto L4(r13);
  L35():
    goto L9();
  D5():
    deopt 21 [call];
  L5():
    goto L6();
  L6():
    cat = ldf cat;
    check L29() else D9();
  L23():
    call1 = force? call;
    checkMissing(call1);
    length = ldf length in base;
    r15 = dyn length(call1);
    check L24() else D6();
  L25():
    paste = ldf paste;
    check L26() else D7();
  D6():
    deopt 24 [r15];
  D7():
    deopt 28 [];
  D9():
    deopt 36 [];
  L24():
    goto L4(r15);
  L26():
    p2 = prom<V +>{
      call2 = ld call;
      call3 = force? call2;
      checkMissing(call3);
      c3 = `is.object`(call3);
      if c3 then L1() else L2(call3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", call3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(call5):
      __ = ldf `[[` in base;
      r17 = dyn __(call5, 1);
      goto L0(r17);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r19 = dyn paste(p2, "....");
    check L27() else D8();
  L29():
    p3 = prom<V +>{
      call6 = ld call;
      call7 = force? call6;
      checkMissing(call7);
      return call7;
    };
    p4 = prom<V +>{
      msg1 = ld msg;
      msg2 = force? msg1;
      checkMissing(msg2);
      return msg2;
    };
    r23 = dyn cat("Tracing", p3, p4, "\n");
    check L30() else D10();
  D8():
    deopt 31 [r19];
  D10():
    deopt 41 [r23];
  L27():
    st call = r19;
    goto L6();
  L30():
    goto L7();
  }
}