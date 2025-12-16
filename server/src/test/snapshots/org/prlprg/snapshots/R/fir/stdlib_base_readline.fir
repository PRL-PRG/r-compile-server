fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg interactive:cls, reg r4:V, reg c:L, reg fun:cls, reg r5:V |
    mkenv;
    r = clos `inner-1338579946`;
    st readline = r;
    r1 = clos inner560854305;
    st fun = r1;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r3):
    c = `as.logical`(r3);
    if c then L5() else L1();
  L2():
    interactive = ldf interactive in base;
    r4 = dyn interactive();
    check L4() else D0();
  L3():
    r2 = dyn base();
    goto L0(r2);
  D0():
    deopt 9 [r4];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    goto L0(r4);
  L5():
    fun = ldf fun;
    check L6() else D1();
  D1():
    deopt 11 [];
  L6():
    r5 = dyn fun();
    check L7() else D2();
  D2():
    deopt 12 [r5];
  L7():
    popenv;
    return r5;
  }
}
fun `inner-1338579946`(prompt) {
  (reg prompt:*) -+> V { var prompt:*, reg prompt_isMissing:L, reg prompt_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg prompt1:*, reg prompt2:V, reg readline:cls, reg r2:V |
    mkenv;
    prompt_isMissing = missing.0(prompt);
    if prompt_isMissing then L0("") else L0(prompt);
  L0(prompt_orDefault):
    st prompt = prompt_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    prompt1 = ld prompt;
    check L4() else D0();
  L3():
    r = dyn base(<lang readline(prompt)>);
    goto L1(r);
  D0():
    deopt 2 [prompt1];
  L4():
    prompt2 = force? prompt1;
    checkMissing(prompt2);
    readline = ldf readline in base;
    r2 = dyn readline(prompt2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}
fun inner560854305() {
  () -+> V { reg readline:cls, reg r:V, reg substr:cls, reg ANSWER:*, reg ANSWER1:V, reg p:p(V +), reg r2:V, reg r3:V, reg c:L, reg cat:cls, reg r4:V, reg cat1:cls, reg r5:V |
    mkenv;
    readline = ldf readline;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn readline("Are you a satisfied R user? ");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    st ANSWER = r;
    substr = ldf substr;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p = prom<V +>{
      ANSWER = ld ANSWER;
      ANSWER1 = force? ANSWER;
      checkMissing(ANSWER1);
      return ANSWER1;
    };
    r2 = dyn substr(p, 1.0, 1.0);
    check L4() else D3();
  D3():
    deopt 10 [r2];
  L4():
    r3 = `==`(r2, "n");
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    cat1 = ldf cat;
    check L9() else D6();
  L5():
    cat = ldf cat;
    check L6() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 18 [];
  L6():
    r4 = dyn cat("This is impossible.  YOU LIED!\n");
    check L7() else D5();
  L9():
    r5 = dyn cat1("I knew it.\n");
    check L10() else D7();
  D5():
    deopt 16 [r4];
  D7():
    deopt 20 [r5];
  L7():
    popenv;
    return r4;
  L10():
    popenv;
    return r5;
  }
}