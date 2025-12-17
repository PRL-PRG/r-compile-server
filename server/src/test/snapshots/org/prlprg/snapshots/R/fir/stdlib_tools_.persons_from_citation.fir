fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2045738975;
    st `.persons_from_citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2045738975(dir, installed) {
  (reg dir:*, reg installed:*) -+> V { var dir:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg _get_package_metadata:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg installed1:*, reg installed2:V, reg p1:p(V +), reg r2:V, reg installed3:*, reg installed4:V, reg c:L, reg r3:V, reg file_path:cls, reg r4:V, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg path:*, reg path1:V, reg p3:p(V +), reg r7:V, reg _read_citation_quietly:cls, reg cfile:*, reg cfile1:V, reg p4:p(V +), reg meta:*, reg meta1:V, reg p5:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg cinfo:*, reg cinfo1:V, reg inherits:cls, reg r13:V, reg r14:V, reg c1:L, reg do_call:cls, reg c2:*, reg c3:V, reg p6:p(V +), reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg cinfo2:*, reg cinfo3:V, reg unclass:cls, reg r18:V, reg p7:p(V +), reg __:*, reg __1:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg aut:*, reg aut1:V, reg inherits1:cls, reg r26:V, reg c4:L, reg aut2:*, reg aut3:V |
    mkenv;
    st dir = dir;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      installed1 = ld installed;
      installed2 = force? installed1;
      checkMissing(installed2);
      return installed2;
    };
    r2 = dyn _get_package_metadata[, installed](p, p1);
    check L10() else D1();
  D1():
    deopt 5 [r2];
  L10():
    st meta = r2;
    installed3 = ld installed;
    check L11() else D2();
  D2():
    deopt 7 [installed3];
  L11():
    installed4 = force? installed3;
    checkMissing(installed4);
    c = `as.logical`(installed4);
    if c then L12() else L1();
  L1():
    file_path = ldf `file.path`;
    check L14() else D3();
  L2(r3):
    st path = r3;
    file_path1 = ldf `file.path`;
    check L16() else D5();
  L12():
    goto L2("CITATION");
  D3():
    deopt 12 [];
  D5():
    deopt 18 [];
  L14():
    r4 = dyn file_path("inst", "CITATION");
    check L15() else D4();
  L16():
    p2 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p3 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    r7 = dyn file_path1(p2, p3);
    check L17() else D6();
  D4():
    deopt 15 [r4];
  D6():
    deopt 21 [r7];
  L15():
    goto L2(r4);
  L17():
    st cfile = r7;
    _read_citation_quietly = ldf `.read_citation_quietly`;
    check L18() else D7();
  D7():
    deopt 24 [];
  L18():
    p4 = prom<V +>{
      cfile = ld cfile;
      cfile1 = force? cfile;
      checkMissing(cfile1);
      return cfile1;
    };
    p5 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r10 = dyn _read_citation_quietly(p4, p5);
    check L19() else D8();
  D8():
    deopt 27 [r10];
  L19():
    st cinfo = r10;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L3(r12):
    r14 = `!`(r12);
    c1 = `as.logical`(r14);
    if c1 then L24() else L4();
  L20():
    cinfo = ld cinfo;
    check L22() else D9();
  L21():
    r11 = dyn base(<sym cinfo>, "error");
    goto L3(r11);
  D9():
    deopt 31 [cinfo];
  L4():
    goto L8();
  L8():
    popenv;
    return NULL;
  L22():
    cinfo1 = force? cinfo;
    checkMissing(cinfo1);
    inherits = ldf inherits in base;
    r13 = dyn inherits(cinfo1, "error", FALSE);
    check L23() else D10();
  L24():
    do_call = ldf `do.call`;
    check L25() else D11();
  D10():
    deopt 36 [r13];
  D11():
    deopt 39 [];
  L23():
    goto L3(r13);
  L25():
    p6 = prom<V +>{
      c2 = ld c;
      c3 = force? c2;
      checkMissing(c3);
      return c3;
    };
    p9 = prom<V +>{
      lapply = ldf lapply;
      p7 = prom<V +>{
        sym1 = ldf unclass;
        base1 = ldf unclass in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        cinfo2 = ld cinfo;
        cinfo3 = force? cinfo2;
        checkMissing(cinfo3);
        unclass = ldf unclass in base;
        r18 = dyn unclass(cinfo3);
        goto L0(r18);
      L2():
        r16 = dyn base1(<sym cinfo>);
        goto L0(r16);
      };
      p8 = prom<V +>{
        __ = ld `[[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      r21 = dyn lapply(p7, p8, "author");
      return r21;
    };
    r23 = dyn do_call(p6, p9);
    check L26() else D12();
  D12():
    deopt 42 [r23];
  L26():
    st aut = r23;
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L5(r25):
    c4 = `as.logical`(r25);
    if c4 then L31() else L6();
  L27():
    aut = ld aut;
    check L29() else D13();
  L28():
    r24 = dyn base2(<sym aut>, "person");
    goto L5(r24);
  D13():
    deopt 46 [aut];
  L6():
    goto L8();
  L29():
    aut1 = force? aut;
    checkMissing(aut1);
    inherits1 = ldf inherits in base;
    r26 = dyn inherits1(aut1, "person", FALSE);
    check L30() else D14();
  L31():
    aut2 = ld aut;
    check L32() else D15();
  D14():
    deopt 51 [r26];
  D15():
    deopt 52 [aut2];
  L30():
    goto L5(r26);
  L32():
    aut3 = force? aut2;
    checkMissing(aut3);
    popenv;
    return aut3;
  }
}