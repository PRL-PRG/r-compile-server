fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2356167976;
    st `.find_cinclude_paths` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2356167976(pkgs, `lib.loc`, file) {
  (reg pkgs:*, reg lib_loc:*, reg file:*) -+> V { var pkgs:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:V, reg r2:V, reg c1:L, reg read_dcf:cls, reg file3:*, reg file4:V, reg p:p(V +), reg r4:V, reg c2:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg tmp:*, reg tmp1:V, reg is_na:cls, reg r10:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg invisible:cls, reg r13:V, reg tmp2:*, reg tmp3:V, reg strsplit:cls, reg pkgs1:*, reg pkgs2:V, reg c4:L, reg pkgs4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg c5:L, reg r20:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r21:V, reg find_package:cls, reg pkgs5:*, reg pkgs6:V, reg p2:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p3:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg paths:*, reg paths1:V, reg length:cls, reg r27:V, reg c6:L, reg cat:cls, reg paste:cls, reg paste1:cls, reg paths2:*, reg paths3:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg invisible1:cls, reg r37:V |
    mkenv;
    st pkgs = pkgs;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L1(NULL) else L1(file);
  L1(file_orDefault):
    st file = file_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L18() else L3();
  L15():
    file1 = ld file;
    check L17() else D0();
  L16():
    r = dyn base(<sym file>);
    goto L2(r);
  D0():
    deopt 1 [file1];
  L3():
    goto L9();
  L9():
    strsplit = ldf strsplit;
    check L36() else D7();
  L17():
    file2 = force? file1;
    checkMissing(file2);
    c = `==`(file2, NULL);
    goto L2(c);
  L18():
    read_dcf = ldf `read.dcf`;
    check L19() else D1();
  D1():
    deopt 6 [];
  D7():
    deopt 34 [];
  L19():
    p = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r4 = dyn read_dcf(p, "LinkingTo");
    check L20() else D2();
  L36():
    p1 = prom<V +>{
      pkgs1 = ld pkgs;
      pkgs2 = force? pkgs1;
      checkMissing(pkgs2);
      c4 = `is.object`(pkgs2);
      if c4 then L1() else L2(pkgs2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", pkgs2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(pkgs4):
      __1 = ldf `[` in base;
      r16 = dyn __1(pkgs4, 1);
      goto L0(r16);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r18 = dyn strsplit(p1, ",[[:blank:]]*");
    check L37() else D8();
  D2():
    deopt 9 [r4];
  D8():
    deopt 37 [r18];
  L20():
    c2 = `is.object`(r4);
    if c2 then L21() else L22(r4);
  L37():
    c5 = `is.object`(r18);
    if c5 then L38() else L39(r18);
  L4(dx1):
    st tmp = dx1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L10(dx5):
    st pkgs = dx5;
    find_package = ldf `find.package`;
    check L41() else D9();
  L21():
    dr = tryDispatchBuiltin.1("[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r6):
    __ = ldf `[` in base;
    r7 = dyn __(r6, 1, 1);
    goto L4(r7);
  L38():
    dr4 = tryDispatchBuiltin.1("[[", r18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(dr4);
  L39(r20):
    __2 = ldf `[[` in base;
    r21 = dyn __2(r20, 1);
    goto L10(r21);
  D9():
    deopt 43 [];
  L5(r9):
    c3 = `as.logical`(r9);
    if c3 then L28() else L6();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L24():
    tmp = ld tmp;
    check L26() else D3();
  L25():
    r8 = dyn base1(<sym tmp>);
    goto L5(r8);
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L41():
    p2 = prom<V +>{
      pkgs5 = ld pkgs;
      pkgs6 = force? pkgs5;
      checkMissing(pkgs6);
      return pkgs6;
    };
    p3 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r24 = dyn find_package[, , quiet](p2, p3, TRUE);
    check L42() else D10();
  D3():
    deopt 17 [tmp];
  D10():
    deopt 48 [r24];
  L6():
    tmp2 = ld tmp;
    check L34() else D6();
  L26():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    is_na = ldf `is.na` in base;
    r10 = dyn is_na(tmp1);
    check L27() else D4();
  L28():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L42():
    st paths = r24;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  D4():
    deopt 20 [r10];
  D6():
    deopt 28 [tmp2];
  L7(r12):
    popenv;
    return r12;
  L11(r26):
    c6 = `as.logical`(r26);
    if c6 then L47() else L12();
  L27():
    goto L5(r10);
  L29():
    invisible = ldf invisible in base;
    r13 = dyn invisible();
    check L31() else D5();
  L30():
    r11 = dyn base2();
    goto L7(r11);
  L34():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    st pkgs = tmp3;
    goto L9();
  L43():
    paths = ld paths;
    check L45() else D11();
  L44():
    r25 = dyn base3(<sym paths>);
    goto L11(r25);
  D5():
    deopt 24 [r13];
  D11():
    deopt 52 [paths];
  L12():
    goto L13();
  L13():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L31():
    goto L7(r13);
  L45():
    paths1 = force? paths;
    checkMissing(paths1);
    length = ldf length in base;
    r27 = dyn length(paths1);
    check L46() else D12();
  L47():
    cat = ldf cat;
    check L48() else D13();
  D12():
    deopt 55 [r27];
  D13():
    deopt 57 [];
  L14(r36):
    popenv;
    return r36;
  L46():
    goto L11(r27);
  L48():
    p6 = prom<V +>{
      paste = ldf paste;
      p5 = prom<V +>{
        paste1 = ldf paste0;
        p4 = prom<V +>{
          paths2 = ld paths;
          paths3 = force? paths2;
          checkMissing(paths3);
          return paths3;
        };
        r29 = dyn paste1("-I\"", p4, "/include\"");
        return r29;
      };
      r31 = dyn paste[, collapse](p5, " ");
      return r31;
    };
    r33 = dyn cat(p6);
    check L49() else D14();
  L51():
    invisible1 = ldf invisible in base;
    r37 = dyn invisible1();
    check L53() else D15();
  L52():
    r35 = dyn base4();
    goto L14(r35);
  D14():
    deopt 59 [r33];
  D15():
    deopt 65 [r37];
  L49():
    goto L13();
  L53():
    goto L14(r37);
  }
}