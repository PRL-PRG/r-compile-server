fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4001578419;
    st `.onLoad` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4001578419(libname, pkgname) {
  (reg libname:*, reg pkgname:*) -+> V { var libname:*, var pkgname:*, reg environment:cls, reg sys_function:cls, reg r:V, reg p:p(V +), reg r2:V, reg initMethodDispatch:cls, reg where:*, reg where1:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg C_R_set_method_dispatch:*, reg C_R_set_method_dispatch1:V, reg vargs:dots, reg r7:V, reg setPrimitiveMethods:cls, reg __:*, reg __1:V, reg p2:p(V +), reg getGeneric:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg assign:cls, reg where2:*, reg where3:V, reg p4:p(V +), reg where4:*, reg where5:V, reg p5:p(V +), reg r14:V |
    mkenv;
    st libname = libname;
    st pkgname = pkgname;
    environment = ldf environment;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sys_function = ldf `sys.function`;
      r = dyn sys_function();
      return r;
    };
    r2 = dyn environment(p);
    check L2() else D1();
  D1():
    deopt 3 [r2];
  L2():
    st where = r2;
    initMethodDispatch = ldf initMethodDispatch;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r4 = dyn initMethodDispatch(p1);
    check L4() else D3();
  D3():
    deopt 8 [r4];
  L4():
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    setPrimitiveMethods = ldf setPrimitiveMethods;
    check L8() else D5();
  L5():
    C_R_set_method_dispatch = ld C_R_set_method_dispatch;
    check L7() else D4();
  L6():
    r5 = dyn base(<sym C_R_set_method_dispatch>, TRUE);
    goto L0();
  D4():
    deopt 10 [C_R_set_method_dispatch];
  D5():
    deopt 15 [];
  L7():
    C_R_set_method_dispatch1 = force? C_R_set_method_dispatch;
    checkMissing(C_R_set_method_dispatch1);
    vargs = dots[TRUE];
    r7 = `.Call`(C_R_set_method_dispatch1, vargs, <missing>);
    goto L0();
  L8():
    p2 = prom<V +>{
      __ = ld `$`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    p3 = prom<V +>{
      getGeneric = ldf getGeneric;
      r9 = dyn getGeneric("$");
      return r9;
    };
    r11 = dyn setPrimitiveMethods[, , code, generic, mlist]("$", p2, "reset", p3, NULL);
    check L9() else D6();
  D6():
    deopt 24 [r11];
  L9():
    assign = ldf assign;
    check L10() else D7();
  D7():
    deopt 26 [];
  L10():
    p4 = prom<V +>{
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      return where3;
    };
    p5 = prom<V +>{
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      return where5;
    };
    r14 = dyn assign(".methodsNamespace", p4, p5);
    check L11() else D8();
  D8():
    deopt 30 [r14];
  L11():
    popenv;
    return r14;
  }
}