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
  (reg libpath:*) -+> V { var libpath:*, reg library_dynam_unload:cls, reg libpath1:*, reg libpath2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st libpath = libpath;
    library_dynam_unload = ldf `library.dynam.unload`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      libpath1 = ld libpath;
      libpath2 = force? libpath1;
      checkMissing(libpath2);
      return libpath2;
    };
    r1 = dyn library_dynam_unload("tools", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}