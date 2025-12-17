fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2854634098;
    st setIsFirstArg = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg v1:*, reg v2:V, reg l:*, reg c:L, reg v4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg v6:V, reg dx1:V, reg ____:cls, reg r:V |
    mkenv;
    st v = v;
    v1 = ld v;
    check L1() else D0();
  D0():
    deopt 0 [v1];
  L1():
    v2 = force? v1;
    checkMissing(v2);
    l = ld `.CompletionEnv`;
    c = `is.object`(l);
    if c then L2() else L3(v2, l);
  L0(v6, dx1):
    st `.CompletionEnv` = dx1;
    invisible.0();
    popenv;
    return v6;
  L2():
    dr = tryDispatchBuiltin.0("[[<-", l, v2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(v2, dr);
  L3(v4, l2):
    ____ = ldf `[[<-` in base;
    r = dyn ____(l2, v2, "isFirstArg");
    goto L0(v4, r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(v2, dx);
  }
}