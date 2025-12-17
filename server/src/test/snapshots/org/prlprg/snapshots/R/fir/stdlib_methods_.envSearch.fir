fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3658212127;
    st `.envSearch` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3658212127(env) {
  (reg env:*) -+> V { var env:*, reg env_isMissing:L, reg env_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg env1:*, reg env2:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg identical:cls, reg r6:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg search:cls, reg r9:V, reg r10:I, reg isNamespace:cls, reg env3:*, reg env4:V, reg p2:p(V +), reg r12:V, reg c1:L, reg c3:V, reg isBaseNamespace:cls, reg env5:*, reg env6:V, reg p3:p(V +), reg r14:V, reg r15:V, reg c4:L, reg c5:V, reg c7:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg env7:*, reg env8:V, reg list:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg env9:*, reg env10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg emptyenv:cls, reg r23:V, reg identical1:cls, reg r24:V, reg c8:L, reg stop:cls, reg r25:V, reg parent_env:cls, reg env11:*, reg env12:V, reg p4:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg value:*, reg value1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg env13:*, reg env14:V, reg list1:cls, reg r33:V, reg c9:cls, reg r34:V, reg isBaseNamespace1:cls, reg env15:*, reg env16:V, reg p5:p(V +), reg r36:V, reg c10:L, reg value2:*, reg value3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg env17:*, reg env18:V, reg list2:cls, reg r40:V |
    mkenv;
    env_isMissing = missing.0(env);
    if env_isMissing then L0() else L1(env);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(env_orDefault):
    st env = env_orDefault;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r5):
    c = `as.logical`(r5);
    if c then L24() else L3();
  L19():
    env1 = ld env;
    check L21() else D0();
  L20():
    r4 = dyn base(<sym env>, <sym .GlobalEnv>);
    goto L2(r4);
  D0():
    deopt 2 [env1];
  L3():
    isNamespace = ldf isNamespace;
    check L30() else D5();
  L21():
    env2 = force? env1;
    checkMissing(env2);
    _GlobalEnv = ld `.GlobalEnv`;
    check L22() else D1();
  L24():
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D1():
    deopt 4 [_GlobalEnv];
  D5():
    deopt 21 [];
  L4(r8):
    popenv;
    return r8;
  L22():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    identical = ldf identical in base;
    r6 = dyn identical(env2, _GlobalEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L23() else D2();
  L25():
    search = ldf search;
    check L27() else D3();
  L26():
    r7 = dyn base1(<lang search()>);
    goto L4(r7);
  L30():
    p2 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r12 = dyn isNamespace(p2);
    check L31() else D6();
  D2():
    deopt 14 [r6];
  D3():
    deopt 17 [];
  D6():
    deopt 23 [r12];
  L23():
    goto L2(r6);
  L27():
    r9 = dyn search();
    check L28() else D4();
  L31():
    c1 = `as.logical`(r12);
    if c1 then L32() else L5(c1);
  D4():
    deopt 18 [r9];
  L5(c3):
    c7 = `as.logical`(c3);
    if c7 then L36() else L6();
  L28():
    r10 = seq_along(r9);
    goto L4(r10);
  L32():
    isBaseNamespace = ldf isBaseNamespace;
    check L33() else D7();
  D7():
    deopt 25 [c1];
  L6():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L33():
    p3 = prom<V +>{
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      return env6;
    };
    r14 = dyn isBaseNamespace(p3);
    check L34() else D8();
  L36():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  D8():
    deopt 27 [c1, r14];
  L7(r17):
    st value = r17;
    goto L17();
  L18(r39):
    popenv;
    return r39;
  L34():
    r15 = `!`(r14);
    c4 = `as.logical`(r15);
    c5 = `&&`(c1, c4);
    goto L5(c5);
  L37():
    env7 = ld env;
    check L39() else D9();
  L38():
    r16 = dyn base2(<sym env>);
    goto L7(r16);
  L70():
    env17 = ld env;
    check L72() else D25();
  L71():
    r38 = dyn base7(<sym env>);
    goto L18(r38);
  D9():
    deopt 32 [env7];
  D25():
    deopt 95 [env17];
  L17():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L39():
    env8 = force? env7;
    checkMissing(env8);
    list = ldf list in base;
    r18 = dyn list(env8);
    check L40() else D10();
  L72():
    env18 = force? env17;
    checkMissing(env18);
    list2 = ldf list in base;
    r40 = dyn list2(env18);
    check L73() else D26();
  D10():
    deopt 35 [r18];
  D26():
    deopt 98 [r40];
  L8(r20):
    c8 = `as.logical`(r20);
    if c8 then L48() else L10();
  L40():
    goto L7(r18);
  L41():
    env9 = ld env;
    check L43() else D11();
  L42():
    r19 = dyn base3(<sym env>, <lang emptyenv()>);
    goto L8(r19);
  L73():
    goto L18(r40);
  D11():
    deopt 39 [env9];
  L10():
    goto L11();
  L11():
    parent_env = ldf `parent.env`;
    check L52() else D16();
  L43():
    env10 = force? env9;
    checkMissing(env10);
    sym4 = ldf emptyenv;
    base4 = ldf emptyenv in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L48():
    stop = ldf stop;
    check L49() else D14();
  D14():
    deopt 55 [];
  D16():
    deopt 63 [];
  L9(r22):
    identical1 = ldf identical in base;
    r24 = dyn identical1(env10, r22, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L47() else D13();
  L44():
    emptyenv = ldf emptyenv in base;
    r23 = dyn emptyenv();
    check L46() else D12();
  L45():
    r21 = dyn base4();
    goto L9(r21);
  L49():
    r25 = dyn stop[, domain]("botched namespace: failed to find 'base' namespace in its parents", NA_LGL);
    check L50() else D15();
  L52():
    p4 = prom<V +>{
      env11 = ld env;
      env12 = force? env11;
      checkMissing(env12);
      return env12;
    };
    r28 = dyn parent_env(p4);
    check L53() else D17();
  D12():
    deopt 44 [r23];
  D13():
    deopt 53 [r24];
  D15():
    deopt 59 [r25];
  D17():
    deopt 65 [r28];
  L46():
    goto L9(r23);
  L47():
    goto L8(r24);
  L50():
    goto L11();
  L53():
    st env = r28;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L12(r30):
    st value = r30;
    isBaseNamespace1 = ldf isBaseNamespace;
    check L62() else D22();
  L54():
    value = ld value;
    check L56() else D18();
  L55():
    r29 = dyn base5(<sym value>, <lang list(env)>);
    goto L12(r29);
  D18():
    deopt 69 [value];
  D22():
    deopt 81 [];
  L56():
    value1 = force? value;
    checkMissing(value1);
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L62():
    p5 = prom<V +>{
      env15 = ld env;
      env16 = force? env15;
      checkMissing(env16);
      return env16;
    };
    r36 = dyn isBaseNamespace1(p5);
    check L63() else D23();
  D23():
    deopt 83 [r36];
  L13(r32):
    c9 = ldf c in base;
    r34 = dyn c9(value1, r32);
    check L61() else D21();
  L57():
    env13 = ld env;
    check L59() else D19();
  L58():
    r31 = dyn base6(<sym env>);
    goto L13(r31);
  L63():
    c10 = `as.logical`(r36);
    if c10 then L64() else L14();
  D19():
    deopt 73 [env13];
  D21():
    deopt 78 [r34];
  L14():
    goto L17();
  L59():
    env14 = force? env13;
    checkMissing(env14);
    list1 = ldf list in base;
    r33 = dyn list1(env14);
    check L60() else D20();
  L61():
    goto L12(r34);
  L64():
    value2 = ld value;
    check L68() else D24();
  D20():
    deopt 76 [r33];
  D24():
    deopt 91 [value2];
  L60():
    goto L13(r33);
  L68():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  }
}