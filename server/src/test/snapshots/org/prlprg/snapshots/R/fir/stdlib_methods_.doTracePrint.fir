fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner84266172;
    st `.doTracePrint` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner84266172(msg) {
  (reg msg:*) -+> V { var msg:*, reg msg_isMissing:L, reg msg_orDefault:*, reg deparse:cls, reg sys_call:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg call:*, reg call1:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg paste:cls, reg call2:*, reg call3:V, reg c1:L, reg call5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg cat:cls, reg call6:*, reg call7:V, reg p3:p(V +), reg msg1:*, reg msg2:V, reg p4:p(V +), reg r15:V |
    mkenv;
    msg_isMissing = missing.0(msg);
    if msg_isMissing then L0("") else L0(msg);
  L0(msg_orDefault):
    st msg = msg_orDefault;
    deparse = ldf deparse;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      sys_call = ldf `sys.call`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r = dyn sys_parent(1.0);
        return r;
      };
      r2 = dyn sys_call(p);
      return r2;
    };
    r4 = dyn deparse(p1);
    check L5() else D1();
  D1():
    deopt 3 [r4];
  L5():
    st call = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r6):
    r8 = `>`(r6, 1.0);
    c = `as.logical`(r8);
    if c then L10() else L2();
  L6():
    call = ld call;
    check L8() else D2();
  L7():
    r5 = dyn base(<sym call>);
    goto L1(r5);
  D2():
    deopt 7 [call];
  L2():
    goto L3();
  L3():
    cat = ldf cat;
    check L14() else D6();
  L8():
    call1 = force? call;
    checkMissing(call1);
    length = ldf length in base;
    r7 = dyn length(call1);
    check L9() else D3();
  L10():
    paste = ldf paste;
    check L11() else D4();
  D3():
    deopt 10 [r7];
  D4():
    deopt 14 [];
  D6():
    deopt 22 [];
  L9():
    goto L1(r7);
  L11():
    p2 = prom<V +>{
      call2 = ld call;
      call3 = force? call2;
      checkMissing(call3);
      c1 = `is.object`(call3);
      if c1 then L1() else L2(call3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", call3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(call5):
      __ = ldf `[[` in base;
      r9 = dyn __(call5, 1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn paste(p2, "....");
    check L12() else D5();
  L14():
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
    r15 = dyn cat("Tracing", p3, p4, "\n");
    check L15() else D7();
  D5():
    deopt 17 [r11];
  D7():
    deopt 27 [r15];
  L12():
    st call = r11;
    goto L3();
  L15():
    popenv;
    return r15;
  }
}