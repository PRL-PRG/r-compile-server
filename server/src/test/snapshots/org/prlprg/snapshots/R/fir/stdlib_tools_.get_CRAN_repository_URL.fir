fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_CRAN_repository_URL` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg getOption:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg repos:*, reg repos1:V, reg c:V, reg r3:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c6:L, reg r5:V, reg repos2:*, reg repos3:V, reg c7:L, reg c9:L, reg repos5:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg __:cls, reg r6:V, reg is_na:cls, reg r7:V, reg r8:V, reg c12:L, reg c13:V, reg c15:L, reg c17:V, reg cr:*, reg cr1:V, reg r9:V, reg c18:L, reg c19:V, reg c21:L, reg cr2:*, reg cr3:V, reg ___:cls, reg r12:V, reg r13:cls, reg r14:V, reg c22:L, reg r16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg cr4:*, reg cr5:V, reg is_na1:cls, reg r20:V, reg c23:L, reg c24:V, reg cr6:*, reg cr7:V, reg r21:V, reg c26:L, reg c27:V, reg c29:L, reg cr8:*, reg cr9:V |
    mkenv;
    getOption = ldf getOption;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r = dyn getOption("repos");
    check L13() else D1();
  D1():
    deopt 3 [r];
  L13():
    st repos = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r2):
    r3 = `!`(r2);
    c1 = `as.logical`(r3);
    if c1 then L17() else L1(c1);
  L14():
    repos = ld repos;
    check L16() else D2();
  L15():
    r1 = dyn base(<sym repos>);
    goto L0(r1);
  D2():
    deopt 6 [repos];
  L1(c3):
    c15 = `as.logical`(c3);
    if c15 then L26() else L4(c15);
  L16():
    repos1 = force? repos;
    checkMissing(repos1);
    c = `==`(repos1, NULL);
    goto L0(c);
  L17():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L2(c6, r5):
    r8 = `!`(r5);
    c12 = `as.logical`(r8);
    c13 = `&&`(c6, c12);
    goto L1(c13);
  L4(c17):
    c21 = `as.logical`(c17);
    if c21 then L29() else L5();
  L18():
    repos2 = ld repos;
    check L20() else D3();
  L19():
    r4 = dyn base1(<lang `<-`(cr, `[`(repos, "CRAN"))>);
    goto L2(c1, r4);
  L26():
    cr = ld cr;
    check L27() else D5();
  D3():
    deopt 12 [c1, repos2];
  D5():
    deopt 22 [c15, cr];
  L5():
    ___ = ldf `:::`;
    check L33() else D7();
  L20():
    repos3 = force? repos2;
    checkMissing(repos3);
    c7 = `is.object`(repos3);
    if c7 then L21() else L22(c1, repos3);
  L27():
    cr1 = force? cr;
    checkMissing(cr1);
    r9 = `!=`(cr1, "@CRAN@");
    c18 = `as.logical`(r9);
    c19 = `&&`(c15, c18);
    goto L4(c19);
  L29():
    cr2 = ld cr;
    check L30() else D6();
  D6():
    deopt 27 [cr2];
  D7():
    deopt 33 [];
  L3(c11, dx1):
    st cr = dx1;
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(dx1);
    check L24() else D4();
  L21():
    dr = tryDispatchBuiltin.1("[", repos3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(c1, dr);
  L22(c9, repos5):
    __ = ldf `[` in base;
    r6 = dyn __(repos5, "CRAN");
    goto L3(c9, r6);
  L30():
    cr3 = force? cr2;
    checkMissing(cr3);
    popenv;
    return cr3;
  L33():
    r12 = dyn ___("utils", ".get_repositories");
    check L34() else D8();
  D4():
    deopt 19 [c11, r7];
  D8():
    deopt 36 [r12];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c1, dx);
  L24():
    goto L2(c11, r7);
  L34():
    checkFun.0(r12);
    r13 = r12 as cls;
    r14 = dyn r13();
    check L35() else D9();
  D9():
    deopt 38 [r14];
  L35():
    c22 = `is.object`(r14);
    if c22 then L36() else L37(r14);
  L7(dx3):
    st cr = dx3;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L36():
    dr2 = tryDispatchBuiltin.1("[", r14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(dr2);
  L37(r16):
    __1 = ldf `[` in base;
    r17 = dyn __1(r16, "CRAN", "URL");
    goto L7(r17);
  L8(r19):
    c23 = `as.logical`(r19);
    if c23 then L9(c23) else L43();
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L39():
    cr4 = ld cr;
    check L41() else D10();
  L40():
    r18 = dyn base2(<sym cr>);
    goto L8(r18);
  D10():
    deopt 46 [cr4];
  L9(c24):
    c29 = `as.logical`(c24);
    if c29 then L46() else L10();
  L41():
    cr5 = force? cr4;
    checkMissing(cr5);
    is_na1 = ldf `is.na` in base;
    r20 = dyn is_na1(cr5);
    check L42() else D11();
  L43():
    cr6 = ld cr;
    check L44() else D12();
  D11():
    deopt 49 [r20];
  D12():
    deopt 50 [c23, cr6];
  L10():
    goto L11();
  L11():
    cr8 = ld cr;
    check L48() else D13();
  L42():
    goto L8(r20);
  L44():
    cr7 = force? cr6;
    checkMissing(cr7);
    r21 = `==`(cr7, "@CRAN@");
    c26 = `as.logical`(r21);
    c27 = `||`(c23, c26);
    goto L9(c27);
  L46():
    st cr = "https://CRAN.R-project.org";
    goto L11();
  D13():
    deopt 60 [cr8];
  L48():
    cr9 = force? cr8;
    checkMissing(cr9);
    popenv;
    return cr9;
  }
}