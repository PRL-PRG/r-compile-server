fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3571966910;
    st setCacheOnAssign = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3571966910(env, onOff) {
  (reg env:*, reg onOff:*) -+> V { var env:*, var onOff:*, reg onOff_isMissing:L, reg onOff_orDefault:*, reg cacheOnAssign:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg onOff1:*, reg onOff2:V, reg c:L, reg r3:L, reg l:*, reg c1:L, reg r5:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r7:L, reg dx1:V, reg r8:V |
    mkenv;
    st env = env;
    onOff_isMissing = missing.0(onOff);
    if onOff_isMissing then L0() else L1(onOff);
  L0():
    p1 = prom<V +>{
      cacheOnAssign = ldf cacheOnAssign;
      p = prom<V +>{
        env1 = ld env;
        env2 = force? env1;
        checkMissing(env2);
        return env2;
      };
      r1 = dyn cacheOnAssign(p);
      return r1;
    };
    goto L1(p1);
  L1(onOff_orDefault):
    st onOff = onOff_orDefault;
    onOff1 = ld onOff;
    check L4() else D0();
  D0():
    deopt 0 [onOff1];
  L4():
    onOff2 = force? onOff1;
    checkMissing(onOff2);
    c = `as.logical`(onOff2);
    if c then L5() else L2();
  L2():
    goto L3(FALSE);
  L3(r3):
    l = ld env;
    c1 = `is.object`(l);
    if c1 then L8() else L9(r3, l);
  L5():
    goto L3(TRUE);
  L7(r7, dx1):
    st env = dx1;
    invisible.0();
    popenv;
    return r7;
  L8():
    dr = tryDispatchBuiltin.0("$<-", l, r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(r3, dr);
  L9(r5, l2):
    r8 = `$<-`(l2, <sym .cacheOnAssign>, r3);
    goto L7(r5, r8);
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(r3, dx);
  }
}