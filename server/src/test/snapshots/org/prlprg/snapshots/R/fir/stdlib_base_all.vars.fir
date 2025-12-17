fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3882044078;
    st `all.vars` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3882044078(expr, functions, `max.names`, unique) {
  (reg expr:*, reg functions:*, reg max_names:*, reg unique:*) -+> V { var expr:*, var functions:*, reg functions_isMissing:L, reg functions_orDefault:*, var `max.names`:*, reg max_names_isMissing:L, reg max_names_orDefault:*, reg p:p(V +), var unique:*, reg unique_isMissing:L, reg unique_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg expr1:*, reg expr2:V, reg functions1:*, reg functions2:V, reg max_names1:*, reg max_names2:V, reg unique1:*, reg unique2:V, reg all_names:cls, reg r3:V |
    mkenv;
    st expr = expr;
    functions_isMissing = missing.0(functions);
    if functions_isMissing then L0(FALSE) else L0(functions);
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
    if unique_isMissing then L3(TRUE) else L3(unique);
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