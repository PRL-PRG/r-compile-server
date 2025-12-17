fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3929323065;
    st `relist.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3929323065(flesh, skeleton) {
  (reg flesh:*, reg skeleton:*) -+> V { var flesh:*, var skeleton:*, reg skeleton_isMissing:L, reg skeleton_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg flesh1:*, reg flesh2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg as_factor:cls, reg levels:cls, reg skeleton1:*, reg skeleton2:V, reg p1:p(V +), reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg flesh3:*, reg flesh4:V, reg __:cls, reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st flesh = flesh;
    skeleton_isMissing = missing.0(skeleton);
    if skeleton_isMissing then L0() else L1(skeleton);
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      flesh1 = ld flesh;
      flesh2 = force? flesh1;
      checkMissing(flesh2);
      attr = ldf attr in base;
      r2 = dyn attr(flesh2, "skeleton");
      goto L0(r2);
    L2():
      r = dyn base(<sym flesh>, "skeleton");
      goto L0(r);
    };
    goto L1(p);
  L1(skeleton_orDefault):
    st skeleton = skeleton_orDefault;
    as_factor = ldf `as.factor`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      levels = ldf levels;
      p1 = prom<V +>{
        skeleton1 = ld skeleton;
        skeleton2 = force? skeleton1;
        checkMissing(skeleton2);
        return skeleton2;
      };
      r5 = dyn levels(p1);
      c = `is.object`(r5);
      if c then L1() else L2(r5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r7):
      flesh3 = ld flesh;
      flesh4 = force? flesh3;
      __ = ldf `[` in base;
      r8 = dyn __(r7, flesh4);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn as_factor(p2);
    check L3() else D1();
  D1():
    deopt 3 [r10];
  L3():
    popenv;
    return r10;
  }
}