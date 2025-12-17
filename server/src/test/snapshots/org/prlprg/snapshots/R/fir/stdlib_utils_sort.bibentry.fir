fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1461622384;
    st `sort.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1461622384(x, decreasing, `.bibstyle`, drop, `...`) {
  (reg x:*, reg decreasing:*, reg _bibstyle:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, var `.bibstyle`:*, reg _bibstyle_isMissing:L, reg _bibstyle_orDefault:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg __:cls, reg r:V, reg r1:cls, reg _bibstyle1:*, reg _bibstyle2:V, reg p:p(V +), reg r3:V, reg c1:L, reg r5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg dx4:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg decreasing1:*, reg decreasing2:V, reg p3:p(V +), reg r11:V, reg drop1:*, reg drop2:V, reg __1:cls, reg r12:V |
    mkenv;
    st x = x;
    decreasing_isMissing = missing.0(decreasing);
    if decreasing_isMissing then L0(FALSE) else L0(decreasing);
  L0(decreasing_orDefault):
    st decreasing = decreasing_orDefault;
    _bibstyle_isMissing = missing.0(_bibstyle);
    if _bibstyle_isMissing then L1(NULL) else L1(_bibstyle);
  L1(_bibstyle_orDefault):
    st `.bibstyle` = _bibstyle_orDefault;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L2(FALSE) else L2(drop);
  L2(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L4() else D0();
  D0():
    deopt 0 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L5() else L6(x2);
  L3(dx1):
    popenv;
    return dx1;
  L5():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(x4):
    order = ldf order;
    check L8() else D1();
  D1():
    deopt 3 [x4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L8():
    p2 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("tools", "bibstyle");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        _bibstyle1 = ld `.bibstyle`;
        _bibstyle2 = force? _bibstyle1;
        checkMissing(_bibstyle2);
        return _bibstyle2;
      };
      r3 = dyn r1[, `.default`](p, FALSE);
      c1 = `is.object`(r3);
      if c1 then L1() else L2(r3);
    L0(dx3):
      checkFun.0(dx3);
      dx4 = dx3 as cls;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r8 = dyn dx4(p1);
      return r8;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r5):
      r6 = `$`(r5, <sym sortKeys>);
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      decreasing1 = ld decreasing;
      decreasing2 = force? decreasing1;
      checkMissing(decreasing2);
      return decreasing2;
    };
    r11 = dyn order[, decreasing](p2, p3);
    check L9() else D2();
  D2():
    deopt 7 [x4, r11];
  L9():
    drop1 = ld drop;
    check L10() else D3();
  D3():
    deopt 8 [x4, drop1];
  L10():
    drop2 = force? drop1;
    __1 = ldf `[` in base;
    r12 = dyn __1(x2, r11, drop2);
    goto L3(r12);
  }
}