fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2878104365;
    st setReplaceMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2878104365(f, `...`, where) {
  (reg f:*, reg ddd:dots, reg where:*) -+> V { var f:*, var `...`:dots?, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg setMethod:cls, reg paste0:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg ddd1:dots?, reg where1:*, reg where2:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st f = f;
    st `...` = ddd;
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
    setMethod = ldf setMethod;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r5 = dyn paste0(p2, "<-");
      return r5;
    };
    ddd1 = ld `...`;
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r8 = dyn setMethod[, `...`, where](p3, ddd1, p4);
    check L3() else D1();
  D1():
    deopt 6 [r8];
  L3():
    popenv;
    return r8;
  }
}