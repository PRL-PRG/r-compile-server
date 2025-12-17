fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3126575721;
    st `.MakeImplicitGroupMembers` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3126575721(group, members, where) {
  (reg group:*, reg members:*, reg where:*) -+> V { var group:*, var members:*, var where:*, reg exists:cls, reg _ImplicitGroupMetaName:*, reg _ImplicitGroupMetaName1:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg assign:cls, reg _ImplicitGroupMetaName2:*, reg _ImplicitGroupMetaName3:V, reg p2:p(V +), reg new_env:cls, reg r5:V, reg p3:p(V +), reg where3:*, reg where4:V, reg p4:p(V +), reg r8:V, reg get:cls, reg _ImplicitGroupMetaName4:*, reg _ImplicitGroupMetaName5:V, reg p5:p(V +), reg where5:*, reg where6:V, reg p6:p(V +), reg r12:V, reg members1:*, reg members2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg assign1:cls, reg what:*, reg what1:V, reg p7:p(V +), reg as_list:cls, reg group1:*, reg group2:V, reg p8:p(V +), reg r15:V, reg p9:p(V +), reg tbl:*, reg tbl1:V, reg p10:p(V +), reg r18:V |
    mkenv;
    st group = group;
    st members = members;
    st where = where;
    exists = ldf exists;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      _ImplicitGroupMetaName = ld `.ImplicitGroupMetaName`;
      _ImplicitGroupMetaName1 = force? _ImplicitGroupMetaName;
      checkMissing(_ImplicitGroupMetaName1);
      return _ImplicitGroupMetaName1;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn exists[, , inherits](p, p1, FALSE);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    get = ldf get;
    check L10() else D4();
  L6():
    assign = ldf assign;
    check L7() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 17 [];
  L7():
    p2 = prom<V +>{
      _ImplicitGroupMetaName2 = ld `.ImplicitGroupMetaName`;
      _ImplicitGroupMetaName3 = force? _ImplicitGroupMetaName2;
      checkMissing(_ImplicitGroupMetaName3);
      return _ImplicitGroupMetaName3;
    };
    p3 = prom<V +>{
      new_env = ldf `new.env`;
      r5 = dyn new_env(TRUE);
      return r5;
    };
    p4 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r8 = dyn assign(p2, p3, p4);
    check L8() else D3();
  L10():
    p5 = prom<V +>{
      _ImplicitGroupMetaName4 = ld `.ImplicitGroupMetaName`;
      _ImplicitGroupMetaName5 = force? _ImplicitGroupMetaName4;
      checkMissing(_ImplicitGroupMetaName5);
      return _ImplicitGroupMetaName5;
    };
    p6 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r12 = dyn get(p5, p6);
    check L11() else D5();
  D3():
    deopt 13 [r8];
  D5():
    deopt 20 [r12];
  L8():
    goto L1();
  L11():
    st tbl = r12;
    members1 = ld members;
    check L12() else D6();
  D6():
    deopt 22 [members1];
  L12():
    members2 = force? members1;
    checkMissing(members2);
    s = toForSeq(members2);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L13() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    assign1 = ldf assign;
    check L14() else D7();
  L13():
    popenv;
    return NULL;
  D7():
    deopt 25 [i2];
  L14():
    p7 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p9 = prom<V +>{
      as_list = ldf `as.list`;
      p8 = prom<V +>{
        group1 = ld group;
        group2 = force? group1;
        checkMissing(group2);
        return group2;
      };
      r15 = dyn as_list(p8);
      return r15;
    };
    p10 = prom<V +>{
      tbl = ld tbl;
      tbl1 = force? tbl;
      checkMissing(tbl1);
      return tbl1;
    };
    r18 = dyn assign1[, , envir](p7, p9, p10);
    check L15() else D8();
  D8():
    deopt 30 [i2, r18];
  L15():
    goto L2(i2);
  }
}