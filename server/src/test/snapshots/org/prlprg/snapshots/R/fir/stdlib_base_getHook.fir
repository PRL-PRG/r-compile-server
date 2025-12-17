fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner110175470;
    st getHook = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner110175470(hookName) {
  (reg hookName:*) -+> V { var hookName:*, reg get0:cls, reg hookName1:*, reg hookName2:V, reg p:p(V +), reg _userHooksEnv:*, reg _userHooksEnv1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st hookName = hookName;
    get0 = ldf get0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      hookName1 = ld hookName;
      hookName2 = force? hookName1;
      checkMissing(hookName2);
      return hookName2;
    };
    p1 = prom<V +>{
      _userHooksEnv = ld `.userHooksEnv`;
      _userHooksEnv1 = force? _userHooksEnv;
      checkMissing(_userHooksEnv1);
      return _userHooksEnv1;
    };
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list();
      goto L0(r4);
    L2():
      r2 = dyn base();
      goto L0(r2);
    };
    r6 = dyn get0[, envir, inherits, ifnotfound](p, p1, FALSE, p2);
    check L1() else D1();
  D1():
    deopt 9 [r6];
  L1():
    popenv;
    return r6;
  }
}