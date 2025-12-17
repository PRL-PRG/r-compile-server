fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4001578419;
    st `.onLoad` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4001578419(libname, pkgname) {
  (reg libname:*, reg pkgname:*) -+> V { var libname:*, var pkgname:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg c1:L, reg l10n_info:cls, reg r2:V, reg c2:L, reg r4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg cp:*, reg cp1:V, reg r6:V, reg c3:L, reg c5:V, reg cp2:*, reg cp3:V, reg r7:V, reg c6:L, reg c7:L, reg c8:V, reg cp4:*, reg cp5:V, reg r8:V, reg c11:L, reg c15:L, reg c16:L, reg c17:V, reg cp6:*, reg cp7:V, reg r9:V, reg c18:L, reg c19:V, reg c23:L, reg c24:V, reg c27:L, reg c28:V, reg c30:L, reg Rd2txt_options:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg iconv:cls, reg r13:V, reg is_na:cls, reg r14:V, reg r15:V, reg c31:L, reg Rd2txt_options1:cls, reg r16:V |
    mkenv;
    st libname = libname;
    st pkgname = pkgname;
    _Platform = ld `.Platform`;
    check L7() else D0();
  D0():
    deopt 0 [_Platform];
  L7():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L9() else L10(_Platform1);
  L8(dx1):
    r1 = `==`(dx1, "windows");
    c1 = `as.logical`(r1);
    if c1 then L12() else L0();
  L9():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L8(r);
  L0():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    l10n_info = ldf l10n_info;
    check L13() else D1();
  D1():
    deopt 6 [];
  L5(r12):
    r15 = `!`(r12);
    c31 = `as.logical`(r15);
    if c31 then L39() else L6();
  L13():
    r2 = dyn l10n_info();
    check L14() else D2();
  L34():
    iconv = ldf iconv;
    check L36() else D9();
  L35():
    r11 = dyn base(<lang iconv("\u2022", "UTF-8", "")>);
    goto L5(r11);
  D2():
    deopt 7 [r2];
  D9():
    deopt 40 [];
  L6():
    invisible.0();
    popenv;
    return NULL;
  L14():
    c2 = `is.object`(r2);
    if c2 then L16() else L17(r2);
  L36():
    r13 = dyn iconv("\u2022", "UTF-8", "");
    check L37() else D10();
  L39():
    Rd2txt_options1 = ldf Rd2txt_options;
    check L40() else D12();
  D10():
    deopt 44 [r13];
  D12():
    deopt 49 [];
  L15(dx3):
    st cp = dx3;
    cp = ld cp;
    check L19() else D3();
  L16():
    dr2 = tryDispatchBuiltin.1("$", r2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(r4):
    r5 = `$`(r4, <sym codepage>);
    goto L15(r5);
  L37():
    is_na = ldf `is.na` in base;
    r14 = dyn is_na(r13);
    check L38() else D11();
  L40():
    r16 = dyn Rd2txt_options1[itemBullet]("\u2022 ");
    check L41() else D13();
  D3():
    deopt 10 [cp];
  D11():
    deopt 46 [r14];
  D13():
    deopt 52 [r16];
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L19():
    cp1 = force? cp;
    checkMissing(cp1);
    r6 = `>`(cp1, 0.0);
    c3 = `as.logical`(r6);
    if c3 then L20() else L1(c3);
  L38():
    goto L5(r14);
  L41():
    popenv;
    return r16;
  L1(c5):
    c30 = `as.logical`(c5);
    if c30 then L29() else L4();
  L20():
    cp2 = ld cp;
    check L21() else D4();
  D4():
    deopt 14 [c3, cp2];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L21():
    cp3 = force? cp2;
    checkMissing(cp3);
    r7 = `==`(cp3, 874);
    c6 = `as.logical`(r7);
    if c6 then L2(c3, c6) else L22();
  L29():
    Rd2txt_options = ldf Rd2txt_options;
    check L30() else D7();
  D7():
    deopt 30 [];
  L2(c7, c8):
    c27 = `as.logical`(c8);
    c28 = `&&`(c7, c27);
    goto L1(c28);
  L22():
    cp4 = ld cp;
    check L23() else D5();
  L30():
    r10 = dyn Rd2txt_options[itemBullet]("\u2022 ");
    check L31() else D8();
  D5():
    deopt 18 [c3, c6, cp4];
  D8():
    deopt 33 [r10];
  L23():
    cp5 = force? cp4;
    checkMissing(cp5);
    r8 = `>=`(cp5, 1250);
    c11 = `as.logical`(r8);
    if c11 then L24() else L3(c3, c6, c11);
  L31():
    popenv;
    return r10;
  L3(c15, c16, c17):
    c23 = `as.logical`(c17);
    c24 = `||`(c16, c23);
    goto L2(c15, c24);
  L24():
    cp6 = ld cp;
    check L25() else D6();
  D6():
    deopt 22 [c3, c6, c11, cp6];
  L25():
    cp7 = force? cp6;
    checkMissing(cp7);
    r9 = `<=`(cp7, 1258);
    c18 = `as.logical`(r9);
    c19 = `&&`(c11, c18);
    goto L3(c3, c6, c19);
  }
}