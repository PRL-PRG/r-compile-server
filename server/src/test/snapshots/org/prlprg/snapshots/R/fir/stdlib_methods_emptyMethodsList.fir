fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1034556360;
    st emptyMethodsList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1034556360(mlist, thisClass, sublist) {
  (reg mlist:*, reg thisClass:*, reg sublist:*) -+> V { var mlist:*, var thisClass:*, reg thisClass_isMissing:L, reg thisClass_orDefault:*, var sublist:*, reg sublist_isMissing:L, reg sublist_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg _MlistDefunct:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg list1:cls, reg r7:V, reg l:*, reg c:L, reg r9:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg thisClass1:*, reg thisClass2:V, reg ___:cls, reg r12:V, reg new:cls, reg __:cls, reg r13:V, reg p1:p(V +), reg sublist1:*, reg sublist2:V, reg p2:p(V +), reg r16:V |
    mkenv;
    st mlist = mlist;
    thisClass_isMissing = missing.0(thisClass);
    if thisClass_isMissing then L0("ANY") else L0(thisClass);
  L0(thisClass_orDefault):
    st thisClass = thisClass_orDefault;
    sublist_isMissing = missing.0(sublist);
    if sublist_isMissing then L1() else L2(sublist);
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L2(p);
  L2(sublist_orDefault):
    st sublist = sublist_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r4 = dyn _MlistDefunct("emptyMethodsList()");
    check L6() else D1();
  D1():
    deopt 3 [r4];
  L6():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3(r6):
    l = ld sublist;
    c = `is.object`(l);
    if c then L10() else L11(r6, l);
  L7():
    list1 = ldf list in base;
    r7 = dyn list1(NULL);
    check L9() else D2();
  L8():
    r5 = dyn base1(NULL);
    goto L3(r5);
  D2():
    deopt 8 [r7];
  L4(dx1):
    st sublist = dx1;
    new = ldf new;
    check L14() else D4();
  L9():
    goto L3(r7);
  L10():
    dr = tryDispatchBuiltin.0("[<-", l, r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(r6, dr);
  L11(r9, l2):
    thisClass1 = ld thisClass;
    check L13() else D3();
  D3():
    deopt 10 [r9, l2, r6, thisClass1];
  D4():
    deopt 15 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L13():
    thisClass2 = force? thisClass1;
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, r6, thisClass2);
    goto L4(r12);
  L14():
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r13 = dyn __(<sym mlist>, <sym argument>);
      return r13;
    };
    p2 = prom<V +>{
      sublist1 = ld sublist;
      sublist2 = force? sublist1;
      checkMissing(sublist2);
      return sublist2;
    };
    r16 = dyn new[, argument, sublist]("EmptyMethodsList", p1, p2);
    check L15() else D5();
  D5():
    deopt 21 [r16];
  L15():
    popenv;
    return r16;
  }
}