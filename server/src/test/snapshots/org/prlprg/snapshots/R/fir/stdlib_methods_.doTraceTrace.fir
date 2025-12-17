fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2015100991;
    st `.doTraceTrace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2015100991(on) {
  (reg on:*) -+> V { var on:*, reg _assignOverBinding:cls, reg on1:*, reg on2:V, reg p:p(V +), reg environment:cls, reg _doTraceTrace:*, reg _doTraceTrace1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg on3:*, reg on4:V |
    mkenv;
    st on = on;
    _assignOverBinding = ldf `.assignOverBinding`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      on1 = ld on;
      on2 = force? on1;
      checkMissing(on2);
      return on2;
    };
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        _doTraceTrace = ld `.doTraceTrace`;
        _doTraceTrace1 = force? _doTraceTrace;
        checkMissing(_doTraceTrace1);
        return _doTraceTrace1;
      };
      r2 = dyn environment(p1);
      return r2;
    };
    r4 = dyn _assignOverBinding(".traceTraceState", p, p2, FALSE);
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    on3 = ld on;
    check L2() else D2();
  D2():
    deopt 7 [on3];
  L2():
    on4 = force? on3;
    checkMissing(on4);
    popenv;
    return on4;
  }
}