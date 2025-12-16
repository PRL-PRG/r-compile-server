fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-631229794`;
    st untrace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-631229794`(what, signature, where) {
  (reg what:*, reg signature:*, reg where:*) -+> V { var what:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg _isMethodsDispatchOn:cls, reg r6:V, reg r7:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg what1:*, reg what2:V, reg _primUntrace:cls, reg r10:V, reg tracingState:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg on_exit:cls, reg r16:V, reg sys_call:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg quote:cls, reg r20:V, reg l:*, reg c1:L, reg r22:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r25:V, reg where1:*, reg where2:V, reg l3:*, reg c2:L, reg where4:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r26:V, reg l6:*, reg c3:L, reg r28:L, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg eval_parent:cls, reg call:*, reg call1:V, reg p2:p(V +), reg r35:V, reg invisible:cls, reg r36:V |
    mkenv;
    st what = what;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0(NULL) else L0(signature);
  L0(signature_orDefault):
    st signature = signature_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    sym = ldf `.isMethodsDispatchOn`;
    base = ldf `.isMethodsDispatchOn` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L3(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L14() else L4();
  L11():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r6 = dyn _isMethodsDispatchOn();
    check L13() else D0();
  L12():
    r4 = dyn base();
    goto L3(r4);
  D0():
    deopt 3 [r6];
  L4():
    tracingState = ldf tracingState;
    check L21() else D3();
  L13():
    goto L3(r6);
  L14():
    sym1 = ldf `.primUntrace`;
    base1 = ldf `.primUntrace` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D3():
    deopt 15 [];
  L5(r9):
    popenv;
    return r9;
  L15():
    what1 = ld what;
    check L17() else D1();
  L16():
    r8 = dyn base1(<sym what>);
    goto L5(r8);
  L21():
    r13 = dyn tracingState(FALSE);
    check L22() else D4();
  D1():
    deopt 7 [what1];
  D4():
    deopt 17 [r13];
  L17():
    what2 = force? what1;
    checkMissing(what2);
    _primUntrace = ldf `.primUntrace` in base;
    r10 = dyn _primUntrace(what2);
    check L18() else D2();
  L22():
    st tState = r13;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D2():
    deopt 10 [r10];
  L7():
    sys_call = ldf `sys.call`;
    check L25() else D5();
  L18():
    goto L5(r10);
  L23():
    on_exit = ldf `on.exit` in base;
    r16 = dyn on_exit(<lang tracingState(tState)>);
    goto L7();
  L24():
    r14 = dyn base2(<lang tracingState(tState)>);
    goto L7();
  D5():
    deopt 23 [];
  L25():
    r17 = dyn sys_call();
    check L26() else D6();
  D6():
    deopt 24 [r17];
  L26():
    st call = r17;
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L8(r19):
    l = ld call;
    c1 = `is.object`(l);
    if c1 then L29() else L30(r19, l);
  L27():
    quote = ldf quote in base;
    r20 = dyn quote(<lang `:::`(methods, .TraceWithMethods)>);
    goto L8(r20);
  L28():
    r18 = dyn base3(<lang `:::`(methods, .TraceWithMethods)>);
    goto L8(r18);
  L9(dx1):
    st call = dx1;
    where1 = ld where;
    check L32() else D7();
  L29():
    dr = tryDispatchBuiltin.0("[[<-", l, r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(r19, dr);
  L30(r22, l2):
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l2, r19, 1);
    goto L9(r25);
  D7():
    deopt 34 [where1];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L32():
    where2 = force? where1;
    checkMissing(where2);
    l3 = ld call;
    c2 = `is.object`(l3);
    if c2 then L34() else L35(where2, l3);
  L33(dx3):
    st call = dx3;
    l6 = ld call;
    c3 = `is.object`(l6);
    if c3 then L38() else L39(TRUE, l6);
  L34():
    dr2 = tryDispatchBuiltin.0("$<-", l3, where2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(where2, dr2);
  L35(where4, l5):
    r26 = `$<-`(l5, <sym where>, where2);
    goto L33(r26);
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L37(dx5):
    st call = dx5;
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L38():
    dr4 = tryDispatchBuiltin.0("$<-", l6, TRUE);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(TRUE, dr4);
  L39(r28, l8):
    r31 = `$<-`(l8, <sym untrace>, TRUE);
    goto L37(r31);
  L10(r33):
    popenv;
    return r33;
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(dx4);
  L41():
    eval_parent = ldf `eval.parent`;
    check L43() else D8();
  L42():
    r32 = dyn base4(<lang eval.parent(call)>);
    goto L10(r32);
  D8():
    deopt 47 [];
  L43():
    p2 = prom<V +>{
      call = ld call;
      call1 = force? call;
      checkMissing(call1);
      return call1;
    };
    r35 = dyn eval_parent(p2);
    check L44() else D9();
  D9():
    deopt 49 [r35];
  L44():
    invisible = ldf invisible in base;
    r36 = dyn invisible(r35);
    check L45() else D10();
  D10():
    deopt 51 [r36];
  L45():
    goto L10(r36);
  }
}