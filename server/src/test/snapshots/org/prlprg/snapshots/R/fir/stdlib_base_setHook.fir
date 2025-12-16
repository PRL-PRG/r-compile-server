fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1121782435`;
    st setHook = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1121782435`(hookName, value, action) {
  (reg hookName:*, reg value:*, reg action:*) -+> V { var hookName:*, var value:*, var action:*, reg action_isMissing:L, reg action_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg action1:*, reg action2:V, reg p1:p(V +), reg r5:V, reg getHook:cls, reg hookName1:*, reg hookName2:V, reg p2:p(V +), reg r7:V, reg action3:*, reg action4:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg i_ddd:dots, reg i:V, reg c7:L, reg c8:L, reg c9:L, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg old:*, reg old1:V, reg value1:*, reg value2:V, reg c10:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg value3:*, reg value4:V, reg old2:*, reg old3:V, reg c11:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg value5:*, reg value6:V, reg c12:V, reg c13:L, reg c14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg c18:L, reg r18:V, reg value7:*, reg value8:V, reg is_list:cls, reg r19:V, reg c19:L, reg c20:V, reg c22:L, reg value9:*, reg value10:V, reg value11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg value12:*, reg value13:V, reg list:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg new:*, reg new1:V, reg length:cls, reg r24:V, reg c23:L, reg assign:cls, reg hookName3:*, reg hookName4:V, reg p3:p(V +), reg new2:*, reg new3:V, reg p4:p(V +), reg _userHooksEnv:*, reg _userHooksEnv1:V, reg p5:p(V +), reg r28:V, reg exists:cls, reg hookName5:*, reg hookName6:V, reg p6:p(V +), reg _userHooksEnv2:*, reg _userHooksEnv3:V, reg p7:p(V +), reg r32:V, reg c24:L, reg remove:cls, reg hookName7:*, reg hookName8:V, reg p8:p(V +), reg _userHooksEnv4:*, reg _userHooksEnv5:V, reg p9:p(V +), reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg invisible:cls, reg r38:V |
    mkenv;
    st hookName = hookName;
    st value = value;
    action_isMissing = missing.0(action);
    if action_isMissing then L0() else L1(action);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("append", "prepend", "replace");
      goto L0(r2);
    L2():
      r = dyn base("append", "prepend", "replace");
      goto L0(r);
    };
    goto L1(p);
  L1(action_orDefault):
    st action = action_orDefault;
    match_arg = ldf `match.arg`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p1 = prom<V +>{
      action1 = ld action;
      action2 = force? action1;
      checkMissing(action2);
      return action2;
    };
    r5 = dyn match_arg(p1);
    check L20() else D1();
  D1():
    deopt 3 [r5];
  L20():
    st action = r5;
    getHook = ldf getHook;
    check L21() else D2();
  D2():
    deopt 6 [];
  L21():
    p2 = prom<V +>{
      hookName1 = ld hookName;
      hookName2 = force? hookName1;
      checkMissing(hookName2);
      return hookName2;
    };
    r7 = dyn getHook(p2);
    check L22() else D3();
  D3():
    deopt 8 [r7];
  L22():
    st old = r7;
    action3 = ld action;
    check L23() else D4();
  D4():
    deopt 10 [action3];
  L23():
    action4 = force? action3;
    checkMissing(action4);
    c1 = `is.vector`(action4, "any");
    if c1 then L24() else L25();
  L24():
    c2 = inherits(action4, "factor", FALSE);
    if c2 then L26() else L27();
  L25():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L26():
    c3 = `is.character`(action4);
    if c3 then L28() else L29();
  L27():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L26();
  L2():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L3():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L4():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L5():
    goto L6(NULL);
  L6(r8):
    st new = r8;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L28():
    c4 = `==`.6(action4, "append");
    if c4 then L2() else L30();
  L29():
    i_ddd = dots[action4];
    i = `as.integer`(i_ddd);
    c7 = `==`.5(i, 1);
    if c7 then L2() else L33();
  L7(r10):
    goto L6(r10);
  L8(r13):
    goto L6(r13);
  L9(r16):
    c13 = `as.logical`(r16);
    if c13 then L10(c13) else L52();
  L14(r23):
    c23 = `as.logical`(r23);
    if c23 then L70() else L15();
  L30():
    c5 = `==`.6(action4, "prepend");
    if c5 then L3() else L31();
  L33():
    c8 = `==`.5(i, 2);
    if c8 then L3() else L34();
  L37():
    old = ld old;
    check L39() else D5();
  L38():
    r9 = dyn base1(<sym old>, <sym value>);
    goto L7(r9);
  L43():
    value3 = ld value;
    check L45() else D8();
  L44():
    r12 = dyn base2(<sym value>, <sym old>);
    goto L8(r12);
  L49():
    value5 = ld value;
    check L51() else D11();
  L50():
    r15 = dyn base3(<sym value>);
    goto L9(r15);
  L66():
    new = ld new;
    check L68() else D17();
  L67():
    r22 = dyn base6(<sym new>);
    goto L14(r22);
  D5():
    deopt 16 [old];
  D8():
    deopt 24 [value3];
  D11():
    deopt 31 [value5];
  D17():
    deopt 53 [new];
  L10(c14):
    c22 = `as.logical`(c14);
    if c22 then L58() else L12();
  L15():
    exists = ldf exists;
    check L74() else D21();
  L16():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L31():
    c6 = `==`.6(action4, "replace");
    if c6 then L4() else L32();
  L34():
    c9 = `==`.5(i, 3);
    if c9 then L4() else L35();
  L39():
    old1 = force? old;
    checkMissing(old1);
    value1 = ld value;
    check L40() else D6();
  L45():
    value4 = force? value3;
    checkMissing(value4);
    old2 = ld old;
    check L46() else D9();
  L51():
    value6 = force? value5;
    checkMissing(value6);
    c12 = `==`(value6, NULL);
    goto L9(c12);
  L52():
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L68():
    new1 = force? new;
    checkMissing(new1);
    length = ldf length in base;
    r24 = dyn length(new1);
    check L69() else D18();
  L70():
    assign = ldf assign;
    check L71() else D19();
  D6():
    deopt 18 [value1];
  D9():
    deopt 26 [old2];
  D18():
    deopt 56 [r24];
  D19():
    deopt 58 [];
  D21():
    deopt 67 [];
  L11(c18, r18):
    c19 = `as.logical`(r18);
    c20 = `||`(c18, c19);
    goto L10(c20);
  L12():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L13(value11):
    goto L6(value11);
  L18(r37):
    popenv;
    return r37;
  L32():
    goto L5();
  L35():
    goto L5();
  L40():
    value2 = force? value1;
    checkMissing(value2);
    c10 = ldf c in base;
    r11 = dyn c10(old1, value2);
    check L41() else D7();
  L46():
    old3 = force? old2;
    checkMissing(old3);
    c11 = ldf c in base;
    r14 = dyn c11(value4, old3);
    check L47() else D10();
  L53():
    value7 = ld value;
    check L55() else D12();
  L54():
    r17 = dyn base4(<sym value>);
    goto L11(c13, r17);
  L58():
    value9 = ld value;
    check L59() else D14();
  L69():
    goto L14(r24);
  L71():
    p3 = prom<V +>{
      hookName3 = ld hookName;
      hookName4 = force? hookName3;
      checkMissing(hookName4);
      return hookName4;
    };
    p4 = prom<V +>{
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      return new3;
    };
    p5 = prom<V +>{
      _userHooksEnv = ld `.userHooksEnv`;
      _userHooksEnv1 = force? _userHooksEnv;
      checkMissing(_userHooksEnv1);
      return _userHooksEnv1;
    };
    r28 = dyn assign[, , envir, inherits](p3, p4, p5, FALSE);
    check L72() else D20();
  L74():
    p6 = prom<V +>{
      hookName5 = ld hookName;
      hookName6 = force? hookName5;
      checkMissing(hookName6);
      return hookName6;
    };
    p7 = prom<V +>{
      _userHooksEnv2 = ld `.userHooksEnv`;
      _userHooksEnv3 = force? _userHooksEnv2;
      checkMissing(_userHooksEnv3);
      return _userHooksEnv3;
    };
    r32 = dyn exists[, envir, inherits](p6, p7, FALSE);
    check L75() else D22();
  L80():
    invisible = ldf invisible in base;
    r38 = dyn invisible();
    check L82() else D25();
  L81():
    r36 = dyn base7();
    goto L18(r36);
  D7():
    deopt 21 [r11];
  D10():
    deopt 29 [r14];
  D12():
    deopt 36 [c13, value7];
  D14():
    deopt 41 [value9];
  D20():
    deopt 65 [r28];
  D22():
    deopt 73 [r32];
  D25():
    deopt 88 [r38];
  L41():
    goto L7(r11);
  L47():
    goto L8(r14);
  L55():
    value8 = force? value7;
    checkMissing(value8);
    is_list = ldf `is.list` in base;
    r19 = dyn is_list(value8);
    check L56() else D13();
  L59():
    value10 = force? value9;
    checkMissing(value10);
    goto L13(value10);
  L61():
    value12 = ld value;
    check L63() else D15();
  L62():
    r20 = dyn base5(<sym value>);
    goto L13(r20);
  L72():
    goto L16();
  L75():
    c24 = `as.logical`(r32);
    if c24 then L76() else L17();
  L82():
    goto L18(r38);
  D13():
    deopt 39 [c13, r19];
  D15():
    deopt 45 [value12];
  L17():
    goto L16();
  L56():
    goto L11(c13, r19);
  L63():
    value13 = force? value12;
    checkMissing(value13);
    list = ldf list in base;
    r21 = dyn list(value13);
    check L64() else D16();
  L76():
    remove = ldf remove;
    check L77() else D23();
  D16():
    deopt 48 [r21];
  D23():
    deopt 75 [];
  L64():
    goto L13(r21);
  L77():
    p8 = prom<V +>{
      hookName7 = ld hookName;
      hookName8 = force? hookName7;
      checkMissing(hookName8);
      return hookName8;
    };
    p9 = prom<V +>{
      _userHooksEnv4 = ld `.userHooksEnv`;
      _userHooksEnv5 = force? _userHooksEnv4;
      checkMissing(_userHooksEnv5);
      return _userHooksEnv5;
    };
    r35 = dyn remove[list, envir, inherits](p8, p9, FALSE);
    check L78() else D24();
  D24():
    deopt 82 [r35];
  L78():
    goto L16();
  }
}