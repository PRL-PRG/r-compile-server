fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner772001958;
    st `.onUnload` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner772001958(libpath) {
  (reg libpath:*) -+> V { var libpath:*, reg message:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg _isMethodsDispatchOn:cls, reg r3:V, reg library_dynam_unload:cls, reg libpath1:*, reg libpath2:V, reg p:p(V +), reg r5:V |
    mkenv;
    st libpath = libpath;
    message = ldf message;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn message("unloading 'methods' package ...");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    sym = ldf `.isMethodsDispatchOn`;
    base = ldf `.isMethodsDispatchOn` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    library_dynam_unload = ldf `library.dynam.unload`;
    check L6() else D3();
  L3():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r3 = dyn _isMethodsDispatchOn(FALSE);
    check L5() else D2();
  L4():
    r1 = dyn base(FALSE);
    goto L0();
  D2():
    deopt 8 [r3];
  D3():
    deopt 10 [];
  L5():
    goto L0();
  L6():
    p = prom<V +>{
      libpath1 = ld libpath;
      libpath2 = force? libpath1;
      checkMissing(libpath2);
      return libpath2;
    };
    r5 = dyn library_dynam_unload("methods", p);
    check L7() else D4();
  D4():
    deopt 13 [r5];
  L7():
    popenv;
    return r5;
  }
}