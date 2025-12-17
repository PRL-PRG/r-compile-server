fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3632147748;
    st multipleClasses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3632147748(details) {
  (reg details:*) -+> V { var details:*, reg details_isMissing:L, reg details_orDefault:*, reg as_list:cls, reg _classTable:*, reg _classTable1:V, reg p:p(V +), reg r1:V, reg Filter:cls, reg is_list:*, reg is_list1:V, reg p1:p(V +), reg classes:*, reg classes1:V, reg p2:p(V +), reg r4:V, reg details1:*, reg details2:V, reg c:L, reg dups:*, reg dups1:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg dups2:*, reg dups3:V, reg names:cls, reg r7:V |
    mkenv;
    details_isMissing = missing.0(details);
    if details_isMissing then L0(FALSE) else L0(details);
  L0(details_orDefault):
    st details = details_orDefault;
    as_list = ldf `as.list`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      _classTable = ld `.classTable`;
      _classTable1 = force? _classTable;
      checkMissing(_classTable1);
      return _classTable1;
    };
    r1 = dyn as_list[, `all.names`](p, TRUE);
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st classes = r1;
    Filter = ldf Filter;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      is_list = ld `is.list`;
      is_list1 = force? is_list;
      checkMissing(is_list1);
      return is_list1;
    };
    p2 = prom<V +>{
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      return classes1;
    };
    r4 = dyn Filter(p1, p2);
    check L6() else D3();
  D3():
    deopt 11 [r4];
  L6():
    st dups = r4;
    details1 = ld details;
    check L7() else D4();
  D4():
    deopt 13 [details1];
  L7():
    details2 = force? details1;
    checkMissing(details2);
    c = `as.logical`(details2);
    if c then L8() else L1();
  L1():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L8():
    dups = ld dups;
    check L9() else D5();
  D5():
    deopt 15 [dups];
  L2(r6):
    popenv;
    return r6;
  L9():
    dups1 = force? dups;
    checkMissing(dups1);
    popenv;
    return dups1;
  L11():
    dups2 = ld dups;
    check L13() else D6();
  L12():
    r5 = dyn base(<sym dups>);
    goto L2(r5);
  D6():
    deopt 19 [dups2];
  L13():
    dups3 = force? dups2;
    checkMissing(dups3);
    names = ldf names in base;
    r7 = dyn names(dups3);
    check L14() else D7();
  D7():
    deopt 22 [r7];
  L14():
    goto L2(r7);
  }
}