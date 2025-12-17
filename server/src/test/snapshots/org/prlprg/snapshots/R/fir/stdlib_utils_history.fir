fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3579790039;
    st history = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3579790039(`max.show`, reverse, pattern, `...`) {
  (reg max_show:*, reg reverse:*, reg pattern:*, reg ddd:dots) -+> V { var `max.show`:*, reg max_show_isMissing:L, reg max_show_orDefault:*, var reverse:*, reg reverse_isMissing:L, reg reverse_orDefault:*, var pattern:*, var `...`:dots?, reg tempfile:cls, reg r:V, reg savehistory:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r2:V, reg readLines:cls, reg file3:*, reg file4:V, reg p1:p(V +), reg r4:V, reg unlink:cls, reg file5:*, reg file6:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg r10:V, reg c:L, reg unique:cls, reg grep:cls, reg pattern1:*, reg pattern2:V, reg p3:p(V +), reg rawhist:*, reg rawhist1:V, reg p4:p(V +), reg ddd1:dots?, reg r13:V, reg p5:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg rawhist2:*, reg rawhist3:V, reg length:cls, reg r19:V, reg nlines:*, reg nlines1:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg nlines2:*, reg nlines3:V, reg max_show1:*, reg max_show2:V, reg r22:V, reg max:cls, reg r23:V, reg nlines4:*, reg nlines5:V, reg r24:V, reg reverse1:*, reg reverse2:V, reg c2:L, reg rev:cls, reg inds:*, reg inds1:V, reg p6:p(V +), reg r26:V, reg r27:V, reg integer:cls, reg r29:V, reg tempfile1:cls, reg r30:V, reg writeLines:cls, reg rawhist4:*, reg rawhist5:V, reg c3:L, reg rawhist7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg inds2:*, reg inds3:V, reg __:cls, reg r31:V, reg p7:p(V +), reg file7:*, reg file8:V, reg p8:p(V +), reg r34:V, reg file_show:cls, reg file9:*, reg file10:V, reg p9:p(V +), reg r36:V |
    mkenv;
    max_show_isMissing = missing.0(max_show);
    if max_show_isMissing then L0(25.0) else L0(max_show);
  L0(max_show_orDefault):
    st `max.show` = max_show_orDefault;
    reverse_isMissing = missing.0(reverse);
    if reverse_isMissing then L1(FALSE) else L1(reverse);
  L1(reverse_orDefault):
    st reverse = reverse_orDefault;
    st pattern = pattern;
    st `...` = ddd;
    tempfile = ldf tempfile;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    r = dyn tempfile("Rrawhist");
    check L12() else D1();
  D1():
    deopt 3 [r];
  L12():
    st file1 = r;
    savehistory = ldf savehistory;
    check L13() else D2();
  D2():
    deopt 6 [];
  L13():
    p = prom<V +>{
      file1 = ld file1;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r2 = dyn savehistory(p);
    check L14() else D3();
  D3():
    deopt 8 [r2];
  L14():
    readLines = ldf readLines;
    check L15() else D4();
  D4():
    deopt 10 [];
  L15():
    p1 = prom<V +>{
      file3 = ld file1;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r4 = dyn readLines(p1);
    check L16() else D5();
  D5():
    deopt 12 [r4];
  L16():
    st rawhist = r4;
    unlink = ldf unlink;
    check L17() else D6();
  D6():
    deopt 15 [];
  L17():
    p2 = prom<V +>{
      file5 = ld file1;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    r6 = dyn unlink(p2);
    check L18() else D7();
  D7():
    deopt 17 [r6];
  L18():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L21() else L3();
  L19():
    missing = ldf missing in base;
    r9 = dyn missing(<sym pattern>);
    goto L2(r9);
  L20():
    r7 = dyn base(<sym pattern>);
    goto L2(r7);
  L3():
    goto L4();
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L21():
    unique = ldf unique;
    check L22() else D8();
  D8():
    deopt 23 [];
  L5(r18):
    st nlines = r18;
    nlines = ld nlines;
    check L29() else D12();
  L22():
    p5 = prom<V +>{
      grep = ldf grep;
      p3 = prom<V +>{
        pattern1 = ld pattern;
        pattern2 = force? pattern1;
        checkMissing(pattern2);
        return pattern2;
      };
      p4 = prom<V +>{
        rawhist = ld rawhist;
        rawhist1 = force? rawhist;
        checkMissing(rawhist1);
        return rawhist1;
      };
      ddd1 = ld `...`;
      r13 = dyn grep[, , value, `...`](p3, p4, TRUE, ddd1);
      return r13;
    };
    r15 = dyn unique(p5);
    check L23() else D9();
  L25():
    rawhist2 = ld rawhist;
    check L27() else D10();
  L26():
    r17 = dyn base1(<sym rawhist>);
    goto L5(r17);
  D9():
    deopt 25 [r15];
  D10():
    deopt 31 [rawhist2];
  D12():
    deopt 36 [nlines];
  L23():
    st rawhist = r15;
    goto L4();
  L27():
    rawhist3 = force? rawhist2;
    checkMissing(rawhist3);
    length = ldf length in base;
    r19 = dyn length(rawhist3);
    check L28() else D11();
  L29():
    nlines1 = force? nlines;
    checkMissing(nlines1);
    c1 = `as.logical`(nlines1);
    if c1 then L30() else L6();
  D11():
    deopt 34 [r19];
  L6():
    integer = ldf integer;
    check L43() else D20();
  L10():
    tempfile1 = ldf tempfile;
    check L45() else D22();
  L28():
    goto L5(r19);
  L30():
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D20():
    deopt 60 [];
  D22():
    deopt 64 [];
  L7(r21):
    nlines4 = ld nlines;
    check L36() else D16();
  L31():
    nlines2 = ld nlines;
    check L33() else D13();
  L32():
    r20 = dyn base2(1.0, <lang `-`(nlines, max.show)>);
    goto L7(r20);
  L43():
    r29 = dyn integer();
    check L44() else D21();
  L45():
    r30 = dyn tempfile1("hist");
    check L46() else D23();
  D13():
    deopt 41 [nlines2];
  D16():
    deopt 46 [r21, nlines4];
  D21():
    deopt 61 [r29];
  D23():
    deopt 66 [r30];
  L33():
    nlines3 = force? nlines2;
    checkMissing(nlines3);
    max_show1 = ld `max.show`;
    check L34() else D14();
  L36():
    nlines5 = force? nlines4;
    checkMissing(nlines5);
    r24 = `:`(r21, nlines5);
    st inds = r24;
    reverse1 = ld reverse;
    check L37() else D17();
  L44():
    st inds = r29;
    goto L10();
  L46():
    st file2 = r30;
    writeLines = ldf writeLines;
    check L47() else D24();
  D14():
    deopt 42 [nlines3, max_show1];
  D17():
    deopt 50 [reverse1];
  D24():
    deopt 69 [];
  L34():
    max_show2 = force? max_show1;
    checkMissing(max_show2);
    r22 = `-`(nlines3, max_show2);
    max = ldf max in base;
    r23 = dyn max(1.0, r22);
    check L35() else D15();
  L37():
    reverse2 = force? reverse1;
    checkMissing(reverse2);
    c2 = `as.logical`(reverse2);
    if c2 then L38() else L8();
  L47():
    p7 = prom<V +>{
      rawhist4 = ld rawhist;
      rawhist5 = force? rawhist4;
      checkMissing(rawhist5);
      c3 = `is.object`(rawhist5);
      if c3 then L1() else L2(rawhist5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", rawhist5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(rawhist7):
      inds2 = ld inds;
      inds3 = force? inds2;
      __ = ldf `[` in base;
      r31 = dyn __(rawhist7, inds3);
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      file7 = ld file2;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r34 = dyn writeLines(p7, p8);
    check L48() else D25();
  D15():
    deopt 46 [r23];
  D25():
    deopt 72 [r34];
  L8():
    goto L9(NULL);
  L9(r27):
    goto L10();
  L35():
    goto L7(r23);
  L38():
    rev = ldf rev;
    check L39() else D18();
  L48():
    file_show = ldf `file.show`;
    check L49() else D26();
  D18():
    deopt 53 [];
  D26():
    deopt 74 [];
  L39():
    p6 = prom<V +>{
      inds = ld inds;
      inds1 = force? inds;
      checkMissing(inds1);
      return inds1;
    };
    r26 = dyn rev(p6);
    check L40() else D19();
  L49():
    p9 = prom<V +>{
      file9 = ld file2;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r36 = dyn file_show[, title, `delete.file`](p9, "R History", TRUE);
    check L50() else D27();
  D19():
    deopt 55 [r26];
  D27():
    deopt 80 [r36];
  L40():
    st inds = r26;
    goto L9(r26);
  L50():
    popenv;
    return r36;
  }
}