fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3424349062;
    st doi_db_from_package_citation = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3424349062(dir, meta, installed) {
  (reg dir:*, reg meta:*, reg installed:*) -+> V { var dir:*, var meta:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg character:cls, reg r:V, reg installed1:*, reg installed2:V, reg c:L, reg r1:V, reg file_path:cls, reg r2:V, reg file_path1:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg path:*, reg path1:V, reg p1:p(V +), reg r5:V, reg file_exists:cls, reg cfile:*, reg cfile1:V, reg p2:p(V +), reg r7:V, reg c1:L, reg _read_citation_quietly:cls, reg cfile2:*, reg cfile3:V, reg p3:p(V +), reg meta1:*, reg meta2:V, reg p4:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg cinfo:*, reg cinfo1:V, reg inherits:cls, reg r13:V, reg r14:V, reg c2:L, reg trimws:cls, reg unique:cls, reg unlist:cls, reg cinfo2:*, reg cinfo3:V, reg c3:L, reg cinfo5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg r22:V, reg doi_db:cls, reg dois:*, reg dois1:V, reg p8:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg path2:*, reg path3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg dois2:*, reg dois3:V, reg length:cls, reg r29:V, reg rep_int:cls, reg r30:V, reg p9:p(V +), reg r32:V |
    mkenv;
    st dir = dir;
    st meta = meta;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    character = ldf character;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r = dyn character();
    check L9() else D1();
  D1():
    deopt 2 [r];
  L9():
    st dois = r;
    installed1 = ld installed;
    check L10() else D2();
  D2():
    deopt 4 [installed1];
  L10():
    installed2 = force? installed1;
    checkMissing(installed2);
    c = `as.logical`(installed2);
    if c then L11() else L1();
  L1():
    file_path = ldf `file.path`;
    check L13() else D3();
  L2(r1):
    st path = r1;
    file_path1 = ldf `file.path`;
    check L15() else D5();
  L11():
    goto L2("CITATION");
  D3():
    deopt 9 [];
  D5():
    deopt 15 [];
  L13():
    r2 = dyn file_path("inst", "CITATION");
    check L14() else D4();
  L15():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    r5 = dyn file_path1(p, p1);
    check L16() else D6();
  D4():
    deopt 12 [r2];
  D6():
    deopt 18 [r5];
  L14():
    goto L2(r2);
  L16():
    st cfile = r5;
    file_exists = ldf `file.exists`;
    check L17() else D7();
  D7():
    deopt 21 [];
  L17():
    p2 = prom<V +>{
      cfile = ld cfile;
      cfile1 = force? cfile;
      checkMissing(cfile1);
      return cfile1;
    };
    r7 = dyn file_exists(p2);
    check L18() else D8();
  D8():
    deopt 23 [r7];
  L18():
    c1 = `as.logical`(r7);
    if c1 then L19() else L3();
  L3():
    goto L7();
  L7():
    doi_db = ldf doi_db;
    check L31() else D15();
  L19():
    _read_citation_quietly = ldf `.read_citation_quietly`;
    check L20() else D9();
  D9():
    deopt 25 [];
  D15():
    deopt 49 [];
  L20():
    p3 = prom<V +>{
      cfile2 = ld cfile;
      cfile3 = force? cfile2;
      checkMissing(cfile3);
      return cfile3;
    };
    p4 = prom<V +>{
      meta1 = ld meta;
      meta2 = force? meta1;
      checkMissing(meta2);
      return meta2;
    };
    r10 = dyn _read_citation_quietly(p3, p4);
    check L21() else D10();
  L31():
    p8 = prom<V +>{
      dois = ld dois;
      dois1 = force? dois;
      checkMissing(dois1);
      return dois1;
    };
    p9 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r26):
      return r26;
    L2():
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r25 = dyn base1(<sym path>, <lang length(dois)>);
      goto L0(r25);
    L1(r28):
      rep_int = ldf `rep.int` in base;
      r30 = dyn rep_int(path3, r28);
      goto L0(r30);
    L4():
      dois2 = ld dois;
      dois3 = force? dois2;
      checkMissing(dois3);
      length = ldf length in base;
      r29 = dyn length(dois3);
      goto L1(r29);
    L5():
      r27 = dyn base2(<sym dois>);
      goto L1(r27);
    };
    r32 = dyn doi_db(p8, p9);
    check L32() else D16();
  D10():
    deopt 28 [r10];
  D16():
    deopt 52 [r32];
  L21():
    st cinfo = r10;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L32():
    popenv;
    return r32;
  L4(r12):
    r14 = `!`(r12);
    c2 = `as.logical`(r14);
    if c2 then L26() else L5();
  L22():
    cinfo = ld cinfo;
    check L24() else D11();
  L23():
    r11 = dyn base(<sym cinfo>, "error");
    goto L4(r11);
  D11():
    deopt 32 [cinfo];
  L5():
    goto L6(NULL);
  L6(r22):
    goto L7();
  L24():
    cinfo1 = force? cinfo;
    checkMissing(cinfo1);
    inherits = ldf inherits in base;
    r13 = dyn inherits(cinfo1, "error", FALSE);
    check L25() else D12();
  L26():
    trimws = ldf trimws;
    check L27() else D13();
  D12():
    deopt 37 [r13];
  D13():
    deopt 40 [];
  L25():
    goto L4(r13);
  L27():
    p7 = prom<V +>{
      unique = ldf unique;
      p6 = prom<V +>{
        unlist = ldf unlist;
        p5 = prom<V +>{
          cinfo2 = ld cinfo;
          cinfo3 = force? cinfo2;
          checkMissing(cinfo3);
          c3 = `is.object`(cinfo3);
          if c3 then L1() else L2(cinfo3);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", cinfo3);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(cinfo5):
          r15 = `$`(cinfo5, <sym doi>);
          goto L0(r15);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r17 = dyn unlist[, `use.names`](p5, FALSE);
        return r17;
      };
      r19 = dyn unique(p6);
      return r19;
    };
    r21 = dyn trimws(p7);
    check L28() else D14();
  D14():
    deopt 42 [r21];
  L28():
    st dois = r21;
    goto L6(r21);
  }
}