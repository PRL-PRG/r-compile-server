fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3094699547;
    st `.Rd_topic_for_display` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3094699547(name, aliases) {
  (reg name:*, reg aliases:*) -+> V { var name:*, var aliases:*, reg _in_:cls, reg name1:*, reg name2:V, reg p:p(V +), reg aliases1:*, reg aliases2:V, reg p1:p(V +), reg r2:V, reg c:L, reg name3:*, reg name4:V, reg aliases3:*, reg aliases4:V, reg c1:L, reg aliases6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V |
    mkenv;
    st name = name;
    st aliases = aliases;
    _in_ = ldf `%in%`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      aliases1 = ld aliases;
      aliases2 = force? aliases1;
      checkMissing(aliases2);
      return aliases2;
    };
    r2 = dyn _in_(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    aliases3 = ld aliases;
    check L7() else D3();
  L4():
    name3 = ld name;
    check L5() else D2();
  D2():
    deopt 5 [name3];
  D3():
    deopt 7 [aliases3];
  L5():
    name4 = force? name3;
    checkMissing(name4);
    popenv;
    return name4;
  L7():
    aliases4 = force? aliases3;
    checkMissing(aliases4);
    c1 = `is.object`(aliases4);
    if c1 then L8() else L9(aliases4);
  L1(dx1):
    popenv;
    return dx1;
  L8():
    dr = tryDispatchBuiltin.1("[", aliases4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(aliases6):
    __ = ldf `[` in base;
    r3 = dyn __(aliases6, 1);
    goto L1(r3);
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}