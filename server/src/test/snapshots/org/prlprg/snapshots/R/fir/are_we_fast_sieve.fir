fun main() {
  () -+> V { reg r:cls, reg sieve:cls, reg r1:V |
    mkenv;
    r = clos inner4266987626;
    st sieve = r;
    sieve = ldf sieve;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn sieve(100.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg l:*, reg c:L, reg r4:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:R, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:R, reg r17:V, reg n1:*, reg n2:V, reg r18:V, reg r19:V, reg r20:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg primes:*, reg primes1:V, reg c2:L, reg i6:I, reg primes3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg __:cls, reg r21:V, reg c3:L, reg i13:*, reg i14:V, reg i15:*, reg i16:V, reg r22:V, reg i17:I, reg j:*, reg j1:V, reg n3:*, reg n4:V, reg r23:V, reg c4:L, reg l4:*, reg c5:L, reg i21:I, reg r25:L, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i23:I, reg dx5:V, reg j2:*, reg j3:V, reg ___1:cls, reg r28:V, reg j4:*, reg j5:V, reg i24:*, reg i25:V, reg r29:V, reg i26:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg primes4:*, reg primes5:V, reg sum:cls, reg r33:V |
    mkenv;
    st n = n;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st primes = r1;
    l = ld primes;
    c = `is.object`(l);
    if c then L15() else L16(FALSE, l);
  L13():
    rep = ldf rep in base;
    r2 = dyn rep(TRUE, <sym n>);
    goto L0(r2);
  L14():
    r = dyn base(TRUE, <sym n>);
    goto L0(r);
  L1(dx1):
    st primes = dx1;
    sym1 = ldf floor;
    base1 = ldf floor in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L15():
    dr = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(FALSE, dr);
  L16(r4, l2):
    ___ = ldf `[<-` in base;
    r7 = dyn ___(l2, FALSE, 1.0);
    goto L1(r7);
  L2(r11, r12):
    r20 = `:`(r11, r12);
    s = toForSeq(r20);
    l3 = length(s);
    i = 0;
    goto L4(i);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L18():
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L19():
    r10 = dyn base1(<lang sqrt(n)>);
    goto L2(2.0, r10);
  L3(r16, r17):
    r19 = floor(r17);
    goto L2(r16, r19);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l3, i2);
    if c1 then L23() else L11();
  L20():
    n1 = ld n;
    check L22() else D0();
  L21():
    r15 = dyn base2(<sym n>);
    goto L3(2.0, r15);
  D0():
    deopt 14 [2.0, n1];
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    primes = ld primes;
    check L24() else D1();
  L22():
    n2 = force? n1;
    checkMissing(n2);
    r18 = sqrt(n2);
    goto L3(2.0, r18);
  L23():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  D1():
    deopt 19 [i2, primes];
  L12(r32):
    popenv;
    return r32;
  L24():
    primes1 = force? primes;
    checkMissing(primes1);
    c2 = `is.object`(primes1);
    if c2 then L25() else L26(i2, primes1);
  L43():
    primes4 = ld primes;
    check L45() else D10();
  L44():
    r31 = dyn base3(<sym primes>);
    goto L12(r31);
  D10():
    deopt 55 [primes4];
  L5(i8, dx3):
    c3 = `as.logical`(dx3);
    if c3 then L29() else L6();
  L25():
    dr2 = tryDispatchBuiltin.1("[", primes1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(i2, dr2);
  L26(i6, primes3):
    i9 = ld i;
    check L28() else D2();
  L45():
    primes5 = force? primes4;
    checkMissing(primes5);
    sum = ldf sum in base;
    r33 = dyn sum(primes5);
    check L46() else D11();
  D2():
    deopt 21 [i6, primes3, i9];
  D11():
    deopt 58 [r33];
  L6():
    goto L10(i8);
  L10(i26):
    goto L4(i26);
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i2, dx2);
  L28():
    i10 = force? i9;
    __ = ldf `[` in base;
    r21 = dyn __(primes3, i10);
    goto L5(i6, r21);
  L29():
    i13 = ld i;
    check L30() else D3();
  L46():
    goto L12(r33);
  D3():
    deopt 24 [i8, i13];
  L30():
    i14 = force? i13;
    checkMissing(i14);
    i15 = ld i;
    check L31() else D4();
  D4():
    deopt 25 [i8, i14, i15];
  L31():
    i16 = force? i15;
    checkMissing(i16);
    r22 = `*`(i14, i16);
    st j = r22;
    goto L9(i8);
  L9(i17):
    j = ld j;
    check L32() else D5();
  D5():
    deopt 29 [i17, j];
  L32():
    j1 = force? j;
    checkMissing(j1);
    n3 = ld n;
    check L33() else D6();
  D6():
    deopt 30 [i17, j1, n3];
  L33():
    n4 = force? n3;
    checkMissing(n4);
    r23 = `<=`(j1, n4);
    c4 = `as.logical`(r23);
    if c4 then L34() else L7();
  L7():
    goto L10(i17);
  L34():
    l4 = ld primes;
    c5 = `is.object`(l4);
    if c5 then L35() else L36(i17, FALSE, l4);
  L8(i23, dx5):
    st primes = dx5;
    j4 = ld j;
    check L39() else D8();
  L35():
    dr4 = tryDispatchBuiltin.0("[<-", l4, FALSE);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(i17, FALSE, dr4);
  L36(i21, r25, l6):
    j2 = ld j;
    check L38() else D7();
  D7():
    deopt 36 [i21, r25, l6, FALSE, j2];
  D8():
    deopt 40 [i23, j4];
  L37():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i17, dx4);
  L38():
    j3 = force? j2;
    ___1 = ldf `[<-` in base;
    r28 = dyn ___1(l6, FALSE, j3);
    goto L8(i21, r28);
  L39():
    j5 = force? j4;
    checkMissing(j5);
    i24 = ld i;
    check L40() else D9();
  D9():
    deopt 41 [i23, j5, i24];
  L40():
    i25 = force? i24;
    checkMissing(i25);
    r29 = `+`(j5, i25);
    st j = r29;
    goto L9(i23);
  }
}