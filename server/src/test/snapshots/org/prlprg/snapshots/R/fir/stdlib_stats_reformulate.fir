fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner133029931;
    st reformulate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner133029931(termlabels, response, intercept, env) {
  (reg termlabels:*, reg response:*, reg intercept:*, reg env:*) -+> V { var termlabels:*, var response:*, reg response_isMissing:L, reg response_orDefault:*, var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg termlabels1:*, reg termlabels2:V, reg c:L, reg r4:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c6:L, reg r6:V, reg termlabels3:*, reg termlabels4:V, reg length:cls, reg r7:V, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r9:V, reg paste:cls, reg termlabels5:*, reg termlabels6:V, reg p1:p(V +), reg r12:V, reg intercept1:*, reg intercept2:V, reg r13:V, reg c11:L, reg paste1:cls, reg termtext:*, reg termtext1:V, reg p2:p(V +), reg r15:V, reg str2lang:cls, reg termtext2:*, reg termtext3:V, reg p3:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg response1:*, reg response2:V, reg c12:V, reg c13:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg call:cls, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg call1:cls, reg r26:V, reg formula:cls, reg fexpr:*, reg fexpr1:V, reg p4:p(V +), reg env1:*, reg env2:V, reg p5:p(V +), reg r29:V |
    mkenv;
    st termlabels = termlabels;
    response_isMissing = missing.0(response);
    if response_isMissing then L0(NULL) else L0(response);
  L0(response_orDefault):
    st response = response_orDefault;
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L1(TRUE) else L1(intercept);
  L1(intercept_orDefault):
    st intercept = intercept_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L2() else L3(env);
  L2():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L3(p);
  L3(env_orDefault):
    st env = env_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L4(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L5(c1) else L18();
  L15():
    termlabels1 = ld termlabels;
    check L17() else D0();
  L16():
    r2 = dyn base(<sym termlabels>);
    goto L4(r2);
  D0():
    deopt 1 [termlabels1];
  L5(c2):
    c10 = `as.logical`(c2);
    if c10 then L24() else L7();
  L17():
    termlabels2 = force? termlabels1;
    checkMissing(termlabels2);
    c = `is.character`(termlabels2);
    goto L4(c);
  L18():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L6(c6, r6):
    r8 = `!`(r6);
    c7 = `as.logical`(r8);
    c8 = `||`(c6, c7);
    goto L5(c8);
  L7():
    goto L8();
  L8():
    paste = ldf paste;
    check L28() else D5();
  L19():
    termlabels3 = ld termlabels;
    check L21() else D1();
  L20():
    r5 = dyn base1(<sym termlabels>);
    goto L6(c1, r5);
  L24():
    stop = ldf stop;
    check L25() else D3();
  D1():
    deopt 7 [c1, termlabels3];
  D3():
    deopt 14 [];
  D5():
    deopt 20 [];
  L21():
    termlabels4 = force? termlabels3;
    checkMissing(termlabels4);
    length = ldf length in base;
    r7 = dyn length(termlabels4);
    check L22() else D2();
  L25():
    r9 = dyn stop("'termlabels' must be a character vector of length at least one");
    check L26() else D4();
  L28():
    p1 = prom<V +>{
      termlabels5 = ld termlabels;
      termlabels6 = force? termlabels5;
      checkMissing(termlabels6);
      return termlabels6;
    };
    r12 = dyn paste[, collapse](p1, "+");
    check L29() else D6();
  D2():
    deopt 10 [c1, r7];
  D4():
    deopt 16 [r9];
  D6():
    deopt 24 [r12];
  L22():
    goto L6(c1, r7);
  L26():
    goto L8();
  L29():
    st termtext = r12;
    intercept1 = ld intercept;
    check L30() else D7();
  D7():
    deopt 26 [intercept1];
  L30():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    r13 = `!`(intercept2);
    c11 = `as.logical`(r13);
    if c11 then L31() else L9();
  L9():
    goto L10();
  L10():
    str2lang = ldf str2lang;
    check L35() else D10();
  L31():
    paste1 = ldf paste;
    check L32() else D8();
  D8():
    deopt 30 [];
  D10():
    deopt 38 [];
  L32():
    p2 = prom<V +>{
      termtext = ld termtext;
      termtext1 = force? termtext;
      checkMissing(termtext1);
      return termtext1;
    };
    r15 = dyn paste1(p2, "- 1");
    check L33() else D9();
  L35():
    p3 = prom<V +>{
      termtext2 = ld termtext;
      termtext3 = force? termtext2;
      checkMissing(termtext3);
      return termtext3;
    };
    r18 = dyn str2lang(p3);
    check L36() else D11();
  D9():
    deopt 33 [r15];
  D11():
    deopt 40 [r18];
  L33():
    st termtext = r15;
    goto L10();
  L36():
    st terms = r18;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L11(r20):
    c13 = `as.logical`(r20);
    if c13 then L40() else L12();
  L37():
    response1 = ld response;
    check L39() else D12();
  L38():
    r19 = dyn base2(<sym response>);
    goto L11(r19);
  D12():
    deopt 43 [response1];
  L12():
    sym4 = ldf call;
    base4 = ldf call in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L14(r24):
    st fexpr = r24;
    formula = ldf formula;
    check L46() else D13();
  L39():
    response2 = force? response1;
    checkMissing(response2);
    c12 = `==`(response2, NULL);
    goto L11(c12);
  L40():
    sym3 = ldf call;
    base3 = ldf call in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  D13():
    deopt 54 [];
  L13(r22):
    goto L14(r22);
  L41():
    call = ldf call in base;
    r23 = dyn call("~", <sym terms>);
    goto L13(r23);
  L42():
    r21 = dyn base3("~", <sym terms>);
    goto L13(r21);
  L44():
    call1 = ldf call in base;
    r26 = dyn call1("~", <lang if(is.character(response), {
        if(`!=`(length(response), 1.0), stop(gettextf("'%s' must be a character string", "response"), domain=NA_LGL));
        tryCatch(str2lang(response), error=function((e=), {
              `<-`(sc, sys.calls());
              `<-`(sc1, lapply(sc, `[[`, 1));
              `<-`(isF, function((cl=), `&&`(is.symbol(cl), `==`(cl, quote(reformulate))), NULL));
              `<-`(reformCall, `[[`(sc, match(TRUE, vapply(sc1, isF, NA_LGL))));
              warning(warningCondition(message=paste(sprintf("Unparseable 'response' \"%s\"; use is deprecated.  Use as.name(.) or `..`!", response), conditionMessage(e), sep="\n"), class=c("reformulate", "deprecatedWarning"), call=reformCall));
              as.symbol(response)
            }, NULL))
      }, response)>, <sym terms>);
    goto L14(r26);
  L45():
    r25 = dyn base4("~", <lang if(is.character(response), {
        if(`!=`(length(response), 1.0), stop(gettextf("'%s' must be a character string", "response"), domain=NA_LGL));
        tryCatch(str2lang(response), error=function((e=), {
              `<-`(sc, sys.calls());
              `<-`(sc1, lapply(sc, `[[`, 1));
              `<-`(isF, function((cl=), `&&`(is.symbol(cl), `==`(cl, quote(reformulate))), NULL));
              `<-`(reformCall, `[[`(sc, match(TRUE, vapply(sc1, isF, NA_LGL))));
              warning(warningCondition(message=paste(sprintf("Unparseable 'response' \"%s\"; use is deprecated.  Use as.name(.) or `..`!", response), conditionMessage(e), sep="\n"), class=c("reformulate", "deprecatedWarning"), call=reformCall));
              as.symbol(response)
            }, NULL))
      }, response)>, <sym terms>);
    goto L14(r25);
  L46():
    p4 = prom<V +>{
      fexpr = ld fexpr;
      fexpr1 = force? fexpr;
      checkMissing(fexpr1);
      return fexpr1;
    };
    p5 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r29 = dyn formula(p4, p5);
    check L47() else D14();
  D14():
    deopt 57 [r29];
  L47():
    popenv;
    return r29;
  }
}