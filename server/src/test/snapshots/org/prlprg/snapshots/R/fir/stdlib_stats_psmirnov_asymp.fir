fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2992133739;
    st psmirnov_asymp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2992133739(q, sizes, alternative, `lower.tail`, `log.p`) {
  (reg q:*, reg sizes:*, reg alternative:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var sizes:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg match_arg:cls, reg alternative1:*, reg alternative2:V, reg p1:p(V +), reg r5:V, reg alternative3:*, reg alternative4:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sizes1:*, reg sizes2:V, reg prod:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg r14:V, reg sizes3:*, reg sizes4:V, reg sum:cls, reg r15:V, reg r16:V, reg two_sided:*, reg two_sided1:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg C_pkolmogorov_two_limit:*, reg C_pkolmogorov_two_limit1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg n:*, reg n1:V, reg r21:V, reg q1:*, reg q2:V, reg r22:V, reg lower_tail1:*, reg lower_tail2:V, reg _Call:cls, reg r23:V, reg log_p1:*, reg log_p2:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg ret:*, reg ret1:V, reg r26:V, reg ret2:*, reg ret3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg n2:*, reg n3:V, reg r30:V, reg q3:*, reg q4:V, reg r31:V, reg r32:V, reg r33:V, reg r34:V, reg log_p3:*, reg log_p4:V, reg c3:L, reg lower_tail3:*, reg lower_tail4:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg ret4:*, reg ret5:V, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg ret6:*, reg ret7:V, reg r40:V, reg r41:V, reg lower_tail5:*, reg lower_tail6:V, reg c5:L, reg ret8:*, reg ret9:V, reg ret10:*, reg ret11:V, reg r42:V |
    mkenv;
    st q = q;
    st sizes = sizes;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L0() else L1(alternative);
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
      r2 = dyn c("two.sided", "less", "greater");
      goto L0(r2);
    L2():
      r = dyn base("two.sided", "less", "greater");
      goto L0(r);
    };
    goto L1(p);
  L1(alternative_orDefault):
    st alternative = alternative_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L2(TRUE) else L2(lower_tail);
  L2(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L3(FALSE) else L3(log_p);
  L3(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    match_arg = ldf `match.arg`;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p1 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r5 = dyn match_arg(p1);
    check L19() else D1();
  D1():
    deopt 3 [r5];
  L19():
    st alternative = r5;
    alternative3 = ld alternative;
    check L20() else D2();
  D2():
    deopt 5 [alternative3];
  L20():
    alternative4 = force? alternative3;
    checkMissing(alternative4);
    r6 = `==`(alternative4, "two.sided");
    st `two.sided` = r6;
    sym1 = ldf prod;
    base1 = ldf prod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L4(r8):
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L21():
    sizes1 = ld sizes;
    check L23() else D3();
  L22():
    r7 = dyn base1(<sym sizes>);
    goto L4(r7);
  D3():
    deopt 12 [sizes1];
  L5(r13, r14):
    r16 = `/`(r13, r14);
    st n = r16;
    two_sided = ld `two.sided`;
    check L29() else D7();
  L23():
    sizes2 = force? sizes1;
    checkMissing(sizes2);
    prod = ldf prod in base;
    r9 = dyn prod(sizes2);
    check L24() else D4();
  L25():
    sizes3 = ld sizes;
    check L27() else D5();
  L26():
    r12 = dyn base2(<sym sizes>);
    goto L5(r8, r12);
  D4():
    deopt 15 [r9];
  D5():
    deopt 17 [r8, sizes3];
  D7():
    deopt 23 [two_sided];
  L24():
    goto L4(r9);
  L27():
    sizes4 = force? sizes3;
    checkMissing(sizes4);
    sum = ldf sum in base;
    r15 = dyn sum(sizes4);
    check L28() else D6();
  L29():
    two_sided1 = force? two_sided;
    checkMissing(two_sided1);
    c1 = `as.logical`(two_sided1);
    if c1 then L30() else L6();
  D6():
    deopt 20 [r8, r15];
  L6():
    sym6 = ldf expm1;
    base6 = ldf expm1 in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L28():
    goto L5(r8, r15);
  L30():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L7(r18):
    st ret = r18;
    log_p1 = ld `log.p`;
    check L40() else D13();
  L12(r29):
    r34 = `-`(<missing>, r29);
    st ret = r34;
    log_p3 = ld `log.p`;
    check L52() else D18();
  L31():
    C_pkolmogorov_two_limit = ld C_pkolmogorov_two_limit;
    check L33() else D8();
  L32():
    r17 = dyn base3[, , , tol](<sym C_pkolmogorov_two_limit>, <lang `*`(sqrt(n), q)>, <sym lower.tail>, 1.0E-6);
    goto L7(r17);
  L48():
    n2 = ld n;
    check L50() else D16();
  L49():
    r28 = dyn base6(<lang `*`(`*`(`-`(2.0), n), `^`(q, 2.0))>);
    goto L12(r28);
  D8():
    deopt 27 [C_pkolmogorov_two_limit];
  D13():
    deopt 42 [log_p1];
  D16():
    deopt 55 [-2.0, n2];
  D18():
    deopt 65 [log_p3];
  L33():
    C_pkolmogorov_two_limit1 = force? C_pkolmogorov_two_limit;
    checkMissing(C_pkolmogorov_two_limit1);
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L40():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    c2 = `as.logical`(log_p2);
    if c2 then L41() else L9();
  L50():
    n3 = force? n2;
    checkMissing(n3);
    r30 = `*`(-2.0, n3);
    q3 = ld q;
    check L51() else D17();
  L52():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    c3 = `as.logical`(log_p4);
    if c3 then L53() else L13();
  D17():
    deopt 57 [r30, q3];
  L8(r20):
    q1 = ld q;
    check L37() else D10();
  L9():
    goto L11();
  L11():
    ret2 = ld ret;
    check L46() else D15();
  L13():
    lower_tail5 = ld `lower.tail`;
    check L64() else D22();
  L34():
    n = ld n;
    check L36() else D9();
  L35():
    r19 = dyn base4(<sym n>);
    goto L8(r19);
  L41():
    sym5 = ldf log;
    base5 = ldf log in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L51():
    q4 = force? q3;
    checkMissing(q4);
    r31 = `^`(q4, 2.0);
    r32 = `*`(r30, r31);
    r33 = expm1(r32);
    goto L12(r33);
  L53():
    lower_tail3 = ld `lower.tail`;
    check L54() else D19();
  D9():
    deopt 30 [n];
  D10():
    deopt 32 [r20, q1];
  D15():
    deopt 51 [ret2];
  D19():
    deopt 67 [lower_tail3];
  D22():
    deopt 78 [lower_tail5];
  L10(r25):
    st ret = r25;
    goto L11();
  L36():
    n1 = force? n;
    checkMissing(n1);
    r21 = sqrt(n1);
    goto L8(r21);
  L37():
    q2 = force? q1;
    checkMissing(q2);
    r22 = `*`(r20, q2);
    lower_tail1 = ld `lower.tail`;
    check L38() else D11();
  L42():
    ret = ld ret;
    check L44() else D14();
  L43():
    r24 = dyn base5(<sym ret>);
    goto L10(r24);
  L46():
    ret3 = force? ret2;
    checkMissing(ret3);
    popenv;
    return ret3;
  L54():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    c4 = `as.logical`(lower_tail4);
    if c4 then L55() else L14();
  L64():
    lower_tail6 = force? lower_tail5;
    checkMissing(lower_tail6);
    c5 = `as.logical`(lower_tail6);
    if c5 then L65() else L17();
  D11():
    deopt 35 [lower_tail1];
  D14():
    deopt 45 [ret];
  L14():
    sym8 = ldf log1p;
    base8 = ldf log1p in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L17():
    ret10 = ld ret;
    check L68() else D24();
  L38():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    _Call = ldf `.Call` in base;
    r23 = dyn _Call(C_pkolmogorov_two_limit1, r22, lower_tail2, 1.0E-6);
    check L39() else D12();
  L44():
    ret1 = force? ret;
    checkMissing(ret1);
    r26 = log(ret1, 2.718281828459045);
    goto L10(r26);
  L55():
    sym7 = ldf log;
    base7 = ldf log in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L56() else L57();
  L65():
    ret8 = ld ret;
    check L66() else D23();
  D12():
    deopt 40 [r23];
  D23():
    deopt 80 [ret8];
  D24():
    deopt 83 [1.0, ret10];
  L15(r36):
    popenv;
    return r36;
  L16(r39):
    popenv;
    return r39;
  L39():
    goto L7(r23);
  L56():
    ret4 = ld ret;
    check L58() else D20();
  L57():
    r35 = dyn base7(<sym ret>);
    goto L15(r35);
  L60():
    ret6 = ld ret;
    check L62() else D21();
  L61():
    r38 = dyn base8(<lang `-`(ret)>);
    goto L16(r38);
  L66():
    ret9 = force? ret8;
    checkMissing(ret9);
    popenv;
    return ret9;
  L68():
    ret11 = force? ret10;
    checkMissing(ret11);
    r42 = `-`(1.0, ret11);
    popenv;
    return r42;
  D20():
    deopt 70 [ret4];
  D21():
    deopt 74 [ret6];
  L58():
    ret5 = force? ret4;
    checkMissing(ret5);
    r37 = log(ret5, 2.718281828459045);
    goto L15(r37);
  L62():
    ret7 = force? ret6;
    checkMissing(ret7);
    r40 = `-`(<missing>, ret7);
    r41 = log1p(r40);
    goto L16(r41);
  }
}