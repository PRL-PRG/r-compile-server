fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3024327329;
    st hasLoadAction = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3024327329(aname, where) {
  (reg aname:*, reg where:*) -+> V { var aname:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg exists:cls, reg _actionMetaName:cls, reg aname1:*, reg aname2:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st aname = aname;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    exists = ldf exists;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      _actionMetaName = ldf `.actionMetaName`;
      p2 = prom<V +>{
        aname1 = ld aname;
        aname2 = force? aname1;
        checkMissing(aname2);
        return aname2;
      };
      r5 = dyn _actionMetaName(p2);
      return r5;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r8 = dyn exists[, envir, inherits](p3, p4, FALSE);
    check L3() else D1();
  D1():
    deopt 7 [r8];
  L3():
    popenv;
    return r8;
  }
}