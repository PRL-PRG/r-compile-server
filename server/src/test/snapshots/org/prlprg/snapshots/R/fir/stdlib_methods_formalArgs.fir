fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1317922881;
    st formalArgs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1317922881(def) {
  (reg def:*) -+> V { var def:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg formals:cls, reg def1:*, reg def2:V, reg p:p(V +), reg parent_frame:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg names:cls, reg r6:V |
    mkenv;
    st def = def;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    formals = ldf formals;
    check L3() else D0();
  L2():
    r = dyn base(<lang formals(def, envir=parent.frame())>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r3 = dyn parent_frame();
      return r3;
    };
    r5 = dyn formals[, envir](p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r5];
  L4():
    names = ldf names in base;
    r6 = dyn names(r5);
    check L5() else D2();
  D2():
    deopt 9 [r6];
  L5():
    goto L0(r6);
  }
}