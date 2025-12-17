fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3672943467;
    st `rc.getOption` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg get:cls, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __:cls, reg r4:V |
    mkenv;
    st name = name;
    get = ldf get;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r1 = dyn get[, envir]("options", p);
    check L2() else D1();
  D1():
    deopt 5 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    name1 = ld name;
    check L6() else D2();
  D2():
    deopt 6 [r3, name1];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    name2 = force? name1;
    __ = ldf `[[` in base;
    r4 = dyn __(r3, name2);
    goto L0(r4);
  }
}