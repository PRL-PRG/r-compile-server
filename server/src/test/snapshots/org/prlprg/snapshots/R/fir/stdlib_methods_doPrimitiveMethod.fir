fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2898713574;
    st doPrimitiveMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2898713574(name, def, call, ev) {
  (reg name:*, reg def:*, reg call:*, reg ev:*) -+> V { var name:*, var def:*, var call:*, reg call_isMissing:L, reg call_orDefault:*, reg sys_call:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var ev:*, reg ev_isMissing:L, reg ev_orDefault:*, reg sys_frame:cls, reg sys_parent1:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg cat:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg ev1:*, reg ev2:V, reg c:L, reg ev4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __:cls, reg r11:V, reg c1:V, reg r12:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg on_exit:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg on_exit1:cls, reg r18:V, reg assign:cls, reg name3:*, reg name4:V, reg p4:p(V +), reg def1:*, reg def2:V, reg p5:p(V +), reg ev5:*, reg ev6:V, reg p6:p(V +), reg r22:V, reg eval:cls, reg call1:*, reg call2:V, reg p7:p(V +), reg ev7:*, reg ev8:V, reg p8:p(V +), reg r25:V |
    mkenv;
    st name = name;
    st def = def;
    call_isMissing = missing.0(call);
    if call_isMissing then L0() else L1(call);
  L0():
    p1 = prom<V +>{
      sys_call = ldf `sys.call`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r = dyn sys_parent();
        return r;
      };
      r2 = dyn sys_call(p);
      return r2;
    };
    goto L1(p1);
  L1(call_orDefault):
    st call = call_orDefault;
    ev_isMissing = missing.0(ev);
    if ev_isMissing then L2() else L3(ev);
  L2():
    p3 = prom<V +>{
      sys_frame = ldf `sys.frame`;
      p2 = prom<V +>{
        sys_parent1 = ldf `sys.parent`;
        r4 = dyn sys_parent1(2.0);
        return r4;
      };
      r6 = dyn sys_frame(p2);
      return r6;
    };
    goto L3(p3);
  L3(ev_orDefault):
    st ev = ev_orDefault;
    cat = ldf cat;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r8 = dyn cat("called doPrimitiveMethod\n\n");
    check L10() else D1();
  D1():
    deopt 3 [r8];
  L10():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L4(r10):
    r12 = `!`(r10);
    c2 = `as.logical`(r12);
    if c2 then L18() else L6();
  L11():
    ev1 = ld ev;
    check L13() else D2();
  L12():
    r9 = dyn base(<lang `<-`(prev, `[[`(ev, name))>);
    goto L4(r9);
  D2():
    deopt 5 [ev1];
  L6():
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L8():
    assign = ldf assign;
    check L24() else D4();
  L13():
    ev2 = force? ev1;
    checkMissing(ev2);
    c = `is.object`(ev2);
    if c then L14() else L15(ev2);
  L18():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D4():
    deopt 20 [];
  L5(dx1):
    st prev = dx1;
    c1 = `==`(dx1, NULL);
    goto L4(c1);
  L7(r14):
    goto L8();
  L14():
    dr = tryDispatchBuiltin.1("[[", ev2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(ev4):
    name1 = ld name;
    check L17() else D3();
  L19():
    on_exit = ldf `on.exit` in base;
    r15 = dyn on_exit(<lang assign(name, prev, envir=ev)>);
    goto L7(r15);
  L20():
    r13 = dyn base1(<lang assign(name, prev, envir=ev)>);
    goto L7(r13);
  L22():
    on_exit1 = ldf `on.exit` in base;
    r18 = dyn on_exit1(<lang rm(list=name, envir=ev)>);
    goto L8();
  L23():
    r17 = dyn base2(<lang rm(list=name, envir=ev)>);
    goto L8();
  L24():
    p4 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p5 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p6 = prom<V +>{
      ev5 = ld ev;
      ev6 = force? ev5;
      checkMissing(ev6);
      return ev6;
    };
    r22 = dyn assign[, , envir](p4, p5, p6);
    check L25() else D5();
  D3():
    deopt 7 [ev4, name1];
  D5():
    deopt 25 [r22];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L17():
    name2 = force? name1;
    __ = ldf `[[` in base;
    r11 = dyn __(ev4, name2);
    goto L5(r11);
  L25():
    eval = ldf eval;
    check L26() else D6();
  D6():
    deopt 27 [];
  L26():
    p7 = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      return call2;
    };
    p8 = prom<V +>{
      ev7 = ld ev;
      ev8 = force? ev7;
      checkMissing(ev8);
      return ev8;
    };
    r25 = dyn eval(p7, p8);
    check L27() else D7();
  D7():
    deopt 30 [r25];
  L27():
    popenv;
    return r25;
  }
}