fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st getIsFirstArg = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V |
    mkenv;
    _CompletionEnv = ld `.CompletionEnv`;
    check L1() else D0();
  D0():
    deopt 0 [_CompletionEnv];
  L1():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c = `is.object`(_CompletionEnv1);
    if c then L2() else L3(_CompletionEnv1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(_CompletionEnv3):
    __ = ldf `[[` in base;
    r = dyn __(_CompletionEnv3, "isFirstArg");
    goto L0(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}