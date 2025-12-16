fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-279004854`;
    st `.NotYetUsed` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-279004854`(arg, error) {
  (reg arg:*, reg error:*) -+> V { var arg:*, var error:*, reg error_isMissing:L, reg error_orDefault:*, reg gettextf:cls, reg arg1:*, reg arg2:V, reg p:p(V +), reg r1:V, reg error1:*, reg error2:V, reg c:L, reg stop:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r3:V, reg warning:cls, reg msg2:*, reg msg3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st arg = arg;
    error_isMissing = missing.0(error);
    if error_isMissing then L0(TRUE) else L0(error);
  L0(error_orDefault):
    st error = error_orDefault;
    gettextf = ldf gettextf;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      arg1 = ld arg;
      arg2 = force? arg1;
      checkMissing(arg2);
      return arg2;
    };
    r1 = dyn gettextf("argument '%s' is not used (yet)", p);
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    st msg = r1;
    error1 = ld error;
    check L4() else D2();
  D2():
    deopt 6 [error1];
  L4():
    error2 = force? error1;
    checkMissing(error2);
    c = `as.logical`(error2);
    if c then L5() else L1();
  L1():
    warning = ldf warning;
    check L9() else D5();
  L5():
    stop = ldf stop;
    check L6() else D3();
  D3():
    deopt 9 [];
  D5():
    deopt 17 [];
  L6():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r3 = dyn stop[, domain, `call.`](p1, NA_LGL, FALSE);
    check L7() else D4();
  L9():
    p2 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r5 = dyn warning[, domain, `call.`](p2, NA_LGL, FALSE);
    check L10() else D6();
  D4():
    deopt 15 [r3];
  D6():
    deopt 23 [r5];
  L7():
    popenv;
    return r3;
  L10():
    popenv;
    return r5;
  }
}