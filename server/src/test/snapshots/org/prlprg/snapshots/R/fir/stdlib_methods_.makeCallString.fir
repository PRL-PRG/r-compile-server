fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1416144105;
    st `.makeCallString` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1416144105(def, name, args) {
  (reg def:*, reg name:*, reg args:*) -+> V { var def:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), var args:*, reg args_isMissing:L, reg args_orDefault:*, reg formalArgs:cls, reg def1:*, reg def2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg def3:*, reg def4:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c2:L, reg def5:*, reg def6:V, reg getFunction:cls, reg def8:*, reg def9:V, reg p3:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg def10:*, reg def11:V, reg is_function:cls, reg r17:V, reg c3:L, reg paste0:cls, reg name1:*, reg name2:V, reg p4:p(V +), reg paste1:cls, reg args1:*, reg args2:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V |
    mkenv;
    st def = def;
    name_isMissing = missing.0(name);
    if name_isMissing then L0() else L1(name);
  L0():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym def>);
      goto L0(r2);
    L2():
      r = dyn base(<sym def>);
      goto L0(r);
    };
    goto L1(p);
  L1(name_orDefault):
    st name = name_orDefault;
    args_isMissing = missing.0(args);
    if args_isMissing then L2() else L3(args);
  L2():
    p2 = prom<V +>{
      formalArgs = ldf formalArgs;
      p1 = prom<V +>{
        def1 = ld def;
        def2 = force? def1;
        checkMissing(def2);
        return def2;
      };
      r5 = dyn formalArgs(p1);
      return r5;
    };
    goto L3(p2);
  L3(args_orDefault):
    st args = args_orDefault;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L4(r8):
    c1 = `as.logical`(r8);
    if c1 then L15() else L5();
  L12():
    def3 = ld def;
    check L14() else D0();
  L13():
    r7 = dyn base1(<sym def>);
    goto L4(r7);
  D0():
    deopt 1 [def3];
  L5():
    goto L9();
  L9():
    sym3 = ldf `is.function`;
    base3 = ldf `is.function` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L14():
    def4 = force? def3;
    checkMissing(def4);
    c = `is.character`(def4);
    goto L4(c);
  L15():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L6(r10):
    c2 = `as.logical`(r10);
    if c2 then L18() else L7();
  L10(r16):
    c3 = `as.logical`(r16);
    if c3 then L28() else L11();
  L16():
    missing = ldf missing in base;
    r11 = dyn missing(<sym name>);
    goto L6(r11);
  L17():
    r9 = dyn base2(<sym name>);
    goto L6(r9);
  L24():
    def10 = ld def;
    check L26() else D4();
  L25():
    r15 = dyn base3(<sym def>);
    goto L10(r15);
  D4():
    deopt 21 [def10];
  L7():
    goto L8();
  L8():
    getFunction = ldf getFunction;
    check L21() else D2();
  L11():
    popenv;
    return "";
  L18():
    def5 = ld def;
    check L19() else D1();
  L26():
    def11 = force? def10;
    checkMissing(def11);
    is_function = ldf `is.function` in base;
    r17 = dyn is_function(def11);
    check L27() else D5();
  L28():
    paste0 = ldf paste0;
    check L29() else D6();
  D1():
    deopt 7 [def5];
  D2():
    deopt 13 [];
  D5():
    deopt 24 [r17];
  D6():
    deopt 26 [];
  L19():
    def6 = force? def5;
    checkMissing(def6);
    st name = def6;
    goto L8();
  L21():
    p3 = prom<V +>{
      def8 = ld def;
      def9 = force? def8;
      checkMissing(def9);
      return def9;
    };
    r13 = dyn getFunction(p3);
    check L22() else D3();
  L27():
    goto L10(r17);
  L29():
    p4 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p6 = prom<V +>{
      paste1 = ldf paste;
      p5 = prom<V +>{
        args1 = ld args;
        args2 = force? args1;
        checkMissing(args2);
        return args2;
      };
      r20 = dyn paste1[, collapse](p5, ", ");
      return r20;
    };
    r22 = dyn paste0(p4, "(", p6, ")");
    check L30() else D7();
  D3():
    deopt 15 [r13];
  D7():
    deopt 31 [r22];
  L22():
    st def = r13;
    goto L9();
  L30():
    popenv;
    return r22;
  }
}