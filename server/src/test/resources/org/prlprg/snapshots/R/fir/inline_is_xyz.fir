fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x:*, reg x1:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg x2:*, reg x3:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r6:V, reg r7:V, reg x4:*, reg x5:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r8:V, reg r9:V, reg x6:*, reg x7:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r10:V, reg r11:V, reg x8:*, reg x9:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r12:V, reg r13:V, reg x10:*, reg x11:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r14:V, reg r15:V, reg x12:*, reg x13:V, reg c6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r16:V, reg r17:V, reg x14:*, reg x15:V, reg c7:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r18:V, reg r19:V, reg x16:*, reg x17:V, reg c8:L, reg list:cls, reg r20:V |
    mkenv;
    st x = NULL;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    popenv;
    return r1;
  L10():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    r = dyn base(<lang is.character(x)>, <lang is.complex(x)>, <lang is.double(x)>, <lang is.integer(x)>, <lang is.logical(x)>, <lang is.name(x)>, <lang is.null(x)>, <lang is.object(x)>, <lang is.symbol(x)>);
    goto L0(r);
  L1(r3):
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L12():
    x = ld x;
    check L14() else D0();
  L13():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D0():
    deopt 6 [x];
  L2(r5):
    sym3 = ldf `is.double`;
    base3 = ldf `is.double` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  L14():
    x1 = force? x;
    checkMissing(x1);
    c = `is.character`(x1);
    goto L1(c);
  L15():
    x2 = ld x;
    check L17() else D1();
  L16():
    r4 = dyn base2(<sym x>);
    goto L2(r4);
  D1():
    deopt 10 [x2];
  L3(r7):
    sym4 = ldf `is.integer`;
    base4 = ldf `is.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L17():
    x3 = force? x2;
    checkMissing(x3);
    c1 = `is.complex`(x3);
    goto L2(c1);
  L18():
    x4 = ld x;
    check L20() else D2();
  L19():
    r6 = dyn base3(<sym x>);
    goto L3(r6);
  D2():
    deopt 14 [x4];
  L4(r9):
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L24() else L25();
  L20():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.double`(x5);
    goto L3(c2);
  L21():
    x6 = ld x;
    check L23() else D3();
  L22():
    r8 = dyn base4(<sym x>);
    goto L4(r8);
  D3():
    deopt 18 [x6];
  L5(r11):
    sym6 = ldf `is.name`;
    base6 = ldf `is.name` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L27() else L28();
  L23():
    x7 = force? x6;
    checkMissing(x7);
    c3 = `is.integer`(x7);
    goto L4(c3);
  L24():
    x8 = ld x;
    check L26() else D4();
  L25():
    r10 = dyn base5(<sym x>);
    goto L5(r10);
  D4():
    deopt 22 [x8];
  L6(r13):
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L30() else L31();
  L26():
    x9 = force? x8;
    checkMissing(x9);
    c4 = `is.logical`(x9);
    goto L5(c4);
  L27():
    x10 = ld x;
    check L29() else D5();
  L28():
    r12 = dyn base6(<sym x>);
    goto L6(r12);
  D5():
    deopt 26 [x10];
  L7(r15):
    sym8 = ldf `is.object`;
    base8 = ldf `is.object` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L33() else L34();
  L29():
    x11 = force? x10;
    checkMissing(x11);
    c5 = `is.symbol`(x11);
    goto L6(c5);
  L30():
    x12 = ld x;
    check L32() else D6();
  L31():
    r14 = dyn base7(<sym x>);
    goto L7(r14);
  D6():
    deopt 30 [x12];
  L8(r17):
    sym9 = ldf `is.symbol`;
    base9 = ldf `is.symbol` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L36() else L37();
  L32():
    x13 = force? x12;
    checkMissing(x13);
    c6 = `==`(x13, NULL);
    goto L7(c6);
  L33():
    x14 = ld x;
    check L35() else D7();
  L34():
    r16 = dyn base8(<sym x>);
    goto L8(r16);
  D7():
    deopt 34 [x14];
  L9(r19):
    list = ldf list in base;
    r20 = dyn list(r3, r5, r7, r9, r11, r13, r15, r17, r19);
    check L39() else D9();
  L35():
    x15 = force? x14;
    checkMissing(x15);
    c7 = `is.object`(x15);
    goto L8(c7);
  L36():
    x16 = ld x;
    check L38() else D8();
  L37():
    r18 = dyn base9(<sym x>);
    goto L9(r18);
  D8():
    deopt 38 [x16];
  D9():
    deopt 42 [r20];
  L38():
    x17 = force? x16;
    checkMissing(x17);
    c8 = `is.symbol`(x17);
    goto L9(c8);
  L39():
    goto L0(r20);
  }
}