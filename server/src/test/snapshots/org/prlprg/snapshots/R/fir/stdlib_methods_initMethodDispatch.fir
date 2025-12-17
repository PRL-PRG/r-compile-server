fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4006344421;
    st initMethodDispatch = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4006344421(where) {
  (reg where:*) -+> V { var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg C_R_initMethodDispatch:*, reg C_R_initMethodDispatch1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg C_R_initMethodDispatch4:V, reg r7:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r8:V, reg vargs:dots, reg r9:V |
    mkenv;
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
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r5):
    popenv;
    return r5;
  L4():
    C_R_initMethodDispatch = ld C_R_initMethodDispatch;
    check L6() else D0();
  L5():
    r4 = dyn base(<sym C_R_initMethodDispatch>, <lang as.environment(where)>);
    goto L2(r4);
  D0():
    deopt 1 [C_R_initMethodDispatch];
  L6():
    C_R_initMethodDispatch1 = force? C_R_initMethodDispatch;
    checkMissing(C_R_initMethodDispatch1);
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3(C_R_initMethodDispatch4, r7):
    vargs = dots[r7];
    r9 = `.Call`(C_R_initMethodDispatch4, vargs, <missing>);
    goto L2(r9);
  L7():
    where1 = ld where;
    check L9() else D1();
  L8():
    r6 = dyn base1(<sym where>);
    goto L3(C_R_initMethodDispatch1, r6);
  D1():
    deopt 4 [C_R_initMethodDispatch1, where1];
  L9():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r8 = dyn as_environment(where2);
    check L10() else D2();
  D2():
    deopt 7 [C_R_initMethodDispatch1, r8];
  L10():
    goto L3(C_R_initMethodDispatch1, r8);
  }
}