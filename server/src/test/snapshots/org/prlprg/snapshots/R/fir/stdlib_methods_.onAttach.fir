fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4001578419;
    st `.onAttach` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4001578419(libname, pkgname) {
  (reg libname:*, reg pkgname:*) -+> V { var libname:*, var pkgname:*, reg environment:cls, reg sys_function:cls, reg r:V, reg p:p(V +), reg r2:V, reg unlockBinding:cls, reg env:*, reg env1:V, reg p1:p(V +), reg r4:V, reg _hasS4MetaData:cls, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p2:p(V +), reg r6:V, reg c:L, reg try:cls, reg cacheMetaData:cls, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg result:*, reg result1:V, reg inherits:cls, reg r13:V, reg c1:L, reg warning:cls, reg r14:V |
    mkenv;
    st libname = libname;
    st pkgname = pkgname;
    environment = ldf environment;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      sys_function = ldf `sys.function`;
      r = dyn sys_function();
      return r;
    };
    r2 = dyn environment(p);
    check L4() else D1();
  D1():
    deopt 3 [r2];
  L4():
    st env = r2;
    unlockBinding = ldf unlockBinding;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r4 = dyn unlockBinding(".BasicFunsList", p1);
    check L6() else D3();
  D3():
    deopt 9 [r4];
  L6():
    _hasS4MetaData = ldf `.hasS4MetaData`;
    check L7() else D4();
  D4():
    deopt 11 [];
  L7():
    p2 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r6 = dyn _hasS4MetaData(p2);
    check L8() else D5();
  D5():
    deopt 13 [r6];
  L8():
    c = `as.logical`(r6);
    if c then L9() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L9():
    try = ldf try;
    check L10() else D6();
  D6():
    deopt 15 [];
  L10():
    p4 = prom<V +>{
      cacheMetaData = ldf cacheMetaData;
      p3 = prom<V +>{
        _GlobalEnv2 = ld `.GlobalEnv`;
        _GlobalEnv3 = force? _GlobalEnv2;
        checkMissing(_GlobalEnv3);
        return _GlobalEnv3;
      };
      r8 = dyn cacheMetaData(p3, TRUE);
      return r8;
    };
    r10 = dyn try(p4);
    check L11() else D7();
  D7():
    deopt 17 [r10];
  L11():
    st result = r10;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r12):
    c1 = `as.logical`(r12);
    if c1 then L16() else L2();
  L12():
    result = ld result;
    check L14() else D8();
  L13():
    r11 = dyn base(<sym result>, "try-error");
    goto L1(r11);
  D8():
    deopt 21 [result];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L14():
    result1 = force? result;
    checkMissing(result1);
    inherits = ldf inherits in base;
    r13 = dyn inherits(result1, "try-error", FALSE);
    check L15() else D9();
  L16():
    warning = ldf warning;
    check L17() else D10();
  D9():
    deopt 26 [r13];
  D10():
    deopt 28 [];
  L15():
    goto L1(r13);
  L17():
    r14 = dyn warning("apparently bad method or class metadata in saved environment;\n", "move the file or remove the class/method");
    check L18() else D11();
  D11():
    deopt 31 [r14];
  L18():
    popenv;
    return r14;
  }
}