fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3503827405;
    st pkolmogorov_one_exact = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3503827405(q, n, `lower.tail`) {
  (reg q:*, reg n:*, reg lower_tail:*) -+> V { var q:*, var n:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg n1:*, reg n2:V, reg q1:*, reg q2:V, reg r4:V, reg r5:V, reg r6:V, reg seq_int:cls, reg r7:V, reg q3:*, reg q4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg q7:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg q10:V, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg q13:V, reg r13:V, reg n3:*, reg n4:V, reg j:*, reg j1:V, reg lchoose:cls, reg r14:V, reg n5:*, reg n6:V, reg j2:*, reg j3:V, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg q16:V, reg r21:V, reg r22:V, reg r23:V, reg q17:*, reg q18:V, reg r24:V, reg j4:*, reg j5:V, reg n7:*, reg n8:V, reg r25:V, reg r26:V, reg r27:V, reg r28:V, reg r29:V, reg j6:*, reg j7:V, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg q21:V, reg r36:V, reg r37:V, reg r38:V, reg q22:*, reg q23:V, reg j8:*, reg j9:V, reg n9:*, reg n10:V, reg r39:V, reg r40:V, reg r41:V, reg r42:V, reg r43:V, reg r44:V, reg sum:cls, reg r45:V, reg r46:V, reg lower_tail1:*, reg lower_tail2:V, reg c:L, reg p:*, reg p1:V, reg r47:V, reg p2:*, reg p3:V |
    mkenv;
    st q = q;
    st n = n;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L0(TRUE) else L0(lower_tail);
  L0(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    sym = ldf `seq.int`;
    base = ldf `seq.int` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    st j = r1;
    q3 = ld q;
    check L16() else D3();
  L9():
    sym1 = ldf floor;
    base1 = ldf floor in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L10():
    r = dyn base[from, to](0.0, <lang floor(`*`(n, `(`(`-`(1.0, q))))>);
    goto L1(r);
  D3():
    deopt 16 [q3];
  L2(r3):
    seq_int = ldf `seq.int` in base;
    r7 = dyn seq_int(0.0, r3);
    check L15() else D2();
  L11():
    n1 = ld n;
    check L13() else D0();
  L12():
    r2 = dyn base1(<lang `*`(n, `(`(`-`(1.0, q)))>);
    goto L2(r2);
  L16():
    q4 = force? q3;
    checkMissing(q4);
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  D0():
    deopt 5 [n1];
  D2():
    deopt 14 [r7];
  L3(q7, r9):
    r46 = `*`(q7, r9);
    st p = r46;
    lower_tail1 = ld `lower.tail`;
    check L40() else D17();
  L13():
    n2 = force? n1;
    checkMissing(n2);
    q1 = ld q;
    check L14() else D1();
  L15():
    goto L1(r7);
  L17():
    sym3 = ldf exp;
    base3 = ldf exp in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L18():
    r8 = dyn base2(<lang exp(`+`(`+`(lchoose(n, j), `*`(`(`(`-`(n, j)), log(`-`(`-`(1.0, q), `/`(j, n))))), `*`(`(`(`-`(j, 1.0)), log(`+`(q, `/`(j, n))))))>);
    goto L3(q4, r8);
  D1():
    deopt 7 [n2, 1.0, q1];
  D17():
    deopt 59 [lower_tail1];
  L4(q10, r11):
    sum = ldf sum in base;
    r45 = dyn sum(r11);
    check L39() else D16();
  L14():
    q2 = force? q1;
    checkMissing(q2);
    r4 = `-`(1.0, q2);
    r5 = `*`(n2, r4);
    r6 = floor(r5);
    goto L2(r6);
  L19():
    sym4 = ldf lchoose;
    base4 = ldf lchoose in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L20():
    r10 = dyn base3(<lang `+`(`+`(lchoose(n, j), `*`(`(`(`-`(n, j)), log(`-`(`-`(1.0, q), `/`(j, n))))), `*`(`(`(`-`(j, 1.0)), log(`+`(q, `/`(j, n)))))>);
    goto L4(q4, r10);
  L40():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    c = `as.logical`(lower_tail2);
    if c then L41() else L8();
  D16():
    deopt 56 [q10, r45];
  L5(q13, r13):
    n5 = ld n;
    check L26() else D7();
  L8():
    p2 = ld p;
    check L44() else D19();
  L21():
    n3 = ld n;
    check L23() else D4();
  L22():
    r12 = dyn base4(<sym n>, <sym j>);
    goto L5(q4, r12);
  L39():
    goto L3(q10, r45);
  L41():
    p = ld p;
    check L42() else D18();
  D4():
    deopt 22 [q4, n3];
  D7():
    deopt 27 [q13, r13, n5];
  D18():
    deopt 62 [1.0, p];
  D19():
    deopt 65 [p2];
  L23():
    n4 = force? n3;
    checkMissing(n4);
    j = ld j;
    check L24() else D5();
  L26():
    n6 = force? n5;
    checkMissing(n6);
    j2 = ld j;
    check L27() else D8();
  L42():
    p1 = force? p;
    checkMissing(p1);
    r47 = `-`(1.0, p1);
    popenv;
    return r47;
  L44():
    p3 = force? p2;
    checkMissing(p3);
    popenv;
    return p3;
  D5():
    deopt 24 [q4, j];
  D8():
    deopt 28 [q13, r13, n6, j2];
  L24():
    j1 = force? j;
    checkMissing(j1);
    lchoose = ldf lchoose in base;
    r14 = dyn lchoose(n4, j1);
    check L25() else D6();
  L27():
    j3 = force? j2;
    checkMissing(j3);
    r15 = `-`(n6, j3);
    sym5 = ldf log;
    base5 = ldf log in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  D6():
    deopt 27 [q4, r14];
  L6(q16, r21, r22, r23):
    r28 = `*`(r22, r23);
    r29 = `+`(r21, r28);
    j6 = ld j;
    check L33() else D12();
  L25():
    goto L5(q4, r14);
  L28():
    q17 = ld q;
    check L30() else D9();
  L29():
    r20 = dyn base5(<lang `-`(`-`(1.0, q), `/`(j, n))>);
    goto L6(q13, r13, r15, r20);
  D9():
    deopt 32 [q13, r13, r15, 1.0, q17];
  D12():
    deopt 41 [q16, r29, j6];
  L30():
    q18 = force? q17;
    checkMissing(q18);
    r24 = `-`(1.0, q18);
    j4 = ld j;
    check L31() else D10();
  L33():
    j7 = force? j6;
    checkMissing(j7);
    r30 = `-`(j7, 1.0);
    sym6 = ldf log;
    base6 = ldf log in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L34() else L35();
  D10():
    deopt 34 [q13, r13, r15, r24, j4];
  L7(q21, r36, r37, r38):
    r42 = `*`(r37, r38);
    r43 = `+`(r36, r42);
    r44 = exp(r43);
    goto L4(q21, r44);
  L31():
    j5 = force? j4;
    checkMissing(j5);
    n7 = ld n;
    check L32() else D11();
  L34():
    q22 = ld q;
    check L36() else D13();
  L35():
    r35 = dyn base6(<lang `+`(q, `/`(j, n))>);
    goto L7(q16, r29, r30, r35);
  D11():
    deopt 35 [q13, r13, r15, r24, j5, n7];
  D13():
    deopt 45 [q16, r29, r30, q22];
  L32():
    n8 = force? n7;
    checkMissing(n8);
    r25 = `/`(j5, n8);
    r26 = `-`(r24, r25);
    r27 = log(r26, 2.718281828459045);
    goto L6(q13, r13, r15, r27);
  L36():
    q23 = force? q22;
    checkMissing(q23);
    j8 = ld j;
    check L37() else D14();
  D14():
    deopt 46 [q16, r29, r30, q23, j8];
  L37():
    j9 = force? j8;
    checkMissing(j9);
    n9 = ld n;
    check L38() else D15();
  D15():
    deopt 47 [q16, r29, r30, q23, j9, n9];
  L38():
    n10 = force? n9;
    checkMissing(n10);
    r39 = `/`(j9, n10);
    r40 = `+`(q23, r39);
    r41 = log(r40, 2.718281828459045);
    goto L7(q16, r29, r30, r41);
  }
}