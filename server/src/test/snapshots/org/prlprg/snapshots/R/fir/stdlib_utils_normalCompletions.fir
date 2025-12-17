fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner438960838;
    st normalCompletions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner438960838(text, `check.mode`, `add.fun`) {
  (reg text:*, reg check_mode:*, reg add_fun:*) -+> V { var text:*, var `check.mode`:*, reg check_mode_isMissing:L, reg check_mode_orDefault:*, var `add.fun`:*, reg add_fun_isMissing:L, reg add_fun_orDefault:*, reg rc_getOption:cls, reg r:V, reg p:p(V +), reg text1:*, reg text2:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c1:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r5:V, reg c3:L, reg fuzzyApropos:cls, reg sprintf:cls, reg makeRegexpSafe:cls, reg text3:*, reg text4:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg r12:V, reg apropos:cls, reg sprintf1:cls, reg makeRegexpSafe1:cls, reg text5:*, reg text6:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg r18:V, reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c4:L, reg _CompletionEnv7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r19:V, reg c5:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r20:V, reg c6:L, reg c8:V, reg check_mode1:*, reg check_mode2:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg c17:L, reg r22:V, reg add_fun1:*, reg add_fun2:V, reg c18:V, reg r23:V, reg c19:L, reg c20:V, reg c22:L, reg sapply:cls, reg comps:*, reg comps1:V, reg p7:p(V +), reg r25:cls, reg p8:p(V +), reg r27:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg which_function:*, reg which_function1:V, reg any:cls, reg r30:V, reg c23:L, reg sprintf2:cls, reg comps2:*, reg comps3:V, reg c24:L, reg comps5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg which_function2:*, reg which_function3:V, reg __2:cls, reg r31:V, reg p9:p(V +), reg add_fun3:*, reg add_fun4:V, reg p10:p(V +), reg r34:V, reg l:*, reg c25:L, reg r36:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx14:V, reg r38:V, reg dx15:V, reg which_function4:*, reg which_function5:V, reg ___:cls, reg r39:V, reg r40:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg comps6:*, reg comps7:V, reg keywordCompletions:cls, reg text7:*, reg text8:V, reg p11:p(V +), reg r45:V, reg loadedPackageCompletions:cls, reg text9:*, reg text10:V, reg p12:p(V +), reg r47:V, reg c26:cls, reg r48:V |
    mkenv;
    st text = text;
    check_mode_isMissing = missing.0(check_mode);
    if check_mode_isMissing then L0(TRUE) else L0(check_mode);
  L0(check_mode_orDefault):
    st `check.mode` = check_mode_orDefault;
    add_fun_isMissing = missing.0(add_fun);
    if add_fun_isMissing then L1() else L2(add_fun);
  L1():
    p = prom<V +>{
      rc_getOption = ldf `rc.getOption`;
      r = dyn rc_getOption("function.suffix");
      return r;
    };
    goto L2(p);
  L2(add_fun_orDefault):
    st `add.fun` = add_fun_orDefault;
    text1 = ld text;
    check L18() else D0();
  D0():
    deopt 0 [text1];
  L18():
    text2 = force? text1;
    checkMissing(text2);
    r2 = `==`(text2, "");
    c = `as.logical`(r2);
    if c then L19() else L3();
  L3():
    _CompletionEnv = ld `.CompletionEnv`;
    check L23() else D3();
  L19():
    character = ldf character;
    check L20() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 7 [_CompletionEnv];
  L20():
    r3 = dyn character();
    check L21() else D2();
  L23():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c1 = `is.object`(_CompletionEnv1);
    if c1 then L25() else L26(_CompletionEnv1);
  D2():
    deopt 6 [r3];
  L21():
    popenv;
    return r3;
  L24(dx1):
    c2 = `is.object`(dx1);
    if c2 then L28() else L29(dx1);
  L25():
    dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(_CompletionEnv3):
    r4 = `$`(_CompletionEnv3, <sym settings>);
    goto L24(r4);
  L4(dx5):
    c3 = `as.logical`(dx5);
    if c3 then L31() else L5();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L28():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(dr2);
  L29(dx3):
    __ = ldf `[[` in base;
    r5 = dyn __(dx3, "fuzzy");
    goto L4(r5);
  L5():
    apropos = ldf apropos;
    check L35() else D6();
  L6(r12):
    st comps = r12;
    _CompletionEnv4 = ld `.CompletionEnv`;
    check L37() else D8();
  L30():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx4);
  L31():
    fuzzyApropos = ldf fuzzyApropos;
    check L32() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 18 [];
  D8():
    deopt 26 [_CompletionEnv4];
  L32():
    p3 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        makeRegexpSafe = ldf makeRegexpSafe;
        p1 = prom<V +>{
          text3 = ld text;
          text4 = force? text3;
          checkMissing(text4);
          return text4;
        };
        r7 = dyn makeRegexpSafe(p1);
        return r7;
      };
      r9 = dyn sprintf("^%s", p2);
      return r9;
    };
    r11 = dyn fuzzyApropos(p3);
    check L33() else D5();
  L35():
    p6 = prom<V +>{
      sprintf1 = ldf sprintf;
      p5 = prom<V +>{
        makeRegexpSafe1 = ldf makeRegexpSafe;
        p4 = prom<V +>{
          text5 = ld text;
          text6 = force? text5;
          checkMissing(text6);
          return text6;
        };
        r14 = dyn makeRegexpSafe1(p4);
        return r14;
      };
      r16 = dyn sprintf1("^%s", p5);
      return r16;
    };
    r18 = dyn apropos[, `ignore.case`, dot_internals](p6, FALSE, TRUE);
    check L36() else D7();
  L37():
    _CompletionEnv5 = force? _CompletionEnv4;
    checkMissing(_CompletionEnv5);
    c4 = `is.object`(_CompletionEnv5);
    if c4 then L39() else L40(_CompletionEnv5);
  D5():
    deopt 16 [r11];
  D7():
    deopt 24 [r18];
  L33():
    goto L6(r11);
  L36():
    goto L6(r18);
  L38(dx7):
    c5 = `is.object`(dx7);
    if c5 then L42() else L43(dx7);
  L39():
    dr4 = tryDispatchBuiltin.1("$", _CompletionEnv5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(_CompletionEnv7):
    r19 = `$`(_CompletionEnv7, <sym settings>);
    goto L38(r19);
  L7(dx11):
    c6 = `as.logical`(dx11);
    if c6 then L45() else L8(c6);
  L41():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx6);
  L42():
    dr6 = tryDispatchBuiltin.1("[[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(dr6);
  L43(dx9):
    __1 = ldf `[[` in base;
    r20 = dyn __1(dx9, "func");
    goto L7(r20);
  L8(c8):
    c12 = `as.logical`(c8);
    if c12 then L48() else L9(c12);
  L44():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx10);
  L45():
    check_mode1 = ld `check.mode`;
    check L46() else D9();
  D9():
    deopt 32 [c6, check_mode1];
  L9(c14):
    c22 = `as.logical`(c14);
    if c22 then L53() else L11();
  L46():
    check_mode2 = force? check_mode1;
    checkMissing(check_mode2);
    c9 = `as.logical`(check_mode2);
    c10 = `&&`(c6, c9);
    goto L8(c10);
  L48():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L49() else L50();
  L10(c17, r22):
    r23 = `!`(r22);
    c19 = `as.logical`(r23);
    c20 = `&&`(c17, c19);
    goto L9(c20);
  L11():
    goto L16();
  L16():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L49():
    add_fun1 = ld `add.fun`;
    check L51() else D10();
  L50():
    r21 = dyn base(<sym add.fun>);
    goto L10(c12, r21);
  L53():
    sapply = ldf sapply;
    check L54() else D11();
  D10():
    deopt 36 [c12, add_fun1];
  D11():
    deopt 42 [];
  L17(r43):
    popenv;
    return r43;
  L51():
    add_fun2 = force? add_fun1;
    checkMissing(add_fun2);
    c18 = `==`(add_fun2, NULL);
    goto L10(c12, c18);
  L54():
    p7 = prom<V +>{
      comps = ld comps;
      comps1 = force? comps;
      checkMissing(comps1);
      return comps1;
    };
    p8 = prom<V +>{
      r25 = clos inner1236783023;
      return r25;
    };
    r27 = dyn sapply(p7, p8);
    check L55() else D12();
  L69():
    comps6 = ld comps;
    check L71() else D18();
  L70():
    r42 = dyn base2(<sym comps>, <lang keywordCompletions(text)>, <lang loadedPackageCompletions(text)>);
    goto L17(r42);
  D12():
    deopt 45 [r27];
  D18():
    deopt 70 [comps6];
  L55():
    st `which.function` = r27;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L71():
    comps7 = force? comps6;
    checkMissing(comps7);
    keywordCompletions = ldf keywordCompletions;
    check L72() else D19();
  D19():
    deopt 73 [];
  L12(r29):
    c23 = `as.logical`(r29);
    if c23 then L60() else L13();
  L56():
    which_function = ld `which.function`;
    check L58() else D13();
  L57():
    r28 = dyn base1(<sym which.function>);
    goto L12(r28);
  L72():
    p11 = prom<V +>{
      text7 = ld text;
      text8 = force? text7;
      checkMissing(text8);
      return text8;
    };
    r45 = dyn keywordCompletions(p11);
    check L73() else D20();
  D13():
    deopt 49 [which_function];
  D20():
    deopt 75 [r45];
  L13():
    goto L15(NULL);
  L15(r40):
    goto L16();
  L58():
    which_function1 = force? which_function;
    checkMissing(which_function1);
    any = ldf any in base;
    r30 = dyn any(which_function1);
    check L59() else D14();
  L60():
    sprintf2 = ldf sprintf;
    check L61() else D15();
  L73():
    loadedPackageCompletions = ldf loadedPackageCompletions;
    check L74() else D21();
  D14():
    deopt 52 [r30];
  D15():
    deopt 54 [];
  D21():
    deopt 77 [];
  L59():
    goto L12(r30);
  L61():
    p9 = prom<V +>{
      comps2 = ld comps;
      comps3 = force? comps2;
      checkMissing(comps3);
      c24 = `is.object`(comps3);
      if c24 then L1() else L2(comps3);
    L0(dx13):
      return dx13;
    L1():
      dr8 = tryDispatchBuiltin.1("[", comps3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(comps5):
      which_function2 = ld `which.function`;
      which_function3 = force? which_function2;
      __2 = ldf `[` in base;
      r31 = dyn __2(comps5, which_function3);
      goto L0(r31);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    };
    p10 = prom<V +>{
      add_fun3 = ld `add.fun`;
      add_fun4 = force? add_fun3;
      checkMissing(add_fun4);
      return add_fun4;
    };
    r34 = dyn sprintf2("%s%s", p9, p10);
    check L62() else D16();
  L74():
    p12 = prom<V +>{
      text9 = ld text;
      text10 = force? text9;
      checkMissing(text10);
      return text10;
    };
    r47 = dyn loadedPackageCompletions(p12);
    check L75() else D22();
  D16():
    deopt 58 [r34];
  D22():
    deopt 79 [r47];
  L62():
    l = ld comps;
    c25 = `is.object`(l);
    if c25 then L63() else L64(r34, l);
  L75():
    c26 = ldf c in base;
    r48 = dyn c26(comps7, r45, r47);
    check L76() else D23();
  D23():
    deopt 81 [r48];
  L14(r38, dx15):
    st comps = dx15;
    goto L15(r38);
  L63():
    dr10 = tryDispatchBuiltin.0("[<-", l, r34);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L65() else L64(r34, dr10);
  L64(r36, l2):
    which_function4 = ld `which.function`;
    check L66() else D17();
  L76():
    goto L17(r48);
  D17():
    deopt 60 [r36, l2, r34, which_function4];
  L65():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L14(r34, dx14);
  L66():
    which_function5 = force? which_function4;
    ___ = ldf `[<-` in base;
    r39 = dyn ___(l2, r34, which_function5);
    goto L14(r36, r39);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg exists:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st s = s;
    exists = ldf exists;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn exists[, mode](p, "function");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}