fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1308700208`;
    st `.signalSimpleWarning` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1308700208`(msg, call) {
  (reg msg:*, reg call:*) -+> V { var msg:*, var call:*, reg withRestarts:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg simpleWarning:cls, reg msg1:*, reg msg2:V, reg p:p(V +), reg call1:*, reg call2:V, reg p1:p(V +), reg r4:V, reg msg3:*, reg msg4:V, reg call3:*, reg call4:V, reg _signalCondition:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg msg5:*, reg msg6:V, reg call5:*, reg call6:V, reg _dfltWarn:cls, reg r8:V, reg p2:p(V +), reg r10:cls, reg p3:p(V +), reg r12:V |
    mkenv;
    st msg = msg;
    st call = call;
    withRestarts = ldf withRestarts;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0():
      sym1 = ldf `.Internal`;
      base1 = ldf `.Internal` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L2():
      simpleWarning = ldf simpleWarning;
      p = prom<V +>{
        msg1 = ld msg;
        msg2 = force? msg1;
        checkMissing(msg2);
        return msg2;
      };
      p1 = prom<V +>{
        call1 = ld call;
        call2 = force? call1;
        checkMissing(call2);
        return call2;
      };
      r4 = dyn simpleWarning(p, p1);
      msg3 = ld msg;
      msg4 = force? msg3;
      checkMissing(msg4);
      call3 = ld call;
      call4 = force? call3;
      checkMissing(call4);
      _signalCondition = ldf `.signalCondition` in base;
      r5 = dyn _signalCondition(r4, msg4, call4);
      goto L0();
    L3():
      r = dyn base(<lang .signalCondition(simpleWarning(msg, call), msg, call)>);
      goto L0();
    L1(r7):
      return r7;
    L4():
      msg5 = ld msg;
      msg6 = force? msg5;
      checkMissing(msg6);
      call5 = ld call;
      call6 = force? call5;
      checkMissing(call6);
      _dfltWarn = ldf `.dfltWarn` in base;
      r8 = dyn _dfltWarn(msg6, call6);
      goto L1(r8);
    L5():
      r6 = dyn base1(<lang .dfltWarn(msg, call)>);
      goto L1(r6);
    };
    p3 = prom<V +>{
      r10 = clos inner560854305;
      return r10;
    };
    r12 = dyn withRestarts[, muffleWarning](p2, p3);
    check L1() else D1();
  D1():
    deopt 5 [r12];
  L1():
    popenv;
    return r12;
  }
}
fun inner560854305() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}