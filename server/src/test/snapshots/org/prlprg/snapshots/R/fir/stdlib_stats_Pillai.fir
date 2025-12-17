fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2186619426;
    st Pillai = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2186619426(eig, q, `df.res`) {
  (reg eig:*, reg q:*, reg df_res:*) -+> V { var eig:*, var q:*, var `df.res`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg eig1:*, reg eig2:V, reg eig3:*, reg eig4:V, reg r2:V, reg r3:V, reg sum:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg eig5:*, reg eig6:V, reg length:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg p:*, reg p1:V, reg q1:*, reg q2:V, reg min:cls, reg r10:V, reg df_res1:*, reg df_res2:V, reg p2:*, reg p3:V, reg r11:V, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:R, reg r18:V, reg p4:*, reg p5:V, reg q3:*, reg q4:V, reg r19:V, reg abs:cls, reg r20:V, reg r21:V, reg r22:V, reg m:*, reg m1:V, reg r23:V, reg s:*, reg s1:V, reg r24:V, reg r25:V, reg n:*, reg n1:V, reg r26:V, reg s2:*, reg s3:V, reg r27:V, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg test:*, reg test1:V, reg tmp2:*, reg tmp3:V, reg tmp4:*, reg tmp5:V, reg r31:V, reg test2:*, reg test3:V, reg r32:V, reg s4:*, reg s5:V, reg test4:*, reg test5:V, reg r33:V, reg r34:V, reg s6:*, reg s7:V, reg tmp6:*, reg tmp7:V, reg r35:V, reg s8:*, reg s9:V, reg tmp8:*, reg tmp9:V, reg r36:V, reg c:cls, reg r37:V |
    mkenv;
    st eig = eig;
    st q = q;
    st `df.res` = df_res;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st test = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L5():
    eig1 = ld eig;
    check L7() else D0();
  L6():
    r = dyn base(<lang `/`(eig, `(`(`+`(1.0, eig)))>);
    goto L0(r);
  D0():
    deopt 2 [eig1];
  L1(r6):
    st p = r6;
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L7():
    eig2 = force? eig1;
    checkMissing(eig2);
    eig3 = ld eig;
    check L8() else D1();
  L10():
    eig5 = ld eig;
    check L12() else D3();
  L11():
    r5 = dyn base1(<sym eig>);
    goto L1(r5);
  D1():
    deopt 4 [eig2, 1.0, eig3];
  D3():
    deopt 13 [eig5];
  L2(r9):
    st s = r9;
    df_res1 = ld `df.res`;
    check L19() else D8();
  L8():
    eig4 = force? eig3;
    checkMissing(eig4);
    r2 = `+`(1.0, eig4);
    r3 = `/`(eig2, r2);
    sum = ldf sum in base;
    r4 = dyn sum(r3);
    check L9() else D2();
  L12():
    eig6 = force? eig5;
    checkMissing(eig6);
    length = ldf length in base;
    r7 = dyn length(eig6);
    check L13() else D4();
  L14():
    p = ld p;
    check L16() else D5();
  L15():
    r8 = dyn base2(<sym p>, <sym q>);
    goto L2(r8);
  D2():
    deopt 9 [r4];
  D4():
    deopt 16 [r7];
  D5():
    deopt 20 [p];
  D8():
    deopt 28 [0.5, df_res1];
  L9():
    goto L0(r4);
  L13():
    goto L1(r7);
  L16():
    p1 = force? p;
    checkMissing(p1);
    q1 = ld q;
    check L17() else D6();
  L19():
    df_res2 = force? df_res1;
    checkMissing(df_res2);
    p2 = ld p;
    check L20() else D9();
  D6():
    deopt 22 [q1];
  D9():
    deopt 29 [0.5, df_res2, p2];
  L17():
    q2 = force? q1;
    checkMissing(q2);
    min = ldf min in base;
    r10 = dyn min(p1, q2);
    check L18() else D7();
  L20():
    p3 = force? p2;
    checkMissing(p3);
    r11 = `-`(df_res2, p3);
    r12 = `-`(r11, 1.0);
    r13 = `*`(0.5, r12);
    st n = r13;
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  D7():
    deopt 25 [r10];
  L3(r17, r18):
    r21 = `-`(r18, 1.0);
    r22 = `*`(r17, r21);
    st m = r22;
    m = ld m;
    check L26() else D13();
  L18():
    goto L2(r10);
  L21():
    p4 = ld p;
    check L23() else D10();
  L22():
    r16 = dyn base3(<lang `-`(p, q)>);
    goto L3(0.5, r16);
  D10():
    deopt 39 [0.5, p4];
  D13():
    deopt 50 [2.0, m];
  L23():
    p5 = force? p4;
    checkMissing(p5);
    q3 = ld q;
    check L24() else D11();
  L26():
    m1 = force? m;
    checkMissing(m1);
    r23 = `*`(2.0, m1);
    s = ld s;
    check L27() else D14();
  D11():
    deopt 40 [0.5, p5, q3];
  D14():
    deopt 52 [r23, s];
  L24():
    q4 = force? q3;
    checkMissing(q4);
    r19 = `-`(p5, q4);
    abs = ldf abs in base;
    r20 = dyn abs(r19);
    check L25() else D12();
  L27():
    s1 = force? s;
    checkMissing(s1);
    r24 = `+`(r23, s1);
    r25 = `+`(r24, 1.0);
    st tmp1 = r25;
    n = ld n;
    check L28() else D15();
  D12():
    deopt 44 [0.5, r20];
  D15():
    deopt 59 [2.0, n];
  L25():
    goto L3(0.5, r20);
  L28():
    n1 = force? n;
    checkMissing(n1);
    r26 = `*`(2.0, n1);
    s2 = ld s;
    check L29() else D16();
  D16():
    deopt 61 [r26, s2];
  L29():
    s3 = force? s2;
    checkMissing(s3);
    r27 = `+`(r26, s3);
    r28 = `+`(r27, 1.0);
    st tmp2 = r28;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L4(r30):
    popenv;
    return r30;
  L30():
    test = ld test;
    check L32() else D17();
  L31():
    r29 = dyn base4(<sym test>, <lang `/`(`(`(`*`(`/`(tmp2, tmp1), test)), `(`(`-`(s, test)))>, <lang `*`(s, tmp1)>, <lang `*`(s, tmp2)>);
    goto L4(r29);
  D17():
    deopt 69 [test];
  L32():
    test1 = force? test;
    checkMissing(test1);
    tmp2 = ld tmp2;
    check L33() else D18();
  D18():
    deopt 71 [tmp2];
  L33():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    tmp4 = ld tmp1;
    check L34() else D19();
  D19():
    deopt 72 [tmp3, tmp4];
  L34():
    tmp5 = force? tmp4;
    checkMissing(tmp5);
    r31 = `/`(tmp3, tmp5);
    test2 = ld test;
    check L35() else D20();
  D20():
    deopt 74 [r31, test2];
  L35():
    test3 = force? test2;
    checkMissing(test3);
    r32 = `*`(r31, test3);
    s4 = ld s;
    check L36() else D21();
  D21():
    deopt 76 [r32, s4];
  L36():
    s5 = force? s4;
    checkMissing(s5);
    test4 = ld test;
    check L37() else D22();
  D22():
    deopt 77 [r32, s5, test4];
  L37():
    test5 = force? test4;
    checkMissing(test5);
    r33 = `-`(s5, test5);
    r34 = `/`(r32, r33);
    s6 = ld s;
    check L38() else D23();
  D23():
    deopt 81 [s6];
  L38():
    s7 = force? s6;
    checkMissing(s7);
    tmp6 = ld tmp1;
    check L39() else D24();
  D24():
    deopt 82 [s7, tmp6];
  L39():
    tmp7 = force? tmp6;
    checkMissing(tmp7);
    r35 = `*`(s7, tmp7);
    s8 = ld s;
    check L40() else D25();
  D25():
    deopt 85 [s8];
  L40():
    s9 = force? s8;
    checkMissing(s9);
    tmp8 = ld tmp2;
    check L41() else D26();
  D26():
    deopt 86 [s9, tmp8];
  L41():
    tmp9 = force? tmp8;
    checkMissing(tmp9);
    r36 = `*`(s9, tmp9);
    c = ldf c in base;
    r37 = dyn c(test1, r34, r35, r36);
    check L42() else D27();
  D27():
    deopt 90 [r37];
  L42():
    goto L4(r37);
  }
}