fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_S3_generics_in_base` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _get_S3_generics_in_env:cls, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg p:p(V +), reg r3:V, reg _get_internal_S3_generics:cls, reg r4:V, reg _get_S3_group_generics:cls, reg r5:V, reg c:cls, reg r6:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _get_S3_generics_in_env = ldf `.get_S3_generics_in_env`;
    check L3() else D0();
  L2():
    r = dyn base(<lang .get_S3_generics_in_env(.BaseNamespaceEnv)>, <lang .get_internal_S3_generics()>, <lang .get_S3_group_generics()>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
      _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
      checkMissing(_BaseNamespaceEnv1);
      return _BaseNamespaceEnv1;
    };
    r3 = dyn _get_S3_generics_in_env(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    _get_internal_S3_generics = ldf `.get_internal_S3_generics`;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    r4 = dyn _get_internal_S3_generics();
    check L6() else D3();
  D3():
    deopt 8 [r4];
  L6():
    _get_S3_group_generics = ldf `.get_S3_group_generics`;
    check L7() else D4();
  D4():
    deopt 10 [];
  L7():
    r5 = dyn _get_S3_group_generics();
    check L8() else D5();
  D5():
    deopt 11 [r5];
  L8():
    c = ldf c in base;
    r6 = dyn c(r3, r4, r5);
    check L9() else D6();
  D6():
    deopt 13 [r6];
  L9():
    goto L0(r6);
  }
}