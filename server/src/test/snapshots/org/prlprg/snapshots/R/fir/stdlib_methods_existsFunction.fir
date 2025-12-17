fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2935266531;
    st existsFunction = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2935266531(f, generic, where) {
  (reg f:*, reg generic:*, reg where:*) -+> V { var f:*, var generic:*, reg generic_isMissing:L, reg generic_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg findFunction:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg generic1:*, reg generic2:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r9:V, reg length:cls, reg r10:V, reg r11:V |
    mkenv;
    st f = f;
    generic_isMissing = missing.0(generic);
    if generic_isMissing then L0(TRUE) else L0(generic);
  L0(generic_orDefault):
    st generic = generic_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
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
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r5):
    r11 = `>`(r5, 0);
    popenv;
    return r11;
  L4():
    findFunction = ldf findFunction;
    check L6() else D0();
  L5():
    r4 = dyn base(<lang findFunction(f, generic, where)>);
    goto L3(r4);
  D0():
    deopt 3 [];
  L6():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn findFunction(p2, p3, p4);
    check L7() else D1();
  D1():
    deopt 7 [r9];
  L7():
    length = ldf length in base;
    r10 = dyn length(r9);
    check L8() else D2();
  D2():
    deopt 9 [r10];
  L8():
    goto L3(r10);
  }
}