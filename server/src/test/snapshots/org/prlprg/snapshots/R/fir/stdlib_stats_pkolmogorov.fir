fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner314999968;
    st pkolmogorov = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner314999968(q, size, `two.sided`, exact, `lower.tail`) {
  (reg q:*, reg size:*, reg two_sided:*, reg exact:*, reg lower_tail:*) -+> V { var q:*, var size:*, var `two.sided`:*, reg two_sided_isMissing:L, reg two_sided_orDefault:*, var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg q1:*, reg q2:V, reg is_na:cls, reg r2:V, reg c:L, reg q3:*, reg q4:V, reg r5:V, reg c1:L, reg lower_tail1:*, reg lower_tail2:V, reg r6:V, reg q5:*, reg q6:V, reg r9:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg lower_tail3:*, reg lower_tail4:V, reg as_numeric:cls, reg r12:V, reg exact1:*, reg exact2:V, reg c3:L, reg two_sided1:*, reg two_sided2:V, reg c4:L, reg pkolmogorov_two_exact:cls, reg q7:*, reg q8:V, reg p:p(V +), reg size1:*, reg size2:V, reg p1:p(V +), reg lower_tail5:*, reg lower_tail6:V, reg p2:p(V +), reg r18:V, reg pkolmogorov_one_exact:cls, reg q9:*, reg q10:V, reg p3:p(V +), reg size3:*, reg size4:V, reg p4:p(V +), reg lower_tail7:*, reg lower_tail8:V, reg p5:p(V +), reg r22:V, reg two_sided3:*, reg two_sided4:V, reg c5:L, reg pkolmogorov_two_asymp:cls, reg q11:*, reg q12:V, reg p6:p(V +), reg size5:*, reg size6:V, reg p7:p(V +), reg lower_tail9:*, reg lower_tail10:V, reg p8:p(V +), reg r26:V, reg pkolmogorov_one_asymp:cls, reg q13:*, reg q14:V, reg p9:p(V +), reg size7:*, reg size8:V, reg p10:p(V +), reg lower_tail11:*, reg lower_tail12:V, reg p11:p(V +), reg r30:V |
    mkenv;
    st q = q;
    st size = size;
    two_sided_isMissing = missing.0(two_sided);
    if two_sided_isMissing then L0(TRUE) else L0(two_sided);
  L0(two_sided_orDefault):
    st `two.sided` = two_sided_orDefault;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L1(TRUE) else L1(exact);
  L1(exact_orDefault):
    st exact = exact_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L2(TRUE) else L2(lower_tail);
  L2(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L3(r1):
    c = `as.logical`(r1);
    if c then L18() else L4();
  L14():
    q1 = ld q;
    check L16() else D0();
  L15():
    r = dyn base(<sym q>);
    goto L3(r);
  D0():
    deopt 2 [q1];
  L4():
    q3 = ld q;
    check L21() else D2();
  L16():
    q2 = force? q1;
    checkMissing(q2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(q2);
    check L17() else D1();
  L18():
    popenv;
    return NA_REAL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 11 [q3];
  L17():
    goto L3(r2);
  L21():
    q4 = force? q3;
    checkMissing(q4);
    r5 = `<=`(q4, 0.0);
    c1 = `as.logical`(r5);
    if c1 then L22() else L6();
  L6():
    q5 = ld q;
    check L26() else D4();
  L22():
    lower_tail1 = ld `lower.tail`;
    check L23() else D3();
  D3():
    deopt 16 [1.0, lower_tail1];
  D4():
    deopt 22 [q5];
  L23():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    r6 = `-`(1.0, lower_tail2);
    popenv;
    return r6;
  L26():
    q6 = force? q5;
    checkMissing(q6);
    r9 = `>`(q6, 1.0);
    c2 = `as.logical`(r9);
    if c2 then L27() else L8();
  L8():
    exact1 = ld exact;
    check L34() else D7();
  L27():
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  D7():
    deopt 35 [exact1];
  L9(r11):
    popenv;
    return r11;
  L28():
    lower_tail3 = ld `lower.tail`;
    check L30() else D5();
  L29():
    r10 = dyn base1(<sym lower.tail>);
    goto L9(r10);
  L34():
    exact2 = force? exact1;
    checkMissing(exact2);
    c3 = `as.logical`(exact2);
    if c3 then L35() else L11();
  D5():
    deopt 28 [lower_tail3];
  L11():
    two_sided3 = ld `two.sided`;
    check L44() else D13();
  L30():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    as_numeric = ldf `as.numeric` in base;
    r12 = dyn as_numeric(lower_tail4);
    check L31() else D6();
  L35():
    two_sided1 = ld `two.sided`;
    check L36() else D8();
  D6():
    deopt 31 [r12];
  D8():
    deopt 37 [two_sided1];
  D13():
    deopt 51 [two_sided3];
  L31():
    goto L9(r12);
  L36():
    two_sided2 = force? two_sided1;
    checkMissing(two_sided2);
    c4 = `as.logical`(two_sided2);
    if c4 then L37() else L12();
  L44():
    two_sided4 = force? two_sided3;
    checkMissing(two_sided4);
    c5 = `as.logical`(two_sided4);
    if c5 then L45() else L13();
  L12():
    pkolmogorov_one_exact = ldf pkolmogorov_one_exact;
    check L41() else D11();
  L13():
    pkolmogorov_one_asymp = ldf pkolmogorov_one_asymp;
    check L49() else D16();
  L37():
    pkolmogorov_two_exact = ldf pkolmogorov_two_exact;
    check L38() else D9();
  L45():
    pkolmogorov_two_asymp = ldf pkolmogorov_two_asymp;
    check L46() else D14();
  D9():
    deopt 40 [];
  D11():
    deopt 46 [];
  D14():
    deopt 54 [];
  D16():
    deopt 60 [];
  L38():
    p = prom<V +>{
      q7 = ld q;
      q8 = force? q7;
      checkMissing(q8);
      return q8;
    };
    p1 = prom<V +>{
      size1 = ld size;
      size2 = force? size1;
      checkMissing(size2);
      return size2;
    };
    p2 = prom<V +>{
      lower_tail5 = ld `lower.tail`;
      lower_tail6 = force? lower_tail5;
      checkMissing(lower_tail6);
      return lower_tail6;
    };
    r18 = dyn pkolmogorov_two_exact(p, p1, p2);
    check L39() else D10();
  L41():
    p3 = prom<V +>{
      q9 = ld q;
      q10 = force? q9;
      checkMissing(q10);
      return q10;
    };
    p4 = prom<V +>{
      size3 = ld size;
      size4 = force? size3;
      checkMissing(size4);
      return size4;
    };
    p5 = prom<V +>{
      lower_tail7 = ld `lower.tail`;
      lower_tail8 = force? lower_tail7;
      checkMissing(lower_tail8);
      return lower_tail8;
    };
    r22 = dyn pkolmogorov_one_exact(p3, p4, p5);
    check L42() else D12();
  L46():
    p6 = prom<V +>{
      q11 = ld q;
      q12 = force? q11;
      checkMissing(q12);
      return q12;
    };
    p7 = prom<V +>{
      size5 = ld size;
      size6 = force? size5;
      checkMissing(size6);
      return size6;
    };
    p8 = prom<V +>{
      lower_tail9 = ld `lower.tail`;
      lower_tail10 = force? lower_tail9;
      checkMissing(lower_tail10);
      return lower_tail10;
    };
    r26 = dyn pkolmogorov_two_asymp(p6, p7, p8);
    check L47() else D15();
  L49():
    p9 = prom<V +>{
      q13 = ld q;
      q14 = force? q13;
      checkMissing(q14);
      return q14;
    };
    p10 = prom<V +>{
      size7 = ld size;
      size8 = force? size7;
      checkMissing(size8);
      return size8;
    };
    p11 = prom<V +>{
      lower_tail11 = ld `lower.tail`;
      lower_tail12 = force? lower_tail11;
      checkMissing(lower_tail12);
      return lower_tail12;
    };
    r30 = dyn pkolmogorov_one_asymp(p9, p10, p11);
    check L50() else D17();
  D10():
    deopt 44 [r18];
  D12():
    deopt 50 [r22];
  D15():
    deopt 58 [r26];
  D17():
    deopt 64 [r30];
  L39():
    popenv;
    return r18;
  L42():
    popenv;
    return r22;
  L47():
    popenv;
    return r26;
  L50():
    popenv;
    return r30;
  }
}