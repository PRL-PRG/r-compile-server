fun main() {
  () -+> V { reg r:cls, reg power_anova_test:cls, reg r1:V, reg power_anova_test1:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg power_anova_test2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg groupmeans:*, reg groupmeans1:V, reg length:cls, reg r8:V, reg p:p(V +), reg var:cls, reg groupmeans2:*, reg groupmeans3:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V |
    mkenv;
    r = clos inner1598455387;
    st `power.anova.test` = r;
    power_anova_test = ldf `power.anova.test`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn power_anova_test[groups, n, `between.var`, `within.var`](4.0, 5.0, 1.0, 3.0);
    check L2() else D1();
  D1():
    deopt 13 [r1];
  L2():
    power_anova_test1 = ldf `power.anova.test`;
    check L3() else D2();
  D2():
    deopt 15 [];
  L3():
    r2 = dyn power_anova_test1[groups, `between.var`, `within.var`, power](4.0, 1.0, 3.0, 0.8);
    check L4() else D3();
  D3():
    deopt 24 [r2];
  L4():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r4):
    st groupmeans = r4;
    power_anova_test2 = ldf `power.anova.test`;
    check L8() else D5();
  L5():
    c = ldf c in base;
    r5 = dyn c(120.0, 130.0, 140.0, 150.0);
    check L7() else D4();
  L6():
    r3 = dyn base(120.0, 130.0, 140.0, 150.0);
    goto L0(r3);
  D4():
    deopt 32 [r5];
  D5():
    deopt 35 [];
  L7():
    goto L0(r5);
  L8():
    p = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      groupmeans = ld groupmeans;
      groupmeans1 = force? groupmeans;
      checkMissing(groupmeans1);
      length = ldf length in base;
      r8 = dyn length(groupmeans1);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym groupmeans>);
      goto L0(r6);
    };
    p2 = prom<V +>{
      var = ldf var;
      p1 = prom<V +>{
        groupmeans2 = ld groupmeans;
        groupmeans3 = force? groupmeans2;
        checkMissing(groupmeans3);
        return groupmeans3;
      };
      r11 = dyn var(p1);
      return r11;
    };
    r13 = dyn power_anova_test2[groups, `between.var`, `within.var`, power](p, p2, 500.0, 0.9);
    check L9() else D6();
  D6():
    deopt 44 [r13];
  L9():
    popenv;
    return r13;
  }
}
fun inner1598455387(groups, n, `between.var`, `within.var`, `sig.level`, power) {
  (reg groups:*, reg n:*, reg between_var:*, reg within_var:*, reg sig_level:*, reg power:*) -+> V { var groups:*, reg groups_isMissing:L, reg groups_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `between.var`:*, reg between_var_isMissing:L, reg between_var_orDefault:*, var `within.var`:*, reg within_var_isMissing:L, reg within_var_orDefault:*, var `sig.level`:*, reg sig_level_isMissing:L, reg sig_level_orDefault:*, var power:*, reg power_isMissing:L, reg power_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg groups1:*, reg groups2:V, reg n1:*, reg n2:V, reg between_var1:*, reg between_var2:V, reg within_var1:*, reg within_var2:V, reg power1:*, reg power2:V, reg sig_level1:*, reg sig_level2:V, reg list:cls, reg r4:V, reg p:p(V +), reg is_null:*, reg is_null1:V, reg p1:p(V +), reg r7:V, reg sum:cls, reg r8:V, reg r9:V, reg c:L, reg stop:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg groups3:*, reg groups4:V, reg c1:V, reg r14:V, reg c2:L, reg c4:V, reg groups5:*, reg groups6:V, reg r15:V, reg c5:L, reg c6:V, reg c8:L, reg stop1:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg n3:*, reg n4:V, reg c9:V, reg r20:V, reg c10:L, reg c12:V, reg n5:*, reg n6:V, reg r21:V, reg c13:L, reg c14:V, reg c16:L, reg stop2:cls, reg r22:V, reg assert_NULL_or_prob:cls, reg sig_level3:*, reg sig_level4:V, reg p2:p(V +), reg r25:V, reg assert_NULL_or_prob1:cls, reg power3:*, reg power4:V, reg p3:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg quote:cls, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg power5:*, reg power6:V, reg c17:V, reg c18:L, reg eval:cls, reg p_body:*, reg p_body1:V, reg p4:p(V +), reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg groups7:*, reg groups8:V, reg c19:V, reg c20:L, reg uniroot:cls, reg r38:cls, reg p5:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg c21:cls, reg r42:V, reg p6:p(V +), reg r44:V, reg c22:L, reg r46:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg n7:*, reg n8:V, reg c23:V, reg c24:L, reg uniroot1:cls, reg r50:cls, reg p7:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg c25:cls, reg r54:V, reg p8:p(V +), reg r56:V, reg c26:L, reg r58:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r59:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg r61:V, reg within_var3:*, reg within_var4:V, reg c27:V, reg c28:L, reg uniroot2:cls, reg r62:cls, reg p9:p(V +), reg between_var3:*, reg between_var4:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg between_var7:V, reg r65:V, reg c29:cls, reg r66:V, reg r67:V, reg p10:p(V +), reg r69:V, reg c30:L, reg r71:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r72:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg between_var8:*, reg between_var9:V, reg c31:V, reg c32:L, reg uniroot3:cls, reg r75:cls, reg p11:p(V +), reg within_var5:*, reg within_var6:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r77:V, reg within_var9:V, reg r78:V, reg c33:cls, reg r79:V, reg r80:V, reg p12:p(V +), reg r82:V, reg c34:L, reg r84:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r85:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r86:V, reg r87:V, reg sig_level5:*, reg sig_level6:V, reg c35:V, reg c36:L, reg uniroot4:cls, reg r88:cls, reg p13:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r90:V, reg r91:V, reg c37:cls, reg r92:V, reg p14:p(V +), reg r94:V, reg c38:L, reg r96:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r97:V, reg stop3:cls, reg r98:V, reg structure:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r99:V, reg r100:V, reg groups9:*, reg groups10:V, reg n9:*, reg n10:V, reg between_var10:*, reg between_var11:V, reg within_var10:*, reg within_var11:V, reg sig_level7:*, reg sig_level8:V, reg power7:*, reg power8:V, reg NOTE:*, reg NOTE1:V, reg METHOD:*, reg METHOD1:V, reg list1:cls, reg r101:V, reg p15:p(V +), reg r103:V |
    mkenv;
    groups_isMissing = missing.0(groups);
    if groups_isMissing then L0(NULL) else L0(groups);
  L0(groups_orDefault):
    st groups = groups_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L1(NULL) else L1(n);
  L1(n_orDefault):
    st n = n_orDefault;
    between_var_isMissing = missing.0(between_var);
    if between_var_isMissing then L2(NULL) else L2(between_var);
  L2(between_var_orDefault):
    st `between.var` = between_var_orDefault;
    within_var_isMissing = missing.0(within_var);
    if within_var_isMissing then L3(NULL) else L3(within_var);
  L3(within_var_orDefault):
    st `within.var` = within_var_orDefault;
    sig_level_isMissing = missing.0(sig_level);
    if sig_level_isMissing then L4(0.05) else L4(sig_level);
  L4(sig_level_orDefault):
    st `sig.level` = sig_level_orDefault;
    power_isMissing = missing.0(power);
    if power_isMissing then L5(NULL) else L5(power);
  L5(power_orDefault):
    st power = power_orDefault;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L6(r1):
    r9 = `!=`(r1, 1.0);
    c = `as.logical`(r9);
    if c then L36() else L7();
  L31():
    vapply = ldf vapply;
    check L33() else D0();
  L32():
    r = dyn base(<lang vapply(list(groups, n, between.var, within.var, power, sig.level), is.null, NA_LGL)>);
    goto L6(r);
  D0():
    deopt 3 [];
  L7():
    goto L8();
  L8():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L33():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      groups1 = ld groups;
      groups2 = force? groups1;
      checkMissing(groups2);
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      between_var1 = ld `between.var`;
      between_var2 = force? between_var1;
      checkMissing(between_var2);
      within_var1 = ld `within.var`;
      within_var2 = force? within_var1;
      checkMissing(within_var2);
      power1 = ld power;
      power2 = force? power1;
      checkMissing(power2);
      sig_level1 = ld `sig.level`;
      sig_level2 = force? sig_level1;
      checkMissing(sig_level2);
      list = ldf list in base;
      r4 = dyn list(groups2, n2, between_var2, within_var2, power2, sig_level2);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym groups>, <sym n>, <sym between.var>, <sym within.var>, <sym power>, <sym sig.level>);
      goto L0(r2);
    };
    p1 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r7 = dyn vapply(p, p1, NA_LGL);
    check L34() else D1();
  L36():
    stop = ldf stop;
    check L37() else D3();
  D1():
    deopt 7 [r7];
  D3():
    deopt 13 [];
  L9(r13):
    r14 = `!`(r13);
    c2 = `as.logical`(r14);
    if c2 then L43() else L10(c2);
  L34():
    sum = ldf sum in base;
    r8 = dyn sum(r7);
    check L35() else D2();
  L37():
    r10 = dyn stop("exactly one of 'groups', 'n', 'between.var', 'within.var', 'power', and 'sig.level' must be NULL");
    check L38() else D4();
  L40():
    groups3 = ld groups;
    check L42() else D5();
  L41():
    r12 = dyn base2(<sym groups>);
    goto L9(r12);
  D2():
    deopt 9 [r8];
  D4():
    deopt 15 [r10];
  D5():
    deopt 19 [groups3];
  L10(c4):
    c8 = `as.logical`(c4);
    if c8 then L46() else L11();
  L35():
    goto L6(r8);
  L38():
    goto L8();
  L42():
    groups4 = force? groups3;
    checkMissing(groups4);
    c1 = `==`(groups4, NULL);
    goto L9(c1);
  L43():
    groups5 = ld groups;
    check L44() else D6();
  D6():
    deopt 23 [c2, groups5];
  L11():
    goto L12();
  L12():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L44():
    groups6 = force? groups5;
    checkMissing(groups6);
    r15 = `<`(groups6, 2.0);
    c5 = `as.logical`(r15);
    c6 = `&&`(c2, c5);
    goto L10(c6);
  L46():
    stop1 = ldf stop;
    check L47() else D7();
  D7():
    deopt 29 [];
  L13(r19):
    r20 = `!`(r19);
    c10 = `as.logical`(r20);
    if c10 then L53() else L14(c10);
  L47():
    r16 = dyn stop1("number of groups must be at least 2");
    check L48() else D8();
  L50():
    n3 = ld n;
    check L52() else D9();
  L51():
    r18 = dyn base3(<sym n>);
    goto L13(r18);
  D8():
    deopt 31 [r16];
  D9():
    deopt 35 [n3];
  L14(c12):
    c16 = `as.logical`(c12);
    if c16 then L56() else L15();
  L48():
    goto L12();
  L52():
    n4 = force? n3;
    checkMissing(n4);
    c9 = `==`(n4, NULL);
    goto L13(c9);
  L53():
    n5 = ld n;
    check L54() else D10();
  D10():
    deopt 39 [c10, n5];
  L15():
    goto L16();
  L16():
    assert_NULL_or_prob = ldf assert_NULL_or_prob;
    check L60() else D13();
  L54():
    n6 = force? n5;
    checkMissing(n6);
    r21 = `<`(n6, 2.0);
    c13 = `as.logical`(r21);
    c14 = `&&`(c10, c13);
    goto L14(c14);
  L56():
    stop2 = ldf stop;
    check L57() else D11();
  D11():
    deopt 45 [];
  D13():
    deopt 51 [];
  L57():
    r22 = dyn stop2("number of observations in each group must be at least 2");
    check L58() else D12();
  L60():
    p2 = prom<V +>{
      sig_level3 = ld `sig.level`;
      sig_level4 = force? sig_level3;
      checkMissing(sig_level4);
      return sig_level4;
    };
    r25 = dyn assert_NULL_or_prob(p2);
    check L61() else D14();
  D12():
    deopt 47 [r22];
  D14():
    deopt 53 [r25];
  L58():
    goto L16();
  L61():
    assert_NULL_or_prob1 = ldf assert_NULL_or_prob;
    check L62() else D15();
  D15():
    deopt 55 [];
  L62():
    p3 = prom<V +>{
      power3 = ld power;
      power4 = force? power3;
      checkMissing(power4);
      return power4;
    };
    r27 = dyn assert_NULL_or_prob1(p3);
    check L63() else D16();
  D16():
    deopt 57 [r27];
  L63():
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L17(r29):
    st `p.body` = r29;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L64():
    quote = ldf quote in base;
    r30 = dyn quote(<lang {
      `<-`(lambda, `*`(`*`(`(`(`-`(groups, 1.0)), n), `(`(`/`(between.var, within.var))));
      pf(qf(sig.level, `-`(groups, 1.0), `*`(`(`(`-`(n, 1.0)), groups), lower.tail=FALSE), `-`(groups, 1.0), `*`(`(`(`-`(n, 1.0)), groups), lambda, lower.tail=FALSE)
    }>);
    goto L17(r30);
  L65():
    r28 = dyn base4(<lang {
      `<-`(lambda, `*`(`*`(`(`(`-`(groups, 1.0)), n), `(`(`/`(between.var, within.var))));
      pf(qf(sig.level, `-`(groups, 1.0), `*`(`(`(`-`(n, 1.0)), groups), lower.tail=FALSE), `-`(groups, 1.0), `*`(`(`(`-`(n, 1.0)), groups), lambda, lower.tail=FALSE)
    }>);
    goto L17(r28);
  L18(r32):
    c18 = `as.logical`(r32);
    if c18 then L69() else L19();
  L66():
    power5 = ld power;
    check L68() else D17();
  L67():
    r31 = dyn base5(<sym power>);
    goto L18(r31);
  D17():
    deopt 63 [power5];
  L19():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L20():
    st NOTE = "n is number in each group";
    st METHOD = "Balanced one-way analysis of variance power calculation";
    structure = ldf structure;
    check L130() else D37();
  L68():
    power6 = force? power5;
    checkMissing(power6);
    c17 = `==`(power6, NULL);
    goto L18(c17);
  L69():
    eval = ldf eval;
    check L70() else D18();
  D18():
    deopt 67 [];
  D37():
    deopt 139 [];
  L21(r37):
    c20 = `as.logical`(r37);
    if c20 then L76() else L22();
  L70():
    p4 = prom<V +>{
      p_body = ld `p.body`;
      p_body1 = force? p_body;
      checkMissing(p_body1);
      return p_body1;
    };
    r34 = dyn eval(p4);
    check L71() else D19();
  L73():
    groups7 = ld groups;
    check L75() else D20();
  L74():
    r36 = dyn base6(<sym groups>);
    goto L21(r36);
  L130():
    p15 = prom<V +>{
      sym16 = ldf list;
      base16 = ldf list in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r100):
      return r100;
    L1():
      groups9 = ld groups;
      groups10 = force? groups9;
      checkMissing(groups10);
      n9 = ld n;
      n10 = force? n9;
      checkMissing(n10);
      between_var10 = ld `between.var`;
      between_var11 = force? between_var10;
      checkMissing(between_var11);
      within_var10 = ld `within.var`;
      within_var11 = force? within_var10;
      checkMissing(within_var11);
      sig_level7 = ld `sig.level`;
      sig_level8 = force? sig_level7;
      checkMissing(sig_level8);
      power7 = ld power;
      power8 = force? power7;
      checkMissing(power8);
      NOTE = ld NOTE;
      NOTE1 = force? NOTE;
      checkMissing(NOTE1);
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      list1 = ldf list in base;
      r101 = dyn list1(groups10, n10, between_var11, within_var11, sig_level8, power8, NOTE1, METHOD1);
      goto L0(r101);
    L2():
      r99 = dyn base16[groups, n, `between.var`, `within.var`, `sig.level`, power, note, method](<sym groups>, <sym n>, <sym between.var>, <sym within.var>, <sym sig.level>, <sym power>, <sym NOTE>, <sym METHOD>);
      goto L0(r99);
    };
    r103 = dyn structure[, class](p15, "power.htest");
    check L131() else D38();
  D19():
    deopt 69 [r34];
  D20():
    deopt 72 [groups7];
  D38():
    deopt 143 [r103];
  L22():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L71():
    st power = r34;
    goto L20();
  L75():
    groups8 = force? groups7;
    checkMissing(groups8);
    c19 = `==`(groups8, NULL);
    goto L21(c19);
  L76():
    uniroot = ldf uniroot;
    check L77() else D21();
  L131():
    popenv;
    return r103;
  D21():
    deopt 76 [];
  L23(r49):
    c24 = `as.logical`(r49);
    if c24 then L87() else L24();
  L77():
    p5 = prom<V +>{
      r38 = clos inner3912326772;
      return r38;
    };
    p6 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      c21 = ldf c in base;
      r42 = dyn c21(2.0, 100.0);
      goto L0(r42);
    L2():
      r40 = dyn base7(2.0, 100.0);
      goto L0(r40);
    };
    r44 = dyn uniroot(p5, p6);
    check L78() else D22();
  L84():
    n7 = ld n;
    check L86() else D23();
  L85():
    r48 = dyn base8(<sym n>);
    goto L23(r48);
  D22():
    deopt 79 [r44];
  D23():
    deopt 83 [n7];
  L24():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L95() else L96();
  L78():
    c22 = `is.object`(r44);
    if c22 then L80() else L81(r44);
  L86():
    n8 = force? n7;
    checkMissing(n8);
    c23 = `==`(n8, NULL);
    goto L23(c23);
  L87():
    uniroot1 = ldf uniroot;
    check L88() else D24();
  D24():
    deopt 87 [];
  L25(r61):
    c28 = `as.logical`(r61);
    if c28 then L98() else L26();
  L79(dx1):
    st groups = dx1;
    goto L20();
  L80():
    dr = tryDispatchBuiltin.1("$", r44);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L82() else L81(dr);
  L81(r46):
    r47 = `$`(r46, <sym root>);
    goto L79(r47);
  L88():
    p7 = prom<V +>{
      r50 = clos inner4266987626;
      return r50;
    };
    p8 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c25 = ldf c in base;
      r54 = dyn c25(2.0, 100000.0);
      goto L0(r54);
    L2():
      r52 = dyn base9(2.0, 100000.0);
      goto L0(r52);
    };
    r56 = dyn uniroot1(p7, p8);
    check L89() else D25();
  L95():
    within_var3 = ld `within.var`;
    check L97() else D26();
  L96():
    r60 = dyn base10(<sym within.var>);
    goto L25(r60);
  D25():
    deopt 90 [r56];
  D26():
    deopt 94 [within_var3];
  L26():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L106() else L107();
  L82():
    dx = getTryDispatchBuiltinValue(dr);
    goto L79(dx);
  L89():
    c26 = `is.object`(r56);
    if c26 then L91() else L92(r56);
  L97():
    within_var4 = force? within_var3;
    checkMissing(within_var4);
    c27 = `==`(within_var4, NULL);
    goto L25(c27);
  L98():
    uniroot2 = ldf uniroot;
    check L99() else D27();
  D27():
    deopt 98 [];
  L27(r74):
    c32 = `as.logical`(r74);
    if c32 then L109() else L28();
  L90(dx3):
    st n = dx3;
    goto L20();
  L91():
    dr2 = tryDispatchBuiltin.1("$", r56);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L93() else L92(dr2);
  L92(r58):
    r59 = `$`(r58, <sym root>);
    goto L90(r59);
  L99():
    p9 = prom<V +>{
      r62 = clos inner2254476996;
      return r62;
    };
    p10 = prom<V +>{
      between_var3 = ld `between.var`;
      between_var4 = force? between_var3;
      checkMissing(between_var4);
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(between_var7, r65):
      r67 = `*`(between_var7, r65);
      return r67;
    L1():
      c29 = ldf c in base;
      r66 = dyn c29(1.0E-7, 1.0E7);
      goto L0(between_var4, r66);
    L2():
      r64 = dyn base11(1.0E-7, 1.0E7);
      goto L0(between_var4, r64);
    };
    r69 = dyn uniroot2(p9, p10);
    check L100() else D28();
  L106():
    between_var8 = ld `between.var`;
    check L108() else D29();
  L107():
    r73 = dyn base12(<sym between.var>);
    goto L27(r73);
  D28():
    deopt 101 [r69];
  D29():
    deopt 105 [between_var8];
  L28():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L117() else L118();
  L93():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L90(dx2);
  L100():
    c30 = `is.object`(r69);
    if c30 then L102() else L103(r69);
  L108():
    between_var9 = force? between_var8;
    checkMissing(between_var9);
    c31 = `==`(between_var9, NULL);
    goto L27(c31);
  L109():
    uniroot3 = ldf uniroot;
    check L110() else D30();
  D30():
    deopt 109 [];
  L29(r87):
    c36 = `as.logical`(r87);
    if c36 then L120() else L30();
  L101(dx5):
    st `within.var` = dx5;
    goto L20();
  L102():
    dr4 = tryDispatchBuiltin.1("$", r69);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L104() else L103(dr4);
  L103(r71):
    r72 = `$`(r71, <sym root>);
    goto L101(r72);
  L110():
    p11 = prom<V +>{
      r75 = clos inner882574717;
      return r75;
    };
    p12 = prom<V +>{
      within_var5 = ld `within.var`;
      within_var6 = force? within_var5;
      checkMissing(within_var6);
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(within_var9, r78):
      r80 = `*`(within_var9, r78);
      return r80;
    L1():
      c33 = ldf c in base;
      r79 = dyn c33(1.0E-7, 1.0E7);
      goto L0(within_var6, r79);
    L2():
      r77 = dyn base13(1.0E-7, 1.0E7);
      goto L0(within_var6, r77);
    };
    r82 = dyn uniroot3(p11, p12);
    check L111() else D31();
  L117():
    sig_level5 = ld `sig.level`;
    check L119() else D32();
  L118():
    r86 = dyn base14(<sym sig.level>);
    goto L29(r86);
  D31():
    deopt 112 [r82];
  D32():
    deopt 116 [sig_level5];
  L30():
    stop3 = ldf stop;
    check L128() else D35();
  L104():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L101(dx4);
  L111():
    c34 = `is.object`(r82);
    if c34 then L113() else L114(r82);
  L119():
    sig_level6 = force? sig_level5;
    checkMissing(sig_level6);
    c35 = `==`(sig_level6, NULL);
    goto L29(c35);
  L120():
    uniroot4 = ldf uniroot;
    check L121() else D33();
  D33():
    deopt 120 [];
  D35():
    deopt 127 [];
  L112(dx7):
    st `between.var` = dx7;
    goto L20();
  L113():
    dr6 = tryDispatchBuiltin.1("$", r82);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L115() else L114(dr6);
  L114(r84):
    r85 = `$`(r84, <sym root>);
    goto L112(r85);
  L121():
    p13 = prom<V +>{
      r88 = clos inner3539364451;
      return r88;
    };
    p14 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r91):
      return r91;
    L1():
      c37 = ldf c in base;
      r92 = dyn c37(1.0E-10, 0.9999999999);
      goto L0(r92);
    L2():
      r90 = dyn base15(1.0E-10, <lang `-`(1.0, 1.0E-10)>);
      goto L0(r90);
    };
    r94 = dyn uniroot4(p13, p14);
    check L122() else D34();
  L128():
    r98 = dyn stop3[, domain]("internal error", NA_LGL);
    check L129() else D36();
  D34():
    deopt 123 [r94];
  D36():
    deopt 131 [r98];
  L115():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L112(dx6);
  L122():
    c38 = `is.object`(r94);
    if c38 then L124() else L125(r94);
  L129():
    goto L20();
  L123(dx9):
    st `sig.level` = dx9;
    goto L20();
  L124():
    dr8 = tryDispatchBuiltin.1("$", r94);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L126() else L125(dr8);
  L125(r96):
    r97 = `$`(r96, <sym root>);
    goto L123(r97);
  L126():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L123(dx8);
  }
}
fun inner3912326772(groups) {
  (reg groups:*) -+> V { var groups:*, reg eval:cls, reg p_body:*, reg p_body1:V, reg p:p(V +), reg r1:V, reg power:*, reg power1:V, reg r2:V |
    mkenv;
    st groups = groups;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      p_body = ld `p.body`;
      p_body1 = force? p_body;
      checkMissing(p_body1);
      return p_body1;
    };
    r1 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    power = ld power;
    check L2() else D2();
  D2():
    deopt 3 [r1, power];
  L2():
    power1 = force? power;
    checkMissing(power1);
    r2 = `-`(r1, power1);
    popenv;
    return r2;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg eval:cls, reg p_body:*, reg p_body1:V, reg p:p(V +), reg r1:V, reg power:*, reg power1:V, reg r2:V |
    mkenv;
    st n = n;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      p_body = ld `p.body`;
      p_body1 = force? p_body;
      checkMissing(p_body1);
      return p_body1;
    };
    r1 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    power = ld power;
    check L2() else D2();
  D2():
    deopt 3 [r1, power];
  L2():
    power1 = force? power;
    checkMissing(power1);
    r2 = `-`(r1, power1);
    popenv;
    return r2;
  }
}
fun inner2254476996(`within.var`) {
  (reg within_var:*) -+> V { var `within.var`:*, reg eval:cls, reg p_body:*, reg p_body1:V, reg p:p(V +), reg r1:V, reg power:*, reg power1:V, reg r2:V |
    mkenv;
    st `within.var` = within_var;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      p_body = ld `p.body`;
      p_body1 = force? p_body;
      checkMissing(p_body1);
      return p_body1;
    };
    r1 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    power = ld power;
    check L2() else D2();
  D2():
    deopt 3 [r1, power];
  L2():
    power1 = force? power;
    checkMissing(power1);
    r2 = `-`(r1, power1);
    popenv;
    return r2;
  }
}
fun inner882574717(`between.var`) {
  (reg between_var:*) -+> V { var `between.var`:*, reg eval:cls, reg p_body:*, reg p_body1:V, reg p:p(V +), reg r1:V, reg power:*, reg power1:V, reg r2:V |
    mkenv;
    st `between.var` = between_var;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      p_body = ld `p.body`;
      p_body1 = force? p_body;
      checkMissing(p_body1);
      return p_body1;
    };
    r1 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    power = ld power;
    check L2() else D2();
  D2():
    deopt 3 [r1, power];
  L2():
    power1 = force? power;
    checkMissing(power1);
    r2 = `-`(r1, power1);
    popenv;
    return r2;
  }
}
fun inner3539364451(`sig.level`) {
  (reg sig_level:*) -+> V { var `sig.level`:*, reg eval:cls, reg p_body:*, reg p_body1:V, reg p:p(V +), reg r1:V, reg power:*, reg power1:V, reg r2:V |
    mkenv;
    st `sig.level` = sig_level;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      p_body = ld `p.body`;
      p_body1 = force? p_body;
      checkMissing(p_body1);
      return p_body1;
    };
    r1 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    power = ld power;
    check L2() else D2();
  D2():
    deopt 3 [r1, power];
  L2():
    power1 = force? power;
    checkMissing(power1);
    r2 = `-`(r1, power1);
    popenv;
    return r2;
  }
}