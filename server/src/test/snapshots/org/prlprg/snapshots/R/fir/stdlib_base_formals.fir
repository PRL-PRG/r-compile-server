fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg formals:cls, reg lm:*, reg lm1:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg formals1:cls, reg lm2:*, reg lm3:V, reg p2:p(V +), reg r10:V, reg names:cls, reg r11:V, reg __:cls, reg r12:V, reg r13:cls, reg lm4:*, reg lm5:V, reg p3:p(V +), reg r15:V, reg str:cls, reg formals2:cls, reg lm6:*, reg lm7:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg is_primitive:cls, reg __1:*, reg __2:V, reg p6:p(V +), reg r21:V, reg formals3:cls, reg __3:*, reg __4:V, reg p7:p(V +), reg r23:V, reg formals4:cls, reg args:cls, reg __5:*, reg __6:V, reg p8:p(V +), reg r25:V, reg p9:p(V +), reg r27:V, reg r28:cls, reg alist:cls, reg r29:V, reg l:*, reg formals__:cls, reg r30:V, reg f:*, reg f1:V, reg f2:cls, reg r31:V |
    mkenv;
    r = clos inner2171172657;
    st formals = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    formals = ldf formals;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    p1 = prom<V +>{
      lm = ld lm;
      lm1 = force? lm;
      checkMissing(lm1);
      return lm1;
    };
    r6 = dyn formals(p1);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L5():
    goto L0();
  L7():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1():
    __ = ldf `::`;
    check L13() else D7();
  L8():
    formals1 = ldf formals;
    check L10() else D4();
  L9():
    r7 = dyn base1(<lang formals(lm)>);
    goto L1();
  D4():
    deopt 15 [];
  D7():
    deopt 21 [];
  L10():
    p2 = prom<V +>{
      lm2 = ld lm;
      lm3 = force? lm2;
      checkMissing(lm3);
      return lm3;
    };
    r10 = dyn formals1(p2);
    check L11() else D5();
  L13():
    r12 = dyn __("methods", "formalArgs");
    check L14() else D8();
  D5():
    deopt 17 [r10];
  D8():
    deopt 24 [r12];
  L11():
    names = ldf names in base;
    r11 = dyn names(r10);
    check L12() else D6();
  L14():
    checkFun.0(r12);
    r13 = r12 as cls;
    p3 = prom<V +>{
      lm4 = ld lm;
      lm5 = force? lm4;
      checkMissing(lm5);
      return lm5;
    };
    r15 = dyn r13(p3);
    check L15() else D9();
  D6():
    deopt 19 [r11];
  D9():
    deopt 27 [r15];
  L12():
    goto L1();
  L15():
    str = ldf str;
    check L16() else D10();
  D10():
    deopt 29 [];
  L16():
    p5 = prom<V +>{
      formals2 = ldf formals;
      p4 = prom<V +>{
        lm6 = ld lm;
        lm7 = force? lm6;
        checkMissing(lm7);
        return lm7;
      };
      r17 = dyn formals2(p4);
      return r17;
    };
    r19 = dyn str(p5);
    check L17() else D11();
  D11():
    deopt 31 [r19];
  L17():
    is_primitive = ldf `is.primitive`;
    check L18() else D12();
  D12():
    deopt 33 [];
  L18():
    p6 = prom<V +>{
      __1 = ld `+`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r21 = dyn is_primitive(p6);
    check L19() else D13();
  D13():
    deopt 35 [r21];
  L19():
    formals3 = ldf formals;
    check L20() else D14();
  D14():
    deopt 37 [];
  L20():
    p7 = prom<V +>{
      __3 = ld `+`;
      __4 = force? __3;
      checkMissing(__4);
      return __4;
    };
    r23 = dyn formals3(p7);
    check L21() else D15();
  D15():
    deopt 39 [r23];
  L21():
    formals4 = ldf formals;
    check L22() else D16();
  D16():
    deopt 41 [];
  L22():
    p9 = prom<V +>{
      args = ldf args;
      p8 = prom<V +>{
        __5 = ld `+`;
        __6 = force? __5;
        checkMissing(__6);
        return __6;
      };
      r25 = dyn args(p8);
      return r25;
    };
    r27 = dyn formals4(p9);
    check L23() else D17();
  D17():
    deopt 43 [r27];
  L23():
    r28 = clos inner2501545716;
    st f = r28;
    alist = ldf alist;
    check L24() else D18();
  D18():
    deopt 48 [];
  L24():
    r29 = dyn alist[a, b](<missing>, 3.0);
    check L25() else D19();
  D19():
    deopt 53 [r29];
  L25():
    l = ld f;
    formals__ = ldf `formals<-`;
    check L26() else D20();
  D20():
    deopt 55 [r29, l, r29];
  L26():
    r30 = dyn formals__(l, NULL, r29);
    check L27() else D21();
  D21():
    deopt 57 [r29, r30];
  L27():
    st f = r30;
    f = ld f;
    check L28() else D22();
  D22():
    deopt 59 [f];
  L28():
    f1 = force? f;
    checkMissing(f1);
    f2 = ldf f;
    check L29() else D23();
  D23():
    deopt 62 [];
  L29():
    r31 = dyn f2(2.0);
    check L30() else D24();
  D24():
    deopt 64 [r31];
  L30():
    popenv;
    return r31;
  }
}
fun inner2171172657(fun, envir) {
  (reg fun:*, reg envir:*) -+> V { var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, reg sys_function:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg fun1:*, reg fun2:V, reg c:L, reg c1:L, reg get:cls, reg fun3:*, reg fun4:V, reg p3:p(V +), reg envir1:*, reg envir2:V, reg p4:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg fun5:*, reg fun6:V, reg formals:cls, reg r14:V |
    mkenv;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L0() else L1(fun);
  L0():
    p1 = prom<V +>{
      sys_function = ldf `sys.function`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r = dyn sys_parent();
        return r;
      };
      r2 = dyn sys_function(p);
      return r2;
    };
    goto L1(p1);
  L1(fun_orDefault):
    st fun = fun_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r4 = dyn parent_frame();
      return r4;
    };
    goto L3(p2);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L4(r7):
    c1 = `as.logical`(r7);
    if c1 then L11() else L5();
  L8():
    fun1 = ld fun;
    check L10() else D0();
  L9():
    r6 = dyn base(<sym fun>);
    goto L4(r6);
  D0():
    deopt 1 [fun1];
  L5():
    goto L6();
  L6():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L10():
    fun2 = force? fun1;
    checkMissing(fun2);
    c = `is.character`(fun2);
    goto L4(c);
  L11():
    get = ldf get;
    check L12() else D1();
  D1():
    deopt 5 [];
  L7(r13):
    popenv;
    return r13;
  L12():
    p3 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    p4 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r10 = dyn get[, mode, envir](p3, "function", p4);
    check L13() else D2();
  L15():
    fun5 = ld fun;
    check L17() else D3();
  L16():
    r12 = dyn base1(<lang formals(fun)>);
    goto L7(r12);
  D2():
    deopt 11 [r10];
  D3():
    deopt 17 [fun5];
  L13():
    st fun = r10;
    goto L6();
  L17():
    fun6 = force? fun5;
    checkMissing(fun6);
    formals = ldf formals in base;
    r14 = dyn formals(fun6);
    check L18() else D4();
  D4():
    deopt 20 [r14];
  L18():
    goto L7(r14);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg a:*, reg a1:V, reg b:*, reg b1:V, reg r:V |
    mkenv;
    st x = x;
    a = ld a;
    check L0() else D0();
  D0():
    deopt 0 [a];
  L0():
    a1 = force? a;
    checkMissing(a1);
    b = ld b;
    check L1() else D1();
  D1():
    deopt 1 [a1, b];
  L1():
    b1 = force? b;
    checkMissing(b1);
    r = `+`(a1, b1);
    popenv;
    return r;
  }
}