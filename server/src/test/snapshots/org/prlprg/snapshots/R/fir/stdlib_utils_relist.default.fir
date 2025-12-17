fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3929323065;
    st `relist.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3929323065(flesh, skeleton) {
  (reg flesh:*, reg skeleton:*) -+> V { var flesh:*, var skeleton:*, reg skeleton_isMissing:L, reg skeleton_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg flesh1:*, reg flesh2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg flesh3:*, reg flesh4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg skeleton1:*, reg skeleton2:V, reg names:cls, reg r6:V, reg l:*, reg names__:cls, reg r7:V, reg result:*, reg result1:V |
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
    flesh3 = ld flesh;
    check L3() else D0();
  D0():
    deopt 0 [flesh3];
  L3():
    flesh4 = force? flesh3;
    checkMissing(flesh4);
    st result = flesh4;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L2(r5):
    l = ld result;
    names__ = ldf `names<-`;
    check L8() else D3();
  L4():
    skeleton1 = ld skeleton;
    check L6() else D1();
  L5():
    r4 = dyn base1(<sym skeleton>);
    goto L2(r4);
  D1():
    deopt 5 [skeleton1];
  D3():
    deopt 10 [r5, l, r5];
  L6():
    skeleton2 = force? skeleton1;
    checkMissing(skeleton2);
    names = ldf names in base;
    r6 = dyn names(skeleton2);
    check L7() else D2();
  L8():
    r7 = dyn names__(l, NULL, r5);
    check L9() else D4();
  D2():
    deopt 8 [r6];
  D4():
    deopt 12 [r5, r7];
  L7():
    goto L2(r6);
  L9():
    st result = r7;
    result = ld result;
    check L10() else D5();
  D5():
    deopt 14 [result];
  L10():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  }
}