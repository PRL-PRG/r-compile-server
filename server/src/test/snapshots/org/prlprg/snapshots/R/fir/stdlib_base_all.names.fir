fun main() {
  () -+> V { reg r:cls, reg all_names:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg expression:cls, reg r3:V, reg p:p(V +), reg r5:V, reg all_names1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg quote:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg all_vars:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg expression1:cls, reg r13:V, reg p2:p(V +), reg r15:V |
    mkenv;
    r = clos inner4291463844;
    st `all.names` = r;
    all_names = ldf `all.names`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf expression;
      base = ldf expression in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      expression = ldf expression in base;
      r3 = dyn expression(<lang sin(`+`(x, y))>);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang sin(`+`(x, y))>);
      goto L0(r1);
    };
    r5 = dyn all_names(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    all_names1 = ldf `all.names`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf quote;
      base1 = ldf quote in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      quote = ldf quote in base;
      r8 = dyn quote(<lang sin(`+`(x, y))>);
      goto L0(r8);
    L2():
      r6 = dyn base1(<lang sin(`+`(x, y))>);
      goto L0(r6);
    };
    r10 = dyn all_names1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r10];
  L3():
    all_vars = ldf `all.vars`;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p2 = prom<V +>{
      sym2 = ldf expression;
      base2 = ldf expression in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      expression1 = ldf expression in base;
      r13 = dyn expression1(<lang sin(`+`(x, y))>);
      goto L0(r13);
    L2():
      r11 = dyn base2(<lang sin(`+`(x, y))>);
      goto L0(r11);
    };
    r15 = dyn all_vars(p2);
    check L5() else D5();
  D5():
    deopt 14 [r15];
  L5():
    popenv;
    return r15;
  }
}
fun inner4291463844(expr, functions, `max.names`, unique) {
  (reg expr:*, reg functions:*, reg max_names:*, reg unique:*) -+> V { var expr:*, var functions:*, reg functions_isMissing:L, reg functions_orDefault:*, var `max.names`:*, reg max_names_isMissing:L, reg max_names_orDefault:*, reg p:p(V +), var unique:*, reg unique_isMissing:L, reg unique_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg expr1:*, reg expr2:V, reg functions1:*, reg functions2:V, reg max_names1:*, reg max_names2:V, reg unique1:*, reg unique2:V, reg all_names:cls, reg r3:V |
    mkenv;
    st expr = expr;
    functions_isMissing = missing.0(functions);
    if functions_isMissing then L0(TRUE) else L0(functions);
  L0(functions_orDefault):
    st functions = functions_orDefault;
    max_names_isMissing = missing.0(max_names);
    if max_names_isMissing then L1() else L2(max_names);
  L1():
    p = prom<V +>{
      return -1;
    };
    goto L2(p);
  L2(max_names_orDefault):
    st `max.names` = max_names_orDefault;
    unique_isMissing = missing.0(unique);
    if unique_isMissing then L3(FALSE) else L3(unique);
  L3(unique_orDefault):
    st unique = unique_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L4(r2):
    popenv;
    return r2;
  L5():
    expr1 = ld expr;
    check L7() else D0();
  L6():
    r1 = dyn base(<lang all.names(expr, functions, max.names, unique)>);
    goto L4(r1);
  D0():
    deopt 2 [expr1];
  L7():
    expr2 = force? expr1;
    checkMissing(expr2);
    functions1 = ld functions;
    check L8() else D1();
  D1():
    deopt 4 [functions1];
  L8():
    functions2 = force? functions1;
    checkMissing(functions2);
    max_names1 = ld `max.names`;
    check L9() else D2();
  D2():
    deopt 6 [max_names1];
  L9():
    max_names2 = force? max_names1;
    checkMissing(max_names2);
    unique1 = ld unique;
    check L10() else D3();
  D3():
    deopt 8 [unique1];
  L10():
    unique2 = force? unique1;
    checkMissing(unique2);
    all_names = ldf `all.names` in base;
    r3 = dyn all_names(expr2, functions2, max_names2, unique2);
    check L11() else D4();
  D4():
    deopt 11 [r3];
  L11():
    goto L4(r3);
  }
}