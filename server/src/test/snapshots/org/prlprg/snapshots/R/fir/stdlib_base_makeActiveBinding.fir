fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner264911634;
    st makeActiveBinding = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner264911634(sym, fun, env) {
  (reg sym:*, reg fun:*, reg env:*) -+> V { var sym:*, var fun:*, var env:*, reg sym1:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym2:*, reg sym3:V, reg c:L, reg c1:L, reg as_name:cls, reg sym4:*, reg sym5:V, reg p:p(V +), reg r3:V, reg sym6:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym7:*, reg sym8:V, reg fun1:*, reg fun2:V, reg env1:*, reg env2:V, reg makeActiveBinding:cls, reg r7:V |
    mkenv;
    st sym = sym;
    st fun = fun;
    st env = env;
    sym1 = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym1, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L7() else L1();
  L4():
    sym2 = ld sym;
    check L6() else D0();
  L5():
    r = dyn base(<sym sym>);
    goto L0(r);
  D0():
    deopt 1 [sym2];
  L1():
    goto L2();
  L2():
    sym6 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym6, base1);
    if guard1 then L11() else L12();
  L6():
    sym3 = force? sym2;
    checkMissing(sym3);
    c = `is.character`(sym3);
    goto L0(c);
  L7():
    as_name = ldf `as.name`;
    check L8() else D1();
  D1():
    deopt 5 [];
  L3(r6):
    popenv;
    return r6;
  L8():
    p = prom<V +>{
      sym4 = ld sym;
      sym5 = force? sym4;
      checkMissing(sym5);
      return sym5;
    };
    r3 = dyn as_name(p);
    check L9() else D2();
  L11():
    sym7 = ld sym;
    check L13() else D3();
  L12():
    r5 = dyn base1(<lang makeActiveBinding(sym, fun, env)>);
    goto L3(r5);
  D2():
    deopt 7 [r3];
  D3():
    deopt 13 [sym7];
  L9():
    st sym = r3;
    goto L2();
  L13():
    sym8 = force? sym7;
    checkMissing(sym8);
    fun1 = ld fun;
    check L14() else D4();
  D4():
    deopt 15 [fun1];
  L14():
    fun2 = force? fun1;
    checkMissing(fun2);
    env1 = ld env;
    check L15() else D5();
  D5():
    deopt 17 [env1];
  L15():
    env2 = force? env1;
    checkMissing(env2);
    makeActiveBinding = ldf makeActiveBinding in base;
    r7 = dyn makeActiveBinding(sym8, fun2, env2);
    check L16() else D6();
  D6():
    deopt 20 [r7];
  L16():
    goto L3(r7);
  }
}