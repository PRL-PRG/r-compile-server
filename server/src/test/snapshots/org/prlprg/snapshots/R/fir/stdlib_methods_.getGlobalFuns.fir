fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1317922881;
    st `.getGlobalFuns` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1317922881(def) {
  (reg def:*) -+> V { var def:*, reg _hasCodeTools:cls, reg r:V, reg c:L, reg __:cls, reg r1:V, reg r2:cls, reg def1:*, reg def2:V, reg p:p(V +), reg r4:V, reg c1:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg unique:cls, reg unlist:cls, reg lapply:cls, reg def3:*, reg def4:V, reg p1:p(V +), reg all_names:*, reg all_names1:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st def = def;
    _hasCodeTools = ldf `.hasCodeTools`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn _hasCodeTools();
    check L2() else D1();
  D1():
    deopt 2 [r];
  L2():
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    unique = ldf unique;
    check L12() else D5();
  L3():
    __ = ldf `::`;
    check L4() else D2();
  D2():
    deopt 4 [];
  D5():
    deopt 15 [];
  L4():
    r1 = dyn __("codetools", "findGlobals");
    check L5() else D3();
  L12():
    p4 = prom<V +>{
      unlist = ldf unlist;
      p3 = prom<V +>{
        lapply = ldf lapply;
        p1 = prom<V +>{
          def3 = ld def;
          def4 = force? def3;
          checkMissing(def4);
          return def4;
        };
        p2 = prom<V +>{
          all_names = ld `all.names`;
          all_names1 = force? all_names;
          checkMissing(all_names1);
          return all_names1;
        };
        r10 = dyn lapply(p1, p2);
        return r10;
      };
      r12 = dyn unlist(p3);
      return r12;
    };
    r14 = dyn unique(p4);
    check L13() else D6();
  D3():
    deopt 7 [r1];
  D6():
    deopt 17 [r14];
  L5():
    checkFun.0(r1);
    r2 = r1 as cls;
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r4 = dyn r2[, merge](p, FALSE);
    check L6() else D4();
  L13():
    popenv;
    return r14;
  D4():
    deopt 12 [r4];
  L6():
    c1 = `is.object`(r4);
    if c1 then L8() else L9(r4);
  L7(dx1):
    popenv;
    return dx1;
  L8():
    dr = tryDispatchBuiltin.1("$", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(r6):
    r7 = `$`(r6, <sym functions>);
    goto L7(r7);
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  }
}