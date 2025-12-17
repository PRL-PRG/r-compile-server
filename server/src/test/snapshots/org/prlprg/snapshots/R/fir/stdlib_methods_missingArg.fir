fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1667544627;
    st missingArg = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1667544627(symbol, envir, eval) {
  (reg symbol:*, reg envir:*, reg eval:*) -+> V { var symbol:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var eval:*, reg eval_isMissing:L, reg eval_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg C_R_missingArg:*, reg C_R_missingArg1:V, reg eval1:*, reg eval2:V, reg c:L, reg symbol1:*, reg symbol2:V, reg C_R_missingArg4:V, reg symbol3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg substitute:cls, reg r5:V, reg envir1:*, reg envir2:V, reg vargs:dots, reg r6:V |
    mkenv;
    st symbol = symbol;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    eval_isMissing = missing.0(eval);
    if eval_isMissing then L2(FALSE) else L2(eval);
  L2(eval_orDefault):
    st eval = eval_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L3(r3):
    popenv;
    return r3;
  L6():
    C_R_missingArg = ld C_R_missingArg;
    check L8() else D0();
  L7():
    r2 = dyn base(<sym C_R_missingArg>, <lang if(eval, symbol, substitute(symbol))>, <sym envir>);
    goto L3(r2);
  D0():
    deopt 1 [C_R_missingArg];
  L8():
    C_R_missingArg1 = force? C_R_missingArg;
    checkMissing(C_R_missingArg1);
    eval1 = ld eval;
    check L9() else D1();
  D1():
    deopt 2 [C_R_missingArg1, eval1];
  L9():
    eval2 = force? eval1;
    checkMissing(eval2);
    c = `as.logical`(eval2);
    if c then L10() else L4();
  L4():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L5(C_R_missingArg4, symbol3):
    envir1 = ld envir;
    check L15() else D3();
  L10():
    symbol1 = ld symbol;
    check L11() else D2();
  D2():
    deopt 4 [C_R_missingArg1, symbol1];
  D3():
    deopt 8 [C_R_missingArg4, symbol3, envir1];
  L11():
    symbol2 = force? symbol1;
    checkMissing(symbol2);
    goto L5(C_R_missingArg1, symbol2);
  L13():
    substitute = ldf substitute in base;
    r5 = dyn substitute(<sym symbol>);
    goto L5(C_R_missingArg1, r5);
  L14():
    r4 = dyn base1(<sym symbol>);
    goto L5(C_R_missingArg1, r4);
  L15():
    envir2 = force? envir1;
    checkMissing(envir2);
    vargs = dots[symbol3, envir2];
    r6 = `.Call`(C_R_missingArg4, vargs, <missing>);
    goto L3(r6);
  }
}