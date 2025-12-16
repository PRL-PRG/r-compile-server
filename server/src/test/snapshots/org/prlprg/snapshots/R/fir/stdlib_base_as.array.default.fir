fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.array.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_array:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg names:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x7:*, reg x8:V, reg length:cls, reg r10:V, reg l:*, reg dim__:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg n:*, reg n1:V, reg length1:cls, reg r14:V, reg c1:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg n2:*, reg n3:V, reg list:cls, reg r17:V, reg l1:*, reg dimnames__:cls, reg r18:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.array`;
    base = ldf `is.array` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c = `as.logical`(r1);
    if c then L13() else L1();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    is_array = ldf `is.array` in base;
    r2 = dyn is_array(x2);
    check L12() else D1();
  L13():
    x3 = ld x;
    check L14() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [x3];
  L3(r6):
    st n = r6;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L12():
    goto L0(r2);
  L14():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L17():
    x5 = ld x;
    check L19() else D3();
  L18():
    r5 = dyn base1(<sym x>);
    goto L3(r5);
  D3():
    deopt 13 [x5];
  L4(r9):
    l = ld x;
    dim__ = ldf `dim<-`;
    check L25() else D7();
  L19():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r7 = dyn names(x6);
    check L20() else D4();
  L21():
    x7 = ld x;
    check L23() else D5();
  L22():
    r8 = dyn base2(<sym x>);
    goto L4(r8);
  D4():
    deopt 16 [r7];
  D5():
    deopt 20 [x7];
  D7():
    deopt 25 [r9, l, r9];
  L20():
    goto L3(r7);
  L23():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r10 = dyn length(x8);
    check L24() else D6();
  L25():
    r11 = dyn dim__(l, NULL, r9);
    check L26() else D8();
  D6():
    deopt 23 [r10];
  D8():
    deopt 27 [r9, r11];
  L24():
    goto L4(r10);
  L26():
    st x = r11;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L5(r13):
    c1 = `as.logical`(r13);
    if c1 then L31() else L6();
  L27():
    n = ld n;
    check L29() else D9();
  L28():
    r12 = dyn base3(<sym n>);
    goto L5(r12);
  D9():
    deopt 31 [n];
  L6():
    goto L8();
  L8():
    x9 = ld x;
    check L39() else D15();
  L29():
    n1 = force? n;
    checkMissing(n1);
    length1 = ldf length in base;
    r14 = dyn length1(n1);
    check L30() else D10();
  L31():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  D10():
    deopt 34 [r14];
  D15():
    deopt 48 [x9];
  L7(r16):
    l1 = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L36() else D13();
  L30():
    goto L5(r14);
  L32():
    n2 = ld n;
    check L34() else D11();
  L33():
    r15 = dyn base4(<sym n>);
    goto L7(r15);
  L39():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  D11():
    deopt 37 [n2];
  D13():
    deopt 42 [r16, l1, r16];
  L34():
    n3 = force? n2;
    checkMissing(n3);
    list = ldf list in base;
    r17 = dyn list(n3);
    check L35() else D12();
  L36():
    r18 = dyn dimnames__(l1, NULL, r16);
    check L37() else D14();
  D12():
    deopt 40 [r17];
  D14():
    deopt 44 [r16, r18];
  L35():
    goto L7(r17);
  L37():
    st x = r18;
    goto L8();
  }
}