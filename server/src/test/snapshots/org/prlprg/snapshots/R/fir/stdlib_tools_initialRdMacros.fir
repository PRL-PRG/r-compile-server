fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2431954346;
    st initialRdMacros = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2431954346(pkglist, macros) {
  (reg pkglist:*, reg macros:*) -+> V { var pkglist:*, reg pkglist_isMissing:L, reg pkglist_orDefault:*, var macros:*, reg macros_isMissing:L, reg macros_orDefault:*, reg file_path:cls, reg R_home:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg pkglist1:*, reg pkglist2:V, reg length:cls, reg r6:V, reg c:L, reg trimws:cls, reg unlist:cls, reg strsplit:cls, reg pkglist3:*, reg pkglist4:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg others:*, reg others1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg system_file:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg r14:V, reg r15:V, reg c2:L, reg warning:cls, reg gettextf:cls, reg p8:*, reg p9:V, reg p10:p(V +), reg r17:V, reg p11:p(V +), reg r19:V, reg i7:I, reg dir_exists:cls, reg file_path1:cls, reg fp:*, reg fp1:V, reg p12:p(V +), reg r22:V, reg p13:p(V +), reg r24:V, reg c3:L, reg loadPkgRdMacros:cls, reg fp2:*, reg fp3:V, reg p14:p(V +), reg macros1:*, reg macros2:V, reg p15:p(V +), reg r27:V, reg warning1:cls, reg gettextf1:cls, reg p16:*, reg p17:V, reg p18:p(V +), reg r29:V, reg p19:p(V +), reg r31:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r32:V, reg r33:V, reg macros3:*, reg macros4:V, reg c4:L, reg c5:L, reg loadRdMacros:cls, reg macros5:*, reg macros6:V, reg p20:p(V +), reg r35:V, reg macros7:*, reg macros8:V |
    mkenv;
    pkglist_isMissing = missing.0(pkglist);
    if pkglist_isMissing then L0(NULL) else L0(pkglist);
  L0(pkglist_orDefault):
    st pkglist = pkglist_orDefault;
    macros_isMissing = missing.0(macros);
    if macros_isMissing then L1() else L2(macros);
  L1():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r = dyn R_home("share");
        return r;
      };
      r2 = dyn file_path(p, "Rd", "macros", "system.Rd");
      return r2;
    };
    goto L2(p1);
  L2(macros_orDefault):
    st macros = macros_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L3(r5):
    c = `as.logical`(r5);
    if c then L17() else L4();
  L13():
    pkglist1 = ld pkglist;
    check L15() else D0();
  L14():
    r4 = dyn base(<sym pkglist>);
    goto L3(r4);
  D0():
    deopt 2 [pkglist1];
  L4():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L10():
    macros7 = ld macros;
    check L44() else D18();
  L15():
    pkglist2 = force? pkglist1;
    checkMissing(pkglist2);
    length = ldf length in base;
    r6 = dyn length(pkglist2);
    check L16() else D1();
  L17():
    trimws = ldf trimws;
    check L18() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 7 [];
  D18():
    deopt 58 [macros7];
  L11(r33):
    c5 = `as.logical`(r33);
    if c5 then L40() else L12();
  L16():
    goto L3(r6);
  L18():
    p4 = prom<V +>{
      unlist = ldf unlist;
      p3 = prom<V +>{
        strsplit = ldf strsplit;
        p2 = prom<V +>{
          pkglist3 = ld pkglist;
          pkglist4 = force? pkglist3;
          checkMissing(pkglist4);
          return pkglist4;
        };
        r8 = dyn strsplit(p2, ",");
        return r8;
      };
      r10 = dyn unlist(p3);
      return r10;
    };
    r12 = dyn trimws(p4);
    check L19() else D3();
  L37():
    macros3 = ld macros;
    check L39() else D15();
  L38():
    r32 = dyn base1(<sym macros>);
    goto L11(r32);
  L44():
    macros8 = force? macros7;
    checkMissing(macros8);
    popenv;
    return macros8;
  D3():
    deopt 9 [r12];
  D15():
    deopt 47 [macros3];
  L12():
    goto L10();
  L19():
    st others = r12;
    others = ld others;
    check L20() else D4();
  L39():
    macros4 = force? macros3;
    checkMissing(macros4);
    c4 = `is.character`(macros4);
    goto L11(c4);
  L40():
    loadRdMacros = ldf loadRdMacros;
    check L41() else D16();
  D4():
    deopt 11 [others];
  D16():
    deopt 51 [];
  L20():
    others1 = force? others;
    checkMissing(others1);
    s = toForSeq(others1);
    l = length(s);
    i = 0;
    goto L5(i);
  L41():
    p20 = prom<V +>{
      macros5 = ld macros;
      macros6 = force? macros5;
      checkMissing(macros6);
      return macros6;
    };
    r35 = dyn loadRdMacros[file](p20);
    check L42() else D17();
  D17():
    deopt 54 [r35];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L21() else L9();
  L42():
    st macros = r35;
    goto L10();
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    system_file = ldf `system.file`;
    check L22() else D5();
  L21():
    goto L10();
  D5():
    deopt 14 [i2];
  L22():
    p7 = prom<V +>{
      p5 = ld p;
      p6 = force? p5;
      checkMissing(p6);
      return p6;
    };
    r14 = dyn system_file[package](p7);
    check L23() else D6();
  D6():
    deopt 17 [i2, r14];
  L23():
    st fp = r14;
    r15 = `==`(r14, "");
    c2 = `as.logical`(r15);
    if c2 then L24() else L6();
  L6():
    dir_exists = ldf `dir.exists`;
    check L28() else D9();
  L7(i7):
    goto L5(i7);
  L24():
    warning = ldf warning;
    check L25() else D7();
  D7():
    deopt 22 [i2];
  D9():
    deopt 28 [i2];
  L25():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        p8 = ld p;
        p9 = force? p8;
        checkMissing(p9);
        return p9;
      };
      r17 = dyn gettextf("Rd macro package '%s' is not installed.", p10);
      return r17;
    };
    r19 = dyn warning[, `call.`](p11, FALSE);
    check L26() else D8();
  L28():
    p13 = prom<V +>{
      file_path1 = ldf `file.path`;
      p12 = prom<V +>{
        fp = ld fp;
        fp1 = force? fp;
        checkMissing(fp1);
        return fp1;
      };
      r22 = dyn file_path1(p12, "help", "macros");
      return r22;
    };
    r24 = dyn dir_exists(p13);
    check L29() else D10();
  D8():
    deopt 26 [i2, r19];
  D10():
    deopt 30 [i2, r24];
  L26():
    goto L7(i2);
  L29():
    c3 = `as.logical`(r24);
    if c3 then L30() else L8();
  L8():
    warning1 = ldf warning;
    check L34() else D13();
  L30():
    loadPkgRdMacros = ldf loadPkgRdMacros;
    check L31() else D11();
  D11():
    deopt 32 [i2];
  D13():
    deopt 38 [i2];
  L31():
    p14 = prom<V +>{
      fp2 = ld fp;
      fp3 = force? fp2;
      checkMissing(fp3);
      return fp3;
    };
    p15 = prom<V +>{
      macros1 = ld macros;
      macros2 = force? macros1;
      checkMissing(macros2);
      return macros2;
    };
    r27 = dyn loadPkgRdMacros(p14, p15);
    check L32() else D12();
  L34():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p18 = prom<V +>{
        p16 = ld p;
        p17 = force? p16;
        checkMissing(p17);
        return p17;
      };
      r29 = dyn gettextf1("No Rd macros in package '%s'.", p18);
      return r29;
    };
    r31 = dyn warning1[, `call.`](p19, FALSE);
    check L35() else D14();
  D12():
    deopt 35 [i2, r27];
  D14():
    deopt 42 [i2, r31];
  L32():
    st macros = r27;
    goto L7(i2);
  L35():
    goto L7(i2);
  }
}