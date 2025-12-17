fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner360360770;
    st `.setBaseClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner360360770(cl, `...`, where) {
  (reg cl:*, reg ddd:dots, reg where:*) -+> V { var cl:*, var `...`:dots?, var where:*, reg setClass:cls, reg cl1:*, reg cl2:V, reg p:p(V +), reg ddd1:dots?, reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg getClassDef:cls, reg cl3:*, reg cl4:V, reg p2:p(V +), reg where3:*, reg where4:V, reg p3:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg __:cls, reg r8:V, reg as_character:cls, reg r9:V, reg l:*, reg ___:cls, reg r10:V, reg _notS4:cls, reg __1:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg l1:*, reg ___1:cls, reg r14:V, reg assignClassDef:cls, reg cl5:*, reg cl6:V, reg p5:p(V +), reg def:*, reg def1:V, reg p6:p(V +), reg where5:*, reg where6:V, reg p7:p(V +), reg r18:V |
    mkenv;
    st cl = cl;
    st `...` = ddd;
    st where = where;
    setClass = ldf setClass;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    ddd1 = ld `...`;
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn setClass[, `...`, where](p, ddd1, p1);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    getClassDef = ldf getClassDef;
    check L3() else D2();
  D2():
    deopt 8 [];
  L3():
    p2 = prom<V +>{
      cl3 = ld cl;
      cl4 = force? cl3;
      checkMissing(cl4);
      return cl4;
    };
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r5 = dyn getClassDef(p2, p3);
    check L4() else D3();
  D3():
    deopt 11 [r5];
  L4():
    st def = r5;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r7):
    l = ld def;
    ___ = ldf `@<-`;
    check L8() else D5();
  L5():
    __ = ldf `@` in base;
    r8 = dyn __(<sym def>, <sym className>);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(r8);
    check L7() else D4();
  L6():
    r6 = dyn base(<lang `@`(def, className)>);
    goto L0(r6);
  D4():
    deopt 18 [r9];
  D5():
    deopt 20 [r7, l, r7];
  L7():
    goto L0(r9);
  L8():
    r10 = dyn ___(l, NULL, "className", r7);
    check L9() else D6();
  D6():
    deopt 23 [r7, r10];
  L9():
    st def = r10;
    _notS4 = ldf `.notS4`;
    check L10() else D7();
  D7():
    deopt 26 [];
  L10():
    p4 = prom<V +>{
      __1 = ldf `@` in base;
      r11 = dyn __1(<sym def>, <sym prototype>);
      return r11;
    };
    r13 = dyn _notS4(p4);
    check L11() else D8();
  D8():
    deopt 28 [r13];
  L11():
    l1 = ld def;
    ___1 = ldf `@<-`;
    check L12() else D9();
  D9():
    deopt 30 [r13, l1, r13];
  L12():
    r14 = dyn ___1(l1, NULL, "prototype", r13);
    check L13() else D10();
  D10():
    deopt 33 [r13, r14];
  L13():
    st def = r14;
    assignClassDef = ldf assignClassDef;
    check L14() else D11();
  D11():
    deopt 36 [];
  L14():
    p5 = prom<V +>{
      cl5 = ld cl;
      cl6 = force? cl5;
      checkMissing(cl6);
      return cl6;
    };
    p6 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p7 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r18 = dyn assignClassDef[, , where](p5, p6, p7);
    check L15() else D12();
  D12():
    deopt 41 [r18];
  L15():
    popenv;
    return r18;
  }
}