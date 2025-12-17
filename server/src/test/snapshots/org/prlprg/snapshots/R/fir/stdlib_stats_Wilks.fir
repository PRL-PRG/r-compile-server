fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2186619426;
    st Wilks = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2186619426(eig, q, `df.res`) {
  (reg eig:*, reg q:*, reg df_res:*) -+> V { var eig:*, var q:*, var `df.res`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg eig1:*, reg eig2:V, reg r2:V, reg r3:V, reg prod:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg eig3:*, reg eig4:V, reg length:cls, reg r7:V, reg df_res1:*, reg df_res2:V, reg p:*, reg p1:V, reg q1:*, reg q2:V, reg r8:V, reg r9:V, reg r10:V, reg r11:V, reg p2:*, reg p3:V, reg q3:*, reg q4:V, reg r12:V, reg r13:V, reg r14:V, reg p4:*, reg p5:V, reg r15:V, reg q5:*, reg q6:V, reg r16:V, reg r17:V, reg r18:V, reg tmp3:*, reg tmp4:V, reg r19:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg p6:*, reg p7:V, reg q7:*, reg q8:V, reg r22:V, reg r23:V, reg r24:V, reg tmp5:*, reg tmp6:V, reg r25:V, reg r26:V, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg test:*, reg test1:V, reg test2:*, reg test3:V, reg tmp7:*, reg tmp8:V, reg r30:V, reg r31:V, reg r32:V, reg tmp9:*, reg tmp10:V, reg tmp11:*, reg tmp12:V, reg r33:V, reg tmp13:*, reg tmp14:V, reg r34:V, reg r35:V, reg r36:V, reg p8:*, reg p9:V, reg r37:V, reg q9:*, reg q10:V, reg r38:V, reg p10:*, reg p11:V, reg q11:*, reg q12:V, reg r39:V, reg tmp15:*, reg tmp16:V, reg tmp17:*, reg tmp18:V, reg r40:V, reg tmp19:*, reg tmp20:V, reg r41:V, reg r42:V, reg c1:cls, reg r43:V |
    mkenv;
    st eig = eig;
    st q = q;
    st `df.res` = df_res;
    sym = ldf prod;
    base = ldf prod in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st test = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    eig1 = ld eig;
    check L8() else D0();
  L7():
    r = dyn base(<lang `/`(1.0, `(`(`+`(1.0, eig)))>);
    goto L0(r);
  D0():
    deopt 4 [1.0, 1.0, eig1];
  L1(r6):
    st p = r6;
    df_res1 = ld `df.res`;
    check L14() else D4();
  L8():
    eig2 = force? eig1;
    checkMissing(eig2);
    r2 = `+`(1.0, eig2);
    r3 = `/`(1.0, r2);
    prod = ldf prod in base;
    r4 = dyn prod(r3);
    check L9() else D1();
  L10():
    eig3 = ld eig;
    check L12() else D2();
  L11():
    r5 = dyn base1(<sym eig>);
    goto L1(r5);
  D1():
    deopt 9 [r4];
  D2():
    deopt 13 [eig3];
  D4():
    deopt 18 [df_res1];
  L9():
    goto L0(r4);
  L12():
    eig4 = force? eig3;
    checkMissing(eig4);
    length = ldf length in base;
    r7 = dyn length(eig4);
    check L13() else D3();
  L14():
    df_res2 = force? df_res1;
    checkMissing(df_res2);
    p = ld p;
    check L15() else D5();
  D3():
    deopt 16 [r7];
  D5():
    deopt 20 [df_res2, 0.5, p];
  L13():
    goto L1(r7);
  L15():
    p1 = force? p;
    checkMissing(p1);
    q1 = ld q;
    check L16() else D6();
  D6():
    deopt 21 [df_res2, 0.5, p1, q1];
  L16():
    q2 = force? q1;
    checkMissing(q2);
    r8 = `-`(p1, q2);
    r9 = `+`(r8, 1.0);
    r10 = `*`(0.5, r9);
    r11 = `-`(df_res2, r10);
    st tmp1 = r11;
    p2 = ld p;
    check L17() else D7();
  D7():
    deopt 29 [p2];
  L17():
    p3 = force? p2;
    checkMissing(p3);
    q3 = ld q;
    check L18() else D8();
  D8():
    deopt 30 [p3, q3];
  L18():
    q4 = force? q3;
    checkMissing(q4);
    r12 = `*`(p3, q4);
    r13 = `-`(r12, 2.0);
    r14 = `/`(r13, 4.0);
    st tmp2 = r14;
    p4 = ld p;
    check L19() else D9();
  D9():
    deopt 38 [p4];
  L19():
    p5 = force? p4;
    checkMissing(p5);
    r15 = `^`(p5, 2.0);
    q5 = ld q;
    check L20() else D10();
  D10():
    deopt 41 [r15, q5];
  L20():
    q6 = force? q5;
    checkMissing(q6);
    r16 = `^`(q6, 2.0);
    r17 = `+`(r15, r16);
    r18 = `-`(r17, 5.0);
    st tmp3 = r18;
    tmp3 = ld tmp3;
    check L21() else D11();
  D11():
    deopt 49 [tmp3];
  L21():
    tmp4 = force? tmp3;
    checkMissing(tmp4);
    r19 = `>`(tmp4, 0.0);
    c = `as.logical`(r19);
    if c then L22() else L2();
  L2():
    goto L4(1.0);
  L4(r27):
    st tmp3 = r27;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L22():
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L3(r21):
    goto L4(r21);
  L5(r29):
    popenv;
    return r29;
  L23():
    p6 = ld p;
    check L25() else D12();
  L24():
    r20 = dyn base2(<lang `/`(`(`(`-`(`^`(`(`(`*`(p, q)), 2.0), 4.0)), tmp3)>);
    goto L3(r20);
  L29():
    test = ld test;
    check L31() else D15();
  L30():
    r28 = dyn base3(<sym test>, <lang `/`(`/`(`(`(`*`(`(`(`-`(`^`(test, `(`(`/`(`-`(1.0), tmp3))), 1.0)), `(`(`-`(`*`(tmp1, tmp3), `*`(2.0, tmp2))))), p), q)>, <lang `*`(p, q)>, <lang `-`(`*`(tmp1, tmp3), `*`(2.0, tmp2))>);
    goto L5(r28);
  D12():
    deopt 54 [p6];
  D15():
    deopt 70 [test];
  L25():
    p7 = force? p6;
    checkMissing(p7);
    q7 = ld q;
    check L26() else D13();
  L31():
    test1 = force? test;
    checkMissing(test1);
    test2 = ld test;
    check L32() else D16();
  D13():
    deopt 55 [p7, q7];
  D16():
    deopt 72 [test2];
  L26():
    q8 = force? q7;
    checkMissing(q8);
    r22 = `*`(p7, q8);
    r23 = `^`(r22, 2.0);
    r24 = `-`(r23, 4.0);
    tmp5 = ld tmp3;
    check L27() else D14();
  L32():
    test3 = force? test2;
    checkMissing(test3);
    tmp7 = ld tmp3;
    check L33() else D17();
  D14():
    deopt 61 [r24, tmp5];
  D17():
    deopt 74 [test3, -1.0, tmp7];
  L27():
    tmp6 = force? tmp5;
    checkMissing(tmp6);
    r25 = `/`(r24, tmp6);
    r26 = sqrt(r25);
    goto L3(r26);
  L33():
    tmp8 = force? tmp7;
    checkMissing(tmp8);
    r30 = `/`(-1.0, tmp8);
    r31 = `^`(test3, r30);
    r32 = `-`(r31, 1.0);
    tmp9 = ld tmp1;
    check L34() else D18();
  D18():
    deopt 79 [r32, tmp9];
  L34():
    tmp10 = force? tmp9;
    checkMissing(tmp10);
    tmp11 = ld tmp3;
    check L35() else D19();
  D19():
    deopt 80 [r32, tmp10, tmp11];
  L35():
    tmp12 = force? tmp11;
    checkMissing(tmp12);
    r33 = `*`(tmp10, tmp12);
    tmp13 = ld tmp2;
    check L36() else D20();
  D20():
    deopt 83 [r32, r33, 2.0, tmp13];
  L36():
    tmp14 = force? tmp13;
    checkMissing(tmp14);
    r34 = `*`(2.0, tmp14);
    r35 = `-`(r33, r34);
    r36 = `*`(r32, r35);
    p8 = ld p;
    check L37() else D21();
  D21():
    deopt 87 [r36, p8];
  L37():
    p9 = force? p8;
    checkMissing(p9);
    r37 = `/`(r36, p9);
    q9 = ld q;
    check L38() else D22();
  D22():
    deopt 89 [r37, q9];
  L38():
    q10 = force? q9;
    checkMissing(q10);
    r38 = `/`(r37, q10);
    p10 = ld p;
    check L39() else D23();
  D23():
    deopt 92 [p10];
  L39():
    p11 = force? p10;
    checkMissing(p11);
    q11 = ld q;
    check L40() else D24();
  D24():
    deopt 93 [p11, q11];
  L40():
    q12 = force? q11;
    checkMissing(q12);
    r39 = `*`(p11, q12);
    tmp15 = ld tmp1;
    check L41() else D25();
  D25():
    deopt 96 [tmp15];
  L41():
    tmp16 = force? tmp15;
    checkMissing(tmp16);
    tmp17 = ld tmp3;
    check L42() else D26();
  D26():
    deopt 97 [tmp16, tmp17];
  L42():
    tmp18 = force? tmp17;
    checkMissing(tmp18);
    r40 = `*`(tmp16, tmp18);
    tmp19 = ld tmp2;
    check L43() else D27();
  D27():
    deopt 100 [r40, 2.0, tmp19];
  L43():
    tmp20 = force? tmp19;
    checkMissing(tmp20);
    r41 = `*`(2.0, tmp20);
    r42 = `-`(r40, r41);
    c1 = ldf c in base;
    r43 = dyn c1(test1, r38, r39, r42);
    check L44() else D28();
  D28():
    deopt 105 [r43];
  L44():
    goto L5(r43);
  }
}