fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2763714893;
    st `.parse_CITATION_file_in_package` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2763714893(cfile, installed) {
  (reg cfile:*, reg installed:*) -+> V { var cfile:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg file_path_as_absolute:cls, reg cfile1:*, reg cfile2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg installed1:*, reg installed2:V, reg c:L, reg dirname:cls, reg cfile3:*, reg cfile4:V, reg p1:p(V +), reg r3:V, reg dirname1:cls, reg dirname2:cls, reg cfile5:*, reg cfile6:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg _read_description:cls, reg dfile:*, reg dfile1:V, reg p5:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg meta:*, reg meta1:V, reg c1:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg is_na:cls, reg r15:V, reg c2:L, reg _parse_CITATION_file:cls, reg cfile7:*, reg cfile8:V, reg p6:p(V +), reg encoding:*, reg encoding1:V, reg p7:p(V +), reg r19:V |
    mkenv;
    st cfile = cfile;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      cfile1 = ld cfile;
      cfile2 = force? cfile1;
      checkMissing(cfile2);
      return cfile2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    st cfile = r1;
    file_path = ldf `file.path`;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    p4 = prom<V +>{
      installed1 = ld installed;
      installed2 = force? installed1;
      checkMissing(installed2);
      c = `as.logical`(installed2);
      if c then L1() else L0();
    L0():
      dirname1 = ldf dirname;
      p3 = prom<V +>{
        dirname2 = ldf dirname;
        p2 = prom<V +>{
          cfile5 = ld cfile;
          cfile6 = force? cfile5;
          checkMissing(cfile6);
          return cfile6;
        };
        r5 = dyn dirname2(p2);
        return r5;
      };
      r7 = dyn dirname1(p3);
      return r7;
    L1():
      dirname = ldf dirname;
      p1 = prom<V +>{
        cfile3 = ld cfile;
        cfile4 = force? cfile3;
        checkMissing(cfile4);
        return cfile4;
      };
      r3 = dyn dirname(p1);
      return r3;
    };
    r9 = dyn file_path(p4, "DESCRIPTION");
    check L8() else D3();
  D3():
    deopt 9 [r9];
  L8():
    st dfile = r9;
    _read_description = ldf `.read_description`;
    check L9() else D4();
  D4():
    deopt 12 [];
  L9():
    p5 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r11 = dyn _read_description(p5);
    check L10() else D5();
  D5():
    deopt 14 [r11];
  L10():
    st meta = r11;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r13):
    c2 = `as.logical`(r13);
    if c2 then L18() else L3();
  L11():
    meta = ld meta;
    check L13() else D6();
  L12():
    r12 = dyn base(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L1(r12);
  D6():
    deopt 18 [meta];
  L3():
    goto L4();
  L4():
    _parse_CITATION_file = ldf `.parse_CITATION_file`;
    check L20() else D8();
  L13():
    meta1 = force? meta;
    checkMissing(meta1);
    c1 = `is.object`(meta1);
    if c1 then L14() else L15(meta1);
  L18():
    st encoding = NULL;
    goto L4();
  D8():
    deopt 32 [];
  L2(dx1):
    st encoding = dx1;
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(dx1);
    check L17() else D7();
  L14():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(meta3):
    __ = ldf `[` in base;
    r14 = dyn __(meta3, "Encoding");
    goto L2(r14);
  L20():
    p6 = prom<V +>{
      cfile7 = ld cfile;
      cfile8 = force? cfile7;
      checkMissing(cfile8);
      return cfile8;
    };
    p7 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r19 = dyn _parse_CITATION_file(p6, p7);
    check L21() else D9();
  D7():
    deopt 25 [r15];
  D9():
    deopt 35 [r19];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    goto L1(r15);
  L21():
    popenv;
    return r19;
  }
}