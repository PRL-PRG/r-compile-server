fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner772961504;
    st strptime = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner772961504(x, format, tz) {
  (reg x:*, reg format:*, reg tz:*) -+> V { var x:*, var format:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg x3:*, reg x4:V, reg x5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg x6:*, reg x7:V, reg c2:L, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r6:V, reg r7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r8:V, reg r9:V, reg x8:*, reg x9:V, reg as_character:cls, reg r10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r11:V, reg r12:V, reg x10:*, reg x11:V, reg names:cls, reg r13:V, reg names__:cls, reg r14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r15:V, reg x12:*, reg x13:V, reg storage_mode__:cls, reg r16:V, reg format1:*, reg format2:V, reg tz1:*, reg tz2:V, reg strptime:cls, reg r17:V |
    mkenv;
    st x = x;
    st format = format;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    popenv;
    return r1;
  L10():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    r = dyn base(<lang strptime(if(is.character(x), x, if(is.object(x), `names<-`(as.character(x), names(x)), `storage.mode<-`(x, "character"))), format, tz)>);
    goto L1(r);
  L2(r3):
    c1 = `as.logical`(r3);
    if c1 then L15() else L3();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  D0():
    deopt 3 [x1];
  L3():
    sym2 = ldf `is.object`;
    base2 = ldf `is.object` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L4(x5):
    format1 = ld format;
    check L38() else D10();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L2(c);
  L15():
    x3 = ld x;
    check L16() else D1();
  D1():
    deopt 6 [x3];
  D10():
    deopt 35 [format1];
  L5(r5):
    c3 = `as.logical`(r5);
    if c3 then L21() else L6();
  L16():
    x4 = force? x3;
    checkMissing(x4);
    goto L4(x4);
  L18():
    x6 = ld x;
    check L20() else D2();
  L19():
    r4 = dyn base2(<sym x>);
    goto L5(r4);
  L38():
    format2 = force? format1;
    checkMissing(format2);
    tz1 = ld tz;
    check L39() else D11();
  D2():
    deopt 9 [x6];
  D11():
    deopt 37 [tz1];
  L6():
    sym6 = ldf `storage.mode<-`;
    base6 = ldf `storage.mode<-` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L34() else L35();
  L20():
    x7 = force? x6;
    checkMissing(x7);
    c2 = `is.object`(x7);
    goto L5(c2);
  L21():
    sym3 = ldf `names<-`;
    base3 = ldf `names<-` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L39():
    tz2 = force? tz1;
    checkMissing(tz2);
    strptime = ldf strptime in base;
    r17 = dyn strptime(x5, format2, tz2);
    check L40() else D12();
  D12():
    deopt 40 [r17];
  L7(r7):
    goto L4(r7);
  L22():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L23():
    r6 = dyn base3(<lang as.character(x)>, <lang names(x)>);
    goto L7(r6);
  L34():
    x12 = ld x;
    check L36() else D8();
  L35():
    r15 = dyn base6(<sym x>, "character");
    goto L4(r15);
  L40():
    goto L1(r17);
  D8():
    deopt 30 [x12];
  L8(r9):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  L24():
    x8 = ld x;
    check L26() else D3();
  L25():
    r8 = dyn base4(<sym x>);
    goto L8(r8);
  L36():
    x13 = force? x12;
    checkMissing(x13);
    storage_mode__ = ldf `storage.mode<-` in base;
    r16 = dyn storage_mode__(x13, "character");
    check L37() else D9();
  D3():
    deopt 16 [x8];
  D9():
    deopt 34 [r16];
  L9(r12):
    names__ = ldf `names<-` in base;
    r14 = dyn names__(r9, r12);
    check L32() else D7();
  L26():
    x9 = force? x8;
    checkMissing(x9);
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(x9);
    check L27() else D4();
  L28():
    x10 = ld x;
    check L30() else D5();
  L29():
    r11 = dyn base5(<sym x>);
    goto L9(r11);
  L37():
    goto L4(r16);
  D4():
    deopt 19 [r10];
  D5():
    deopt 22 [x10];
  D7():
    deopt 27 [r14];
  L27():
    goto L8(r10);
  L30():
    x11 = force? x10;
    checkMissing(x11);
    names = ldf names in base;
    r13 = dyn names(x11);
    check L31() else D6();
  L32():
    goto L7(r14);
  D6():
    deopt 25 [r13];
  L31():
    goto L9(r13);
  }
}