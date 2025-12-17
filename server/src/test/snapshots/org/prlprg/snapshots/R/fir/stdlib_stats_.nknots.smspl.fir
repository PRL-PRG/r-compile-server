fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4266987626;
    st `.nknots.smspl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg n3:*, reg n4:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg log2:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg log3:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg log4:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg log5:cls, reg r14:V, reg n5:*, reg n6:V, reg r15:V, reg c1:L, reg a1:*, reg a2:V, reg a3:*, reg a4:V, reg a5:*, reg a6:V, reg r16:V, reg n7:*, reg n8:V, reg r17:V, reg r18:V, reg r19:V, reg r20:V, reg r21:V, reg r22:V, reg n9:*, reg n10:V, reg r23:V, reg c2:L, reg a7:*, reg a8:V, reg a9:*, reg a10:V, reg a11:*, reg a12:V, reg r24:V, reg n11:*, reg n12:V, reg r25:V, reg r26:V, reg r27:V, reg r28:V, reg r29:V, reg n13:*, reg n14:V, reg r30:V, reg c3:L, reg a13:*, reg a14:V, reg a15:*, reg a16:V, reg a17:*, reg a18:V, reg r31:V, reg n15:*, reg n16:V, reg r32:V, reg r33:V, reg r34:V, reg r35:V, reg r36:V, reg n17:*, reg n18:V, reg r37:V, reg r38:V, reg r39:V, reg trunc:cls, reg r40:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L10() else D0();
  D0():
    deopt 0 [n1];
  L10():
    n2 = force? n1;
    checkMissing(n2);
    r = `<`(n2, 50);
    c = `as.logical`(r);
    if c then L11() else L0();
  L0():
    sym = ldf trunc;
    base = ldf trunc in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L11():
    n3 = ld n;
    check L12() else D1();
  D1():
    deopt 4 [n3];
  L1(r2):
    popenv;
    return r2;
  L12():
    n4 = force? n3;
    checkMissing(n4);
    popenv;
    return n4;
  L14():
    sym1 = ldf log2;
    base1 = ldf log2 in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r1 = dyn base(<lang {
      `<-`(a1, log2(50.0));
      `<-`(a2, log2(100.0));
      `<-`(a3, log2(140.0));
      `<-`(a4, log2(200.0));
      if(`<`(n, 200), `^`(2.0, `(`(`+`(a1, `/`(`*`(`(`(`-`(a2, a1)), `(`(`-`(n, 50.0))), 150.0)))), if(`<`(n, 800), `^`(2.0, `(`(`+`(a2, `/`(`*`(`(`(`-`(a3, a2)), `(`(`-`(n, 200.0))), 600.0)))), if(`<`(n, 3200), `^`(2.0, `(`(`+`(a3, `/`(`*`(`(`(`-`(a4, a3)), `(`(`-`(n, 800.0))), 2400.0)))), `+`(200.0, `^`(`(`(`-`(n, 3200.0)), 0.2)))))
    }>);
    goto L1(r1);
  L2(r4):
    st a1 = r4;
    sym2 = ldf log2;
    base2 = ldf log2 in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L16():
    log2 = ldf log2 in base;
    r5 = dyn log2(50.0);
    check L18() else D2();
  L17():
    r3 = dyn base1(50.0);
    goto L2(r3);
  D2():
    deopt 12 [r5];
  L3(r7):
    st a2 = r7;
    sym3 = ldf log2;
    base3 = ldf log2 in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L18():
    goto L2(r5);
  L19():
    log3 = ldf log2 in base;
    r8 = dyn log3(100.0);
    check L21() else D3();
  L20():
    r6 = dyn base2(100.0);
    goto L3(r6);
  D3():
    deopt 18 [r8];
  L4(r10):
    st a3 = r10;
    sym4 = ldf log2;
    base4 = ldf log2 in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L25() else L26();
  L21():
    goto L3(r8);
  L22():
    log4 = ldf log2 in base;
    r11 = dyn log4(140.0);
    check L24() else D4();
  L23():
    r9 = dyn base3(140.0);
    goto L4(r9);
  D4():
    deopt 24 [r11];
  L5(r13):
    st a4 = r13;
    n5 = ld n;
    check L28() else D6();
  L24():
    goto L4(r11);
  L25():
    log5 = ldf log2 in base;
    r14 = dyn log5(200.0);
    check L27() else D5();
  L26():
    r12 = dyn base4(200.0);
    goto L5(r12);
  D5():
    deopt 30 [r14];
  D6():
    deopt 32 [n5];
  L27():
    goto L5(r14);
  L28():
    n6 = force? n5;
    checkMissing(n6);
    r15 = `<`(n6, 200);
    c1 = `as.logical`(r15);
    if c1 then L29() else L6();
  L6():
    n9 = ld n;
    check L35() else D11();
  L7(r22):
    trunc = ldf trunc in base;
    r40 = dyn trunc(r22);
    check L50() else D22();
  L29():
    a1 = ld a1;
    check L30() else D7();
  D7():
    deopt 37 [2.0, a1];
  D11():
    deopt 50 [n9];
  D22():
    deopt 95 [r40];
  L30():
    a2 = force? a1;
    checkMissing(a2);
    a3 = ld a2;
    check L31() else D8();
  L35():
    n10 = force? n9;
    checkMissing(n10);
    r23 = `<`(n10, 800);
    c2 = `as.logical`(r23);
    if c2 then L36() else L8();
  L50():
    goto L1(r40);
  D8():
    deopt 38 [2.0, a2, a3];
  L8():
    n13 = ld n;
    check L42() else D16();
  L31():
    a4 = force? a3;
    checkMissing(a4);
    a5 = ld a1;
    check L32() else D9();
  L36():
    a7 = ld a2;
    check L37() else D12();
  D9():
    deopt 39 [2.0, a2, a4, a5];
  D12():
    deopt 55 [2.0, a7];
  D16():
    deopt 68 [n13];
  L32():
    a6 = force? a5;
    checkMissing(a6);
    r16 = `-`(a4, a6);
    n7 = ld n;
    check L33() else D10();
  L37():
    a8 = force? a7;
    checkMissing(a8);
    a9 = ld a3;
    check L38() else D13();
  L42():
    n14 = force? n13;
    checkMissing(n14);
    r30 = `<`(n14, 3200);
    c3 = `as.logical`(r30);
    if c3 then L43() else L9();
  D10():
    deopt 41 [2.0, a2, r16, n7];
  D13():
    deopt 56 [2.0, a8, a9];
  L9():
    n17 = ld n;
    check L49() else D21();
  L33():
    n8 = force? n7;
    checkMissing(n8);
    r17 = `-`(n8, 50.0);
    r18 = `*`(r16, r17);
    r19 = `/`(r18, 150.0);
    r20 = `+`(a2, r19);
    r21 = `^`(2.0, r20);
    goto L7(r21);
  L38():
    a10 = force? a9;
    checkMissing(a10);
    a11 = ld a2;
    check L39() else D14();
  L43():
    a13 = ld a3;
    check L44() else D17();
  D14():
    deopt 57 [2.0, a8, a10, a11];
  D17():
    deopt 73 [2.0, a13];
  D21():
    deopt 87 [200.0, n17];
  L39():
    a12 = force? a11;
    checkMissing(a12);
    r24 = `-`(a10, a12);
    n11 = ld n;
    check L40() else D15();
  L44():
    a14 = force? a13;
    checkMissing(a14);
    a15 = ld a4;
    check L45() else D18();
  L49():
    n18 = force? n17;
    checkMissing(n18);
    r37 = `-`(n18, 3200.0);
    r38 = `^`(r37, 0.2);
    r39 = `+`(200.0, r38);
    goto L7(r39);
  D15():
    deopt 59 [2.0, a8, r24, n11];
  D18():
    deopt 74 [2.0, a14, a15];
  L40():
    n12 = force? n11;
    checkMissing(n12);
    r25 = `-`(n12, 200.0);
    r26 = `*`(r24, r25);
    r27 = `/`(r26, 600.0);
    r28 = `+`(a8, r27);
    r29 = `^`(2.0, r28);
    goto L7(r29);
  L45():
    a16 = force? a15;
    checkMissing(a16);
    a17 = ld a3;
    check L46() else D19();
  D19():
    deopt 75 [2.0, a14, a16, a17];
  L46():
    a18 = force? a17;
    checkMissing(a18);
    r31 = `-`(a16, a18);
    n15 = ld n;
    check L47() else D20();
  D20():
    deopt 77 [2.0, a14, r31, n15];
  L47():
    n16 = force? n15;
    checkMissing(n16);
    r32 = `-`(n16, 800.0);
    r33 = `*`(r31, r32);
    r34 = `/`(r33, 2400.0);
    r35 = `+`(a14, r34);
    r36 = `^`(2.0, r35);
    goto L7(r36);
  }
}