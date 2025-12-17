fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2186619426;
    st Roy = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2186619426(eig, q, `df.res`) {
  (reg eig:*, reg q:*, reg df_res:*) -+> V { var eig:*, var q:*, var `df.res`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg eig1:*, reg eig2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg eig3:*, reg eig4:V, reg max:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg p:*, reg p1:V, reg q1:*, reg q2:V, reg max1:cls, reg r8:V, reg df_res1:*, reg df_res2:V, reg tmp1:*, reg tmp2:V, reg r9:V, reg q3:*, reg q4:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg test:*, reg test1:V, reg tmp3:*, reg tmp4:V, reg test2:*, reg test3:V, reg r13:V, reg tmp5:*, reg tmp6:V, reg r14:V, reg tmp7:*, reg tmp8:V, reg tmp9:*, reg tmp10:V, reg c:cls, reg r15:V |
    mkenv;
    st eig = eig;
    st q = q;
    st `df.res` = df_res;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st p = r1;
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    eig1 = ld eig;
    check L6() else D0();
  L5():
    r = dyn base(<sym eig>);
    goto L0(r);
  D0():
    deopt 2 [eig1];
  L1(r4):
    st test = r4;
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L6():
    eig2 = force? eig1;
    checkMissing(eig2);
    length = ldf length in base;
    r2 = dyn length(eig2);
    check L7() else D1();
  L8():
    eig3 = ld eig;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym eig>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [eig3];
  L2(r7):
    st tmp1 = r7;
    df_res1 = ld `df.res`;
    check L17() else D7();
  L7():
    goto L0(r2);
  L10():
    eig4 = force? eig3;
    checkMissing(eig4);
    max = ldf max in base;
    r5 = dyn max(eig4);
    check L11() else D3();
  L12():
    p = ld p;
    check L14() else D4();
  L13():
    r6 = dyn base2(<sym p>, <sym q>);
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [p];
  D7():
    deopt 23 [df_res1];
  L11():
    goto L1(r5);
  L14():
    p1 = force? p;
    checkMissing(p1);
    q1 = ld q;
    check L15() else D5();
  L17():
    df_res2 = force? df_res1;
    checkMissing(df_res2);
    tmp1 = ld tmp1;
    check L18() else D8();
  D5():
    deopt 18 [q1];
  D8():
    deopt 24 [df_res2, tmp1];
  L15():
    q2 = force? q1;
    checkMissing(q2);
    max1 = ldf max in base;
    r8 = dyn max1(p1, q2);
    check L16() else D6();
  L18():
    tmp2 = force? tmp1;
    checkMissing(tmp2);
    r9 = `-`(df_res2, tmp2);
    q3 = ld q;
    check L19() else D9();
  D6():
    deopt 21 [r8];
  D9():
    deopt 26 [r9, q3];
  L16():
    goto L2(r8);
  L19():
    q4 = force? q3;
    checkMissing(q4);
    r10 = `+`(r9, q4);
    st tmp2 = r10;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L3(r12):
    popenv;
    return r12;
  L20():
    test = ld test;
    check L22() else D10();
  L21():
    r11 = dyn base3(<sym test>, <lang `/`(`(`(`*`(tmp2, test)), tmp1)>, <sym tmp1>, <sym tmp2>);
    goto L3(r11);
  D10():
    deopt 32 [test];
  L22():
    test1 = force? test;
    checkMissing(test1);
    tmp3 = ld tmp2;
    check L23() else D11();
  D11():
    deopt 34 [tmp3];
  L23():
    tmp4 = force? tmp3;
    checkMissing(tmp4);
    test2 = ld test;
    check L24() else D12();
  D12():
    deopt 35 [tmp4, test2];
  L24():
    test3 = force? test2;
    checkMissing(test3);
    r13 = `*`(tmp4, test3);
    tmp5 = ld tmp1;
    check L25() else D13();
  D13():
    deopt 37 [r13, tmp5];
  L25():
    tmp6 = force? tmp5;
    checkMissing(tmp6);
    r14 = `/`(r13, tmp6);
    tmp7 = ld tmp1;
    check L26() else D14();
  D14():
    deopt 40 [tmp7];
  L26():
    tmp8 = force? tmp7;
    checkMissing(tmp8);
    tmp9 = ld tmp2;
    check L27() else D15();
  D15():
    deopt 42 [tmp9];
  L27():
    tmp10 = force? tmp9;
    checkMissing(tmp10);
    c = ldf c in base;
    r15 = dyn c(test1, r14, tmp8, tmp10);
    check L28() else D16();
  D16():
    deopt 45 [r15];
  L28():
    goto L3(r15);
  }
}