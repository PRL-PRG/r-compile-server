fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-993550229`;
    st `as.list.environment` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-993550229`(x, `all.names`, sorted, `...`) {
  (reg x:*, reg all_names:*, reg sorted:*, reg ddd:dots) -+> V { var x:*, var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var sorted:*, reg sorted_isMissing:L, reg sorted_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg all_names1:*, reg all_names2:V, reg sorted1:*, reg sorted2:V, reg env2list:cls, reg r2:V |
    mkenv;
    st x = x;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L0(FALSE) else L0(all_names);
  L0(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    sorted_isMissing = missing.0(sorted);
    if sorted_isMissing then L1(FALSE) else L1(sorted);
  L1(sorted_orDefault):
    st sorted = sorted_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang env2list(x, all.names, sorted)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    all_names1 = ld `all.names`;
    check L6() else D1();
  D1():
    deopt 4 [all_names1];
  L6():
    all_names2 = force? all_names1;
    checkMissing(all_names2);
    sorted1 = ld sorted;
    check L7() else D2();
  D2():
    deopt 6 [sorted1];
  L7():
    sorted2 = force? sorted1;
    checkMissing(sorted2);
    env2list = ldf env2list in base;
    r2 = dyn env2list(x2, all_names2, sorted2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}