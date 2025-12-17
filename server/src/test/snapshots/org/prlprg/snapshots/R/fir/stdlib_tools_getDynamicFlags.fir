fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1468096329;
    st getDynamicFlags = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1468096329(block) {
  (reg block:*) -+> V { var block:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg block1:*, reg block2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg flag:*, reg flag1:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg c2:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg flag2:*, reg flag3:V, reg __:cls, reg r10:V, reg r11:V, reg flag4:*, reg flag5:V, reg ___:cls, reg r12:V, reg __1:cls, reg r13:V, reg r14:V, reg flag6:*, reg flag7:V, reg ___1:cls, reg r15:V, reg __2:cls, reg r16:V, reg r17:V, reg flag8:*, reg flag9:V, reg ___2:cls, reg r18:V, reg __3:cls, reg r19:V, reg r20:V, reg flag10:*, reg flag11:V, reg ___3:cls, reg r21:V, reg __4:cls, reg r22:V, reg r23:V, reg c3:cls, reg r24:V |
    mkenv;
    st block = block;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st flag = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    block1 = ld block;
    check L7() else D0();
  L6():
    r = dyn base(<sym block>, "dynamicFlag");
    goto L0(r);
  D0():
    deopt 2 [block1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L12() else L2();
  L7():
    block2 = force? block1;
    checkMissing(block2);
    attr = ldf attr in base;
    r2 = dyn attr(block2, "dynamicFlag");
    check L8() else D1();
  L9():
    flag = ld flag;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym flag>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [flag];
  L2():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L8():
    goto L0(r2);
  L11():
    flag1 = force? flag;
    checkMissing(flag1);
    c = `==`(flag1, NULL);
    goto L1(c);
  L12():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L3(r6):
    popenv;
    return r6;
  L4(r9):
    popenv;
    return r9;
  L13():
    c2 = ldf c in base;
    r7 = dyn c2(FALSE, FALSE, FALSE, FALSE, FALSE);
    check L15() else D3();
  L14():
    r5 = dyn base2[`#ifdef`, `\\Sexpr`, build, install, render](FALSE, FALSE, FALSE, FALSE, FALSE);
    goto L3(r5);
  L17():
    flag2 = ld flag;
    check L19() else D4();
  L18():
    r8 = dyn base3[`#ifdef`, `\\Sexpr`, build, install, render](<lang `>`(`%%`(flag, 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 2)), 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 4)), 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 8)), 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 16)), 2), 0)>);
    goto L4(r8);
  D3():
    deopt 25 [r7];
  D4():
    deopt 29 [flag2];
  L15():
    goto L3(r7);
  L19():
    flag3 = force? flag2;
    checkMissing(flag3);
    __ = ldf `%%` in base;
    r10 = dyn __(flag3, 2);
    check L20() else D5();
  D5():
    deopt 33 [r10];
  L20():
    r11 = `>`(r10, 0);
    flag4 = ld flag;
    check L21() else D6();
  D6():
    deopt 39 [flag4];
  L21():
    flag5 = force? flag4;
    checkMissing(flag5);
    ___ = ldf `%/%` in base;
    r12 = dyn ___(flag5, 2);
    check L22() else D7();
  D7():
    deopt 43 [r12];
  L22():
    __1 = ldf `%%` in base;
    r13 = dyn __1(r12, 2);
    check L23() else D8();
  D8():
    deopt 46 [r13];
  L23():
    r14 = `>`(r13, 0);
    flag6 = ld flag;
    check L24() else D9();
  D9():
    deopt 52 [flag6];
  L24():
    flag7 = force? flag6;
    checkMissing(flag7);
    ___1 = ldf `%/%` in base;
    r15 = dyn ___1(flag7, 4);
    check L25() else D10();
  D10():
    deopt 56 [r15];
  L25():
    __2 = ldf `%%` in base;
    r16 = dyn __2(r15, 2);
    check L26() else D11();
  D11():
    deopt 59 [r16];
  L26():
    r17 = `>`(r16, 0);
    flag8 = ld flag;
    check L27() else D12();
  D12():
    deopt 65 [flag8];
  L27():
    flag9 = force? flag8;
    checkMissing(flag9);
    ___2 = ldf `%/%` in base;
    r18 = dyn ___2(flag9, 8);
    check L28() else D13();
  D13():
    deopt 69 [r18];
  L28():
    __3 = ldf `%%` in base;
    r19 = dyn __3(r18, 2);
    check L29() else D14();
  D14():
    deopt 72 [r19];
  L29():
    r20 = `>`(r19, 0);
    flag10 = ld flag;
    check L30() else D15();
  D15():
    deopt 78 [flag10];
  L30():
    flag11 = force? flag10;
    checkMissing(flag11);
    ___3 = ldf `%/%` in base;
    r21 = dyn ___3(flag11, 16);
    check L31() else D16();
  D16():
    deopt 82 [r21];
  L31():
    __4 = ldf `%%` in base;
    r22 = dyn __4(r21, 2);
    check L32() else D17();
  D17():
    deopt 85 [r22];
  L32():
    r23 = `>`(r22, 0);
    c3 = ldf c in base;
    r24 = dyn c3(r11, r14, r17, r20, r23);
    check L33() else D18();
  D18():
    deopt 90 [r24];
  L33():
    goto L4(r24);
  }
}