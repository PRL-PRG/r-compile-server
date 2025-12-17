fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3562470093;
    st xinch = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3562470093(x, `warn.log`) {
  (reg x:*, reg warn_log:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var `warn.log`:*, reg warn_log_isMissing:L, reg warn_log_orDefault:*, reg warn_log1:*, reg warn_log2:V, reg c:L, reg c2:V, reg par:cls, reg r:V, reg c3:L, reg c4:V, reg c6:L, reg warning:cls, reg r1:V, reg x1:*, reg x2:V, reg diff:cls, reg par1:cls, reg r3:V, reg c7:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg r9:V, reg par2:cls, reg r10:V, reg c8:L, reg r13:V, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r16:V, reg dx3:V, reg __1:cls, reg r17:V, reg r18:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(1.0) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    warn_log_isMissing = missing.0(warn_log);
    if warn_log_isMissing then L1(TRUE) else L1(warn_log);
  L1(warn_log_orDefault):
    st `warn.log` = warn_log_orDefault;
    warn_log1 = ld `warn.log`;
    check L6() else D0();
  D0():
    deopt 0 [warn_log1];
  L6():
    warn_log2 = force? warn_log1;
    checkMissing(warn_log2);
    c = `as.logical`(warn_log2);
    if c then L7() else L2(c);
  L2(c2):
    c6 = `as.logical`(c2);
    if c6 then L11() else L3();
  L7():
    par = ldf par;
    check L8() else D1();
  D1():
    deopt 3 [c];
  L3():
    goto L4();
  L4():
    x1 = ld x;
    check L15() else D5();
  L8():
    r = dyn par("xlog");
    check L9() else D2();
  L11():
    warning = ldf warning;
    check L12() else D3();
  D2():
    deopt 5 [c, r];
  D3():
    deopt 8 [];
  D5():
    deopt 13 [x1];
  L9():
    c3 = `as.logical`(r);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L12():
    r1 = dyn warning("x log scale:  xinch() is nonsense");
    check L13() else D4();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    diff = ldf diff;
    check L16() else D6();
  D4():
    deopt 10 [r1];
  D6():
    deopt 15 [x2];
  L13():
    goto L4();
  L16():
    p = prom<V +>{
      par1 = ldf par;
      r3 = dyn par1("usr");
      c7 = `is.object`(r3);
      if c7 then L1() else L2(r3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r5):
      __ = ldf `[` in base;
      r6 = dyn __(r5, <int 1, 2>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn diff(p);
    check L17() else D7();
  D7():
    deopt 17 [x2, r8];
  L17():
    r9 = `*`(x2, r8);
    par2 = ldf par;
    check L18() else D8();
  D8():
    deopt 19 [r9];
  L18():
    r10 = dyn par2("pin");
    check L19() else D9();
  D9():
    deopt 21 [r9, r10];
  L19():
    c8 = `is.object`(r10);
    if c8 then L20() else L21(r9, r10);
  L5(r16, dx3):
    r18 = `/`(r16, dx3);
    popenv;
    return r18;
  L20():
    dr2 = tryDispatchBuiltin.1("[", r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(r9, dr2);
  L21(r13, r14):
    __1 = ldf `[` in base;
    r17 = dyn __1(r14, 1);
    goto L5(r13, r17);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(r9, dx2);
  }
}