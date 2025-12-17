fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3098033630;
    st `.getClassFromCache` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3098033630(name, where, package, `resolve.confl`, `resolve.msg`) {
  (reg name:*, reg where:*, reg package:*, reg resolve_confl:*, reg resolve_msg:*) -+> V { var name:*, var where:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg packageSlot:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `resolve.confl`:*, reg resolve_confl_isMissing:L, reg resolve_confl_orDefault:*, var `resolve.msg`:*, reg resolve_msg_isMissing:L, reg resolve_msg_orDefault:*, reg _getClassesFromCache:cls, reg name3:*, reg name4:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg value:*, reg value1:V, reg is_list:cls, reg r7:V, reg c:L, reg _resolveClassList:cls, reg value2:*, reg value3:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg package1:*, reg package2:V, reg p5:p(V +), reg resolve_confl1:*, reg resolve_confl2:V, reg p6:p(V +), reg resolve_msg1:*, reg resolve_msg2:V, reg p7:p(V +), reg r13:V, reg value4:*, reg value5:V |
    mkenv;
    st name = name;
    st where = where;
    package_isMissing = missing.0(package);
    if package_isMissing then L0() else L1(package);
  L0():
    p1 = prom<V +>{
      packageSlot = ldf packageSlot;
      p = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      r1 = dyn packageSlot(p);
      return r1;
    };
    goto L1(p1);
  L1(package_orDefault):
    st package = package_orDefault;
    resolve_confl_isMissing = missing.0(resolve_confl);
    if resolve_confl_isMissing then L2("first") else L2(resolve_confl);
  L2(resolve_confl_orDefault):
    st `resolve.confl` = resolve_confl_orDefault;
    resolve_msg_isMissing = missing.0(resolve_msg);
    if resolve_msg_isMissing then L3(TRUE) else L3(resolve_msg);
  L3(resolve_msg_orDefault):
    st `resolve.msg` = resolve_msg_orDefault;
    _getClassesFromCache = ldf `.getClassesFromCache`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    r4 = dyn _getClassesFromCache(p2);
    check L8() else D1();
  D1():
    deopt 3 [r4];
  L8():
    st value = r4;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L4(r6):
    c = `as.logical`(r6);
    if c then L13() else L5();
  L9():
    value = ld value;
    check L11() else D2();
  L10():
    r5 = dyn base(<sym value>);
    goto L4(r5);
  D2():
    deopt 7 [value];
  L5():
    goto L6();
  L6():
    value4 = ld value;
    check L17() else D6();
  L11():
    value1 = force? value;
    checkMissing(value1);
    is_list = ldf `is.list` in base;
    r7 = dyn is_list(value1);
    check L12() else D3();
  L13():
    _resolveClassList = ldf `.resolveClassList`;
    check L14() else D4();
  D3():
    deopt 10 [r7];
  D4():
    deopt 12 [];
  D6():
    deopt 22 [value4];
  L12():
    goto L4(r7);
  L14():
    p3 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p5 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p6 = prom<V +>{
      resolve_confl1 = ld `resolve.confl`;
      resolve_confl2 = force? resolve_confl1;
      checkMissing(resolve_confl2);
      return resolve_confl2;
    };
    p7 = prom<V +>{
      resolve_msg1 = ld `resolve.msg`;
      resolve_msg2 = force? resolve_msg1;
      checkMissing(resolve_msg2);
      return resolve_msg2;
    };
    r13 = dyn _resolveClassList(p3, p4, p5, p6, p7);
    check L15() else D5();
  L17():
    value5 = force? value4;
    checkMissing(value5);
    popenv;
    return value5;
  D5():
    deopt 18 [r13];
  L15():
    st value = r13;
    goto L6();
  }
}