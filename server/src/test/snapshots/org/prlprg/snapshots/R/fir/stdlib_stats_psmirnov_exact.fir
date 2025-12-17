fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner768662829;
    st psmirnov_exact = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner768662829(q, sizes, z, alternative, `lower.tail`, `log.p`) {
  (reg q:*, reg sizes:*, reg z:*, reg alternative:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var sizes:*, var z:*, reg z_isMissing:L, reg z_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg z1:*, reg z2:V, reg c1:V, reg r6:V, reg c2:L, reg diff:cls, reg sort:cls, reg z3:*, reg z4:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg z5:*, reg z6:V, reg any:cls, reg r14:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg z7:*, reg z8:V, reg c4:cls, reg r17:V, reg r18:V, reg alternative1:*, reg alternative2:V, reg r20:V, reg alternative3:*, reg alternative4:V, reg r21:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg sizes1:*, reg sizes2:V, reg c6:L, reg sizes4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r24:V, reg sizes5:*, reg sizes6:V, reg c7:L, reg sizes8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r25:V, reg c8:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg C_psmirnov_exact:*, reg C_psmirnov_exact1:V, reg q1:*, reg q2:V, reg sizes9:*, reg sizes10:V, reg c9:L, reg C_psmirnov_exact3:V, reg q4:V, reg sizes12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg C_psmirnov_exact5:V, reg q6:V, reg dx5:V, reg __2:cls, reg r30:V, reg sizes13:*, reg sizes14:V, reg c10:L, reg C_psmirnov_exact7:V, reg q8:V, reg dx7:V, reg sizes16:V, reg dr6:V, reg dc3:L, reg dx9:V, reg C_psmirnov_exact9:V, reg q10:V, reg dx10:V, reg dx11:V, reg __3:cls, reg r31:V, reg z9:*, reg z10:V, reg two_sided:*, reg two_sided1:V, reg lower_tail1:*, reg lower_tail2:V, reg vargs:dots, reg r32:V, reg log_p1:*, reg log_p2:V, reg c11:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg p3:*, reg p4:V, reg r35:V, reg p5:*, reg p6:V |
    mkenv;
    st q = q;
    st sizes = sizes;
    z_isMissing = missing.0(z);
    if z_isMissing then L0(NULL) else L0(z);
  L0(z_orDefault):
    st z = z_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L1() else L2(alternative);
  L1():
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
    goto L2(p);
  L2(alternative_orDefault):
    st alternative = alternative_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L3(TRUE) else L3(lower_tail);
  L3(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L4(FALSE) else L4(log_p);
  L4(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L5(r5):
    r6 = `!`(r5);
    c2 = `as.logical`(r6);
    if c2 then L25() else L6();
  L22():
    z1 = ld z;
    check L24() else D0();
  L23():
    r4 = dyn base1(<sym z>);
    goto L5(r4);
  D0():
    deopt 1 [z1];
  L6():
    goto L11();
  L11():
    alternative1 = ld alternative;
    check L39() else D7();
  L24():
    z2 = force? z1;
    checkMissing(z2);
    c1 = `==`(z2, NULL);
    goto L5(c1);
  L25():
    diff = ldf diff;
    check L26() else D1();
  D1():
    deopt 6 [];
  D7():
    deopt 31 [alternative1];
  L26():
    p2 = prom<V +>{
      sort = ldf sort;
      p1 = prom<V +>{
        z3 = ld z;
        z4 = force? z3;
        checkMissing(z4);
        return z4;
      };
      r8 = dyn sort(p1);
      return r8;
    };
    r10 = dyn diff(p2);
    check L27() else D2();
  L39():
    alternative2 = force? alternative1;
    checkMissing(alternative2);
    r20 = `==`(alternative2, "two.sided");
    st `two.sided` = r20;
    alternative3 = ld alternative;
    check L40() else D8();
  D2():
    deopt 8 [r10];
  D8():
    deopt 36 [alternative3];
  L27():
    r11 = `!=`(r10, 0.0);
    st z = r11;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L40():
    alternative4 = force? alternative3;
    checkMissing(alternative4);
    r21 = `==`(alternative4, "less");
    c5 = `as.logical`(r21);
    if c5 then L41() else L12();
  L7(r13):
    c3 = `as.logical`(r13);
    if c3 then L32() else L8();
  L12():
    goto L16();
  L16():
    sym5 = ldf `.Call`;
    base5 = ldf `.Call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L28():
    z5 = ld z;
    check L30() else D3();
  L29():
    r12 = dyn base2(<sym z>);
    goto L7(r12);
  L41():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  D3():
    deopt 14 [z5];
  L8():
    goto L10(NULL);
  L10(r18):
    st z = r18;
    goto L11();
  L13(r23):
    st sizes = r23;
    goto L16();
  L17(r29):
    st p = r29;
    log_p1 = ld `log.p`;
    check L69() else D19();
  L30():
    z6 = force? z5;
    checkMissing(z6);
    any = ldf any in base;
    r14 = dyn any(z6);
    check L31() else D4();
  L32():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L42():
    sizes1 = ld sizes;
    check L44() else D9();
  L43():
    r22 = dyn base4(<lang `[`(sizes, 2)>, <lang `[`(sizes, 1)>);
    goto L13(r22);
  L54():
    C_psmirnov_exact = ld C_psmirnov_exact;
    check L56() else D12();
  L55():
    r28 = dyn base5(<sym C_psmirnov_exact>, <sym q>, <lang `[`(sizes, 1)>, <lang `[`(sizes, 2)>, <sym z>, <sym two.sided>, <sym lower.tail>);
    goto L17(r28);
  D4():
    deopt 17 [r14];
  D9():
    deopt 42 [sizes1];
  D12():
    deopt 58 [C_psmirnov_exact];
  D19():
    deopt 74 [log_p1];
  L9(r16):
    goto L10(r16);
  L31():
    goto L7(r14);
  L33():
    z7 = ld z;
    check L35() else D5();
  L34():
    r15 = dyn base3(0, <sym z>, 1);
    goto L9(r15);
  L44():
    sizes2 = force? sizes1;
    checkMissing(sizes2);
    c6 = `is.object`(sizes2);
    if c6 then L45() else L46(sizes2);
  L56():
    C_psmirnov_exact1 = force? C_psmirnov_exact;
    checkMissing(C_psmirnov_exact1);
    q1 = ld q;
    check L57() else D13();
  L69():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    c11 = `as.logical`(log_p2);
    if c11 then L70() else L20();
  D5():
    deopt 21 [z7];
  D13():
    deopt 59 [C_psmirnov_exact1, q1];
  L14(dx1):
    sizes5 = ld sizes;
    check L48() else D10();
  L20():
    p5 = ld p;
    check L75() else D21();
  L35():
    z8 = force? z7;
    checkMissing(z8);
    c4 = ldf c in base;
    r17 = dyn c4(0, z8, 1);
    check L36() else D6();
  L45():
    dr = tryDispatchBuiltin.1("[", sizes2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(sizes4):
    __ = ldf `[` in base;
    r24 = dyn __(sizes4, 2);
    goto L14(r24);
  L57():
    q2 = force? q1;
    checkMissing(q2);
    sizes9 = ld sizes;
    check L58() else D14();
  L70():
    sym6 = ldf log;
    base6 = ldf log in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  D6():
    deopt 25 [r17];
  D10():
    deopt 47 [sizes5];
  D14():
    deopt 60 [C_psmirnov_exact1, q2, sizes9];
  D21():
    deopt 80 [p5];
  L21(r34):
    popenv;
    return r34;
  L36():
    goto L9(r17);
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L48():
    sizes6 = force? sizes5;
    checkMissing(sizes6);
    c7 = `is.object`(sizes6);
    if c7 then L49() else L50(sizes6);
  L58():
    sizes10 = force? sizes9;
    checkMissing(sizes10);
    c9 = `is.object`(sizes10);
    if c9 then L59() else L60(C_psmirnov_exact1, q2, sizes10);
  L71():
    p3 = ld p;
    check L73() else D20();
  L72():
    r33 = dyn base6(<sym p>);
    goto L21(r33);
  L75():
    p6 = force? p5;
    checkMissing(p6);
    popenv;
    return p6;
  D20():
    deopt 77 [p3];
  L15(dx3):
    c8 = ldf c in base;
    r26 = dyn c8(dx1, dx3);
    check L52() else D11();
  L18(C_psmirnov_exact5, q6, dx5):
    sizes13 = ld sizes;
    check L62() else D15();
  L49():
    dr2 = tryDispatchBuiltin.1("[", sizes6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(dr2);
  L50(sizes8):
    __1 = ldf `[` in base;
    r25 = dyn __1(sizes8, 1);
    goto L15(r25);
  L59():
    dr4 = tryDispatchBuiltin.1("[", sizes10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(C_psmirnov_exact1, q2, dr4);
  L60(C_psmirnov_exact3, q4, sizes12):
    __2 = ldf `[` in base;
    r30 = dyn __2(sizes12, 1);
    goto L18(C_psmirnov_exact3, q4, r30);
  L73():
    p4 = force? p3;
    checkMissing(p4);
    r35 = log(p4, 2.718281828459045);
    goto L21(r35);
  D11():
    deopt 53 [r26];
  D15():
    deopt 64 [C_psmirnov_exact5, q6, dx5, sizes13];
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L52():
    goto L13(r26);
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(C_psmirnov_exact1, q2, dx4);
  L62():
    sizes14 = force? sizes13;
    checkMissing(sizes14);
    c10 = `is.object`(sizes14);
    if c10 then L63() else L64(C_psmirnov_exact5, q6, dx5, sizes14);
  L19(C_psmirnov_exact9, q10, dx10, dx11):
    z9 = ld z;
    check L66() else D16();
  L63():
    dr6 = tryDispatchBuiltin.1("[", sizes14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(C_psmirnov_exact5, q6, dx5, dr6);
  L64(C_psmirnov_exact7, q8, dx7, sizes16):
    __3 = ldf `[` in base;
    r31 = dyn __3(sizes16, 2);
    goto L19(C_psmirnov_exact7, q8, dx7, r31);
  D16():
    deopt 68 [C_psmirnov_exact9, q10, dx10, dx11, z9];
  L65():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L19(C_psmirnov_exact5, q6, dx5, dx9);
  L66():
    z10 = force? z9;
    checkMissing(z10);
    two_sided = ld `two.sided`;
    check L67() else D17();
  D17():
    deopt 69 [C_psmirnov_exact9, q10, dx10, dx11, z10, two_sided];
  L67():
    two_sided1 = force? two_sided;
    checkMissing(two_sided1);
    lower_tail1 = ld `lower.tail`;
    check L68() else D18();
  D18():
    deopt 70 [C_psmirnov_exact9, q10, dx10, dx11, z10, two_sided1, lower_tail1];
  L68():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    vargs = dots[q10, dx10, dx11, z10, two_sided1, lower_tail2];
    r32 = `.Call`(C_psmirnov_exact9, vargs, <missing>);
    goto L17(r32);
  }
}