fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1338618902;
    st isGroup = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1338618902(f, where, fdef) {
  (reg f:*, reg where:*, reg fdef:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg is:cls, reg fdef1:*, reg fdef2:V, reg p5:p(V +), reg r9:V |
    mkenv;
    st f = f;
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
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L2() else L3(fdef);
  L2():
    p4 = prom<V +>{
      getGeneric = ldf getGeneric;
      p2 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p3 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r6 = dyn getGeneric[, where](p2, p3);
      return r6;
    };
    goto L3(p4);
  L3(fdef_orDefault):
    st fdef = fdef_orDefault;
    is = ldf is;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p5 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r9 = dyn is(p5, "groupGenericFunction");
    check L5() else D1();
  D1():
    deopt 4 [r9];
  L5():
    popenv;
    return r9;
  }
}